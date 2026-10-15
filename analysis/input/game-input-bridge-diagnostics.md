# Bridge focus and fingerprint diagnostics

The initial runtime returned unknown state at the menu, in a loaded world and during an active native route preview. That observation alone did not identify the failure. The bridge now provides a fixed diagnostic result and follows the native PointerRoot focus path; live validation must establish whether these changes resolve that observed failure.

`Module._boxedwineGameBridgeDiagnostic()` returns one signed integer. It exposes no raw guest memory, arbitrary address parameter or process identifier. The three state exports retain their strict image and resident-read guards.

For a nonnegative value:

```js
const matchedAnchors = value & 0x7f;
const readableAnchors = (value >>> 8) & 0x7f;
```

Bits 0–6 follow the seven anchors in [the validation report](game-input-bridge-validation.md): DOS prefix, PE offset, PE prefix, image base, image size, selection/sprite code, capture/mode/drag code. A readable mismatch sets the upper bit and clears the corresponding lower bit. An unavailable or unreadable anchor clears both. `0x7f7f` (32639) means all seven anchors were read and matched. `0x7f3f` identifies a readable mismatch in the final code anchor; `0x1f1f` means only the five header anchors were available and matched.

| Value | Meaning |
| ---: | --- |
| -1 | No X server |
| -2 | No focused window |
| -3 | Root/server-owned focus has no resolved client |
| -4 | Focused client's display is absent |
| -5 | Display's process weak reference expired |
| -6 | Process terminated |
| -7 | Process has no memory |
| -8 | Memory has no MMU data |
| -9 | Pointer input unavailable or outside bounds |
| -10 | Pointer window not in focus subtree, or ancestry exceeds 64 nodes |

The source-backed focus correction uses these paths in the patched Boxedwine checkout:

- `source/x11/xserver.cpp:278–287` creates the root with `displayId=0`, makes it `inputFocus` and enables PointerRoot. Looking up display zero cannot identify the game client.
- `source/x11/xserver.cpp:1161–1182` starts keyboard delivery at the client beneath the pointer when it belongs to the focus subtree. A working native keyboard therefore does not imply that `inputFocus->displayId` identifies its recipient.
- `source/x11/xserver.cpp:731–747` records the opening thread's `KProcess` and process ID in each `DisplayData`. `include/kprocess.h:365` owns that process's `KMemory`; `source/kernel/kprocess.cpp:1130` creates it. The process label can describe the Wine loader, so no executable-name guess replaces the PE fingerprint.

For PointerRoot/server-owned focus, the bridge obtains native pointer coordinates without requesting a warp, calls the focused root's `getWindowFromPoint`, and checks the returned window's parent chain before resolving its display/process. Explicit client focus is preserved even when the pointer lies elsewhere. A bare root, invalid position, unrelated pointer window or excessive ancestry remains unknown. It neither scans unrelated processes nor selects any process merely because a familiar image happens to exist there.

The resident reader still requires `canReadRam`, `PAGE_READ` and nonzero backing on every page. `soft_mmu.cpp:79–82` derives that flag from the page implementation and permission; `soft_code_page.h:24` inherits the readable implementation of `RWPage`. Code-page status alone therefore does not justify weakening the guard.

The retained harness passes **183 assertions**, including every negative diagnostic code, bitmask distinction and PointerRoot boundary. This is host validation with mocked memory/focus, not a claim of successful Wine/WASM acceptance. Exact artifact hashes and test output are in [game-input-bridge-validation.json](game-input-bridge-validation.json).
