#!/usr/bin/env python3
"""Import a locally installed Alpha Centauri into inspectable browser data.

Requires Python 3.10+ and Pillow. The source installation is opened read-only.
Run: python3 tools/import_game.py '/path/to/Sid Meier\'s Alpha Centauri'

The importer preserves text, source order, line/byte locations and hashes. Typed
fields follow the shipped table documentation; they are not a reimplementation
of the engine. Array indices are zero-based source order, not claimed game IDs.
"""

from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import html
import json
from pathlib import Path
import re
import shutil
import struct
import sys
import tempfile
from urllib.parse import quote

SCHEMA_VERSION = 1
IMPORTER_VERSION = "1.0.0"
SECTION = re.compile(r"^#([A-Z][A-Z0-9_]*)\s*(?:;.*)?$")
INTEGER = re.compile(r"^[+-]?\d+$")
TRANSIENT_SUFFIXES = {".tmp", ".sfk", ".dmp"}
EXECUTABLE_SUFFIXES = {".exe", ".dll", ".sys", ".icd"}
UNDECODED_SUFFIXES = {".cvr", ".wve", ".flc", ".amb", ".mp", ".sc"}
MEDIA_SUFFIXES = {".wav", ".mp3"}
EXCLUDED_NAMES = {"logfile.txt", "ip.cfg", "steam_autocloud.vdf"}


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def atomic_bytes(path: Path, content: bytes) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(dir=path.parent, prefix=".import-", delete=False) as f:
        temporary = Path(f.name)
        f.write(content)
    try:
        temporary.replace(path)
    finally:
        temporary.unlink(missing_ok=True)


def write_json(path: Path, data: object) -> None:
    atomic_bytes(path, (json.dumps(data, ensure_ascii=False, indent=2) + "\n").encode("utf-8"))


def source_identity(path: Path, root: Path) -> dict:
    return {"path": path.relative_to(root).as_posix(), "sha256": digest(path),
            "sizeBytes": path.stat().st_size, "sourceUri": path.as_uri()}


def source_fields(raw: str, section: str | None) -> tuple[list[str], str | None]:
    # Semicolons occur INSIDE facility/ability descriptions and must survive.
    # Only the documented numeric parameter blocks use a semicolon comment.
    comment = None
    value = raw.strip()
    if section in {"RULES", "WORLDBUILDER"}:
        value, sep, tail = value.partition(";")
        comment = tail.strip() if sep else None
    fields = [f.strip() for f in value.split(",")]
    if fields and fields[-1].startswith(";"):
        comment = fields.pop()[1:].strip()
    return fields, comment


def parse_document(path: Path, root: Path) -> dict:
    data = path.read_bytes()
    # A one-byte mapping preserves byte offsets. Undefined cp1252 bytes are
    # retained via a Latin-1 fallback rather than silently replaced.
    try:
        text = data.decode("cp1252")
        encoding = "windows-1252"
    except UnicodeDecodeError:
        text = data.decode("latin-1")
        encoding = "iso-8859-1"
    sections, preamble = [], []
    current = None
    byte_offset = 0
    for line_number, raw_bytes in enumerate(data.splitlines(keepends=True), 1):
        raw = raw_bytes.decode("cp1252" if encoding == "windows-1252" else "latin-1").rstrip("\r\n")
        marker = SECTION.fullmatch(raw.strip())
        if marker:
            if current:
                current["lineEnd"] = line_number - 1
            current = {"name": marker[1], "ordinal": len(sections),
                       "lineStart": line_number, "lineEnd": line_number,
                       "byteStart": byte_offset, "records": []}
            sections.append(current)
        else:
            stripped = raw.strip()
            kind = ("blank" if not stripped else "comment" if stripped.startswith(";")
                    else "directive" if stripped.startswith("#") else "data")
            fields, comment = source_fields(raw, current["name"] if current else None)
            record = {"line": line_number, "byteStart": byte_offset,
                      "byteEnd": byte_offset + len(raw_bytes), "raw": raw,
                      "kind": kind, "fields": fields if kind == "data" else [],
                      "comment": comment if kind == "data" else None}
            (current["records"] if current else preamble).append(record)
        if current:
            current["lineEnd"] = line_number
        byte_offset += len(raw_bytes)
    return {"source": source_identity(path, root), "encoding": encoding,
            "rawText": text, "preamble": preamble, "sections": sections}


