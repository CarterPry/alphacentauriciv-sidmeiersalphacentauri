# Clock overhead in the browser scheduler

The dominant sampled clock calls come from the emulator's inlined scheduler, where the baseline reads the host clock after every `cpu->run()` return. They are not predominantly guest clock syscalls or generated-JIT profiling calls. The bounded adaptive reduction below was compiled and tested in the combined runtime. [Subsequent browser comparison](PERFORMANCE.md) records the measured improvement and its limits; it does not isolate this patch's contribution from the presenter change.

| Saved CPU profile | Profile duration | Weighted time in dominant clock subtree | All `get_now` / `now` self samples |
| --- | ---: | ---: | ---: |
| `baseline/startup.cpuprofile` | 15.374 s | 5.817 s / 37.84% | 5.835 s / 37.95% |
| `baseline/game-startup.cpuprofile` | 22.952 s | 14.412 s / 62.80% | 14.469 s / 63.04% |

Weights are the recorded `timeDeltas`, associated with their sampled leaf nodes. The first profile contains 12,247 samples; the second contains 18,310. The dominant stack is `MainLoop_runner → runIter → callUserCallback → js-to-wasm → mainloop() → wasm-to-js → _emscripten_get_now → now`. The relevant node IDs are 30/62 and 12/24 respectively. Self time in the JS wrapper and `now` is additive here; summing wrapper-inclusive time with its child would double count. A few clock samples have incomplete root-level stacks, and the second profile includes a small `nanosleep` path and 2.5 ms of renderer `now` samples. Those do not change the dominant attribution.

The `wasm-to-js` adapters are shared with small `Date.now` paths, so their entire inclusive time must not be labeled clock-call overhead. Sampling is not a call counter or a precise measurement of one invocation. Browser profiling, timing resolution, transition attribution, inlining, and concurrent activity can affect these percentages. In the first profile, the dominant signal persists across successive roughly five-second windows rather than coming from one isolated long sample. None of these profiles proves a particular optimization speedup.

The baseline JS contains `var _emscripten_get_now=()=>performance.now()`. In the pinned Boxedwine source, `source/kernel/kscheduler.cpp:150–163` defines the monotonic scheduler clock. Before this patch, `runThreadSlice`, at lines 207–224, started a 1,000 µs turn and checked the clock immediately after each dispatch. `NormalCPU::run()` can execute an interpreter chain or multiple JIT blocks; this is a check per dispatch return, **not necessarily per guest instruction**. Relevant dispatch code is `source/emulation/cpu/normal/normalCPU.cpp:466–546` and `source/emulation/cpu/wasm/jitWasmCodeGen.cpp:4157–4215`.

The baseline WASM independently supports this attribution. `llvm-objdump --demangle --disassemble-symbols='mainloop()'` finds `mainloop` at code offset `0x18805`, matching the sampled function. `wasm-dis` shows the scheduler inlined into that function: a direct `emscripten_get_now` import call establishes the slice deadline, followed by a loop containing another direct clock call and the unsigned deadline comparison around the CPU virtual dispatch. Thus the absent `runThreadSlice` stack frame is consistent with compiled inlining. JIT timing instrumentation exists behind `BOXEDWINE_WASM_JIT_PROFILE`; the recorded build script enables the separate `WASM_PROFILING=1` name/profiling setting and does not define that instrumentation macro.

The applied [scheduler patch](scheduler-clock.patch) changes only single-threaded Emscripten scheduling and its deterministic test. Each turn starts with a one-dispatch clock budget. After a fresh clock read, a batch lasting less than 32 µs doubles the budget, capped at 32 dispatches; a batch exceeding 125 µs resets it to one. Reaching 256 counted guest instructions also forces a clock read. The same timestamp checks the unchanged 1,000 µs deadline and measures batch duration. Yield is checked after every dispatch, and instruction accounting, context-budget updates, native scheduling, and the timer loop retain their existing paths.

This preserves the original test's four 250 µs dispatches per 1 ms turn because that workload never grows the budget. It does **not** provide hard wall-clock preemption: a newly slow dispatch or batch can cross the deadline before its next clock check. A batch has at most 32 dispatch returns, and the instruction threshold is checked after a dispatch, so an individual long JIT call can exceed that threshold. The budget resets every turn and contracts after a slow batch; neither instruction counts nor elapsed-time observations guarantee a bound on future dispatch cost.

The existing registered `testSingleThreadSchedulerTimeSlice` retains all original precision, accounting, yield, sentinel, and native-fault assertions. Added fake-clock cases exercise the actual scheduler:

- Zero-instruction, 1 µs dispatches grow to the 32-call cap and stop at 1,023 µs, with 37 total clock reads including turn start.
- A 256-instruction, 10 µs dispatch forces a clock read every call and stops exactly at 1,000 µs.
- Two 128-instruction calls cumulatively reach the instruction threshold; the recorded deadline is 1,010 µs.
- A transition from 1 µs to 40 µs dispatches creates one 320 µs batch, then restores single-dispatch checks and stops at 1,007 µs.
- Yield during a growing batch exits immediately without an additional clock read; the following turn restarts with a one-dispatch budget.

`git diff --check` and reverse patch application checks pass. An independent arithmetic simulation agrees with the deterministic expected values. The subsequent combined build compiled and ran the actual WASM scheduler, timer, ownership, audio and helper tests: all five selected test entries passed. See [engine-tests.json](engine-tests.json) and [the captured output](engine-tests.log). This is targeted coverage, not the complete upstream suite. Gameplay and comparative browser observations are recorded separately. The patch intentionally excludes earlier independent edits already present in `testCPU.cpp`.

Source revision is `65467424603484756a73308412f40b906d28b650`. SHA-256 bindings at inspection:

| Artifact | SHA-256 |
| --- | --- |
| `baseline/startup.cpuprofile` | `c8c8b00c3c793fb0c2cd475bdef39980022eba81468013f50002e8499529e274` |
| `baseline/game-startup.cpuprofile` | `b0622c464c5cd2ede63925f8c4ce4ac595e768a22daff4a2979cc60bc833c3ec` |
| Baseline `SingleThreadedJitFocus/boxedwine.wasm` | `db4d1d8e601bb03cd4674eda0d05df621039a8e1d5e706b0fedcc886fc7de5a8` |
| Baseline `SingleThreadedJitFocus/boxedwine.js` | `4dcfb875f5c84ae95f0b00a7314caee73df0b878b6f94d688f2dc73e74917a24` |
| `scheduler-clock.patch` | `8ad7353acbf55e63e3ef76e50f9de89696c5dc0803ab663bbbd4995cd5bfc0fe` |
| Patched `source/kernel/kscheduler.cpp` | `0c9629cfce16c5ca7c01fa5973a822a06ca43c3eaf774ea327ad1e8623c8ad24` |
| Patched `source/test/cpu/testCPU.cpp` including earlier independent edits | `b65ccac7f2557901ec5564c6bc819b31802549fa05514eb82fe351b3896abb4c` |

Review boundary: if a turn grows to the 32-dispatch limit and each subsequent low-instruction dispatch suddenly costs 1,000 µs, the next clock check can follow 32 such calls. A policy arithmetic example with 63 initial 1 µs calls exits at 32,063 µs, versus 1,063 µs for the baseline. This is a modeled cooperative-scheduling limit, not an observed game delay; both an individual dispatch and an already-grown batch can overrun the nominal deadline.
