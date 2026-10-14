# Shipped .MP map container and browser reader

The four installed maps are standalone **TERRANMAP version 5** files. Their prefix, map header, tile records, and secondary buffer are supported by the original writer/loader code and exact on-disk byte counts. [src/map.mjs](../../src/map.mjs) reads this verified layout in Node or a browser without transforming the stored map.

This is a disk-format reader, not a completed native map loader or terrain renderer. It preserves all 44 bytes of every tile and exposes only dimensions, record counts, map/tile flags, and the low faction nibble. No terrain names, graphics interpretation, neighbor ordering, or coordinate-parity rule are invented.

## Supporting code and exact evidence

Target executable: installed `terranx.exe`, SHA-256 `573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4`; REA 6.5.0 with Ghidra 12.1.4. The new [eight-record evidence bundle](maps-evidence-bundle.json) and [index](maps-evidence-index.json) retain complete results. These are static observations, not observed gameplay execution.

| Operation | What it establishes | Evidence |
| --- | --- | --- |
| [File writer `0x5a9b20`](maps-file-save.c) | Writes `TERRANMAP`, writes a 4-byte integer with value 5, then calls `0x5a9280(file, 1, 0)`. | `ev_5d88a3328ccd7912e75f84e141d4c6a64b707d41577b81ed9855acd35ef98404` |
| [Signature writer `0x57d240`](../native/code-save-signature.c), reused | Writes string bytes including the terminating NUL, then byte `0x1a`. | `ev_02b028eaa39c5810f1338aeacae15c97071cc05126e54836380d20a3fc21daea` |
| [File reader `0x5a9c10`](maps-file-load.c) | Chooses `TERRANMAP` for the standalone-map path, reads a 4-byte version, and admits versions at least 5 before calling `0x5a9280(file, 0, 0)`. | `ev_0e340fb7c87af1abb56f18b024df3b8eb1b8a88b6ed5397e7ee45d0df3bfdf44` |
| [Signature reader `0x57d1f0`](maps-signature-reader.c) | Consumes bytes through NUL and consumes one more byte. The writer and fixtures establish that final byte as `0x1a`; the native reader does not explicitly validate its value here. | `ev_b8b5f0e512e27e6871255080dd140c9ee106da421eb1ca7c41454b32b71ac00b` |
| [Container transfer `0x5a9280`](maps-container-loader.c) | When its third argument is zero, goes directly to map read/write without transferring saved-game faction blocks. | `ev_2a3ac535463d0b2f659333a31c9793ec6452a4a024c50dbc267daed68f12304c` |
| [Map writer `0x5910b0`](../native/port-code-map-save.c), reused | Writes `0xaa4` bytes from `0x949870`, then `tileCount * 0x2c` bytes, then the secondary buffer. | `ev_3908bc07c956a80709ee9c94aba81870adf7a2d472caf7ed20dc31a72bbfa899` |
| [Map reader `0x591130`](../native/port-code-map-load.c), reused | Reads those same blocks, clears persisted pointers, reallocates the two buffers, and invokes a post-read routine. | `ev_7a16b94b0f070f2abba612e46c040ad27616669e0ab69c8845a38ac00e62600e` |
| [Map allocator `0x590ed0`](../native/port-code-map-allocation.c), reused | Recomputes record count and secondary-buffer dimensions from width and height. | `ev_4d8afffb48cc79eadb4b5a8f846edd253779f08ba94d897c58912a25f55e442a` |

The exact installed-map byte observations, complete file hashes, tile-buffer hashes, and independent samples are in [maps-byte-observations.json](maps-byte-observations.json). That file is ordinary Python byte inspection, explicitly separate from REA Evidence.

## Container layout

All numeric values below are little-endian. The original target is x86, and the observed four-byte encodings corroborate the byte order.

| Absolute file offset | Length | Meaning |
| --- | --- | --- |
| `0x00` | 9 | ASCII `TERRANMAP` |
| `0x09` | 1 | NUL |
| `0x0a` | 1 | `0x1a` |
| `0x0b` | 4 | Version, 5 in every installed fixture |
| `0x0f` | `0xaa4` (2724) | Map header |
| `0xab3` (2739) | `tileCount * 44` | Contiguous raw tile records |
| `0xab3 + tileCount * 44` | `secondaryBytes` | Secondary buffer, semantics not yet decoded |

Header offsets below are relative to absolute offset `0x0f`:

| Header offset | Original memory address | Field |
| --- | --- | --- |
| `+0x00` | `0x949870` | Width, signed 32-bit |
| `+0x04` | `0x949874` | Height, signed 32-bit |
| `+0x14` | `0x949884` | Stored tile count |
| `+0x1c` | `0x94988c` | Map flags, exposed as unsigned 32-bit |
| `+0xa24` | `0x94a294` | Stored coarse width |
| `+0xa28` | `0x94a298` | Stored coarse height |
| `+0xa2c` | `0x94a29c` | Stored secondary-buffer byte count |
| `+0xa9c` | `0x94a30c` | Persisted native tile-buffer pointer; never used as a browser pointer |
| `+0xaa0` | `0x94a310` | Persisted native secondary-buffer pointer; never used as a browser pointer |

The allocator's integer calculations are:

```text
rowStride = width / 2
tileCount = rowStride * height
coarseWidth = (width + 4) / 5
coarseHeight = (height + 4) / 5
secondaryBytes = ((coarseWidth + 1) / 2) * coarseHeight
```

All divisions truncate. The reader admits positive even widths and positive heights. Even width is a conservative reader constraint supported by the four fixtures and the half-width storage; this pass did not establish that the native UI can never create odd widths.