def rows(document: dict, section_name: str) -> list[dict]:
    # Repeated #END sections remain in the ordered document. A typed table
    # deliberately selects only its first named section.
    section = next((s for s in document["sections"] if s["name"] == section_name), None)
    return [r for r in section["records"] if r["kind"] == "data"] if section else []


def field(record: dict, index: int, default: str = "") -> str:
    return record["fields"][index] if index < len(record["fields"]) else default


def integer(value: str) -> int | None:
    return int(value) if INTEGER.fullmatch(value.strip()) else None


def scalar(value: str) -> int | str:
    parsed = integer(value)
    return parsed if parsed is not None else value


def base_row(index: int, record: dict) -> dict:
    return {"index": index, "line": record["line"], "raw": record["raw"],
            "fields": record["fields"]}


def prerequisite(value: str, technologies: dict[str, int]) -> dict:
    lowered = value.casefold()
    if lowered in {"none", "nil"}:
        return {"kind": "none", "raw": value}
    if lowered in {"disable", "no"}:
        return {"kind": "disabled", "raw": value}
    if not value:
        return {"kind": "unknown", "raw": value}
    return {"kind": "technology", "raw": value, "id": value,
            "index": technologies.get(lowered), "resolved": lowered in technologies}


def signed_modifier(value: str) -> dict:
    match = re.fullmatch(r"([+-]+)([A-Z]+)", value)
    if not match:
        return {"raw": value, "parsed": False}
    return {"raw": value, "parsed": True, "effect": match[2],
            "amount": match[1].count("+") - match[1].count("-")}


