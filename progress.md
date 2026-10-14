Original prompt: Use REA to analyze the Alpha Centauri game shown in the screenshots, explain how it works internally, and show supporting evidence. The goal is to port the full game, mechanics, and installed assets into a personal browser game. Install and configure necessary analysis tools autonomously.

## 2026-10-14 — continuation toward the full game

- Previous work: Hopper and Ghidra installed; 64 main-session REA records plus launcher records retained. See ALPHA_CENTAURI_ANALYSIS.md and analysis/native/evidence-index.json.
- The requested scope is the full game, not a small inspired game. A JavaScript rewrite is incomplete until the original simulation, UI, AI, saves, media, and outcomes are reproduced and tested.
- Testing an original-engine WebAssembly compatibility route to preserve full rules and behavior while native reconstruction proceeds. This route is emulation, not recovered original C++ source.
- Independent work: complete local asset/rules importer; further REA map/state/turn analysis; browser runtime feasibility and setup.
- Main work: reproducible local server, browser launch/data/evidence interface, exact bounded research-eligibility translation and tests.
- Existing installation must remain unchanged. Generated assets/runtime bundles remain local and excluded from Git. Imported assets preserve source hashes and line provenance.

## Verification plan

- Validate source identities, importer counts, technology references, and converted image dimensions.
- Test research eligibility against recovered branch conditions, including disabled rows, base/expansion exclusions, both prerequisites, and repeatable final slot.
- Run the develop-web-game Playwright client and visually inspect screenshots; test launch, selection, search, data inspection, and evidence links.
- For the original engine: observe main menu, start/load a game, issue a unit order, advance a turn, save, and reload. Report each unverified step explicitly.

## Remaining scope

- The original-engine browser route has passed core acceptance: both editions start new worlds, found bases, move scouts, advance turns, and save through Ctrl+S. Alien Crossfire also resumes a game-created save after a full browser restart; see `analysis/runtime/runtime-validation.json` for exact scope and screenshots.
- A complete independent JavaScript simulation is not implemented. Further reconstruction and differential testing are required for the full world simulation, diplomacy, AI, victory, and legacy saves. The new combat and production reports recover selected concrete branches, not complete replacements.

## Implemented and verified

- Local server on 127.0.0.1:5173 (process session 34770) supports WASM MIME, browser isolation, HTTP ranges and bounded static roots.
- Browser archive UI: original artwork, both edition launch links, research laboratory, full asset search/preview, exact evidence links, responsive layout.
- Importer: 760 PNGs, 508 original WAV/MP3 files, 14 registered plus two bonus factions, both rule sets, template and scenario override. Twenty source texts and 1,268 media hashes verified; deterministic second import.
- Research module: exact bounded ownership/eligibility/depth logic; six tests. Future slot 88 is intentionally not represented by an ownership bit.
- Map reader: four version-5 maps, complete 44-byte records preserved, byte-accurate hashes and malformed-input checks. Repeatable tools/import_maps.mjs added; 17 checks pass.
- State REA pass: 21 records for current layouts and turn/base-growth order. Map pass: eight records with file wrapper/schema evidence. Reports under analysis/port.
- Browser checks: six multi-step archive/research/asset/evidence/mobile flows pass with no console errors. Skill client run on landing, research, assets, and evidence; screenshots actually inspected.
- Found and fixed imported-media URL double escaping (spaces caused 404s). Audio metadata loading and image previews now pass.
- Full game archive: 1,683 file hashes verified; only copied Alpha Centauri.Ini differs as documented; source installation unchanged.

## Original-engine runtime investigation

- Boxedwine/Wine downloaded from official upstream, pinned by artifact hashes/source commit. Generated public/runtime excluded from Git.
- Initial upstream JIT trial crashed in code invalidation. The original interpreter continued through initialization and ultimately reached native gameplay.
- Short trials initially looked like a startup stall. Wine CreateFile trace and REA show continuing palette/remap work, then CVR and rules/UI reads. Do not call this a confirmed deadlock.
- Startup REA pass is complete: 55 records. Repeated palette conversions and initialization explain continued resource activity behind the splash.
- JIT ownership diagnosis includes exact source-fragment reproductions, conservative disjoint-block guard, and a passing targeted WASM engine test. Entire upstream suite not claimed.
- Minimal backport of upstream X11 focus behavior restores demonstrated native menu navigation and text entry. Plain keys use the emulator; a separate canvas-scoped bridge forwards native Ctrl/Command shortcuts.
- `tools/build_browser_runtime.py` verifies pinned source/patch identities, installs its local SDK, builds, and stages the isolated candidate. Exercised successfully; setup script supports `--patched-runtime`.
- A newly created 288,396-byte native save survived full Chromium process restart and downloaded with matching SHA-256. The native engine restored Alpha Prime; the resumed scout moved from (45,25) to (43,25), and the year advanced to 2102.
- Base Alpha Centauri accepted keyboard navigation and base-name typing, founded browser gaia, moved its scout northeast to (73,55), reached year 2102, and saved through Ctrl+S. Clean final world screenshots were inspected for both editions.
- The default is now SingleThreadedJitFocus. Original official artifacts remain available for diagnostics; the original game installation remains unchanged.

