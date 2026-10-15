# Native mouse movement observation

The original Alien Crossfire engine already draws a route before a mouse movement order is committed. A wrapper can reuse that preview and the engine's own order handling. This probe does not establish an all-reachable-tiles overlay or validate a new pointer adapter.

The session used `SingleThreadedJitFast`, the installed `terranx.exe`, and the owned `analysis/performance/optimized/profile` Chromium profile. Its existing year-2102 swift haven save was loaded. Browser viewport was 1400×1080; the 1024×768 game canvases occupied page rectangle `(66,120.5,1268,950.5)`. The menu was recognized after 43,886 ms. The original installation and public application files were unchanged.

## Observed controls

| Input | Observed native result | Evidence |
|---|---|---|
| Plain left-click the scout | Selects it; HUD shows location, moves and orders. A later click recentered its screen position. | `unit-left-selected.png`, `unit-recentered-confirmed.png` |
| Plain or double left-click an empty destination | Changes the view; did not move the selected scout. | `left-destination-no-move.png`, `double-left-destination-no-move.png` |
| Right-click a square | Opens native context menu with **Move unit to here** and **Action**. | `right-destination-menu.png` |
| Left-down, hold 1.2 seconds, then move pointer | Shows yellow cursor, green route and destination/distance label before release. | `native-route-preview.png` |
| Shift-down, left-down, nominal 100 ms wait | Route cursor already visible. Shift can then be released while the mouse stays held. | `shift-down-immediate.png`, `shift-drag-neighbor-preview.png` |
| Release at destination | Scout moved `(11,49) → (11,47)`, revealing terrain. Native automatic turn completion advanced 2102→2103. | `native-drag-moved.png` |
| Quick base click | Opens the native base control screen. | `plain-base-click.png` |
| Hold on empty square or base | Arms a route for the **previously selected scout**. Shift does this immediately as well. | `empty-tile-held.png`, `base-tile-held.png`, `shift-empty-world-preview.png`, `shift-base-world-preview.png` |

The native label included `Move to (11,45): Dist=2`, `Dist=1` at the unit's own square, and `Dist=1 1/3` toward the base. These are observed native labels. This probe does not recover their exact formula or treat them as a list of guaranteed reachable squares.

The ordinary unit click recentered its approximate page position from `(842,411)` to `(722,472)`, while its world position remained `(11,47)`. A wrapper must account for this view movement when retaining a pointer origin.

## Cancellation results

- **Return to origin, then release:** preview disappeared; scout remained `(11,49)`, Moves 1, No Orders, year 2102. This succeeded while the view stayed unchanged. See `drag-return-origin.png` and `origin-release-cancel.png`. It is not proven safe after camera scrolling changes the origin's screen position.
- **Escape while held:** cleared the route but opened the native Quit confirmation. It was dismissed without quitting. See `escape-while-held.png`. This is unsuitable as a transparent wrapper cancel in this observed mode.
- **Backslash, wait 100 ms, then release:** failed to cancel. Scout moved `(11,47) → (11,45)` and year advanced 2103→2104. See `backslash-before.png` and `backslash-after-settled.png`.
- **Raw native Backslash key down/up followed immediately by mouseup:** `Module._boxedwineEmscriptenKey(49,92,1)`, then `(49,92,0)`, then the existing native mouse release also failed to cancel. Scout moved `(11,45) → (11,43)` and year advanced 2104→2105. See `raw-backslash-before.png` and `raw-backslash-after.png`. The underlying reason was not determined by this runtime probe.

## Integration implication

An explicit **Plan move** action for a selected unit can reuse a held native route, pointer motion and a final release. Automatically converting every map click into Shift-left-down would also convert base and empty-square clicks into orders for a previously selected unit. A native drag flag alone therefore cannot prove which object was clicked. Preserving normal menus, base dialogs and selection requires additional validated state or an explicit planning action.

This session used normal Playwright clicks/moves, bubbling DOM mouse down/up events through the existing wrapper and native listeners for held gestures, and native keyboard input. No simulation state was read or written. Shift event callbacks enqueue input; their return alone does not prove the game processed the command. The nominal 100 ms observation is not a guaranteed timing contract.

The installed manual supports the behavior: printed page 21 (PDF page 23) documents mouse routes, waypoints, selection and base clicks; printed page 196 (PDF page 198) describes contextual movement/actions. Source identities and page references are retained in `source-notes.json`.

`validation.json` contains 20 observations with screenshot SHA-256 values and scope limits. All cited screenshots were visually inspected. Intermediate frames taken while the base panel was still opening are retained separately and excluded from those observations.

The owned browser/context was closed cleanly. The last observed scout position was `(11,43)`, year 2105, Moves 1, No Orders. The named year-2102 save was not overwritten. No bridge build, new pointer adapter, attack, naval/air movement, multi-unit selection, or complete pathfinding parity is validated here.
