"""Focused importer integrity tests, using synthetic local game resources."""

import hashlib
import json
from pathlib import Path
import tempfile
import struct
import unittest

from PIL import Image

from import_game import convert_pcx, import_game, parse_document, parse_rules


RULES = """; Test rules
#RULES
10, ; Minerals multiplier
#TECHNOLOGY
Basic, Base, 1, 2, 3, 4, None, None, 000000001
Advanced, Adv, 2, 3, 4, 5, Base, None, 000000010
Unavailable, Off, 0, 0, 0, 0, Disable, Disable, 000000000
#FACILITIES
Center, 3, 1, Adv, Disable, Production; Energy, 1, 2, 3, 4, 5,
#ABILITIES
Stealth, 1, Adv, Stealth, 0011, Hidden; Ignores ZOCs
#WORLDSIZE
1
Small, 4, 8
#UNITS
1
Scout, Infantry, Gun, Scout, 3, 0, 0, None, -1, 0001
#FACTIONS
TEST, TEST
# ; end marker
"""


class ImportGameTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.base = Path(self.temporary.name)
        self.game = self.base / "Game"
        self.game.mkdir()
        self.output = self.base / "Imported"
        for name in ("alpha.txt", "alphax.txt"):
            (self.game / name).write_bytes(RULES.replace("\n", "\r\n").encode("cp1252"))
        (self.game / "test.txt").write_text(
            "#TEST\nThe Testers, Testing, Testers, N, 2, Tester, N, -1, 0, 1, 0, 1,\n"
            "TECH, Base, SOCIAL, ++RESEARCH\nPolitics, Democracy, RESEARCH\n"
            "nil, nil, nil\n#BASES\nTest Base\n#END\n#WATERBASES\nSea Base\n#END\n",
            encoding="cp1252")
        image = Image.new("P", (4, 3))
        palette = [v for i in range(256) for v in (i, 255 - i, i // 2)]
        image.putpalette(palette)
        image.putdata([0, 1, 2, 3] * 3)
        image.save(self.game / "Test.pcx")
        (self.game / "fx").mkdir()
        (self.game / "fx/voice.wav").write_bytes(b"RIFF\x04\x00\x00\x00WAVEsynthetic-copy-integrity")
        (self.game / "game.exe").write_bytes(b"MZ-not-to-be-copied")
        (self.game / "unit.cvr").write_bytes(b"CVR\x00-unparsed-resource")
        (self.game / "saves").mkdir()
        (self.game / "saves/private.sav").write_bytes(b"private-save")
        (self.game / "ip.cfg").write_text("session-data")

    def test_rules_preserve_semicolons_order_and_prerequisite_states(self):
        parsed = parse_rules(self.game / "alpha.txt", self.game)
        technologies = parsed["tables"]["technologies"]
        self.assertEqual(technologies[0]["prerequisites"][0]["kind"], "none")
        self.assertEqual(technologies[1]["prerequisites"][0]["index"], 0)
        self.assertFalse(technologies[2]["enabled"])
        facility = parsed["tables"]["facilities"][0]
        self.assertEqual(facility["description"], "Production; Energy")
        self.assertEqual(facility["aiWeights"]["colonization"], 5)
        self.assertEqual(parsed["tables"]["abilities"][0]["description"], "Hidden; Ignores ZOCs")
        self.assertEqual(parsed["tables"]["ruleParameters"][0]["values"], [10])
        self.assertEqual(parsed["tables"]["ruleParameters"][0]["description"], "Minerals multiplier")
        self.assertEqual(parsed["warnings"], [])

    def test_source_spans_and_repeated_sections_are_exact(self):
        parsed = parse_document(self.game / "test.txt", self.game)
        data = (self.game / "test.txt").read_bytes()
        self.assertEqual([s["name"] for s in parsed["sections"]].count("END"), 2)
        self.assertEqual(parsed["rawText"].encode("cp1252"), data)
        for section in parsed["sections"]:
            for row in section["records"]:
                original = data[row["byteStart"]:row["byteEnd"]].decode("cp1252").rstrip("\r\n")
                self.assertEqual(original, row["raw"])

    def test_full_import_preserves_pixels_audio_and_avoids_personal_state(self):
        source_hashes = {p.relative_to(self.game): hashlib.sha256(p.read_bytes()).hexdigest()
                         for p in self.game.rglob("*") if p.is_file()}
        result = import_game(self.game, self.output)
        self.assertEqual(result["counts"]["images"], 1)
        self.assertEqual(result["counts"]["audio"], 1)
        self.assertEqual(result["failures"], [])
        with Image.open(self.game / "Test.pcx") as original, Image.open(self.output / "images/Test.png") as converted:
            self.assertEqual(original.convert("RGBA").tobytes(), converted.convert("RGBA").tobytes())
            self.assertEqual(original.getpalette(), converted.getpalette())
        self.assertEqual((self.game / "fx/voice.wav").read_bytes(), (self.output / "media/fx/voice.wav").read_bytes())
        inventory = json.loads((self.output / "assets.json").read_text())["assets"]
        self.assertFalse(any(a["path"].startswith("saves/") or a["path"] == "ip.cfg" for a in inventory))
        self.assertFalse(any(p.suffix == ".exe" for p in self.output.rglob("*")))
        self.assertEqual(next(a for a in inventory if a["path"] == "game.exe")["status"], "inventory-only")
        factions = json.loads((self.output / "factions.json").read_text())["factions"]
        self.assertEqual(factions["TEST"]["baseNames"], ["Test Base"])
        self.assertEqual(factions["TEST"]["portraitAsset"], "images/Test.png")
        self.assertEqual(source_hashes, {p.relative_to(self.game): hashlib.sha256(p.read_bytes()).hexdigest()
                                       for p in self.game.rglob("*") if p.is_file()})
        initial = (self.output / "manifest.json").read_bytes()
        repeated = import_game(self.game, self.output)
        self.assertEqual(repeated["workThisRun"]["reused"], 2)
        self.assertEqual(initial, (self.output / "manifest.json").read_bytes())
        (self.output / "media/fx/voice.wav").write_bytes(b"damaged")
        repaired = import_game(self.game, self.output)
        self.assertEqual(repaired["workThisRun"]["copied"], 1)
        self.assertEqual((self.game / "fx/voice.wav").read_bytes(), (self.output / "media/fx/voice.wav").read_bytes())

    def test_refuses_output_inside_source_installation(self):
        with self.assertRaisesRegex(ValueError, "outside"):
            import_game(self.game, self.game / "generated")
        self.assertFalse((self.game / "generated").exists())

    def test_cross_scanline_rle_fallback_requires_exact_raster(self):
        header = bytearray(128)
        header[:4] = b"\x0a\x05\x01\x08"
        struct.pack_into("<4H", header, 4, 0, 0, 3, 2)
        header[65] = 1
        struct.pack_into("<H", header, 66, 4)
        palette = bytes(v for i in range(256) for v in (i, i, i))
        crossing = self.game / "crossing.pcx"
        crossing.write_bytes(header + b"\xc6\x01\xc6\x02\x0c" + palette)
        target = self.output / "crossing.png"
        metadata = convert_pcx(crossing, target)
        self.assertEqual(metadata["decoder"], "validated-linear-pcx-rle")
        with Image.open(target) as image:
            self.assertEqual(image.tobytes(), bytes([1] * 6 + [2] * 6))
        crossing.write_bytes(header + b"\xc6\x01\xc7\x02\x0c" + palette)
        with self.assertRaisesRegex(ValueError, "exceeds"):
            convert_pcx(crossing, self.output / "invalid.png")
        self.assertFalse((self.output / "invalid.png").exists())


if __name__ == "__main__":
    unittest.main()
