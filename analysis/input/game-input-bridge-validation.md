# Game input bridge validation

The retained host harness passed **183 C++ assertions** on 2026-10-15. It compiles the actual bridge function bodies extracted from [game-input-state.patch](../runtime/jit/game-input-state.patch), with mocked resident memory and X11 focus. The machine-readable [validation record](game-input-bridge-validation.json) records the source, patch and harness hashes, compiler, image hashes and exact fingerprint bytes.

Run from the repository root:

```sh
python3 tools/test_game_input_bridge.py --report analysis/input/game-input-bridge-validation.json
```

The script needs Python 3.10+, a C++20 compiler (`CXX` or `clang++`) and the installed game directory recorded in `analysis/runtime/game-bundle-manifest.json` under `sourceDirectory`. `--manifest` accepts another manifest. Relative paths resolve against the repository root; an invocation from `/tmp` also passed. The script generates and removes its own temporary build files. It does not depend on the earlier private test directory. A Boxedwine checkout is optional: the tracked patch supplies the source; if the checkout exists, its source must match the patch exactly.

The installed executables are read without modification. The required `terranx.exe` is 3,094,576 bytes with SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. The optional negative fixture `terran.exe` is 3,201,128 bytes with SHA-256 `f3d10f92d2b4b5d6ce0cdef740f8af3ce90c8f97cbe7707932888c052ec79ced`. The harness maps PE headers and sections at their preferred virtual addresses, with zero-filled image storage; it does not confuse file offsets with guest addresses.

| Live fingerprint | Guest address | Bytes |
| --- | --- | ---: |
| DOS prefix | `0x00400000` | 16 |
| PE header offset | `0x0040003c` | 4 |
| PE/COFF and optional-header prefix | `0x00400100` | 32 |
| Preferred image base | `0x00400134` | 4 |
| Image and header sizes | `0x00400150` | 8 |
| Selection/sprite instructions | `0x0050f2e8` | 41 |
| Capture/mode/drag instructions | `0x0050f32d` | 80 |

All seven anchors match the supported expansion executable; only the DOS prefix matches the unsupported base executable. Every bridge observation repeats this 185-byte check. It is a partial live revision fingerprint, not a full in-memory image hash, and requires both the header and code pages to be resident and readable.

| Export | `-1` | `0` | `1` |
| --- | --- | --- | --- |
| `boxedwineGameDragState()` | Unknown/unavailable | Native unit drag inactive | Selection, mode, sprite, drag and native capture agree |
| `boxedwineGameCanPlanMove()` | Unknown/unavailable | A checked entry guard blocks planning | All bounded entry guards passed |
| `boxedwineGameUnitMode()` | Unknown/unavailable | Native View Map mode | Native Move Units mode, any nonzero field value |

The 183 assertions cover:

- Resident reads over discontiguous pages, explicit little-endian assembly, unreadable/nonresident/zero-backed pages, whole-range preflight, unchanged output on a later-page failure, null inputs and 32-bit address overflow. This includes 96 deterministic randomized reads of up to 8,192 bytes.
- Drag predicates, native capture equality, signed virtual-base adjustment, invalid pointers, and rejection after a code-anchor mutation.
- Each modal, mouse-owner and busy gate; selection/count/player bounds; owned versus foreign units; the last valid unit index; map/base/menu visibility; hidden ancestors; cycles; exact and excessive traversal depth; window-address overflow; unavailable unit storage without allocation.
- Focus resolution through the display's process; missing focus/server/display, terminated and expired processes; all three state exports fail closed on those focus failures. PointerRoot tests cover the client beneath the pointer, absent/out-of-bounds input, bare root focus, unrelated/cyclic/excessive ancestry, the exact 64-node bound and preservation of explicit client focus.
- View/unit mode normalization, fingerprint rejection, unreadable mode storage and both mode values through the focused-process export. Diagnostics distinguish a readable mismatching code anchor from unavailable header/code pages and cover every negative diagnostic code.

The initial production build exposed an include-order conflict: X11's `None` macro preceded `PageType::None`. The bridge now includes the memory headers before `x11.h`. The harness checks that ordering lexically, but intentionally excludes production includes from the extracted body. An actual Boxedwine/WASM compilation remains necessary to validate real headers, types, linkage and exports.

No engine or guest executes in these tests. The MMU, process and focus objects are mocks; real Wine focus identity and page residency require runtime acceptance. Entry guards do not constitute a complete UI specification, route legality check or proof of safe cancellation. The unit-mode observation alone does not prove route reset; callers must await the guest's event handling and separately check the drag state. Native REA findings and their evidence IDs are retained in [movement-findings.md](../port/movement-findings.md).

Validated source SHA-256: `ff9b0dbf455656599dcc88bbb33bba4d9a29724ef31c843b6b72bfeaa5c3bf09`.

Validated patch SHA-256: `3f5243d7ffb3030402816140586de3164299d98a964e88ce65a5bb58e731014c`.
