# Original-engine browser runtime

`/play.html?edition=alpha-centauri` runs the installed `terran.exe`; `edition=alien-crossfire` selects `terranx.exe`. The browser executes the original x86 code through Boxedwine WebAssembly and Wine. The local bundle contains the complete installed engine, rules, AI, UI, and assets. This is an emulation port; the simulation remains in the original executable. Unexercised systems still require compatibility testing.

Both editions reached their original menus, generated a world, founded a base, moved a scout, advanced from Mission Year 2101 to 2102, and created native saves in Chromium. Alien Crossfire also restored a game-created save after closing and restarting Chromium. [runtime-validation.json](runtime-validation.json) records each observed check, edition, engine, screenshot, and remaining limitation.

## Install and run

```sh
python3 tools/setup_browser_runtime.py --patched-runtime
npm start
```

Open `http://127.0.0.1:5173/play.html?edition=alpha-centauri`, or select Alien Crossfire from the library. Click Start. An opaque loading screen covers Wine initialization and intermediate frames until the original menu or world interface matches twice. Only then does the page say **Game ready** and enable game input. [Readiness implementation and validation](loading/LOADING_SCREEN.md).

The setup script reads the local CrossOver installation and preserves it. It downloads checksum-pinned official Boxedwine and Wine artifacts, packages all 1,683 installed files, then builds the documented emulator fixes. No game content is downloaded. The copied INI uses `DirectDraw=0`, `ds3d=0`, `eax=0`, and `DisableOpeningMovie=1`; game executable and DLL bytes remain unchanged. [game-bundle-manifest.json](game-bundle-manifest.json) records SHA-256 for every original and archive entry.

To rebuild only the patched emulator, run `python3 tools/build_browser_runtime.py`. Its recipe pins source, Emscripten SDK, and patch digests; it refuses unknown tracked source changes. See [the build recipe](jit/browser-build-recipe.json), [source provenance](jit/source-provenance.json), and [focus provenance](jit/focus-provenance.json). Generated runtime binaries and personal game bundles remain local and ignored by Git.

## Runtime and emulator fixes

The selected default is `SingleThreadedJitFast`: Boxedwine 26.1.0, source commit `65467424603484756a73308412f40b906d28b650` (official master CI build 87 baseline), with four documented local patches, Wine 11.0, and GDI rendering. The wrapper writes two renderer keys only into its browser-private Wine registry, disables optional Mono/Gecko installers, and disables networking. `SingleThreadedJitFocus` and the original official engines remain available with the `engine` query parameter for reproduction.

The official JIT failed this workload at `KMemory::commitPreparedCodeInvalidation nextOp->blockStart`, then cascaded into nested invalidation assertions and a WebAssembly memory error. The local WASM-only disjoint-block guard declines overlapping JIT compilations and retains interpreted execution for those instructions. It leaves the invalidation assertions intact. Source-derived cases and a compiled full-engine WASM test cover control/overlap cases, exact guest execution counts, and real unmap invalidation. See [the JIT diagnosis](jit/diagnosis.md) and [engine test output](jit/engine-test-output.txt).

The pinned emulator also mishandled X11 keyboard focus. A minimal backport adapts the two behaviors from upstream performance-branch commit `ef51c62642833684cacc1885bf4db1fd47b679ca`: initialize focus to PointerRoot and route keys within the focus window's subtree. The exact upstream patch depended on newer APIs, so this is a documented adaptation. Native arrow keys, Enter, base-name typing, and Ctrl+S now work in both editions. The wrapper forwards Ctrl/Command shortcuts only while a game canvas has focus; ordinary browser fields keep their host shortcuts.

The two additional patches reduce redundant scheduler clock reads and reuse the single-threaded software frame buffer with equivalent packed pixel conversion. Targeted compiled scheduler/ownership/audio tests and presenter pixel-equivalence tests pass. The scheduler remains cooperative: an already-grown batch can overrun its nominal deadline if dispatches suddenly become slow. [Implementation, measurements, tests, and limits](../performance/PERFORMANCE.md).

The selected WASM SHA-256 is `235450139721782051bdd67b8b6bc0c28115ccc391f180802a9e1b21287cc1ea`. These emulator changes are separate from the untouched game. They passed the recorded acceptance runs but are not a claim of universal emulator correctness.

