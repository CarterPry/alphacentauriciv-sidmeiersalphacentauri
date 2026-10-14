# Save import path investigation

The validated wrapper fix is to place imported `.SAV` files beside the native game's existing saves and reload the player after an import made while the emulator is running. The parent agent verified that copying the persisted import to `ROOT/home/username/.wine/drive_c/files/saves/browser-import-probe.SAV`, then reloading, made the file appear in the native Load Game list, pass the leader confirmation and restore Alpha Prime in year 2101. Command+S then opened the native Save dialog. [Restored world](../performance/restart/import-restored-world.png), [native shortcut](../performance/restart/final-native-command-save.png). These browser observations were performed by the parent; the independent REA investigator did not operate the emulator.

The precise reason that `D:\native-roundtrip.SAV` failed remains unproven. The failure also occurred after a full Chromium restart, so stale BoxedWine directory caching alone is insufficient to explain that particular path. No game or emulator patch is justified by the current evidence.

## Native path handling: direct observations

Target: installed `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. REA 6.5.0 with Ghidra 12.1.4, dedicated independent session. Source files unchanged.

- The custom file picker accept handler at `0x6146a0` copies the filename text into a temporary buffer and calls `FindFirstFileA` on it. When constructing its returned full path, a string containing `\` with `':'` at character 2 bypasses the current-directory prefix. The instruction at `0x614884` compares the second byte with `0x3a`, and `0x614889` jumps past that prefix construction. Thus an absolute `D:\...` path is supported by this handler. A later failed `FindFirstFileA` in mode 200 produces the `FILEWIN_LOAD` message. Evidence: [pseudocode](../native/save-import-picker-accept-b.json), `ev_f94b7a635cb6901c51f2cf474858e82f3c9100cf6944bf307130c33cc5495777`; [instructions](../native/save-import-picker-accept-instructions.json), `ev_3d4e3ed10f808068b9fcabbd510c13d7a45d5c22c44735cc7e38ef692010f750`.
- Filename preprocessing `0x6007b0` trims spaces; it does not remove drive letters or colons. Evidence: [pseudocode](../native/save-import-normalize-filename.json), `ev_f1beb3937aa9eeb9691dc416f4034f8bd1820dac30a9a9c291323d4818337139`.
- Load UI `0x5aaab0` chooses the custom picker or `GetOpenFileNameA` based on `WindowsFileBox`. The selected path is copied and passed to `0x5a9760` (call at `0x5aad7d`). Evidence: [UI pseudocode](../native/save-import-load-dialog.json), `ev_bc5316ef9099368fb781c7e81099f1373a1cad6e3b00a342f4c82b751d62771d`; [instructions](../native/save-import-load-dialog-instructions.json), `ev_a69cfbb16479212e8991ac9509714dc7eb45582e2922dc111b375f1ca72f703b`.
- Save reader `0x5a9760` opens its supplied path through `0x634bb0` before validating the `TERRAN` signature and version. It does not prepend `saves`. Evidence: [pseudocode](../native/save-import-game-loader.json), `ev_9f61853c3dc5245355a7b1de8741dc8d2607f8090657a01e5f9383312d27d553`.
- Earlier evidence independently shows `0x6005d0` recognizes `path[1] == ':'` and calls `FindFirstFileA` on that absolute path; `0x634bb0` falls back to the original path if the resolver returns null. Evidence: [resolver](../native/code-asset-path-resolver.c), `ev_41771bf25ca3b6ea70cfc7468a1e92609fa7ffb059862aa902f9d2a4f04ac783`; [open wrapper](../native/code-file-open.c), `ev_405bc25833983e46d36e28f56aa454ea6ed533d89d40a69f01f6222d3eab30a5`.

These observations rule out an unconditional `saves` prefix in the examined load path. They do not prove that every possible path or filename is accepted.

## Emulator source observations and limits

Runtime checkout: `analysis/runtime/jit/Boxedwine-disjoint`, base commit `65467424603484756a73308412f40b906d28b650` with local performance changes. Relevant source hashes are preserved in the provenance file.

- `source/sdl/startupArgs.cpp:904–911` parses `-mount_drive <native directory> <drive letter>`. Lines 569–574 create `/mnt/drive_d` for the native directory and an in-memory symlink `/home/username/.wine/dosdevices/d:` pointing to it. The parent-reported arguments use this documented order and the matching default Wine prefix. No argument-order or prefix mismatch was found.
- `source/io/fsnode.cpp:62–114` enumerates a node's native directory once, setting `hasLoadedChildrenFromFileSystem`; subsequent name lookups use cached children. `source/io/fs.cpp:298–309` returns a missing-path result when no cached child is found. A wrapper-only `FS.writeFile` after guest enumeration need not update this guest cache. Restarting recreates guest nodes, so requiring reload after an in-session import is supported by this code. No supported exported refresh hook was identified in the bounded inspection.
- Wine base ZIP has `c:` → `../drive_c` and `z:` → `/`, with no preexisting `d:` link. Runtime `-mount_drive` supplies `d:`. The exact failure inside Wine/guest path resolution was not traced and remains unknown. The earlier proposed `Z:\mnt\drive_d\...` probe was not performed by this subagent and is unnecessary for the validated saves-folder fix.

## Evidence preservation

The [REA evidence bundle](../native/save-import-evidence-bundle.json) contains 19 records. Complete command responses are retained as `analysis/native/save-import-*.json`; [provenance](save-import-provenance.json) records their hashes and evidence IDs. [Close response](../native/save-import-close.json) confirms the owned REA target was closed; the helper process exited normally. No executable, install, browser, runtime source, or public file was modified in this investigation.