def parse_rules(path: Path, root: Path) -> dict:
    document = parse_document(path, root)
    tables = {}
    tech_rows = rows(document, "TECHNOLOGY")
    tech_index = {field(r, 1).casefold(): i for i, r in enumerate(tech_rows)}
    preq = lambda value: prerequisite(value, tech_index)
    tables["technologies"] = []
    for i, r in enumerate(tech_rows):
        prerequisites = [preq(field(r, n)) for n in (6, 7)]
        tables["technologies"].append({**base_row(i, r), "name": field(r, 0), "id": field(r, 1),
            "aiWeights": dict(zip(("military", "knowledge", "infrastructure", "colonization"),
                                  (integer(field(r, n)) for n in range(2, 6)))),
            "prerequisites": prerequisites, "flags": field(r, 8),
            "enabled": all(p["kind"] != "disabled" for p in prerequisites)})
    tables["ruleParameters"] = [{**base_row(i, r),
        "values": [scalar(f) for f in r["fields"] if f], "description": r["comment"]}
        for i, r in enumerate(rows(document, "RULES"))]
    tables["worldBuilderParameters"] = [{**base_row(i, r),
        "values": [scalar(f) for f in r["fields"] if f], "description": r["comment"]}
        for i, r in enumerate(rows(document, "WORLDBUILDER"))]
    tables["terrain"] = [{**base_row(i, r), "name": field(r, 0),
        "prerequisite": preq(field(r, 1)), "seaName": field(r, 2),
        "seaPrerequisite": preq(field(r, 3)), "turns": integer(field(r, 4)),
        "orderText": field(r, 5), "orderLetter": field(r, 6), "shortcutDescription": field(r, 7)}
        for i, r in enumerate(rows(document, "TERRAIN"))]
    tables["resourceInfo"] = [{**base_row(i, r), "name": field(r, 0),
        "nutrients": scalar(field(r, 1)), "minerals": scalar(field(r, 2)),
        "energy": scalar(field(r, 3)), "unusedField": scalar(field(r, 4))}
        for i, r in enumerate(rows(document, "RESOURCEINFO"))]
    size_rows = rows(document, "WORLDSIZE")
    tables["worldSizeCount"] = integer(field(size_rows[0], 0)) if size_rows else None
    tables["worldSizes"] = [{**base_row(i, r), "name": field(r, 0),
        "firstDimension": integer(field(r, 1)), "secondDimension": integer(field(r, 2))}
        for i, r in enumerate(size_rows[1:])]
    tables["chassis"] = [{**base_row(i, r), "name": field(r, 0),
        "names": [{"name": field(r, n), "grammar": field(r, n + 1)} for n in (0, 2, 4, 6, 15, 17)],
        "speed": integer(field(r, 8)), "triad": integer(field(r, 9)),
        "range": integer(field(r, 10)), "missile": integer(field(r, 11)),
        "cargo": integer(field(r, 12)), "cost": integer(field(r, 13)),
        "prerequisite": preq(field(r, 14))} for i, r in enumerate(rows(document, "CHASSIS"))]
    tables["reactors"] = [{**base_row(i, r), "name": field(r, 0), "shortName": field(r, 1),
        "power": integer(field(r, 2)), "prerequisite": preq(field(r, 3))}
        for i, r in enumerate(rows(document, "REACTORS"))]
    tables["weapons"] = [{**base_row(i, r), "name": field(r, 0), "shortName": field(r, 1),
        "offense": integer(field(r, 2)), "mode": integer(field(r, 3)),
        "cost": integer(field(r, 4)), "icon": integer(field(r, 5)),
        "prerequisite": preq(field(r, 6))} for i, r in enumerate(rows(document, "WEAPONS"))]
    tables["armor"] = [{**base_row(i, r), "name": field(r, 0), "shortName": field(r, 1),
        "defense": integer(field(r, 2)), "mode": integer(field(r, 3)),
        "cost": integer(field(r, 4)), "prerequisite": preq(field(r, 5))}
        for i, r in enumerate(rows(document, "DEFENSES"))]
    tables["abilities"] = [{**base_row(i, r), "name": field(r, 0),
        "cost": integer(field(r, 1)), "prerequisite": preq(field(r, 2)),
        "abbreviation": field(r, 3), "flags": field(r, 4), "description": field(r, 5)}
        for i, r in enumerate(rows(document, "ABILITIES"))]
    unit_rows = rows(document, "UNITS")
    tables["unitCount"] = integer(field(unit_rows[0], 0)) if unit_rows else None
    tables["units"] = [{**base_row(i, r), "name": field(r, 0),
        "chassis": field(r, 1), "weapon": field(r, 2), "armor": field(r, 3),
        "plan": integer(field(r, 4)), "cost": integer(field(r, 5)),
        "carry": integer(field(r, 6)), "prerequisite": preq(field(r, 7)),
        "icon": integer(field(r, 8)), "abilityFlags": field(r, 9)}
        for i, r in enumerate(unit_rows[1:])]
    tables["facilities"] = [{**base_row(i, r), "name": field(r, 0),
        "cost": integer(field(r, 1)), "maintenance": integer(field(r, 2)),
        "prerequisite": preq(field(r, 3)), "legacyFreeField": field(r, 4),
        "description": field(r, 5),
        "aiWeights": dict(zip(("aggression", "military", "knowledge", "infrastructure", "colonization"),
                              (integer(field(r, n)) for n in range(6, 11))))
                     if len(r["fields"]) >= 11 else None}
        for i, r in enumerate(rows(document, "FACILITIES"))]
    tables["citizens"] = [{**base_row(i, r), "name": field(r, 0), "pluralName": field(r, 1),
        "prerequisite": preq(field(r, 2)), "obsolete": preq(field(r, 3)),
        "economy": integer(field(r, 4)), "psych": integer(field(r, 5)),
        "research": integer(field(r, 6)), "extraFields": r["fields"][7:]}
        for i, r in enumerate(rows(document, "CITIZENS"))]
    for section_name, table_name in (("FACTIONS", "factions"), ("NEWFACTIONS", "expansionFactions"),
                                     ("CUSTOMFACTIONS", "customFactions")):
        tables[table_name] = [{**base_row(i, r), "file": field(r, 0), "key": field(r, 1)}
                             for i, r in enumerate(rows(document, section_name))]
    social = rows(document, "SOCIO")
    tables["socialEffectNames"] = social[0]["fields"] if social else []
    tables["socialCategories"] = social[2]["fields"] if len(social) > 2 else []
    # Preserve order without assigning category boundaries not expressed in
    # the individual rows. The engine/reimplementation must interpret them.
    tables["socialModels"] = [{**base_row(i, r), "name": field(r, 0),
        "prerequisite": preq(field(r, 1)),
        "modifiers": [signed_modifier(f) for f in r["fields"][2:] if f]}
        for i, r in enumerate(social[3:])]
    document["tables"] = tables
    document["warnings"] = []
    if tables["unitCount"] != len(tables["units"]):
        document["warnings"].append("Declared UNITS count differs from parsed rows.")
    if tables["worldSizeCount"] != len(tables["worldSizes"]):
        document["warnings"].append("Declared WORLDSIZE count differs from parsed rows.")
    for technology in tables["technologies"]:
        for p in technology["prerequisites"]:
            if p["kind"] == "technology" and not p["resolved"]:
                document["warnings"].append(f"Unresolved technology prerequisite {p['raw']} at line {technology['line']}.")
    return document


