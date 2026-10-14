# Alpha Centauri state and turn mechanics

This pass recovers concrete storage layouts, the turn/upkeep call chain, and the nutrient-growth update order from the installed **Alien Crossfire** executable. It is a bounded static investigation, not a complete specification for a compatible game engine. No gameplay or original source files were modified or executed.

Target: `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. Provider: REA 6.5.0 / Ghidra 12.1.4. Generated names/types are decompiler output, not original source. The new 21-record [portable evidence bundle](state-mechanics-evidence-bundle.json), [evidence index](state-mechanics-evidence-index.json), and full readable pseudocode remain on disk. This worker's owned session was closed after export.

## Reused evidence and corrected interpretation

- [State serializer](../native/code-state-serializer.c), `0x5a6ac0`, Evidence `ev_9ad159e9acb1d65b3ce360cb8b458ccb1e1e862e5e8b8050e23c6ff0db0d8fc3`.
- [Save writer](../native/code-save-writer.c), `0x5a94f0`, Evidence `ev_e287b06e7de6f8a9e4f0e21160f0af7f52e774d271a6fa4720fbf3822b8d2361`.
- [Faction initialization candidate](../native/code-research-choice-caller.c), `0x5b0e00`, Evidence `ev_a616cbb6158980068de1af9a3dcdd210ee85dafd7022b52b3a0e91e3e7509585`. The routine removes owned bases/vehicles, resets faction fields, chooses starting locations, and creates units. These observations support **initialization/reinitialization**, not a routine that advances every turn.
- [Autosave callers](../native/callers-autosave.json), Evidence `ev_9b7ea75d12303bc8439c6da65cad1878f044d03ecf2572841a08783878788194`, provides the initial seed for upkeep `0x527290`.
- [Design availability](../native/code-tech-availability.c), `0x5ba910`, Evidence `ev_232cd2c9f7b0275c8c788920a4fc9cf575f29bb72d7e37496d0c7bf102c1f0e8`: despite its old filename, this checks **unit designs** in the 52-byte table at `0x9ab868`, including their technology prerequisite. It is not itself a technology record lookup.

## Fixed-size storage and save version

The save writer sets `0x9a6810` to 12 before serialization. Older layouts are explicitly converted; raw offsets from those layouts cannot be assumed to match version 12. Current transfers include:

| Memory address | Count and stride | Interpretation |
| --- | --- | --- |
| `0x96c9e0` | 8 × `0x20cc` = `0x10660` bytes | Faction runtime records; stride corroborated by initialization and upkeep. |
| `0x946a50` | 8 × `0x59c` = `0x2ce0` bytes | Faction definitions/configuration; role inferred from strings, configuration and initialization reads. |
| `0x952828` | `*(int32*)0x9a64c8` × `0x34` bytes | Vehicle/unit instances. |
| `0x97d040` | `*(int32*)0x9a64cc` × `0x134` bytes | Base instances. |
| `0x9ab868` | `0x6800` bytes = 512 × `0x34` | Unit designs, separate from instances. |

These are in-memory locations and serialization block sizes, not absolute offsets into every save. Optional blocks, legacy layouts, and alternate transfer/compression paths still require format-aware handling.

## Map allocation, geometry, and storage

The allocation routine directly computes:

```c
// Readable transcription; variable names are analyst labels.
width      = I32(0x949870);
height     = I32(0x949874);
rowStride  = width / 2;             // stored at 0x68faf0
tileCount  = rowStride * height;    // stored at 0x949884
tileBuffer = allocate(tileCount * 44);  // pointer stored at 0x94a30c
coarseWidth  = (width + 4) / 5;
coarseHeight = (height + 4) / 5;
secondaryBytes = ((coarseWidth + 1) / 2) * coarseHeight;
secondaryBuffer = allocate(secondaryBytes);  // pointer at 0x94a310
```

Multiple consumers calculate `tile = tileBuffer + 44 * (y * rowStride + (x >> 1))`. Coordinates use the full width for boundary checks, while each row stores half that many records. This supports a staggered-coordinate representation. The parity invariant and the complete neighbor ordering were not recovered here; a port must not accept arbitrary pairs that alias the same tile.

When bit 0 of `0x94988c` is clear, the examined neighborhood code wraps X by adding/subtracting full width; Y remains bounded. This establishes the observed wrapping branch, not a complete description of every map mode.

The map writer transfers a `0xaa4`-byte header from `0x949870`, `tileCount * 44` bytes from the tile buffer, and `secondaryBytes` from the secondary buffer. The loader reads the header, clears the two stored buffer pointers, calls the allocator, reads the two buffers, and calls `0x592940`. That post-load function is not yet characterized. A browser representation must rebuild its references rather than treating serialized native pointers as live pointers.

| Tile byte offset | Observed use | Semantic confidence |
| --- | --- | --- |
| `+0x02`, low nibble | Setter `0x591b10` replaces only these four bits; unit placement passes its faction ID. | Occupancy/owner faction encoding in this placement path; high nibble preserved. |
| `+0x08`, 32 bits | `0x591d60` ORs selected bits, or ANDs their complement. | Tile flags. |
| `+0x08`, bit `0x2` | Unit placement sets it; coordinate lookup uses it to decide whether to search unit records and emits `Vehicle Bit Error` on inconsistency. | Vehicle-presence marker. |
| `+0x03` | Compared across starting locations and used to index faction tables. | Region identifier is a strong inference; generation semantics remain untraced. |

Evidence:

- [`0x590ed0`](../native/port-code-map-allocation.c) — `ev_4d8afffb48cc79eadb4b5a8f846edd253779f08ba94d897c58912a25f55e442a`
- [`0x5910b0`](../native/port-code-map-save.c) — `ev_3908bc07c956a80709ee9c94aba81870adf7a2d472caf7ed20dc31a72bbfa899`
- [`0x591130`](../native/port-code-map-load.c) — `ev_7a16b94b0f070f2abba612e46c040ad27616669e0ab69c8845a38ac00e62600e`
- [`0x591b10`](../native/port-code-tile-owner-set.c) — `ev_82f43eb70d5b12082c71e0f49c35f3c669516f9a419a441f143d73ae3533dbac`
- [`0x591d60`](../native/port-code-tile-flags-set.c) — `ev_8c71a2e07d1023dbd72be54300c7b1d668b9090e417470a6a8c726c55579208c`
- [`0x5bfe90`](../native/port-code-unit-at-coordinate.c) — `ev_d2d251ada8c49552e9a3d07889bad1bb3816f72990bcff03437acd848ae265ab`

## Vehicle layout and insertion

`0x5c03d0(designId, factionId, x, y)` returns `-1` when the existing count exceeds `0x7ff`; otherwise it takes the old count as its new ID, increments the count, initializes the record, places it, and performs further faction/map bookkeeping. The creator contains Ghidra's `s_Adding_Vehicle__v_who_v2__00691d98` string reference, corroborating the vehicle role; the exact full string bytes were not separately read in this pass. The maximum admitted instance count is therefore 2048.

| Offset within 52-byte record | Width | Observation / interpretation |
| --- | --- | --- |
| `+0x00` | signed 16-bit | X, initially `-4`, then assigned the placement X. |
| `+0x02` | signed 16-bit | Y, initially `-4`, then assigned the placement Y. |
| `+0x04` | 32-bit | Flags/state, initially zero; upkeep masks selected bits. |
| `+0x08` | 16-bit | Another flag/state word, initially zero. |
| `+0x0a` | 16-bit | Unit-design ID from creator argument. |
| `+0x0e` | 8-bit | Faction ID from creator argument. |
| `+0x10` | 8-bit | Damage accumulator (strong inference): upkeep reduces it; round processing increases it and removes exhausted vehicles. |
| `+0x11` | 8-bit | Order/state selector, initialized zero; selected values have countdown handling in upkeep. Full enum unknown. |
| `+0x2e` | signed 16-bit | Home-base candidate, initialized `-1`; creator writes same-faction base ID at creation coordinates. |
| `+0x30` | signed 16-bit | Link to previous occupant found during insertion, initially `-1`. |
| `+0x32` | signed 16-bit | Reverse link, initially `-1`; previous occupant receives new unit ID here. |

The two final fields form links among vehicles sharing coordinates. Coordinate lookup scans unit records when the presence marker permits it, then follows `+0x32` to a terminal member. Exact deletion/compaction and link repair remain untraced.

Evidence:

- [`0x5c03d0`](../native/port-code-unit-create.c) — `ev_aa72eb59bfe424ae93a178ffd8742207a01839de15976456424e845a25b33681`
- [`0x5c02d0`](../native/port-code-unit-initialize.c) — `ev_36c9d4ac3b3e48c7df84357acbbeb9a3c243d9e450effe1d90bc6bb64523610a`
- [`0x5c0080`](../native/port-code-unit-placement.c) — `ev_03fc28482af3a12e32b1ecc167e90fe26e100ecf5e8f3db97749f84cc95b3271`
- [`0x5bfe90`](../native/port-code-unit-at-coordinate.c) — `ev_d2d251ada8c49552e9a3d07889bad1bb3816f72990bcff03437acd848ae265ab`
- [`0x526030`](../native/port-code-turn-stage-526030.c) — `ev_eb8d3b5e2c6a94cdbea2e4b50b4f2e1b9b0dfeeb5bb20d20d6040d0b4df58656`

## Turn sequencing

The dispatch routine `0x5275b0` iterates faction slots 0–7 using the high byte of `0x9a64e8` as an admission bitmask. It calls faction upkeep and then routes to distinct AI/human action paths. Its decompilation contains substantial UI and exception scaffolding; the extracted call ordering is clearer than its generated local types.

Round processing `0x5258c0` includes vehicle expiration/damage work, increments `0x9a64d4`, and sets `0x9a64d8` using `0x5c89a0`, whose entire operation is `turn + *(int32*)0x94b4d0`. The increment and base-year addition are directly observed. Other round branches handle sea-level changes and scripted faction arrivals. These are part of turn advancement, not optional presentation effects.

The observed core sequence for the main, non-resume path is:

```text
round dispatch 0x5275b0
  round processing 0x5258c0
  for admitted faction slots:
    faction upkeep 0x527290
      0x5b44d0: snapshot/update faction-policy fields
      0x526030: reset vehicle turn fields and apply repair/damage logic
      0x526e70: faction economy and owned-base processing
        0x4f79c0: upkeep for each owned base
          resource calculations
          0x4ef1c0: nutrient stock / starvation / population growth
          0x4f4830: unit support shortfall handling (after turn 1)
          further base stages
      further diplomacy/economy/council stages
      clear selected owned-base flags
      settle one faction balance adjustment and clamp balance >= 0
      optional autosave 0x5abd20
    AI or human action path
