# Runtime performance: source findings and bounded candidates

This is a read-only examination of the current `SingleThreadedJitFocus` configuration, pinned Boxedwine commit `65467424603484756a73308412f40b906d28b650`, disjoint JIT patch, and focus backport. No browser, benchmark, build, or runtime mutation was performed. [Snapshot and hashes](runtime-source-snapshot.json) identify the reviewed source/config and public artifact. The public shell matched the source shell exactly at capture.

The most concrete avoidable work is full-frame allocation/conversion in the browser GDI presenter. A separate potentially larger constraint is interpreter fallback imposed by our conservative JIT configuration and disjoint-block policy. Neither is yet proven to account for the user's observed hover delay; baseline CPU and input-to-frame traces must distinguish them.

## Candidate order

| Priority | Minimal candidate | Why grounded in source | Risk and acceptance measure |
|---|---|---|---|
| 1 | Reuse RGBA buffer and `ImageData` for the single-thread software presenter; replace four byte stores with one packed 32-bit swizzle; update canvas CSS dimensions only when dimensions change. | The current presenter allocates a fresh full-frame buffer and converts every pixel, even when compositing unchanged windows. | Keep worker-transfer path intact; recreate caches on size/buffer change; preserve opaque alpha. Compare exact pixels for representative palettes, resolutions, menus and dialogs. Measure conversion/presentation duration, allocation rate, GC pauses and hover-to-frame p50/p95. |
| 2, no build | A/B the existing `?jitWritten=allow` option on the patched-focus engine in an isolated run. | Current loader enables first-write JIT exclusion. The normal policy permits recompilation until a byte reaches 255 invalidating writes. | Greater exposure to self-modifying-code invalidation paths; keep the disjoint ownership checks. Require startup, repeated UI actions, unit movement, turn processing, save/reload and error-free traces. Compare warm UI latency and guest throughput, not only boot time. |
| 3 | Diagnostic counters for disjoint rejections and normal-dispatch hot PCs; if dominant, compile only an unowned prefix with an explicit exit before an owned range. | Current policy can discard emitted code for an otherwise useful prefix, and the normal warm-up path stops retrying once its count exceeds the threshold. | Correct prefix termination, fused operations, flags/FPU state and branch exits require CPU regression tests. Keep the existing final ownership check as a backstop. Do not re-enable overlapping ownership. Measure rejected PCs and interpreter share before implementing. |
| 4, latency only | Return to the browser after one scheduler slice, or coordinate smaller outer/inner slice budgets. | The outer loop can execute two approximately 9 ms slices before exceeding its 10 ms target. Neither budget preempts a long CPU/JIT/host call. | More scheduling overhead can lower guest throughput. Compare long-task and event-dispatch distributions; retain only if responsiveness improves without materially slower turn processing. Changing only the outer 10 ms constant cannot shorten a single 9 ms inner slice. |
| 5 | Separate release-style `-O3` trial, retaining SIMD/tail calls and current correctness patches. | Current artifact is `-O2`; host interpreter, code generator and pixel operations may benefit from further optimization. | Benefit is unknown; larger code and compilation costs may offset it. Never add fast-math or remove semantic checks. Run the existing engine regression plus real gameplay/save acceptance. |

## Presentation and palette path