def parse_faction(path: Path, root: Path, key: str, portrait: str | None) -> dict:
    document = parse_document(path, root)
    data = rows(document, key.upper())
    if not data:
        return {**document, "id": key.upper(), "name": path.stem, "portraitAsset": portrait,
                "warnings": [f"No #{key.upper()} section found; all raw sections retained."]}
    identity = data[0]
    bonus_fields = list(data[1]["fields"]) if len(data) > 1 else []
    while bonus_fields and not bonus_fields[-1]:
        bonus_fields.pop()
    bonuses = [{"type": bonus_fields[i], "value": bonus_fields[i + 1] if i + 1 < len(bonus_fields) else None,
                "line": data[1]["line"]} for i in range(0, len(bonus_fields), 2)]
    return {**document, "id": key.upper(), "name": field(identity, 0),
            "ideology": field(identity, 1), "noun": field(identity, 2),
            "grammar": {"gender": field(identity, 3), "number": integer(field(identity, 4))},
            "leader": {"name": field(identity, 5), "gender": field(identity, 6)},
            "ai": dict(zip(("aggression", "power", "knowledge", "wealth", "growth"),
                           (integer(field(identity, n)) for n in range(7, 12)))),
            "bonuses": bonuses,
            "socialPriority": data[2]["fields"] if len(data) > 2 else [],
            "socialOpposition": data[3]["fields"] if len(data) > 3 else [],
            "baseNames": [r["raw"].strip() for r in rows(document, "BASES")],
            "waterBaseNames": [r["raw"].strip() for r in rows(document, "WATERBASES")],
            "factionAtlasAsset": portrait, "portraitAsset": portrait,
            "portraitAssetNote": "Full faction PCX sheet; no portrait crop inferred.",
            "warnings": ["Odd number of bonus fields; final value is unknown."] if len(bonus_fields) % 2 else []}


