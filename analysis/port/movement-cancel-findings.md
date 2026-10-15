# Native V cancellation candidate

Plain lowercase **v** is a better candidate for a native-input cancellation adapter than Backslash: it has a documented command and an observable result, View Map mode. This analysis establishes its native execution order, not successful browser-to-Wine delivery. Backslash failed the earlier live trials, and no new game execution was performed here. A V cancellation must be validated against guest state before releasing at a destination.

Target: installed Steam `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. REA 6.5.0 / Ghidra 12.1.4. Existing key/reset evidence is in [movement-terranx-evidence-bundle.json](movement-terranx-evidence-bundle.json); eight additional functions are in [movement-cancel-evidence-bundle.json](movement-cancel-evidence-bundle.json). These are static observations of the executable, with reference names grounded against its code.

## First V: reset before View Map

The console key handler at `0x5178c0` receives a character and a virtual-key/modifier word. The desired command is character `0x76` (lowercase v), virtual key `0x56`, without Shift/Ctrl/Alt bits. Uppercase character `0x56` does not enter the lowercase-v command branch. The initial Shift used to start native drag must have been released.

For ordinary route mode, valid selected unit, nonnegative drag-map index, and vehicle mode, the route preamble treats J, G and Space specially. V follows the reset path:

1. `0x517dae`: AND vehicle flags with `0xfdfffdff`, clearing `0x02000200`.
2. `0x517dc7`: write zero to the selected unit's order byte (`unit+0x11`).
3. `0x517ed6`: call drag reset `0x50ef50`.
4. `0x517ee2`: clear console cursor mode to zero.
5. Only later, V reaches `0x5184fa` and checks the ordinary-turn guard. If vehicle mode is nonzero, `0x518539` clears it, refreshes UI and calls focus `0x5108a0`. If mode was already zero, `0x51850e` instead calls `0x511520(0)` to return to Move Units.

Main evidence: [key instructions](../native/movement-instructions-key-click.asm), `ev_06dd438640e537ff6686c2b565b3df3e06d657a820b34d3d59f12a1ed6f2fb73`; [key pseudocode](../native/movement-code-key-click.c), `ev_3ba9aec13fe4fbde68c632dbe84d4a6801b5fecbfd96bee9f57903929a28daea`.

[Reset](../native/movement-code-drag-reset.c) `0x50ef50`, `ev_57661b2350f1fc3076a124c1acb51fb628ec4e3443a48ffa893444669b616f6f`, sets the current map's ignore-next-click flag (`0x933438`) to 1, clears drag (`0x933430`), releases native capture if owned by that map, clears its route cursor, and sets current drag-map index (`0x68a5cc`) to -1. The map click handler consumes the ignore flag and returns before route commit. Existing [map-click evidence](../native/movement-code-map-click.c) is `ev_55ccb2968fb91bb95204a271e39ca702d0f826f3710592d7a06d2d47c129c65e`.

The keyboard handler has early exits: for example `0x9b2068 != 0`, `0x93a940 == 0`, and some network/turn conditions. A visible route alone does not prove an injected key will reach this preamble. The lowercase-v command also respects edit lock `0x4e1f40`; that function returns false when game flags `0x9a64c0 & 0x40` are zero, otherwise considers Scroll Lock and bit `0x08000000`. This supports restricting the proposed adapter to the ordinary single-player world, with no native modal/base/menu state.

Useful expected observations after the first V are: same unit ID and coordinates; order zero; drag zero; cursor mode zero; capture cleared; ignore-next-click one; vehicle mode zero. These are verification targets, not newly observed runtime outcomes. Only after native reset is confirmed should a test release the held button, then consider a second V to restore Move Units.

## Second V: restore and check selection

[Set Move](../native/movement-cancel-set-move.c) `0x511520(0)`, `ev_41c5a06f4acea268787021b5a79d5c040abd3e001b0ea826dfea20ec0e2a49a6`, sets vehicle mode to 1 and checks the current unit through `0x5c1a20`. If that test passes, it centers the selected unit and refreshes its UI. It can also call native visibility/spotting work `0x5b6260` under a unit-field condition; it is not a side-effect-free bit flip.

[Selectable](../native/movement-cancel-unit-active.c) `0x5c1a20`, `ev_7ce25fd708cf5bb99fb578e67969a3cb662765e183c983fd19e850a68c089515`, rejects a negative ID, out-of-bounds coordinates, another owner, both bits `0x40` and `0x400` in the 16-bit unit field at `+8`, or a nonzero result from `0x5c1c40`. That last [dependency](../native/movement-cancel-unit-dependency.c), `ev_456a757053fb643bf391459cfafe4c4d0224b52cad938c0a72391823003c0472`, can return nonzero only when the unit order byte is 1. The cancellation preamble has already set it to zero. The selectable test does not directly reject a unit merely because its movement is exhausted.

If selection is invalid, Set Move calls [Ready](../native/movement-cancel-ready.c) `0x510f50`, `ev_a7171b2ad977224f2ae44507a96f5db13090e05c5b8a7c92a7f43fdd2dc71b72`. Ready calls a search routine and writes its result to the selected ID; it can choose another unit. Thus V then V is expected to restore a valid selected owned unit in ordinary conditions, but the adapter must not promise unchanged selection without checking it. Native notifications, world changes, multiplayer, editor and hidden UI states remain outside this bounded validation.

The installed manual, printed page 32 (`movement-manual.txt` lines 983–989), explicitly describes V toggling View Map/Move Units and one or two presses returning to the active unit. This independently supports the command's identity; it does not prove drag cancellation or synthetic input behavior.

## Alternative letters

K is unsuitable. [Vehicle keys](../native/movement-code-unit-key-command.c) `0x5171d0`, `ev_733be95d108c3dd580af618bed9d15483b53e46db3a48d1b94b262fc2e7e8dc7`, has lowercase-k case `0x6b`, calling unit action `0x4d3470(selected,7)`. The manual identifies K as Construct Bunker.

Plain Y has no ordinary player-world action in the inspected console, vehicle and cursor handlers, but the editor branch uses it to toggle global bit `0x80`. It is therefore only a conditional candidate with editor mode off, and its delivery has not been validated. It offers no observable command transition to distinguish a received reset from a lost key. No letter is established here as a universally neutral cancellation shortcut.

Both original target bytes and the browser/runtime remained unchanged. The private REA session was exported and closed. See [movement-cancel-provenance.json](movement-cancel-provenance.json) for source-bound record IDs, hashes and limits.
