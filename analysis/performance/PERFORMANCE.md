# Browser loading and performance improvements

The player now hides Wine setup, the blue desktop and the game splash behind an opaque loading screen until the original menu or gameplay HUD has drawn. The default `SingleThreadedJitFast` runtime also reduces redundant clock checks and reuses software frame buffers. The original game executables, rules and assets are unchanged. Gameplay still executes entirely inside the browser through Boxedwine WebAssembly and Wine.

## Measured result

Sequential trials on this Apple M4 Max used Playwright Chromium, the same game archive, Wine 11, GDI, 1024×768 guest resolution, and 22,050 Hz audio. One emulator ran at a time. Both hover sequences had CPU profiling enabled.

| Observation | Previous runtime | Optimized runtime |
| --- | ---: | ---: |
| Initial native-menu readiness | About 197 s | About 60 s |
| Median event-to-changed-menu presentation, 12 hovers | 134.72 ms | 50.64 ms |
| Maximum of those 12 hovers | 145.92 ms | 52.39 ms |
| Median browser event dispatch delay | 19.13 ms | 18.34 ms |
| Median handler-to-changed-native presentation | 115.76 ms | 32.94 ms |

[Raw results and SHA-256 bindings](results.json), [baseline measurements](baseline/menu-baseline.json), and [optimized hover samples](optimized/hover.json) retain the observations. `tools/performance_probe.mjs` and opt-in `public/runtime-measure.js` implement the test. Each pointer move alternated between two native menu buttons, with 500 ms between moves; changed button-text pixels identified the corresponding native frame.

These timings end at the synchronous canvas presentation handoff, before physical display scanout. They are menu measurements, not a full-campaign FPS benchmark. Ordinary host activity was not isolated, CPU profiling can perturb timings, and twelve observations are a small sample. Initial startup was observed once per fresh browser profile: the baseline clock starts at page navigation, while the new loader clock starts at auto-Start about 0.8 s later. The rounded startup comparison is appropriate; an exact startup speed ratio is not. A subsequent restart with existing browser storage reached the menu in 42.91 s and is reported separately.

## Why it improved

The baseline profile spent about 63% of sampled game-initialization self time in the scheduler's clock path. Source and compiled WASM show a host-clock read after every `cpu->run()` return, including very small dispatches. The new single-threaded scheduler checks less often only after observing cheap batches, capped at 32 dispatches, and also checks after 256 counted instructions. It preserves the nominal 1 ms deadline and immediate guest yield. [Source, disassembly attribution, deterministic tests, and scheduling limits](clock-overhead-findings.md).

The software presenter previously allocated a 3 MiB pixel buffer and a new `ImageData` on every 1024×768 frame. It now reuses them and performs an equivalent packed pixel conversion. Worker transfers retain their original ownership behavior. Eight tests execute the extracted source to verify colors, opacity, random pixels, resizing, heap replacement, locking and transfer/detachment. [Presenter implementation and equivalence evidence](renderer-optimization.md). The combined browser comparison does not isolate each patch's share of the improvement.

The scheduler remains cooperative. A dispatch that suddenly becomes expensive can exceed its deadline; a previously enlarged batch can also overshoot before the next clock check. A modeled extreme is documented in the scheduler report. The patch does not impose hard wall-clock preemption, and no such extreme was observed in these native tests.

## Loading screen and controls

The loader compares ten small native display regions once per second, requires two consecutive matching menu/HUD samples, and stops sampling after reveal. Runtime initialization or elapsed time alone cannot reveal the canvas. Input is blocked while covered or while a browser dialog is open. Held guest inputs are released on focus loss; a rejected fullscreen request leaves the game running. [Loading implementation and validation](../runtime/loading/LOADING_SCREEN.md).

The runtime keeps the earlier JIT ownership guard and keyboard focus backport. [Pinned build recipe](../runtime/jit/browser-build-recipe.json) binds all four patches and modified sources; [build result](../runtime/jit/browser-build-result.json) binds the staged artifacts. The selected WASM SHA-256 is `235450139721782051bdd67b8b6bc0c28115ccc391f180802a9e1b21287cc1ea`. The previous `SingleThreadedJitFocus` artifacts remain available for diagnosis.