```

`0x526e70` checks each base's faction byte at `base + 4`. When base upkeep returns nonzero it decrements its array index and pointer before continuing: iteration is explicitly prepared for removal/compaction. It also resets aggregates before processing bases, transfers bilateral payment values, applies selected faction economy modifiers, grants configured first-turn advances, and decrements sanction duration. The detailed semantics of all modifier flags are not established by this pass.

Evidence:

- [`0x5275b0`](../native/port-code-turn-dispatch.c) — `ev_5e015772ab532fb33788249c323009dcb725bd307f53a9825068428be1c86e95`
- [`0x5258c0`](../native/port-code-round-advance.c) — `ev_99a2e917e2c565c9c248b706e18a0c10e2bb68471560cdff5eca4adc813f6dbd`
- [`0x5c89a0`](../native/port-code-turn-to-year.c) — `ev_e62a0250d8d981c831cc843b4554f3a0a9e4d5ffca44e72da003b36ce06412f9`
- [`0x527290`](../native/port-code-turn-candidate.c) — `ev_3172cc12e0083436e06f898d5adc73a5f2ad5d14b53883cb7186573af7646cc4`
- [`0x5b44d0`](../native/port-code-turn-stage-5b44d0.c) — `ev_4afbf9de2bcbfff70f8cacb58b62d073f54189a77544632edf4e7c0b3a8c2b2e`
- [`0x526e70`](../native/port-code-turn-stage-526e70.c) — `ev_b74492945595a017d4c78741deb5e616a26ede8e6e53febdd1c89e56c428845d`
- [`0x4f79c0`](../native/port-code-base-upkeep.c) — `ev_13fcd03ce7d7d4b1d938437a69247ad55c778ab682089b5f7967ba81e099116d`
- [`0x4f4830`](../native/port-code-base-stage-4f4830.c) — `ev_66f5d26606dc9da7c8116b363bfc6847ff6d33e2666898bbf522961bea836a49`

## Base growth and starvation: behavior suitable for precise implementation

The base record begins at `0x97d040 + baseId * 308`. The examined base-upkeep pointer is a `short*` in Ghidra, so its displayed pointer arithmetic must be multiplied by two to recover byte offsets. In particular:

| Byte offset | Field | Supporting behavior |
| --- | --- | --- |
| `+0`, `+2` | X and Y, signed 16-bit | Map lookup and UI calls use these coordinates. |
| `+4` | Owning faction, 8-bit | Faction upkeep filters on it. |
| `+6` | Population, 8-bit interpreted as signed char in this decompilation | Starvation decrements; growth increments. |
| `+0x3c` | Stored nutrients, signed 32-bit | Starvation threshold and growth progress. |
| `+0xd0` | Current nutrient surplus, signed 32-bit | Added to stock and used for low-nutrient warnings. |

The string references `STARVE`, `POPULATIONLIMIT`, and `LOWNUTRIENT` corroborate the field meanings. The normal path of `0x4ef1c0` behaves as follows (this transcription deliberately leaves untraced rule predicates explicit):

```c
if (storedNutrients < 0) {
    if (starvation_processing_allowed) {
        showStarvation();
        if (baseCanLosePopulation || population > 1) {
            population--;
            if (population < 1) {
                removeBase();
                return BASE_REMOVED;
            }
        }
    }
    storedNutrients = nutrientSurplus;
    return BASE_RETAINED;
}

