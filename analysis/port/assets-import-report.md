# Local rules and asset import

Implemented [tools/import_game.py](../../tools/import_game.py). It reads the installed game without modifying it and generates local browser data in `public/game-data`. The output directory contains a `.gitignore` excluding generated source-derived content. Executables are inventoried but never copied, and saves/transient session files are excluded.

Repeat the import with:

```sh
python3 tools/import_game.py "/Users/carte/Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri"
```

Options: `--output PATH`, `--force`, and `--no-copy-audio`. Python 3.10+ and Pillow are required; this run used the existing Pillow 12.1.1. Unchanged media is reused only when its source and output hashes match. A damaged output is regenerated. No prior output files are deleted.

| Output | Contents |
|---|---|
| `manifest.json` | Importer/Pillow versions, importer SHA-256, product hashes, source identities, counts, failures, limitations |
| `rules.json` | `versions.alpha` and `versions.alphax`; ordered sections, exact source text, line/byte locations, typed technology/component/unit/facility/terrain tables; one shipped `scenarioOverrides` document |
| `factions.json` | 14 registered factions, 2 unregistered bonus factions (`BRIAN`, `SID`), and the original faction template document |
| `assets.json` | 1,632 resource records with original relative path, source URI, SHA-256, size, format/decoder status, and generated URL where available |
| `images/` | All **760 PCX files** converted to PNG, preserving palettes and decoded RGBA pixels |
| `media/` | **354 WAV + 154 MP3 files** copied byte for byte |
| `preview.html` | Filterable local image/audio preview with original-source links |

URLs in resource JSON are relative to `/game-data/`. Original paths with spaces are URL-encoded in `url`; `outputPath` retains the filesystem spelling. `portraitAsset` is retained for the initial integration schema but points to the entire faction sheet, as explicitly recorded in `portraitAssetNote`; `factionAtlasAsset` is the accurate alias. No leader-portrait crop is inferred.

`rules.json` preserves every raw line even when no semantics were assigned. Technology prerequisites distinguish `None`/`nil`, `Disable`/`no`, unresolved strings and resolved technology IDs. Leading-zero ability/effect flags remain strings. Source-order indices are zero-based and are not asserted to be native engine IDs. Semicolons inside facility or ability descriptions remain literal text; only numeric parameter blocks split trailing comments. This preserves the AI fields following descriptions such as `Naval Movement +2; Naval Bases`.

| Ordered table | Alpha | Alien Crossfire |
|---|---:|---:|
| Technology rows | 89 | 89 |
| Technology rows without disabled prerequisites | 77 | 86 |
| Chassis | 9 | 9 |
| Reactors | 4 | 4 |
| Weapon/package rows | 21 | 26 |
| Armor rows | 10 | 14 |
| Ability rows | 24 | 29 |
| Declared unit templates | 14 | 23 |
| Facility/project rows, including placeholders | 71 | 133 |

One shipped color-blind image, `Color Blind Palette/hof_5_3.pcx.pcx`, contains an RLE run crossing a scanline. Pillow rejects that stream. The importer has a narrow fallback for 8-bit single-plane PCX with a valid 256-color palette: it requires the entire stream to decode to exactly the declared raster, with no missing or extra bytes and no padded/truncated pixels. This file produces exactly 240×119 pixels and reaches the palette boundary precisely. The record identifies `validated-linear-pcx-rle`, one crossing run, and the source/output hashes. This compatibility interpretation is not claimed to be a comparison with native game rendering.

Validation is retained in [assets-validation.json](assets-validation.json) and [assets-tests.txt](assets-tests.txt):

- Five focused tests pass: prerequisite/special-token parsing, literal semicolons and AI columns, exact source spans/repeated sections, complete import fidelity/exclusions/cache repair, exact-raster RLE fallback, and source-directory protection are covered across those tests.
- All **20 parsed source documents** round-trip byte for byte, including every retained line/byte span.
- All **1,268 generated media hashes** match their manifest entries. PNG writes are reopened and compared by palette and RGBA-pixel digest; audio copies match the source digest.
- A second import reuses all 1,268 media outputs and yields an identical manifest hash.
- All **24 source files** hashed in the earlier asset investigation retain their original SHA-256 values.
- Zero import failures. Four save-related files and 47 transient/session files were excluded.

Undecoded resources remain explicit: **140 CVR** voxel files, **61 WVE** movie files, **37 FLC** animation files, **8 AMB** scheduling files, **4 MP** maps and **16 SC** scenarios are inventoried with source hashes and header bytes. No geometry, video codec, animation timing, audio scheduling or binary state layout is invented. Transparency/color-key behavior and palette cycling require engine evidence beyond lossless PCX conversion. This importer supplies game content and declared parameters; it does not establish complete gameplay mechanics or a functioning game port.
