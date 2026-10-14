# Base production: bounded native evidence

Target: the installed x86 `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. This pass used REA/Ghidra static analysis. Addresses and writes below are observed; field names are analyst descriptions. It does not implement production or claim coverage of every completion branch.

The seven new records are in [production-evidence-bundle.json](production-evidence-bundle.json). [The index](production-evidence-index.json) lists exact evidence IDs, raw responses, and hashes; [focused x86 excerpts](production-instruction-excerpts.txt) corroborate the operations below. The owned REA session was [closed](production-close-session.json) after export. Original game files were unchanged.

## 1. Accumulation precedes completion; production precedes growth

The existing base-upkeep routine `0x4f79c0` calculates resources, calls `0x4f07e0`, then `0x4f3fe0`, saves stock/item snapshots, and only then calls growth `0x4ef1c0` (reused evidence **U1**). The adjacent `0x4f3fe0` can buy additional mineral stock by subtracting faction energy; its detailed policy is outside this pass (**P2**). A replacement must preserve this ordering instead of assuming every mineral addition happens before the completion check.

In `0x4f07e0`, the main accumulation/completion body is skipped when the signed nutrient-stock field is negative. Otherwise mineral surplus is added only when it is nonnegative, the current production item is not `-69`, and base flag bit `0x2` is clear. This addition occurs before the completion threshold test (**P1**, **I1**, instructions `0x4f086c`, `0x4f08ec–0x4f0907`). The meanings of that flag and the `-69` item are not established by this pass.

## 2. Completion subtracts a computed cost and conditionally caps the remainder

For a nonnegative item ID, the threshold is `0x4e4430(faction, 1, -1) × 0x5c1850(item, baseId, NULL)`. Equality passes the stock test (`0x4f0b3d–0x4f0b72`, **I1**). Both factors have further rules; simply using the unit-design table's raw price would lose behavior (**P5**, reused **U2**). Passing this test alone does not guarantee completion: later eligibility and capacity branches still apply.

On the admitted unit path, the code deducts the threshold, conditionally limits the remainder, and writes its snapshot **before** the unit-create call at `0x4f1097`. The facility/project branch has the same deduct/cap/snapshot sequence at `0x4f1fa5–0x4f201e` (**I1**). The exact shared arithmetic is:

```c
// Byte offsets into the current 308-byte base record; signed arithmetic.
stock -= completionCost;
int limit = min(mineralSurplus, I32(0x949830));
if (stock > limit && (U8(0x9a64e8) & (1u << faction)))
    stock = max(0, limit);
