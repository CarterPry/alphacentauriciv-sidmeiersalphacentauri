# Bounded combat-mechanics evidence

REA recovered a central combat function and concrete round/damage arithmetic from the installed expansion executable. This is a narrow static result, not a complete combat specification or a parity claim.

Target: `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`. Provider: Ghidra 12.1.4 through REA 6.5.0. The independent session was exported and closed; installed bytes were unchanged.

## Identification

`Battle Resolution!` at VA `0x68a108` has an instruction xref at `0x507957`; `COMBATWIN` at `0x68a240` has one at `0x50b034`. Both resolve to **`0x506af0`**, body `0x506af0–0x50b892`, 19,875 bytes. It selects a defending unit, computes two strengths via `0x501da0`, changes damage bytes, and dispatches combat reports. Direct caller `0x506a60` derives target coordinates from the source unit and a direction before invoking it. Together these are stronger identification evidence than a combat-related string alone.

The `BATTLEDAMAGE` literal had **no resolved xrefs** in this analysis; it was not used to substantiate the findings.

## Observed ordinary round branch

Define `A` and `D` as the two strength outputs passed back by `0x501da0` and subsequently adjusted in the caller. At **`0x5090d7`**, the loop first checks that both participating units retain positive health. At **`0x5091a5–0x5091d5`**, the instructions implement:

```text
attack_draw  = 0 if A <= 1 else rand() % A
defense_draw = 0 if D <= 1 else rand() % D

if attack_draw <= defense_draw:
    attacker.damage += attacker_step
else:
    defender.damage += defender_step
```

The branch is a signed `JLE` at `0x5091d5`, so **ties damage the attacker**. The instructions call the RNG twice when both strengths exceed one. No single `rand() % (A + D)` draw occurs in this round branch.

Damage is stored as a byte at **`0x952838 + 0x34 × unit_index`**. The defender update is at `0x5091e4–0x5091ee`; the attacker update is at `0x509632–0x50963a`. These stores precede the corresponding animation/redraw calls and the next health check. Other branches can end combat or handle retreat; this ordering does not describe every exit path.

The initial health calculation uses a template byte at `0x9ab88f + 0x34 × template_index`, clamped to 1–100 and multiplied by ten, minus accumulated damage. A template type byte at `0x9ab892 + 0x34 × template_index` equal to 12 instead gives maximum health one. The damage step is normally one. If the selected weapon's signed attack byte or armor's signed defense byte is negative, each side's step becomes that side's template byte at `0x9ab88f`. ALPHAX describes negative weapon/armor ratings as psi; the template-byte interpretation as reactor rating is consistent with this arithmetic, but its complete producer chain was not traced in this pass.

## Observed RNG

The called routine **`0x64601d`** is recognized by Ghidra as `_rand`; its body also independently proves:

```text
state = (state * 0x343fd + 0x269ec3) modulo 2^32
return (state >> 16) & 0x7fff
```

The state is at offset `+0x14` of a context returned by `0x6491c3`. This pass did not trace initial seeding, multiplayer synchronization, or intervening RNG consumers. Modulo results should not be assumed perfectly uniform, and the two consecutive calls are generated from the same state sequence.

## Observed artillery arithmetic

The `param_5 == 1` branch walks a target stack. For each eligible target it recomputes strengths, then at **`0x5085e5–0x508642`** uses rule globals:

- `N = [0x949748]`, `Q = [0x94974c]`: the numerator and denominator loaded from ALPHAX `#RULES`, line 27, currently `3,2`.
- With normal nonnegative strengths and no multiplication overflow: `M = clamp(trunc(N*A / clamp(Q*D, 1, 9999999)) + 1, 1, 999)`.
- Candidate damage is zero for `M <= 1`; otherwise `rand() % M`.

At **`0x50876a–0x5087ec`**, the candidate is reduced until it leaves at least the configured minimum remaining health. The floor calculation is `trunc(((100-C)*maximum_health + 99)/100)`, equivalent to ceiling for ordinary nonnegative values. The code decrements candidate damage while `remaining_health - candidate < floor`; only then adds the resulting candidate to the target damage byte.

`C` is selected from `0x949840`, `0x949844`, or `0x949848`. The existing rules loader binds those globals to ALPHAX lines 87–89, whose declared caps are 50% in base/bunker, 99% in open terrain, and 100% at sea. The branch chooses the first global for a base or tile bit `0x800`; otherwise it chooses between the latter two using a chassis-class byte. All special eligibility cases and the semantic identity of every tested tile flag remain outside this pass.

For example, when `maximum_health=10`, current damage is zero, and `C=50`, the remaining-health floor is five. A candidate seven is reduced to five. This example illustrates the recovered arithmetic; it is not a runtime combat test.

## Evidence and limits

Complete raw results, pseudocode, and machine instructions are in `analysis/native/combat-*`. The exported [REA bundle](combat-evidence-bundle.json) and [evidence index](combat-evidence-index.json) retain IDs, hashes, parameters, and target identity. [Rule excerpts](combat-rule-excerpts.json) preserve exact source lines and digest. Relevant anchors:

| Evidence | Exact ID |
| --- | --- |
| Battle-resolution string xref | `ev_fe8bd35a6bb1c62dcead7c450d89ca305beb21d30dfad352ad1b696d2f2a8e45` |
| Combat-win string xref | `ev_4200f60e93277fd83aa09fcd5db55abea6fd6432ae5fd61cbc2d29b10a7bb04c` |
| Full combat pseudocode | `ev_bd764bd4a141f85454a8e46c0009a55b7720ff8a501f32396ce304a27a323c16` |
| Full combat machine instructions | `ev_90f7e957c1d2e758f05603b15f8c4c0357ddce136d5bedddabaf6d56564ddb8a` |
| Strength computation | `ev_c56faab4dffb476d23eab7cb510b2a171e7f42a6631349c40c0fbb845872c322` |
| RNG body | `ev_1e88dc7ecc27cbd89a282a7e4d1919c4441741f60f005fbea3df7dd436182b80` |
| Direction/target caller | `ev_78e32b5bf5761a61f800ac1a7c383a3c508496fe783e9700d67130a14d0010dd` |
| Previously retained RULES loader | `ev_2b4906b7608d882042b9799311da49784169b1ae811e49afde97b1343b78d186` |

The strength function applies numerous integer percentage modifiers and calls further morale/weapon/armor helpers; its complete decision tree has not been reconstructed. Prototype labels, unresolved structure types, retreats, promotions, collateral damage, diplomacy, network behavior, and seed handling prevent claiming a standalone faithful combat implementation. No executable was patched and no battle was executed by this investigation.