def skipped_reason(path: Path, root: Path) -> str | None:
    rel = path.relative_to(root)
    if any(p.casefold() == "saves" or p.startswith(".") for p in rel.parts):
        return "save-or-hidden"
    if path.suffix.lower() in TRANSIENT_SUFFIXES or path.name.casefold() in EXCLUDED_NAMES:
        return "transient-or-session-state"
    if path.is_symlink():
        return "symlink-not-followed"
    return None


def decode_cross_row_pcx(source: Path):
    """Decode one narrowly bounded 8-bit PCX variant rejected by Pillow.

    A shipped color-blind asset has an RLE run spanning two scanlines. Accept
    only an exact, complete raster and palette; never truncate or pad pixels.
    This is a documented compatibility interpretation, not native-game proof.
    """
    from PIL import Image
    data = source.read_bytes()
    if len(data) < 897 or data[:4] != b"\x0a\x05\x01\x08" or data[65] != 1 or data[-769] != 12:
        raise ValueError("No supported cross-row PCX fallback for this header")
    x0, y0, x1, y1 = struct.unpack_from("<4H", data, 4)
    width, height = x1 - x0 + 1, y1 - y0 + 1
    stride = struct.unpack_from("<H", data, 66)[0]
    expected = stride * height
    if width <= 0 or height <= 0 or stride < width or expected > 16_777_216:
        raise ValueError("Invalid or excessive PCX fallback dimensions")
    decoded = bytearray()
    position, end, crossings = 128, len(data) - 769, 0
    while position < end and len(decoded) < expected:
        token = data[position]
        position += 1
        if token & 0xC0 == 0xC0:
            count = token & 0x3F
            if count == 0 or position >= end:
                raise ValueError("Invalid or incomplete PCX RLE run")
            value = data[position]
            position += 1
        else:
            count, value = 1, token
        if len(decoded) + count > expected:
            raise ValueError("PCX RLE exceeds the declared full raster")
        if len(decoded) // stride != (len(decoded) + count - 1) // stride:
            crossings += 1
        decoded.extend(bytes((value,)) * count)
    if len(decoded) != expected or position != end or crossings == 0:
        raise ValueError("PCX fallback requires an exact complete raster with a crossing run")
    pixels = b"".join(decoded[row * stride:row * stride + width] for row in range(height))
    image = Image.frombytes("P", (width, height), pixels)
    image.putpalette(data[-768:])
    return image, {"decoder": "validated-linear-pcx-rle", "crossScanlineRuns": crossings,
                   "decodeNotes": "Pillow rejected a scanline-crossing run. The entire RLE stream produces exactly the declared raster and ends at the palette; no pixels padded or discarded."}


def convert_pcx(source: Path, destination: Path) -> dict:
    from PIL import Image
    destination.parent.mkdir(parents=True, exist_ok=True)
    image = None
    decoder = {"decoder": "Pillow-PCX"}
    try:
        image = Image.open(source)
        if image.format != "PCX":
            raise ValueError(f"File named .pcx decoded as {image.format}")
        image.load()
    except OSError:
        if image is not None:
            image.close()
        image, decoder = decode_cross_row_pcx(source)
    with image:
        source_mode = image.mode
        pixels = hashlib.sha256(image.convert("RGBA").tobytes()).hexdigest()
        palette = image.getpalette()
        metadata = {**decoder, "width": image.width, "height": image.height, "sourceMode": source_mode,
                    "outputMode": source_mode, "rgbaPixelsSha256": pixels,
                    "paletteSha256": hashlib.sha256(bytes(palette)).hexdigest() if palette else None,
                    "transparency": "preserved-if-declared; no game color key inferred"}
        with tempfile.NamedTemporaryFile(dir=destination.parent, prefix=".import-", suffix=".png", delete=False) as f:
            temporary = Path(f.name)
        try:
            image.save(temporary, format="PNG", compress_level=3)
            with Image.open(temporary) as decoded:
                decoded.load()
                if hashlib.sha256(decoded.convert("RGBA").tobytes()).hexdigest() != pixels:
                    raise ValueError("PNG round trip changed RGBA pixel values")
                if source_mode == "P" and decoded.getpalette() != palette:
                    raise ValueError("PNG round trip changed the source palette")
            temporary.replace(destination)
        finally:
            temporary.unlink(missing_ok=True)
    return metadata