The current browser build defines `BOXEDWINE_OPENGL_SDL`, but GDI presentation deliberately uses an independent software canvas: [`ensureRenderer`, lines 966–970](../runtime/jit/Boxedwine-disjoint/platform/sdl/knativescreenSDL.cpp#L966) returns false to avoid sharing the guest WebGL state. Setting browser GPU flags or SDL vsync alone will not change that path. Restoring the SDL renderer would undo an explicit compatibility choice and is not the first experiment.

The actual frame path is:

1. [`runSlice`, lines 258–261](../runtime/jit/Boxedwine-disjoint/source/kernel/kscheduler.cpp#L258) forcibly sets `XServer::isDisplayDirty` on every runnable slice. Its comment identifies this as a workaround for missed popup redraws.
2. [`XServer::draw`, lines 371–425](../runtime/jit/Boxedwine-disjoint/source/x11/xserver.cpp#L371) normally limits rendering to one draw per 16 ms, clears the composite, draws mapped windows and presents. Explicit `drawNow` calls bypass this limit.
3. [`XWindow::draw`, lines 911–932](../runtime/jit/Boxedwine-disjoint/source/x11/xwindow.cpp#L911) passes each window's actual dirty flag. The 8/16-bit conversion in [`putBitsOnWnd`, lines 399–429](../runtime/jit/Boxedwine-disjoint/platform/sdl/knativescreenSDL.cpp#L399) already caches converted pixels when a window is unchanged. However, the software composite still copies the window rows at lines 494–535. `clear()` also fills the full background and marks the software buffer dirty (lines 329–341).
4. [`boxedwinePresentSoftwareFrame`, lines 48–80](../runtime/jit/Boxedwine-disjoint/platform/sdl/knativescreenSDL.cpp#L48) allocates `new Uint8ClampedArray(width * height * 4)`, reads every ARGB pixel from WASM memory and writes four RGBA bytes. At 1024×768 that is **3 MiB of new pixel storage per presentation**—180 MiB/s if 60 frames/s actually occur, a conditional calculation rather than a measured frame rate.
5. [Shell presenter, lines 1245–1278](../runtime/jit/Boxedwine-disjoint/project/emscripten/boxedwine-shell.js#L1245) creates a new view and `ImageData`, calls `putImageData`, and sets two CSS properties every frame. The new view over `buffer` is not itself another full pixel-buffer copy.

For a single-thread buffer that is synchronously consumed, a reusable `Uint8ClampedArray`, matching `Uint32Array` view and cached `ImageData` can eliminate frame-sized allocation churn. On little-endian WASM/browser targets, the current conversion is equivalent to:

```js
rgba32[i] = 0xff000000 | (pixel & 0x0000ff00)
  | ((pixel & 0x00ff0000) >>> 16) | ((pixel & 0x000000ff) << 16);
```

This is a candidate expression, not a tested patch. The worker path transfers the buffer and therefore detaches it; applying single-buffer reuse to that path would be incorrect. Memory-growth handling must continue to refresh the `HEAPU32` source view once per frame. Preserve alpha `0xff`, the current present-state unlock, clipping, palette changes and canvas resizing.

Removing the forced dirty assignment could save more idle work, but the source explicitly records a popup correctness dependency. First measure idle presentation rate and dirty-window rate. A lower-frequency fallback repaint, combined with real dirty updates, is a possible later experiment; deleting the workaround without popup/modal/palette validation is premature.

## JIT execution and fallback

The browser warm-up threshold is [`JIT_RUN_COUNT = 200`, cpu.h:188–197](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/common/cpu.h#L188). The disjoint patch rejects an entry with an existing owner at [`jitCodeGen.cpp:874–879`](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/jit/jitCodeGen.cpp#L874), then rejects any remaining overlap after code generation at lines 964–969. This fixed the observed ownership failure while retaining the interpreter for rejected ranges.

The ordinary compilation trigger tests **equality** with 200, then increments the count ([lines 1000–1018](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/jit/jitCodeGen.cpp#L1000)). [`NormalCPU::run`, lines 535–541](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/normal/normalCPU.cpp#L535) dispatches directly after that threshold. Consequently, a rejected candidate can remain interpreted for that decoded-op lifetime; this is not evidence of repeated compilation of that same entry on every execution. Other compilation requests or cache invalidation can alter the situation.

Lowering the threshold alone is not the obvious remedy: it can change which broad block becomes an owner first and increase synchronous compile work. A measured prefix-clipping improvement is more targeted, but it is not just a one-line change to `lastOpEip`: `compileOps` emits an instruction before its endpoint check, and instruction fusion can consume additional operations. The existing profile-split hook is a useful reference, not proof that adding an owner check there is correct. Keep ownership regression cases for unowned code, interior entries, a prefix crossing an existing block, exact-once guest effects, and invalidation/unmap.

The current loader sets `disableWasmJitForWrittenCode` unless `jitWritten=allow` is present ([play.js:75](../../public/play.js#L75)). [`codePageData.cpp:130–162`](../runtime/jit/Boxedwine-disjoint/source/emulation/softmmu/codePageData.cpp#L130) sets written-byte counters immediately to `0xff` under that option; normal behavior increments toward `0xff`. `isAddressDynamic` and [`NormalCPU::getOp`:441–444](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/normal/normalCPU.cpp#L441) then mark those instructions `OP_FLAG_NO_JIT`. This is a plausible broad speed constraint in relocated/generated/modified code, but the affected hot PCs have not been measured. The earlier two upstream JIT crashes, with and without the option, do not establish behavior on the patched engine.

## Scheduling and input

[`mainloop.cpp:97–109`](../runtime/jit/Boxedwine-disjoint/source/sdl/emscripten/mainloop.cpp#L97) already uses `EM_TIMING_SETIMMEDIATE` while the JIT guest is runnable and a 1 ms timeout when idle. The main loop checks elapsed time after `runSlice`, host tick and SDL events, then yields after about 10 ms or a presentation (lines 145–209). [`kscheduler.cpp:193–225`](../runtime/jit/Boxedwine-disjoint/source/kernel/kscheduler.cpp#L193) gives a guest thread approximately 1 ms, checking the deadline after `cpu->run`; `runSlice` is approximately 9 ms. JIT chaining also observes an instruction budget ([wasm backend:4206–4214](../runtime/jit/Boxedwine-disjoint/source/emulation/cpu/wasm/jitWasmCodeGen.cpp#L4206)). None of these can preempt an individual expensive synchronous compilation, native call or presentation conversion. The budgets alone do not establish a cause for multi-second delays.

For absolute mouse input, the browser listener directly calls `_boxedwineEmscriptenMouseMove` ([input:230–239](../runtime/jit/Boxedwine-disjoint/platform/sdl/knativeinputSDL.cpp#L230)); the exported bridge immediately routes into native input (lines 44–50). X11 hit testing then enqueues a motion event. [`DisplayData::putEvent`, lines 31–50](../runtime/jit/Boxedwine-disjoint/source/x11/displayData.cpp#L31) appends it and wakes the emulated socket. Thus there are distinct delays to measure: browser event dispatch, guest consumption of the X event, guest UI computation, and frame presentation. Calling SDL polling more often does not let a blocked JS main thread receive DOM events earlier. Dropping/coalescing clicks, keys or motion events is not proposed because it changes input behavior.

## Settings that do not provide an immediate fix

- `skipFrameFPS` defaults to `"0"` in the shell. It is parsed and stored in `KSystem`, but a complete search of current `source/`, `platform/` and `include/` found no rendering consumer. Passing a different value will not tune this GDI draw cadence.
- `WASM_PROFILING=1` adds `--profiling-funcs` and a name-related macro in the makefile. The actual compile config has **no `BOXEDWINE_WASM_JIT_PROFILE`**, `_DEBUG`, `__TEST`, sanitizer, or recorder instrumentation. Turning off function-name metadata is not a supported explanation for a large execution-speed improvement. Keep useful names during the baseline profile.
- The current artifact already uses `-O2`, `-msimd128` and `-mtail-call`. JIT record/replay activation is separate from function-name profiling; avoid turning on recording just to measure user latency, because it enables relocatable code and transition counters.
- Changing sound or resolution may be useful isolation experiments, but disabling a feature or reducing native display content is not equivalent to optimizing the unchanged game.

## Measurements before adoption

Use one foreground runtime and one repeatable native save/menu state. Record raw browser event timestamps, dispatch delay, actual changed-frame timing, long tasks, CPU call stacks, presentation frequency/duration, and GC/allocation activity. Compare fresh and warmed repeats: cold compilation and sustained interpreter fallback are different costs. Browser screenshots or frame hashes should detect actual hover/selection changes; a loader status message is not an acknowledgement from the game.

For each candidate, preserve the same EXE/assets, Wine/GDI settings and save state; change one variable. Keep exact artifact hashes. Require unchanged menu/modal visuals, correct mouse/keyboard handling, unit actions, turn advancement, and a native save/reload round trip. Report median and tail input-to-visible-change latency alongside boot/turn times; increased throughput that worsens interaction latency is not an unqualified improvement.
