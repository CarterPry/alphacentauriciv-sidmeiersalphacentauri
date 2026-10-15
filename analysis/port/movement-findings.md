# Native movement input seam

The installed engine already supplies selection, route preview, routing and movement cost. The practical adapter is an explicit Move action for an already selected owned unit: start the game's normal drag with Shift + left-down, release Shift while retaining the virtual left hold, forward hover motion, and release left on the destination click. The runtime agent independently observed a route before release and a committed move after release. An automatic replacement for every canvas click would interfere with bases, menus, stack selection and empty-tile clicks.

This pass does **not** establish a complete legal-movement range or action-availability oracle. It preserves the original engine's behavior by reusing its input path. No browser, game execution, target bytes or public files were changed by this investigator.

## Proven Steam Alien Crossfire behavior

Target `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. REA 6.5.0 / Ghidra 12.1.4. The [43-record bundle](movement-terranx-evidence-bundle.json) and complete `analysis/native/movement-*.json` responses preserve native observations. Decompiled names/types are analyst/provider output; address and instruction evidence take precedence where decompiler stack recovery is poor.

| Function | Confirmed role | Evidence ID |
|---|---|---|
| `0x46ed30` | Left-down resets prior drag state and starts the route timer; Shift can start it immediately. | `ev_f5b8ffde285df4ded664e55fc8a4f26c4b3ab698d167a9e16b2f18951870913a` |
| `0x50f170` | Timer validates/chooses current vehicle, sets native capture, cursor and drag state, then invokes mouse movement. | `ev_22fe0e083f085068c415904aa992a658870bff0e776c38c3d40e65f8b171e48d` |
| `0x46f000` | Pixel-to-tile conversion and hover route drawing, gated on active drag. | `ev_ef93731bf73f16416e6d7bd809d225968fa64053afa645c50695d16997e6b0f0` |
| `0x467430` | Route renderer calls pathfinder `0x59a530`, cost function `0x593510`, and segment renderer `0x4672c0`. | `ev_b123665c5bc1fdb452866a3783da9a9e80c1346f3868a7d19402a60d25f55897` |
| `0x46eba0` → `0x46d5d0` | Click dispatch; activation and route-order commit. | `ev_5ffad2b673410b1c5b4ce0c1584cc63b799fc8cacff4e208787f1629865db6d1`, `ev_55ccb2968fb91bb95204a271e39ca702d0f826f3710592d7a06d2d47c129c65e` |
| `0x4d2f00` | Unit activation, ownership/stack selection and existing-order confirmation. | `ev_a84ca632b656fb1b99286d66fbbd0a4994653556e1f2df7dba78fedcdd05dc0c` |

Timer delay is exactly 333 ms when `InVehMode != 0`, otherwise 1000 ms. Left-down alone does not call the unit activation routine. Its timer can keep the previously selected vehicle or choose one at the map cursor; a down on another screen location is insufficient proof of selecting the unit drawn there. This is why the adapter should enter only after verified native selection.

Raw handler `0x46eff0` is `RET 8`, confirmed by REA's instruction decoder. The higher-level click path carries the commit behavior. At `0x46d6c4–0x46d6f6`, click saves whether the pointer was the normal route sprite, then resets drag. The route branch at `0x46dd83` checks that saved state. At `0x46dfbf` it sets vehicle order byte `+0x11` to `0x18`; `0x46e025–0x46e054` writes destination X/Y and clears waypoint counters for a simple route. Complete instructions: [map click](../native/movement-instructions-map-click.asm), `ev_bfd9985b90b254eeb7dd1faaa3a7155e54bda28bb99daef86569fb2d37216601`.

Hover is not a purely cosmetic engine operation: it updates the vehicle's destination/waypoint fields before release. Native cancellation and release ordering therefore matter. The renderer also has a direct-line fallback for disconnected, unknown, or failed routes. A drawn line is not proof that the destination is legal or reachable this turn.

## Read-only bridge fields and entry gates

These addresses apply only to the target hash above. Guest virtual addresses must be resolved through emulator process memory; they are not JavaScript heap offsets.

| Field | Address / width | Native support |
|---|---|---|
| Main map object | `0x9156b0` | Instructions pass this object to selection/click and cursor routines. |
| Selected vehicle | `0x93928c`, signed 32-bit | Activation writes object `+0x23bdc`; drag reads it. |
| Vehicle mode | `0x939288`, 32-bit | Native unit-command and timer branches. |
| Current player | `0x939284`, 32-bit | Activation compares vehicle ownership. |
| Vehicle count | `0x9a64c8`, signed 32-bit | Earlier creation/state evidence; maximum 2048. |
| Vehicle record | `0x952828 + id * 0x34` | X/Y signed 16-bit at `+0/+2`, owner byte `+0x0e`. |
| Drag active | map `+0x1dd80` = `0x933430`, 32-bit | Timer sets to 1; hover tests; reset clears. |
| Cursor mode | map `+0x23d10` = `0x9393c0`, 32-bit | Normal route is 1; idle is 0. |
| Cursor sprite | map `+0x1ef4c` = `0x9345fc`, pointer | Normal route sprite is `0x93aa9c`. |
| Native capture | `0x9b7abc`, pointer | Timer sets capture to map's virtual Win base; reset clears. |
| Modal depth / current modal | `0x9b7ae4` signed 32-bit / `0x9b7ae0` pointer | Push/pop functions below. |
| Other pointer owners | `0x9b7acc`, `0x9b7ad0`, `0x9b7ac0`, pointers | Mouse hit dispatcher prioritizes these over ordinary hit-testing. |
| Base window visible | byte `0x6a76c4`, bit 0 | Native visibility call on window `0x6a7628`. |
| Main-menu visible | byte `0x938178`, bit 0 | Native visibility call on window `0x9380dc`. |

The map's actual `Win*` is `map + int32[uint32[map] + 4]`; its visible flag is byte `[Win+0x9c] & 1`. `Win_is_visible` also requires the ancestor chain at `[Win+0xc4]` to be visible. This virtual-base calculation matters because map and console window layouts differ; do not assume a fixed Win offset.

A conservative entry predicate can require: exact fingerprint/process match; valid selected ID below count; owner equals current player; vehicle mode enabled; idle cursor/drag; map visible; no visible Base or main-menu window; modal depth and modal pointer zero; all native pointer owners/capture zero; mouse guards `int32[0x90d938] != 0`, `int32[0x93a938] == 0`, `int32[0x93a934] == 0`, map `+0x1dd78 == 0`. These are directly grounded guard/visibility observations, **not proof of a universal world-active predicate**. Live validation with Base, Save, native menu, turn processing and normal map is still required. Unreadable or variant-mismatched state should fail closed.

For an active normal route, the strongest observed conjunction is valid selected vehicle + drag nonzero + cursor mode 1 + normal sprite + native capture equals computed map Win pointer. Modal creation clears a different captured window and invokes its capture-loss callback.

Modal evidence: [set](../native/movement-code-set-modal.c) `0x5ee190`, `ev_24551a33ac84cfdccf2ae3052a14faad0be27407c317040df3ea484b763ccdca`; [release](../native/movement-code-release-modal.c) `0x5ee280`, `ev_ca5e7799b4cbff8567054c5c01a841c7a5554c67de9b975c1d26b2b8d0705123`. [Visibility](../native/movement-code-window-visible.c) `0x5f7e90`, `ev_35154d77355d6e0f3ded955a0606f61b9888eeccb11de8d8a3603d1055ea5a46`. [Mouse window selection](../native/movement-code-mouse-hit-window.c) `0x5f6f10`, `ev_b0756a97532658ab0c6dcca6d5c4a9207b80e6dffd3a28d38876643b7ac28896`.

## Cancellation and keyboard commands

`0x5178c0` checks active ordinary-route mode before normal key dispatch. J toggles group routing; G/Space add waypoints. Other keys clear route-order bits `0x02000200` and the order byte, call reset `0x50ef50`, and clear cursor mode. Reset sets map `+0x1dd88 = 1`; the next map click clears this flag and returns before committing.

**Escape is not a complete cancel shortcut.** It reaches reset, then continues into its ordinary `REALLYQUIT` branch (`case 0x1b`, popup at `0x51a644` region). Runtime observed the route clear but Quit confirmation open. The initial suggestion that Escape alone was sufficient was corrected before implementation.

**Backslash failed both live cancellation trials and must not be used as a validated cancel action.** The initial static candidate was character `0x5c`, Windows `VK_OEM_5 = 0xdc`, with no Shift/Ctrl/Alt bits: neither value has a command branch in `0x5178c0`, `0x5171d0` or `0x5166d0`, so reaching the ordinary active-route preamble with these values appeared capable of reset without a subsequent command. Runtime evidence supersedes that inference. Playwright Backslash followed by a 100 ms wait and release moved the scout from `(11,47)` to `(11,45)`; a second trial using raw scan 49/key 92 followed by release moved it to `(11,43)`. The retained screenshots are `analysis/input/native/backslash-after-settled.png` and `raw-backslash-after.png`. The investigator did not independently observe native key-handler arguments or guest drag flags during those trials, so whether translation, handler dispatch, or state gating caused this remains unresolved.

F12 has native bindings and is unsuitable as a neutral key. Returning the held pointer to origin then releasing worked in a runtime probe, but an old screen origin is unsafe after map scrolling. A generally safe, dialog-free cancellation input remains an implementation blocker until directly validated. Do not synthesize release at the hovered destination after a failed cancel attempt.

Keyboard evidence: [main key handler](../native/movement-code-key-click.c), `ev_3ba9aec13fe4fbde68c632dbe84d4a6801b5fecbfd96bee9f57903929a28daea`; [instructions](../native/movement-instructions-key-click.asm), `ev_06dd438640e537ff6686c2b565b3df3e06d657a820b34d3d59f12a1ed6f2fb73`. Plain G calls `0x4d61a0(selected,0x18,0)` and opens the base-destination dialog; Shift-G goes home. G does not enter free-map route preview.

## Independently checked base-game variant

Target `terran.exe`, SHA-256 `f3d10f92d2b4b5d6ce0cdef740f8af3ce90c8f97cbe7707932888c052ec79ced`. A separate target analysis confirmed equivalent basic drag machinery, retained in [its own REA bundle](movement-terran-evidence-bundle.json). The function locations and absolute addresses below were read from this executable, rather than inferred by applying a relocation delta to `terranx.exe`.

| Base-game item | Address / value |
|---|---|
| Left-down / drag timer / reset / mouse move | `0x47b790` / `0x5231b0` / `0x522fc0` / `0x47ba60` |
| Map / vehicle mode / selected vehicle / current player | `0x91f500` / `0x9430d8` / `0x9430dc` / `0x9430d4` |
| Drag active / cursor mode / cursor pointer | `0x93d280` / `0x943210` / `0x93e44c` |
| Normal route cursor sprite | `0x944754` |
| Vehicle array and stride | `0x9951b0`, `0x34` bytes |
| Capture / alternate capture / pointer owners | `0x9bffa4` / `0x9bffa8` / `0x9bffb4`, `0x9bffb8` |
| Modal depth / current modal | `0x9bffcc` / `0x9bffc8` |
| Map pointer table / current drag-map index | `0x7f0b54` / `0x6ab4c4` |

As in the expansion, flags/mode/selection are 32-bit fields, the cursor and capture fields are 32-bit pointers, and vehicle coordinates are signed 16-bit values. The timer sets capture to the map's computed virtual Win base, the route cursor, mode 1, and the drag flag. Left-down has the same 333/1000 ms timer and immediate Shift path. REA evidence: [timer](../native/movement-terran-drag-begin.c) `ev_9423ca9e4350e0052daf637e0b35b73a4d6c6b2087e1cbb706a7f449b9f15650`, [left-down](../native/movement-terran-left-down.c) `ev_3ec479c6c59180ea02d8af1a486f00399f04107f36577b2009f63c316a1935ef`, [reset](../native/movement-terran-drag-reset.c) `ev_cf4c8e180a83e5dd3f7f8a6e405d82b6e0fad5b9e8f6c3c617e128525faa610f`, [modal](../native/movement-terran-set-modal.c) `ev_90d5aa08636de2908df8b24fc0e190d663b7fbe058de208a45fc4f72a7007b5d`.

Thirty-two-byte fingerprints for timer, left-down and reset are retained in `analysis/native/movement-terran-*-bytes.json`, each bound to this executable hash. The base-game vehicle count, Base/main-menu window addresses and complete entry predicate were not recovered in this bounded pass. Basic active-route observation is better supported than enabling Move in this variant. Do not copy expansion-only gates or claim base-game runtime validation.

## Coordinates and coverage limits

[Pixel-to-tile](../native/movement-code-pixel-to-tile.c) `0x463040` returns 0 for a valid tile and 1 on failure (`ev_942b7c982ea50eb8029c85e2a91b676cf9ca983f589c6c293e5cd613f82bc825`). It accounts for window bounds, map pixel origin, tile spacing, horizontal world wrap, and terrain corner heights via `0x46fe70`. [Tile-to-pixel](../native/movement-code-tile-to-pixel.c) `0x462f00` applies horizontal wrap and subtracts the mean of four terrain-corner heights (`ev_a8e5efe96a8dd48ef025b57cfad33c94886f9c0ef80bf5968dc723f32c9afd7d`). A flat diamond-grid projection would be inaccurate on elevated terrain. No projection bridge is implemented by this report.

Primary reference used to locate candidate functions: [Thinker source at commit c633f0b801bdf065a0a81450c685f66e97962c16](https://github.com/induktio/thinker/tree/c633f0b801bdf065a0a81450c685f66e97962c16), especially `src/engine.cpp`, `src/engine_win.h`, and `src/engine.h`. Names from this third-party reconstruction were accepted only when grounded by the installed Steam binary. The installed `Manual.pdf`, printed pages 21 and 196, independently describes drag route previews, waypoints, selection and Move Unit to Here. No reference build or setup script was run.