def copy_media(source: Path, destination: Path, source_hash: str) -> None:
    destination.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(dir=destination.parent, prefix=".import-", delete=False) as f:
        temporary = Path(f.name)
    try:
        shutil.copyfile(source, temporary)
        if digest(temporary) != source_hash:
            raise ValueError("Media copy digest does not match source")
        temporary.replace(destination)
    finally:
        temporary.unlink(missing_ok=True)


def build_preview(assets: list[dict]) -> str:
    cards = []
    for asset in assets:
        if not asset.get("url"):
            continue
        name = html.escape(asset["path"])
        src = html.escape(asset["url"], quote=True)
        uri = html.escape(asset["sourceUri"], quote=True)
        if asset["kind"] == "image":
            body = f'<a href="{src}"><img src="{src}" loading="lazy" alt="{name}" width="240" height="180"></a>'
            detail = f'{asset["width"]} × {asset["height"]}'
        else:
            body = f'<audio controls preload="none" src="{src}"></audio>'
            detail = f'{asset["sizeBytes"]:,} bytes'
        cards.append(f'<article data-name="{name.lower()}">{body}<p>{name}</p><small>{detail} · '
                     f'<a href="{uri}">Source</a></small></article>')
    return '''<!doctype html><html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>Alpha Centauri imported assets</title><style>body{font:16px system-ui;background:#131b22;color:#e3ece7;margin:2rem}a{color:#a1d9c8}input{font:inherit;padding:.7rem;width:min(90%,32rem)}main{display:grid;grid-template-columns:repeat(auto-fill,minmax(250px,1fr));gap:1rem;margin-top:2rem}article{padding:1rem;background:#213039;overflow-wrap:anywhere}img{object-fit:contain;max-width:100%;background:#080d11}audio{width:100%}[hidden]{display:none}</style>
<h1>Alpha Centauri imported assets</h1><p>Converted images preserve their original palettes and pixels. Audio is copied byte for byte.</p><label>Find an asset <input id="filter" type="search" placeholder="Filename or folder"></label><main>''' + "\n".join(cards) + '''</main><script>document.querySelector('#filter').addEventListener('input',e=>{const q=e.target.value.toLowerCase();document.querySelectorAll('article').forEach(a=>a.hidden=!a.dataset.name.includes(q))});</script></html>'''