## Native acceptance and regression evidence

[The final validation matrix](validation.json) records both editions, save hashes, wrapper regressions, test counts and SHA-256 bindings for the evidence artifacts.

On the optimized runtime, Alien Crossfire generated a new world and founded **swift haven**. The scout moved from (9,49) to (11,49), the year advanced to 2102, and the native engine created a 288,140-byte save. After closing Chromium completely and reopening the same profile, that save exported with identical SHA-256 `a911afdcacb26199d25fccd08a150bbef7fa41b4cbac161cdc3b1756d6415cdc`. Native Load Game restored swift haven, the scout at (11,49), year 2102 and energy 14. Ctrl+S again opened the native Save dialog. [Before-restart save evidence](optimized/save-after-move.png), [restored world](restart/world-game-menu.png), [native Save after reload](restart/restart-native-shortcut.png).

The resumed scout then moved north to (11,47), reaching year 2103 and energy 16. [Resumed movement](restart/resumed-command-save-later.png). A subsequent page reload verified the final SDL keypress gate: Enter closed the host Saved games dialog while the native game was active. An imported older save restored Alpha Prime through the native loader, and Command+S opened its Save dialog. [Imported world](restart/import-restored-world.png), [Command+S](restart/final-native-command-save.png). Import now targets the proven browser-private saves folder; in-session imports require a page reload. This corrects the former D: instructions, whose native loading failed despite persisted bytes.

Base Alpha Centauri reached its native menu after 54.128 seconds from Start on a fresh profile. The updated host import control accepted the earlier base-edition native save before Start. Native Load Game restored **browser gaia**, the scout at (73,55), year 2102 and energy 12. ArrowRight moved the scout to (75,55), advanced to year 2103 and energy 13, and Ctrl+S opened the native Save dialog. [Imported native list](base/native-import-list.png), [restored base world](base/base-restored-world.png), [movement and native Save](base/base-native-save.png). The game created and exported a new 286,732-byte native 2103 save, SHA-256 `08cdc56ae2dc2d094d48616551aceb133be3391323aa5ba3d65b94f36612a837`.

Five selected compiled WASM engine tests passed, covering ownership, audio arithmetic, helper behavior, scheduler turns and timer deadlines. [Engine output](engine-tests.json). This is targeted coverage, not the full upstream suite. The upstream shell suite's six existing DOM-mock failures occur on both pristine baseline and candidate; [comparison](renderer-upstream-shell-result.json) records that limitation rather than treating them as a pass.

Campaigns, victory conditions, every faction/mechanic, media fidelity, multiplayer and other browsers still need broader compatibility testing. The earlier per-edition core acceptance remains recorded in [runtime-validation.json](../runtime/runtime-validation.json); it is historical evidence for those exact builds.

## What the BO1 repository shows

The supplied BO1 repository declares a native Windows C++ engine, built as a 32-bit executable, with Direct3D 9 hardware rendering and render/worker threads. Its launch script starts `BO1Zombies.exe`. [Pinned build target](https://github.com/MisaDev4/bo1-zombies-decompiled/blob/102f6992be332610aff587e681e3180b15f395bb/CMakeLists.txt#L61), [launcher](https://github.com/MisaDev4/bo1-zombies-decompiled/blob/102f6992be332610aff587e681e3180b15f395bb/Play.bat#L4), [hardware device setup](https://github.com/MisaDev4/bo1-zombies-decompiled/blob/102f6992be332610aff587e681e3180b15f395bb/src/gfx_d3d/r_init.cpp#L329).

That architecture supports the inference that a more complex native 3D game can run smoothly while this simpler game pays substantial guest-translation costs. It does not establish that BO1 has more overhead in a comparable browser environment. No BO1 build or FPS comparison was run. [Full source comparison and file provenance](reference-comparison.md).

A direct WebAssembly implementation of verified Alpha Centauri engine routines could remove Wine and guest CPU translation. That remains a larger reconstruction project: the current independent browser code covers selected data, research and map routines, rather than the full simulation. These changes improve the working original-engine route without substituting incomplete mechanics.