threshold = growthCostFactor(faction, base) * (population + 1);

// Separate accelerated-growth branch exists, with its own gates.
if (acceleratedGrowthConditions && populationCapsAllowGrowth) {
    if (population < 127) population++;
    recomputeBaseResources();
    storedNutrients = min(storedNutrients, threshold);
    return BASE_RETAINED;
}

if (storedNutrients >= threshold) {
    if (growthRating < -2) {
        storedNutrients = threshold;
        return BASE_RETAINED;
    }
    if (populationCapsAllowGrowth) {
        storedNutrients = 0;
        population++;
        recomputeBaseResources();
    } else {
        storedNutrients = growthCostFactor(faction, base) * (population + 1) / 2;
        showPopulationLimit();
    }
}
storedNutrients += nutrientSurplus;
// Then evaluate warnings, including projected nutrient shortage.
```

This ordering prevents a common incompatible implementation: adding surplus first and immediately triggering growth in the same call. Normal growth discards the old stored amount, rather than preserving arbitrary overflow. After growth, resource recomputation can change the surplus before it is added. The accelerated-growth branch returns earlier and follows different nutrient handling.

The growth-factor routine `0x4e4430(faction, 0, base)` is also recovered. It starts with 10 for the branch selected by the low-byte faction bitmask; the alternate branch derives a value from a difficulty table and two conditions. It scales by the rule at `0x949750`, applies 80%/90% scaling for values 0/1 of `0x94a2a0`, then adjusts by a faction rating at `0x96cc44 + faction*0x20cc`. Two base predicates each add 2 to that rating. After clamping the adjusted rating to [-2,5], it returns `((10 - rating) * scaledFactor + 9) / 10` using integer arithmetic. The rating's interpretation as growth is supported by the caller; individual base predicates still need symbolic mapping.

Evidence:

- [`0x4ef1c0`](../native/port-code-base-stage-4ef1c0.c) — `ev_a14415758bace350169843a4562ef9291d5033ca42a6d0dc047256c9879f87f7`
- [`0x4e4430`](../native/port-code-growth-cost-factor.c) — `ev_4314ac9386434d96365d29d806140284cd98aeab82a03b4b4eedc7f084d8fff4`
- [`0x4f79c0`](../native/port-code-base-upkeep.c) — `ev_13fcd03ce7d7d4b1d938437a69247ad55c778ab682089b5f7967ba81e099116d`

## Coverage and remaining requirements

| Question | Status | Remaining boundary |
| --- | --- | --- |
| Tile size, dimensions, indexing, serialization lengths | Answered for examined current executable paths | Tile bitfield meanings, parity checks, generation, yield functions, and secondary-buffer semantics remain incomplete. |
| Vehicle stride, creation limit, coordinates, owner, design and stack fields | Answered for creation/placement | Complete orders enum, movement cost, combat, transport, deletion/compaction and AI require separate traces. |
| Base stride, coordinates, population and nutrient fields | Answered for upkeep/growth | Full 308-byte schema and all resource stages remain incomplete. |
| Round/faction/base upkeep chain | Answered as observed call structure | Network/simultaneous-turn variants and every stage's semantics remain incomplete. |
| Nutrient growth/starvation ordering | Substantially answered | Population-cap facility IDs, special-project predicates, rule labels, and runtime edge-case parity still require validation. |
| Full original-mechanics browser port | Not established by this evidence pass | A complete port still needs broader reverse engineering and differential validation against original gameplay. |

No static result here proves a runtime state transition occurred. The evidence is sufficient to implement these identified data relationships and to construct future compatibility tests, but it is not evidence that a browser game already matches the original.
