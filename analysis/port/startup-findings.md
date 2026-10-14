# Startup investigation: Firaxis splash under BoxedWine

The splash is a still image drawn early in startup. The two functions that load `logo.pcx` draw it and return; neither contains a click wait, timed splash loop, or movie decoder. The interpreter runtime's file trace subsequently progressed through interface atlases, CVR models, ALPHAX rules, menu definitions, and unit art while the splash remained visible. That captured run was advancing through initialization, rather than remaining blocked at the initial logo. The trace has not yet established a usable title menu or full gameplay.

This investigation used a separate REA/Ghidra session against the unchanged installed `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. The complete REA results are under `analysis/native/startup-*.json`; extracted pseudocode and selected instruction listings sit alongside them. `startup-evidence-index.json` binds evidence IDs, source digest, exact config strings and pointer bytes, and the selected installed INI settings. Generated function names/types are Ghidra observations, not original source symbols.

## Confirmed startup sequence

| Stage | Address and concrete observation | Evidence |
| --- | --- | --- |
| Application startup | `0x45f950` reads `Video Mode` and `DirectDraw`, calls window init, voxel init, audio init, font load, then the main startup routine. | `startup-code-entry.json`, `startup-instructions-entry.json` |
| Initial window and splash | `0x62d3a0` calls `0x5f01f0`. That function registers `JackalClass`, creates the window, loads `logo.pcx`, centers/blits it, calls `ShowWindow`/`0x5efd20`, then returns. | `startup-code-window-init-caller.json`, `startup-code-logo-a.json` |
| Optional display mode change | If the DirectDraw flag is set, `0x62d3a0` calls `0x5f2c40` → `0x635510`. This uses `DirectDrawCreate` and COM display-mode calls; it can redraw `logo.pcx` and returns. | `startup-code-logo-b.json`, `startup-code-display-mode-caller.json` |
| Initial Jackal resources | Remaining `0x62d3a0` calls load `jackal.pcx`, create a compatible DC/font, read `jackal.txt` section `FILEWIN`, initialize UI data, then return. | `startup-code-postlogo-2.c`, `-4.c`, `-5.c`, `-7.c`, `-8.c` |
| Voxel renderer | `0x6185a0` checks CPU type, reads `[PREFERENCES] ForceOldVoxelAlgorithm`, allocates 256×256 buffers and renderer tables. Nonzero config forces `DAT_009c0830=1`. | Existing `analysis/native/code-voxel-config.c`, evidence `ev_244ed0d993a04fa881eced2211efe5e1de2c12b56247338146d03b391e9743a6` |
| Audio | `0x4c5ce0` → `0x4c5e50` loads `soundx.dll`, resolves ordinals 1–11, checks version, and initializes audio objects via virtual calls. | `startup-code-audio-init.json`, `startup-code-audio-load.json` |
| Font installation | `0x6190d0` derives `arialn.fot` from `arialn.ttf`, calls `CreateScalableFontResourceA`, `AddFontResourceA`, then font creation. | `startup-code-font-load.json` |
| Game UI/resource setup | `0x52aa30` first calls `0x58f040`, which loads `text.pcx`, reads `labels.txt`, and sets up game/UI objects. `0x588aa0` loops over 12 font sizes × 4 flag combinations; `0x618f40` uses `CreateFontIndirectA` and `GetTextMetricsA`. | `startup-code-game-initialize-a.json`, `startup-code-ui-init.json`, `startup-code-table-init.json`, `startup-code-resource-init.json`, `startup-code-font-create.json` |
| Rules initialization | `0x58f2f0` → `0x5873c0` loads `ALPHAX`/`SCRIPT` and parses terrain, chassis, reactors, weapons, defenses, abilities, facilities, citizens, social models, and other sections. | `startup-code-game-initialize-b.json`, `startup-code-rules-init.json` |
| Opening movie option | Only after the earlier steps, `0x52aa30` reads `DisableOpeningMovie`, then conditionally calls `0x403be0` with `openingx`. | `startup-code-movie-gate.json` |
| Title/main menu | `0x58e360` selects `xopeningb.pcx` for width 800 or `xopeninga.pcx` otherwise when expansion mode is active, optionally starts `fx\\opening menu.wav`, and dispatches `TOPMENU`/`HOTSEAT`. The actual interactive menu loop is here, later than the logo. | `startup-code-opening-screen.json`, `startup-instructions-title-menu.json` |

The presentation function `0x5efd20` has DirectDraw surface calls or a GDI `BitBlt` fallback. Its visible body contains no click or timer wait. Calls into Wine/DirectDraw can still block externally; the static function body cannot exclude that.

## Config evidence and bounded candidates

The runtime package already uses the appropriate compatibility choices:

```ini
[Alpha Centauri]
DirectDraw=0
ds3d=0
eax=0
DisableOpeningMovie=1