snapshot_9c = stock;
```

The cap is therefore conditional on a faction-mask bit; the code does not universally preserve all overflow or reset stock to zero. This pass does not establish a fixed value for `0x949830` or the mask's gameplay name.

## 3. Queue advancement filters entries; empty-queue behavior is branch-specific

`0x4f06e0(baseId)` uses the count at base `+0x4c` as the number of entries **after** the current item at `+0x50`. It shifts that many 32-bit entries left and decrements the count. It checks nonnegative candidates through `0x5ba910(candidate, faction, baseId)` and negative candidates through `0x5ba0e0(-candidate, faction, baseId, 0)`, repeatedly discarding candidates that fail until one passes or the tail is exhausted (**P3**, **I2**). It does not write mineral stock.

```c
// Normalized queue core; retained side effect and native calls are explicit.
while (tailCount != 0) {
    if (currentItem >= 0)
        U8(0x96d438 + faction * 0x20cc + currentItem)--;
    for (int i = 0; i < tailCount; ++i)
        queue[i] = queue[i + 1];  // queue[0] is currentItem
    --tailCount;
    bool accepted = currentItem >= 0
        ? call_5ba910(currentItem, faction, baseId)
        : call_5ba0e0(-currentItem, faction, baseId, 0);
    if (accepted) {
        // Native notification/redraw calls follow; stock is untouched.
        return 1;
    }
}
return 0;
```

An initially empty tail returns without changing the current item. Exhausting rejected entries also returns zero; it does not assign a sentinel itself. After unit creation, the selected faction-mask branch calls this helper at `0x4f1563`; the other branch calls the chooser wrapper `0x4e5fe0` (**P4**). Facility/project completion records its completion effects and then calls the helper at `0x4f2244`. Later facility-specific code assigns `-69` only when the faction-mask bit is set, `(flags_38 & 0x80000001) != 0x80000001`, the current item still equals the completed negative item, and the tail count is zero (`0x4f3411–0x4f3442`, **I1**). A generic unconditional queue reset would change this behavior.

## Fields used

The base address is `0x97d040 + baseId * 0x134`, corroborated by queue-helper instruction arithmetic. Offsets below are bytes, not Ghidra's sometimes misleading `short *` indices.

| Offset | Representation | Observed use |
|---|---|---|
| `+0x04` | u8 | Faction ID |
| `+0x30` | u32 | Flags; accumulation checks bit `0x2` |
| `+0x38` | u32 | Flags consulted by conditional item reset |
| `+0x3c` | i32 | Nutrient-stock gate |
| `+0x40` | i32 | Mineral stock/progress |
| `+0x4c` | i32 | Number of queued items after the current item |
| `+0x50` | i32 array | Current item, then queued entries |
| `+0x9c` | i32 | Stock snapshot written after completion arithmetic |
| `+0xd4` | i32 | Mineral surplus used for accumulation and carryover cap |

## Evidence ledger and limits

| Label | Native routine / operation | Exact REA evidence ID |
|---|---|---|
| P1 | `0x4f07e0` pseudocode | `ev_8e6d4ee5dd805a0909120dc244a7bd385f2215090029b029e119109b63da9f85` |
| P2 | `0x4f3fe0` pseudocode | `ev_ed86e2a6f2b3ed1be780457315748901ab979fc8bfde0c3d6c503747ecee3378` |
| P3 | `0x4f06e0` pseudocode | `ev_3f12b4f835df6c87eb04bd84c41083144591c3b6b562fdbc6e26a6d56da1d863` |
| P4 | `0x4e5fe0` pseudocode | `ev_b7e30d6d9bf1a836f7d9f4743e2bbd14b790526e213ae8c4b0257a5a7c67b85d` |
| P5 | `0x5c1850` pseudocode | `ev_f08fe03ef6934c9326d2395f21e052370575f718eaf374fdbd9fa979796bf70e` |
| I1 | `0x4f07e0` x86 instructions | `ev_21d5892dc981751d798cd99be90a852c21f4fd1924bff6e88b918e735e33b10f` |
| I2 | `0x4f06e0` x86 instructions | `ev_77e104feb04013072913c02c84857233cd10efb2b5b8455b07e26d0d83eba166` |
| U1, reused | [Base upkeep](../native/port-code-base-upkeep.c), `0x4f79c0` | `ev_13fcd03ce7d7d4b1d938437a69247ad55c778ab682089b5f7967ba81e099116d` |
| U2, reused | [Cost factor](../native/port-code-growth-cost-factor.c), `0x4e4430` | `ev_4314ac9386434d96365d29d806140284cd98aeab82a03b4b4eedc7f084d8fff4` |

U1/U2 are retained in the earlier [state-mechanics bundle](state-mechanics-evidence-bundle.json), not duplicated in the new seven-record export. P1 warns that type propagation did not settle and some global symbols overlap. The focused instruction records establish offsets, comparisons, call arguments, and ordering independently of those generated pointer types. The readable pseudocode above intentionally covers only the stated arithmetic and queue core. Notifications, AI policy, unit-cap limits, colony-unit population effects, facilities, projects, and failed-creation recovery require further branch-level work; this is not a complete production specification or a dynamic equivalence test.