def import_game(game_dir: Path, output: Path, *, force: bool = False, copy_audio: bool = True) -> dict:
    from PIL import __version__ as pillow_version
    root = game_dir.expanduser().resolve(strict=True)
    output = output.expanduser().resolve()
    if root == output or root in output.parents:
        raise ValueError("Output must be outside the source game directory")
    files = sorted((p for p in root.rglob("*") if p.is_file()), key=lambda p: p.relative_to(root).as_posix())
    file_map = {p.relative_to(root).as_posix().casefold(): p for p in files}
    for required in ("alpha.txt", "alphax.txt"):
        if required not in file_map:
            raise ValueError(f"Game directory is missing {required}")
    output.mkdir(parents=True, exist_ok=True)
    # Keep proprietary local source-derived data out of version control.
    atomic_bytes(output / ".gitignore", b"*\n!.gitignore\n")
    cache = {}
    if (output / "assets.json").exists():
        try:
            previous = json.loads((output / "assets.json").read_text())
            if previous.get("schemaVersion") == SCHEMA_VERSION:
                cache = {a["path"]: a for a in previous.get("assets", [])}
        except (OSError, ValueError, KeyError):
            pass
    assets, failures, skipped = [], [], Counter()
    statistics = Counter()
    for source in files:
        reason = skipped_reason(source, root)
        if reason:
            skipped[reason] += 1
            continue
        suffix = source.suffix.lower()
        asset = source_identity(source, root)
        asset["extension"] = suffix
        statistics["inventoried"] += 1
        if suffix == ".pcx":
            relative_output = Path("images") / Path(asset["path"]).with_suffix(".png")
            asset.update(kind="image", status="converted", outputPath=relative_output.as_posix(),
                         url=quote(relative_output.as_posix(), safe="/"))
        elif suffix in MEDIA_SUFFIXES and copy_audio:
            relative_output = Path("media") / asset["path"]
            asset.update(kind="audio", status="copied", outputPath=relative_output.as_posix(),
                         url=quote(relative_output.as_posix(), safe="/"))
        else:
            asset["kind"] = ("executable" if suffix in EXECUTABLE_SUFFIXES else "undecoded"
                             if suffix in UNDECODED_SUFFIXES else "audio" if suffix in MEDIA_SUFFIXES else "resource")
            asset["status"] = "inventory-only"
            with source.open("rb") as f:
                asset["headerHex"] = f.read(16).hex()
            assets.append(asset)
            continue
        destination = output / relative_output
        cached = cache.get(asset["path"], {})
        if (not force and cached.get("sha256") == asset["sha256"]
                and cached.get("outputPath") == asset["outputPath"]
                and cached.get("outputSha256") and destination.is_file()
                and digest(destination) == cached["outputSha256"]):
            assets.append({**cached, **asset})
            statistics["reused"] += 1
            continue
        try:
            if suffix == ".pcx":
                asset.update(convert_pcx(source, destination))
                statistics["converted"] += 1
            else:
                copy_media(source, destination, asset["sha256"])
                statistics["copied"] += 1
            asset["outputSha256"] = digest(destination)
            asset["outputSizeBytes"] = destination.stat().st_size
        except (OSError, ValueError) as exc:
            asset.update(status="error", error=str(exc))
            asset.pop("url", None)
            failures.append({"path": asset["path"], "error": str(exc)})
        assets.append(asset)
        if statistics["converted"] and statistics["converted"] % 100 == 0 and suffix == ".pcx":
            print(f"Converted {statistics['converted']} PCX images", file=sys.stderr, flush=True)
    versions = {name: parse_rules(file_map[f"{name}.txt"], root) for name in ("alpha", "alphax")}
    overrides = {p.relative_to(root).as_posix(): parse_rules(p, root) for p in files
                 if p.parent != root and p.name.casefold() in {"alpha.txt", "alphax.txt"}
                 and not skipped_reason(p, root)}
    rules = {"schemaVersion": SCHEMA_VERSION,
             "notes": ["Typed fields describe shipped data, not complete gameplay mechanics.",
                       "Indices are zero-based source-order positions, not asserted native engine IDs.",
                       "Raw text and ordered section lines retain otherwise uninterpreted data.",
                       "Semicolons in descriptions are preserved; only numeric parameter blocks treat them as comments."],
             "versions": versions, "scenarioOverrides": overrides}
    image_index = {a["path"].casefold(): a.get("url") for a in assets if a["kind"] == "image"}
    bindings = {}
    for version in versions.values():
        for table in ("factions", "expansionFactions", "customFactions"):
            for binding in version["tables"][table]:
                bindings.setdefault(binding["key"].upper(), binding["file"])
    factions, faction_warnings = {}, []
    for key, stem in bindings.items():
        faction_file = file_map.get(f"{stem}.txt".casefold())
        if not faction_file:
            faction_warnings.append(f"Missing faction source {stem}.txt for {key}")
            continue
        factions[key] = parse_faction(faction_file, root, key, image_index.get(f"{stem}.pcx".casefold()))
    # Preserve shipped bonus factions even though they are not in the startup
    # faction bindings. Identification requires their declared identity row.
    unregistered = {}
    for candidate in files:
        key = candidate.stem.upper()
        if (candidate.parent != root or candidate.suffix.casefold() != ".txt"
                or key in bindings or skipped_reason(candidate, root)):
            continue
        document = parse_document(candidate, root)
        identity_rows = rows(document, key)
        if (identity_rows and len(identity_rows[0]["fields"]) >= 12
                and all(integer(field(identity_rows[0], n)) is not None for n in range(7, 12))):
            unregistered[key] = parse_faction(candidate, root, key,
                                              image_index.get(f"{candidate.stem}.pcx".casefold()))
    rules_path = output / "rules.json"
    write_json(rules_path, rules)
    write_json(output / "factions.json", {"schemaVersion": SCHEMA_VERSION, "factions": factions,
        "unregisteredFactions": unregistered,
        "templateDocument": parse_document(file_map["faction.txt"], root) if "faction.txt" in file_map else None,
        "warnings": faction_warnings})
    write_json(output / "assets.json", {"schemaVersion": SCHEMA_VERSION, "assets": assets})
    atomic_bytes(output / "preview.html", build_preview(assets).encode("utf-8"))
    counts = {"assets": len(assets), "images": sum(a["status"] == "converted" for a in assets),
              "audio": sum(a["status"] == "copied" for a in assets), "factions": len(factions),
              "unregisteredFactions": len(unregistered), "scenarioRuleOverrides": len(overrides),
              "failures": len(failures), "byExtension": dict(sorted(Counter(a["extension"] for a in assets).items())),
              "excluded": dict(sorted(skipped.items()))}
    products = {name: {"url": name, "sha256": digest(output / name), "sizeBytes": (output / name).stat().st_size}
                for name in ("rules.json", "factions.json", "assets.json", "preview.html")}
    manifest = {"schemaVersion": SCHEMA_VERSION, "importerVersion": IMPORTER_VERSION,
                "importerSha256": digest(Path(__file__).resolve()), "pillowVersion": pillow_version,
                "sourceRoot": str(root), "sourceRootUri": root.as_uri(),
                "products": products, "counts": counts,
                "rules": {name: {"source": version["source"],
                         "tables": {k: len(v) for k, v in version["tables"].items() if isinstance(v, list)},
                         "warnings": version["warnings"]} for name, version in versions.items()},
                "failures": failures, "warnings": faction_warnings,
                "limitations": ["Gameplay algorithms are not reconstructed by importing data.",
                                 "CVR voxel data, WVE movie data, FLC animation, AMB scheduling, map and scenario binary records are inventoried without decoding.",
                                 "PNG conversion preserves palettes and RGBA pixels; game transparency keys and palette animation are not inferred.",
                                 "Saves, hidden files and transient session files are excluded. Executables are inventoried but never copied.",
                                 "Source installation was opened read-only. Source URIs are local provenance links and are not public web URLs.",
                                 "Existing unreferenced output files are not deleted. Current products list only this import's assets."]}
    write_json(output / "manifest.json", manifest)
    return {"output": str(output), "counts": counts, "workThisRun": dict(statistics), "failures": failures}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("game_dir", type=Path, help="Existing game installation containing alpha.txt and alphax.txt")
    parser.add_argument("--output", type=Path, default=Path(__file__).resolve().parents[1] / "public/game-data")
    parser.add_argument("--force", action="store_true", help="Regenerate media even when source and output hashes match")
    parser.add_argument("--no-copy-audio", action="store_true", help="Inventory WAV/MP3 without copying them")
    args = parser.parse_args()
    try:
        result = import_game(args.game_dir, args.output, force=args.force, copy_audio=not args.no_copy_audio)
    except ImportError as exc:
        parser.exit(2, f"Pillow is required: install it in a local Python environment. {exc}\n")
    except (OSError, ValueError) as exc:
        parser.exit(2, f"Import failed: {exc}\n")
    print(json.dumps(result, indent=2))
    return 1 if result["failures"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
