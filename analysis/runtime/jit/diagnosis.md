# Boxedwine browser JIT invalidation diagnosis

The earliest recorded failure is **`KMemory::commitPreparedCodeInvalidation nextOp->blockStart`**, followed by the nested-preparation message and WebAssembly bounds exception. A small reproduction using the exact upstream ownership and invalidation code demonstrates that partially overlapping WASM blocks can violate this assertion. The opt-in build declines overlapping compilations and leaves those instructions to normal interpretation. It was subsequently combined with the [keyboard focus backport](focus-backport.md), passed [core browser acceptance](../runtime-validation.json), and selected as the local player default. The source investigation below retains its narrower causal and test limits.

This work inspects official C++ source and saved browser logs. It is separate from the REA evidence ledger for the original game. No original game executable, DLL, or asset was changed.

## Recorded failures

[failure-sequence.json](failure-sequence.json) contains hashes and selected records from both logs:

| Run | First ownership assertion | Following nested assertions | Final bounds error |
| --- | --- | ---: | --- |
| `browser-probe/console.ndjson` | line 98, 2026-10-14 18:36:00.456 UTC | 21,879 | line 21,978, 18:36:01.565 UTC |
| `browser-jit-default/console.ndjson` | line 86, 2026-10-14 18:48:11.892 UTC | 21,881 | line 21,968, 18:48:13.170 UTC |

The browser runtime investigator identified the first trial as using `-disableWasmJitForWrittenCode` and the second as omitting it. Both reach the same first assertion. The saved logs establish the sequence, but do not contain the offending guest addresses or block ownership graph.

## Source and causal hypothesis

The source is official Boxedwine commit `65467424603484756a73308412f40b906d28b650`, matching the installed upstream browser artifact's declared source. [source-provenance.json](source-provenance.json) records the remote, source hashes, current branch heads, SDK identity, patch digest, and generated artifact digests. The pristine checkout is retained locally at `Boxedwine/`; the experimental worktree is `Boxedwine-disjoint/`.