## Further mechanics evidence

- Combat: 13 REA records. Separate strength-bounded draws, ties damaging attacker, damage-before-animation order, artillery damage caps, and exact CRT RNG arithmetic. Special branches and complete combat parity remain unproven.
- Production: seven REA records. Accumulation before completion, production before growth, computed cost deduction/conditional overflow, and queue filtering without a stock reset.
- Six exported bundles now contain 168 unique REA records. Target identities and report evidence references verified; launcher records remain separate.
- Combat/production cards added to the portal. All six browser flows passed again; exact skill client completed and its evidence-page screenshot was inspected.

## Completed core browser acceptance

- `analysis/runtime/runtime-validation.json` contains the final observed/unverified matrix, native save hashes, and 22 hashed evidence artifacts. Ctrl+S and Command+S opened native Save Game in both editions.
- The original installation is unchanged. The server remains running for the user; all owned runtime probe browsers were closed after retaining evidence.
- Remaining scope is explicit: independent engine reconstruction, complete campaigns/victories, media fidelity, multiplayer, other browsers/mobile, and a separate base-edition native reload trial. The successful native restart/load trial used Alien Crossfire.

## Loading and performance follow-up (2026-10-14)

- Completed the requested opaque loading screen and runtime performance pass. The default is now SingleThreadedJitFast; the earlier Focus runtime is retained for comparison. Reload the player after saving to use the new default.
- The supplied BO1 repository was inspected at commit 102f6992be332610aff587e681e3180b15f395bb. It declares a native Win32 C++/Direct3D9 build with render and worker threads. The comparison is architectural, not a cross-project FPS benchmark.
- CPU profiles and compiled WASM traced repeated scheduler clock reads. Adaptive checks preserve immediate yield and the nominal 1 ms turn, with a documented cooperative overshoot limit. Reusable software RGBA/ImageData eliminates steady-frame 3 MiB allocations and preserves worker transfers.
- Built and staged the four pinned patches reproducibly. Five selected actual WASM engine tests and eight source-extracted presenter equivalence tests passed. The full upstream suite is not claimed; six baseline/candidate shell mock failures are recorded.
- Local fresh-profile initial menu observations: approximately 197 seconds before, 60 seconds after. Twelve alternating native hovers: median 134.72 ms before, 50.64 ms after. CPU profiling and ordinary host activity qualify the measurements. Raw data and hashes are under analysis/performance.
- The loader recognizes native menu/HUD patterns twice, stops polling after reveal, and keeps blue/Wine/splash frames covered. Seventeen screenshot cases and real-DOM replay passed. Live optimized cover-to-menu transitions passed in both editions.
- Review and live tests found input leakage and SDL keypress cancellation of host Enter. The early gate now blocks covered/modal input, preserves host Tab/Enter/Escape and guest shortcuts, releases held keys/buttons on focus loss, and keeps rejected fullscreen requests nonfatal. Tests use extracted native listeners, including the generated SDL keypress callback; the prior Enter failure was reproduced before fixing it.
- Alien Crossfire: new swift haven world, scout (9,49) to (11,49), year 2102, native save, full Chromium restart, byte-identical export, and native world restoration passed. The resumed scout moved to (11,47), year 2103. Ctrl+S and Command+S opened native Save dialogs on the optimized runtime.
- Import's old D: destination persisted bytes but failed native loading, even after restart. Exact D: failure remains unproven. Import now writes a prefixed copy into the native saves folder; in-session imports require a page reload. Alpha Prime restored from the copied import. Nineteen additional REA records establish the native path handling and document the boundary; the earlier six bundles still contain their 168 separately verified records.
- Base Alpha Centauri: final UI imported its prior native 2102 save before Start; the native engine restored browser gaia at (73,55), then moved to (75,55), reached 2103, and created/exported a new save. This tests native import/restoration in a fresh profile, not a second restart of that new base profile.
- Final checks: source/four-patch identity, 23 project unit tests, 17 readiness cases, loading/input/fullscreen replay, real IndexedDB save round trip and invalid-header rejection, and prescribed develop-web-game client. Final screenshots inspected. All owned native test browsers are closed; the local server remains available.
- Complete report: analysis/performance/PERFORMANCE.md. Measurements: results.json. Per-edition checks and artifact hashes: validation.json. Full campaigns, every mechanic/faction, media fidelity, multiplayer and other browsers remain outside this regression scope. An independent full replacement engine remains unfinished.