[PREFERENCES]
ForceOldVoxelAlgorithm=1
```

`0x59db40` calls `GetPrivateProfileStringA` with a section pointer at `0x6900d0` → `Alpha Centauri` and file pointer `0x6900cc` → `.\\Alpha Centauri.Ini`. The exact pointer/string bytes are retained in the evidence index. `0x52aa30` passes `DisableOpeningMovie` with default zero and branches around the `openingx` call when nonzero. Therefore the existing runtime override is correctly named and placed. It only suppresses that late opening movie call; it does not suppress early window, voxel, audio, font, or rules initialization.

`ds3d=0` and `eax=0` **do not disable all audio**. The entry function begins with audio flags `0x0a`; enabling `ds3d` changes them to `0x2a`, then enabling `eax` to `0x6a`. In every ordinary branch it still calls `0x4c5ce0`. This is confirmed by instructions `0x45fa6f`–`0x45fade`; the decompiler's unnamed string addresses are independently resolved in the index.

The installed INI already contains `ForceOldVoxelAlgorithm=1` and `DirectDraw=0`. Those source values are observed at lines 2 and 7 respectively; no install file was edited. Changing the two existing choices again is unlikely to distinguish the remaining stages. No additional verified INI switch that skips all pre-menu initialization was found in this bounded trace.

## Runtime localization still needed

The runtime agent enabled Wine file tracing. A bounded snapshot of actual `CreateFileW` records, with source log SHA-256, byte length, timestamps, and line numbers, is preserved in `startup-runtime-file-progress.json`. Directory enumeration entries are deliberately excluded: listing a filename is not evidence that the game opened it. Selected observed opens:

| UTC time on 2026-10-14 | File/stage |
| --- | --- |
| 18:45:30.148 | `logo.pcx` |
| 18:45:35–18:45:46 | `iface.pcx` then `interface.pcx` |
| Later in the same run | `console_x2_A.pcx`, then numerous CVR resources |
| 18:47:06–18:47:14 | Repeated `ALPHAX.txt` section reads |
| 18:47:15–18:47:22 | Repeated `MENU.txt` section reads |
| 18:47:23.878 | `CURSOR.PCX` |
| 18:47:30.944 | `NEWICONS.PCX` |
| 18:47:41.680 | `ALIENCIT.PCX` |
| 18:47:48.875 | `UNITS.PCX` |

These are observations of attempted opens and later progress, not a proof that every individual read succeeded. Wine tracing itself can add overhead, so these timestamps are not a clean startup benchmark.

The static code explains a substantial CPU workload behind the unchanged splash. `0x455610` loads `iface.pcx` (1024×768), performs 23 explicit/loop-expanded calls to `0x5de580`, then loads `interface.pcx` (750×900) and makes 60 more such calls. `0x5de580` scans every pixel in the intersection of the active clip rectangle and the image, replacing one palette index with another. If these clips cover the whole images, that is **58,587,936 pixel inspections** in this single setup function. This is a calculated conditional workload, not a measured executed count. The image dimensions and digests are independently preserved in `public/game-data/assets.json`.

`0x5e39a0` separately scans transparent borders, allocates compact sprite buffers, and copies their rows. `0x453a70` extracts many additional rectangles from `interface.pcx`. Following that setup, `0x451030` initializes numerous CVR model references. Evidence: `startup-code-ui-atlas-extract.json`, `startup-code-palette-transform.json`, `startup-code-atlas-crop.json`, `startup-code-console-atlas.json`, and `startup-code-ui-after-atlas.json`. These loops support slow interpreter execution as an explanation; they are not evidence of a graphics scaling loop or a measured performance bottleneck.

Useful breakpoints or file-trace markers, in order: `logo.pcx` → repeated `jackal.pcx` / `jackal.txt` → voxel initialization → `soundx.dll` → `arialn.ttf`/`arialn.fot` → `text.pcx` / `labels.txt` → font setup and other UI resources → `ALPHAX`/`SCRIPT` → opening option → `xopeninga.pcx` or `xopeningb.pcx`.

The `movies\\virtualWorld.wve` reference in `0x52aa30` leads to `0x600400`, which enumerates CD drives with `GetDriveTypeA`/`FindFirstFileA` and can present `FILEFIND_NOCD`. It is **not** itself evidence of movie playback or decoding. No executable or media-verification behavior was patched.

The captured runtime is advancing, which rules out a persistent deadlock at the original logo for that run. The runtime agent owns continued observation until a title menu and input response establish usability. Resource-cache corruption, CPU instruction emulation errors, audio deadlock, and font initialization cost are not established root causes. Continued file progression is more useful evidence than the unchanged splash alone.

## Evidence anchors

- Logo function: `ev_6d35587c81c487fa0d43f29e5a6960dcb24529be711a55eabf590838f129b2f3`.
- DirectDraw logo redraw: `ev_c2850c4277c27134bc06a0196fb704d045b2a7a536362b5c3b530e9c46a97077`.
- Window initialization caller: `ev_0fcad7754442e339c032affbb52b74846be5a38686045927e43a7837c97f4f75`.
- Entry call sequence: `ev_4f76770422a3691c7c91da34035d938b8551b4051d9601328c52736d5e78db11`; instructions `ev_a9c116c74df6a5a0ff4e7f8e9d739c91e8d39855db7b19c32893c22aa079d6b0`.
- Opening movie gate: `ev_221763233ea1dce4079495b1ae1c1e5c630399e486d4b378a1d93aeacd3772d7`.
- Config getter: `ev_8331f15d52a1a21ae21fe7eaf9a1a809604fce8a789b43aad641a03987473497`.
- Audio loader: `ev_268f2ecbe6df8f786609c118b900dd32f0bdec55f7473453e6835d7635b9608a`.
- Title-screen instructions: `ev_e15f598e36ddb813df17b144ad0cccb8da0bb1b2c3a21ba5b3afe775e6430994`.

All saved raw JSON is complete. Pseudocode has some unresolved register arguments and overlapping-global warnings; instruction evidence was retained where that materially affected a claim. The independent session uses immutable source import. Its final evidence bundle and close result are retained alongside this report.