1. [`markPendingBlock`, lines 4741–4762, and `publishWasmJitBlock`, lines 4769–4809](https://github.com/danoon2/Boxedwine/blob/65467424603484756a73308412f40b906d28b650/source/emulation/cpu/wasm/jitWasmCodeGen.cpp#L4741) assign each decoded operation to its existing owner when that owner's length is at least as large as the new block. Otherwise the new block becomes its owner. This supports nested/overlapping entries. Exact numbered excerpts: [source-wasmOwner.txt](source-wasmOwner.txt).
2. [`prepareCodeInvalidation`, lines 1415–1516](https://github.com/danoon2/Boxedwine/blob/65467424603484756a73308412f40b906d28b650/source/kernel/kmemory.cpp#L1415) collects distinct owner pointers from the affected address range and records their spans. At its end it sets `codeInvalidationPrepared = true`.
3. [`commitPreparedCodeInvalidation`, lines 1518–1584](https://github.com/danoon2/Boxedwine/blob/65467424603484756a73308412f40b906d28b650/source/kernel/kmemory.cpp#L1518) walks each owner's `blockOpCount` operations. Every operation must point back to that same owner, apart from `Done` sentinels. It clears each operation's ownership/count as it proceeds. Exact excerpt: [source-invalidation.txt](source-invalidation.txt).

For a crossing pair A covering operations 0–2 and a longer B covering 2–5, B takes ownership of operation 2. Invalidating A then encounters B's owner pointer and produces the recorded assertion. This is a demonstrated source-fragment failure. **It is still a hypothesis for the exact browser failure**, because that run did not capture the two live blocks.

Equal-length crossing blocks have another result: A retains ownership at B's first operation. Clearing A zeroes B's `blockOpCount`, so the subsequent B loop runs zero times and leaves the tail's ownership uncleared. The reproduction detects this too. Fully contained blocks and disjoint blocks are controls and invalidate successfully.

The nested-preparation cascade is consistent with panic/exit cleanup attempting more invalidation while the first commit still has its prepared flag set. The first assertion occurs before the flag is reset. [panic](source-panic.txt) and [native exit](source-nativeExit.txt) call the error dialog and termination path. We have not symbolized the final bounds exception, so it is not independently attributed to one memory access.

## Configuration and upstream comparison

- **`-disableLinearMemory` does not help this WASM build.** [The implementation, lines 360–401](https://github.com/danoon2/Boxedwine/blob/65467424603484756a73308412f40b906d28b650/source/emulation/softmmu/soft_ram.cpp#L360), starts disabled and enables the feature only for native x64/ARM64 or Windows linear-memory builds. WASM reaches `(void)disabled`. [Exact excerpt](source-linearMemory.txt).
- `-disableWasmJitForWrittenCode` changes write-count tracking, suppressing future JIT compilation for written bytes. [Exact excerpt](source-writtenCodeFlag.txt). It does not change owner assignment or prepared invalidation, and both tested flag settings failed.
- Official master observed at `592ef90b532c24862690276421870864c7d2d1b1` retains the relevant ownership/invalidation logic. The newer WASM edits concern multithreaded call-handler compatibility.
- Official performance branch observed at `ef51c62642833684cacc1885bf4db1fd47b679ca` also retains this logic. Its [decoded-chain boundary change `b6b30e97`](https://github.com/danoon2/Boxedwine/commit/b6b30e97efbb1db95d9bee496b9521d23ba927a7) fixes `Done` sentinel classification and is not a demonstrated remedy for this assertion.
- A bounded GitHub issue search found no `blockStart` report and two broad invalidation matches; the subsequent Alpha Centauri query hit the API rate limit. The retained `issues-*.json` files document that limited search. No claim of an exhaustive issue search is made.

## Conservative experimental policy

[disjoint-blocks.patch](disjoint-blocks.patch) adds an opt-in `BOXEDWINE_WASM_JIT_DISJOINT` policy to the WASM JIT. The production behavior change is confined to `jitCodeGen.cpp`:

- Reject a new compilation request when its first decoded operation already has an owner. Existing callable JIT entries remain callable.
- After code generation, before `onBlockPreCommit` or `commitJIT`, scan exactly the emitted `blockOpCount`, including fused instructions. Reject if an operation is missing or already owned.
- Declining compilation publishes no pending/compiled block; existing normal dispatch remains available. Pending blocks immediately mark their operations as owned, so the guard also prevents overlap with queued work.

The second check covers a candidate that begins outside an existing block but extends into it. The check occurs under the existing memory mutex. It preserves all invalidation assertions. This is deliberately conservative: it also declines safe contained subblocks, so it may give up acceleration on frequently entered interiors. The invariant applies to this build's normal compilation path; preexisting offline imported JIT caches were not tested and should not be supplied for the experiment.

## Reproduction, build, and validation boundary

Run the small source-fragment regression with:

```sh
python3 analysis/runtime/jit/reproduce-ownership.py
```

[fragment-provenance.json](fragment-provenance.json) names the exact copied code and test stubs. [ownership-baseline-output.txt](ownership-baseline-output.txt) records the initial reproduction; [ownership-repro-output.txt](ownership-repro-output.txt) records five baseline scenarios, five guarded scenarios, and a truncated-chain rejection. All eleven expected outcomes pass. These checks test ownership, not complete x86/WASM execution.

The patch also adds a targeted full-engine test that compiles an unowned block, declines both forms of overlap, checks the existing entry survives, executes guest arithmetic through JIT/interpreter dispatch, and invalidates through real `unmap`. **This test passed** in the built WASM engine using SDK Node 24.19.0; [engine-test-output.txt](engine-test-output.txt) records actual JIT execution and zero failures, and [engine-test-result.json](engine-test-result.json) records artifact hashes. The test is first in the test list only when the experimental macro is enabled. Existing upstream tests that specifically require nested JIT entries retain their original expectations; this experimental policy intentionally changes that behavior. The entire upstream suite was not run or claimed to pass.

Local SDK setup used official `emscripten-core/emsdk`, version **6.0.12**, activated only for the build shell. The install resides in `analysis/runtime/jit/emsdk`; no shell profile or system default was changed. Repeatable build commands:

On a fresh checkout, first recreate the local source and SDK directories:

```sh
git clone --filter=blob:none https://github.com/danoon2/Boxedwine.git analysis/runtime/jit/Boxedwine
git -C analysis/runtime/jit/Boxedwine checkout --detach 65467424603484756a73308412f40b906d28b650
git -C analysis/runtime/jit/Boxedwine worktree add --detach ../Boxedwine-disjoint 65467424603484756a73308412f40b906d28b650
git -C analysis/runtime/jit/Boxedwine-disjoint apply ../disjoint-blocks.patch
git clone https://github.com/emscripten-core/emsdk.git analysis/runtime/jit/emsdk
git -C analysis/runtime/jit/emsdk checkout --detach 8f685c26ee9f672081e61e22c6aa60fa972d00a9
analysis/runtime/jit/emsdk/emsdk install 6.0.12
analysis/runtime/jit/emsdk/emsdk activate 6.0.12
```

Then build and run the targeted test:

```sh
sh analysis/runtime/jit/build-experimental.sh
sh analysis/runtime/jit/build-experimental.sh testJit
sh analysis/runtime/jit/run-engine-test.sh
```

The build uses the pinned source, the recorded patch, six workers, fixed `SOURCE_DATE_EPOCH`, `-O2`, and function-name profiling for diagnosis. Emscripten 6 requires explicit `-sDEFAULT_TO_CXX` when this upstream makefile links C++ objects through `emcc`; that link-only option is recorded in the script. The first linker failure and successful build logs are retained. The runtime artifact is staged separately at `experimental/`; the original default runtime was not overwritten.

Successful ownership checks and a successful build alone do not establish a working game. Subsequent tests in separate profiles demonstrated original gameplay actions and native persistence on the combined JIT/focus build. The [runtime report](../BROWSER_RUNTIME.md) records those observations separately from the ownership tests.

The browser runtime investigator's first experimental trial passed the earlier crash point and reached the full Firaxis splash on a clean Wine 11/GDI profile at approximately 130 seconds, with no invalidation errors reported at that checkpoint. The artifact was copied to the separate `public/runtime/SingleThreadedJitDisjoint` directory and its hashes checked. This is an interim runtime observation relayed by that investigator; completed game-action/persistence validation belongs in the runtime report.