Official sources: [Boxedwine](https://www.boxedwine.org/), [pinned source](https://github.com/danoon2/Boxedwine/tree/65467424603484756a73308412f40b906d28b650), [upstream keyboard fix](https://github.com/danoon2/Boxedwine/commit/ef51c62642833684cacc1885bf4db1fd47b679ca), [official CI artifact](https://boxedwine.org/builds/branches/master/builds/87/artifacts/build-87.zip), [Wine 11 filesystem](https://boxedwine.org/v2/14/TinyCore15Wine11.0-web.zip). Download/source digests and upstream licenses are retained in [runtime provenance](runtime-provenance.json) and the local runtime directory.

## Startup and controls

A traced interpreter run began at approximately 18:45:06 UTC and opened title artwork at 18:51:29; a later screenshot confirmed the menu. File accesses demonstrated continuing initialization. REA found repeated full-image palette scans and sprite extraction in this path, including roughly 58.6 million pixel inspections in one initialization function if its clips remain full-sized; see [startup findings](../port/startup-findings.md). These are one host's observations with logging and concurrent work, not a benchmark or timeout guarantee. The patched JIT still has a substantial startup delay.

Click the game canvas to focus it. The original mouse menus and keyboard commands apply. Arrow keys move a selected unit; Home/Page Up/End/Page Down cover diagonals. Ctrl+S opens the native Save dialog; Command+S was also observed in the test on macOS. Use the toolbar for fullscreen, browser save backups, or runtime logs. Escape closes native dialogs. The native tutorial may open explanatory overlays after actions.

## Save persistence and evidence

Wine writes into a browser filesystem overlay backed by IndexedDB. The installation and bundle remain unchanged. Saved games lists browser-visible `.SAV` files and downloads exact bytes. Imports now write a prefixed copy into the game's browser-private `C:\files\saves` folder, which the native Load Game list successfully enumerates. Import before Start, or save current progress and reload the page after an in-session import. The emulator caches directory entries after startup. Imports require at least 12 bytes and the exact eight-byte `TERRAN\0\x1a` signature. The native game validates the remaining schema when loading. Existing installed saves remain available in the native Load Game dialog.

The earlier D: import destination retained bytes but failed native loading, including after a restart. Its precise mapping failure is unresolved; directory caching alone did not explain it. Copying the same bytes beside native saves and reloading restored Alpha Prime successfully on the optimized runtime. Old D: imports remain listed for download and can be reimported into the corrected location. [Observed import restoration](../performance/restart/import-restored-world.png).

Persistence belongs to a browser profile and origin. `localhost:5173` and `127.0.0.1:5173` have different storage. Download backups before clearing site data or changing browser profiles.

The native round trip used Alien Crossfire: original Game > Save Game created `Aki Zeta-5 of the Consciousness, 2101.SAV` on the interpreter. Chromium was fully closed, reopened with the same profile on the repaired JIT, and the exported save retained SHA-256 `f80fefa5cf5b317716513bed7f8cea3d3fcc16bbf209352bd1675e3660a4b6b5`. Native Load Game then parsed the leader/year confirmation and restored Alpha Prime, its scout, and the saved map. The scout subsequently moved from (45,25) to (43,25), and a new 2102 save was created on the repaired JIT. This explicitly tests save compatibility across the two emulator modes.

Base Alpha Centauri was tested in a separate clean browser profile. Keyboard navigation selected Quick Start, typing named a Gaian base `browser gaia`, the scout moved northeast to (73,55), the year advanced to 2102, and Ctrl+S/Enter created `Deirdre of the Gaians, 2102.SAV`. That edition's save was exported and hashed. The subsequent optimized-runtime trial imported that exact save into a fresh Chromium profile, loaded it in the native base-game engine, restored browser gaia at (73,55) in 2102, then moved the scout to (75,55) and reached 2103. [Subsequent base acceptance](../performance/PERFORMANCE.md). A separate restart of that new base-game profile has not been tested.

[The storage UI test](storage-ui-test/validation.json) separately verifies import/download/reload byte identity and rejects truncated or incorrect signatures. It does not start the native executable and is not substituted for the native round trip above. [The web-game skill client](skill-final/state-0.json) checks the final wrapper and diagnostics before Start; persistent Playwright probes supply the native gameplay screenshots and save evidence. The client is an exact local copy of the prescribed skill script so it can resolve this project's Playwright dependency.

## Remaining compatibility limits

- No full campaign, victory, every faction/mechanic, multiplayer, or mobile/other-browser regression test was performed.
- Opening movies are disabled in the copied INI. All installed movie and audio files are included, but every codec, movie, music track, and audible output has not been verified. AudioWorklet initialization and WAV file accesses were observed in headless Chromium.
- The old official Wine 1.7.55 filesystem fails DLL initialization in the pinned emulator. `?wine=legacy` is retained only for diagnostic reproduction.
- The untouched interpreter can reach the game but retains the upstream keyboard-focus defect. Untouched JIT variants reproduced the invalidation crash; use the selected patched runtime for the tested keyboard workflow.
- `render_game_to_text()` exposes wrapper/runtime diagnostics, not decoded native game state. `advanceTime()` waits in real time; it does not deterministically advance the original simulation. Native screenshots and save bytes establish the observed behavior.

The portal's reconstructed map/data/research viewer is separate from the original-engine player.
