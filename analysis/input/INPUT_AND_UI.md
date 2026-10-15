# Mouse planning and the two-cover launcher

The opening page now contains two cover-art choices and the small “Saves stay in this browser” watermark. Each choice immediately starts its original edition. An opaque minimal loader covers Wine/blue/splash frames until the original menu appears. The full-viewport player has a small … menu for save backups, fullscreen and logs. The former research/assets archive remains at `/library.html`, including old hash bookmarks.

In Alien Crossfire, select an active unit, choose **Move**, hover the map to preview the original native route, then click a destination. The native engine remains responsible for pathfinding, costs, orders, terrain reveal and turns. This is a destination preview; it does not mark all legal destinations for the current turn. Base Alpha Centauri retains native drag movement because its full entry guards have not been established.

## Native basis and safety of cancellation

[Movement findings](../port/movement-findings.md) and [cancellation findings](../port/movement-cancel-findings.md) link to recovered code and three exported REA bundles. Shift+left-down enters the original drag route promptly. Applying that gesture to every map click would route a previously selected unit even when clicking a base or empty ground; the explicit Move action preserves ordinary map selection.

The isolated `SingleThreadedJitInput` build reads native state through seven revision anchors and resident-memory/focus checks. It neither writes guest memory nor invokes native functions directly. The initial PointerRoot focus mismatch was diagnosed and corrected using the emulator's actual X11 dispatch rules. The final runtime reported diagnostic **32639 (0x7f7f)**: all seven anchors readable and matching. At the menu entry was blocked; on the selected unit entry was allowed; during preview the native drag flag became active. Host harness: **183 assertions**, distinct from the live WASM observations.

Cancellation sends native **V** to reset capture/route and switch to View Map. Only after both route-idle and View Map acknowledgment does it release the virtual mouse; a second V restores Move Units. Escape/right-click, the Cancel button and host-focus changes use this sequence. Backslash failed actual trials, and Escape passed directly to the original game opens Quit, so neither is used as the native cancellation command. Unknown state never counts as an acknowledgment. The native game can choose the next selectable unit when restoring Move Units; retaining an unselectable old unit is not promised.

## Observed checks

- Real Chromium/WASM expansion: automatic loader-to-menu; selected scout at **(11,49), year 2102, energy 14, moves 1, No Orders**.
- Hover drew the original route. Escape and right-click cancelled and restored `drag=0, canPlan=1, unitMode=1` without changing those unit/year values. Opening host tools also cancelled cleanly.
- A delayed Cancel-button activation stayed in preview until click, then returned idle without restarting the route.
- Native Ctrl+S opened Save and blocked Move (`canPlan=0`, button hidden).
- Destination click moved the scout to **(11,47)**, revealed terrain and reached **2103 / energy 16**. The controller returned idle.
- Both editions autostarted into their original menus on the final Input build. Base correctly hid the unsupported Move adapter.
- 9 controller unit tests cover pending activation, one-shot commit, two-part cancellation acknowledgment, focus loss, unknown state and native reset. 23 existing research/map tests still pass.
- 17 recorded menu/world/startup frames classify correctly. 11 layout checks exercise desktop/mobile covers, auto-start, keyboard tools, error retry and old bookmarks. Native loading/input replay and IndexedDB save import/export checks pass independently.
- The prescribed develop-web-game client inspected the two-cover screen. Live native screenshots are under `adapter/`; mocked/replayed layout tests are under `ui/` and are not described as native gameplay.

The original installation and executable hashes are unchanged. Complete campaigns, multiplayer, every modal transition and other browsers remain unverified. No claim is made that the partial independent JavaScript simulation replaces the full engine.

[Hashed live/UI evidence and validation scope](validation.json). The three movement REA bundles were independently checked: [60 records and 29 citations](movement-evidence-verification.json).