| Fixture | File bytes | Dimensions | Tiles | Tile bytes | Secondary bytes |
| --- | ---: | --- | ---: | ---: | ---: |
| `planet.MP` | 143667 | 80 × 80 | 3200 | 140800 | 128 |
| `xplanet.MP` | 143667 | 80 × 80 | 3200 | 140800 | 128 |
| `planetx.MP` | 363525 | 128 × 128 | 8192 | 360448 | 338 |
| `xplanetx.MP` | 363525 | 128 × 128 | 8192 | 360448 | 338 |

In each case, `15 + 2724 + tileBytes + secondaryBytes` equals the complete file length. The `x` variants are not treated as interchangeable: their complete file and tile-buffer digests differ.

## Exposed tile fields and preserved bytes

Each record's raw 44 bytes remain available. The reader additionally exposes:

- `flags`: unsigned 32-bit value at record byte offset `+8`. The original [flag setter `0x591d60`](../native/port-code-tile-flags-set.c) ORs or clears selected masks there; Evidence `ev_8c71a2e07d1023dbd72be54300c7b1d668b9090e417470a6a8c726c55579208c`.
- `factionNibble`: `raw[2] & 0x0f`. The original [setter `0x591b10`](../native/port-code-tile-owner-set.c) replaces only these bits; unit placement passes the vehicle's faction to it. Evidence `ev_82f43eb70d5b12082c71e0f49c35f3c669516f9a419a441f143d73ae3533dbac` and [placement Evidence](../native/port-code-unit-placement.c) `ev_03fc28482af3a12e32b1ecc167e90fe26e100ecf5e8f3db97749f84cc95b3271`.

The numeric nibble is returned unchanged. For example, the sampled tiles have value 15; this module does not rename it to an unproven semantic state. No remaining bytes or bits are discarded.

The native loader changes a loaded map before gameplay: after transferring it, `0x5a9c10` zeroes tile byte `+4`, clears bits `0x1` and `0x2` at `+8`, clears base/vehicle counts, and invokes another routine. `0x591130` also invokes `0x592940`. The browser reader applies none of these changes, so its raw bytes and flags describe the **stored file**. A future gameplay loader must reproduce or deliberately account for these additional steps.

## Reader API

```js
import { parseMap } from '/src/map.mjs';

const response = await fetch('/game-data/maps/planet.MP');
if (!response.ok) throw new Error(`Map request failed: ${response.status}`);
const map = parseMap(await response.arrayBuffer());

console.log(map.width, map.height, map.tileCount); // 80, 80, 3200
const tile = map.tileAtIndex(1600);
console.log(tile.flags, tile.factionNibble, tile.raw.length); // 1048576, 15, 44
```

`parseMap` accepts an `ArrayBuffer` or any `ArrayBuffer` view, including a Node `Buffer` or a view with a nonzero byte offset. It copies the selected input bytes once. Returned `rawBytes`, `rawHeader`, `rawTiles`, and `rawSecondary` share that owned snapshot; they are ordinary mutable typed arrays. Later changes to the caller's input do not affect the parsed result.

`tileAtIndex` takes a zero-based **storage index**, not an X/Y coordinate. Coordinate parity was not proven in this scope, so the API avoids silently aliasing coordinate pairs through `x >> 1`.

The native reader's version gate accepts versions at least 5, but only version 5 is proven by shipped fixtures and the writer. The browser reader therefore rejects other versions. It also rejects inconsistent stored counts, overflowed/invalid dimensions, missing bytes, and trailing unrecognized payloads. These checks are deliberately stricter than the original allocator, which recomputes selected header fields.

## Fixtures and validation

The four files are copied intact to generated, gitignored `public/game-data/maps/`. Its [index](../../public/game-data/maps/index.json) provides local URLs and SHA-256 values. Recreate these files and the index from an existing installation with [tools/import_maps.mjs](../../tools/import_maps.mjs):

```sh
node tools/import_maps.mjs "/path/to/Sid Meier's Alpha Centauri"
```

For the installation analyzed here, the repeatable command is:

```sh
node tools/import_maps.mjs "/Users/carte/Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri"
```

The importer reads exactly `planet.MP`, `planetx.MP`, `xplanet.MP`, and `xplanetx.MP` from the installation's `maps` directory. It validates all four with `parseMap` before replacing any generated files, hashes the same byte snapshots it copies, and publishes `index.json` after the maps. The output is fixed beneath this project; redirected output directories/files, sources resolving outside the installation, and overlapping source/output directories are rejected. Reimporting reproduces the same index. No original files are modified. The exact original paths and independently recorded hashes remain in the byte-observation artifact.

Run:

```sh
node --test tests/map.test.mjs
```

The recorded run passed **17 tests, zero failures, zero skips**: all four source and tile-array hashes, decoded dimensions/counts, sample field values, last-record bounds, fetch-style buffers, nonzero-offset views, input isolation, unsupported versions, damaged signatures, truncation/trailing bytes, count disagreement, unsafe dimensions, and invalid indexes. Importer integration tests also verify the exact four-file whitelist, source preservation, index hashes, deterministic reimport, validation before replacement, output-directory and output-file symlink rejection, and source/output overlap rejection. The importer was then run against the installed game; all four copied hashes matched the earlier byte observations. When original map fixtures are absent in another checkout, fixture-dependent tests explicitly skip; that is not evidence of a successful map decode.

The owned REA session was closed after evidence export. No application, shared progress report, other asset outputs, or original game data was changed by this scope.
