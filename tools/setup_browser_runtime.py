#!/usr/bin/env python3
"""Prepare a checksum-pinned local Boxedwine runtime and the user's installed game.

No game is downloaded. The installation is read only; browser compatibility
preferences are applied to the INI entry in the generated archive only.
"""
import argparse
import concurrent.futures
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_GAME = Path.home() / "Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri"
DOWNLOADS = {
    "build-87.zip": (
        "https://boxedwine.org/builds/branches/master/builds/87/artifacts/build-87.zip",
        "efd56751338a509271cc2861eefd17304c8adce875a3a5a90d41b3c7c5660f02"),
    "TinyCore15Wine11.0-web.zip": (
        "https://boxedwine.org/v2/14/TinyCore15Wine11.0-web.zip",
        "3365e31caaf6a1fc832a0a7c4812592d25410b9f5c9536277131388c8e103a49"),
    "fullWine1.7.55-v8.zip": (
        "https://www.boxedwine.org/boxedwine/fs/fullWine1.7.55-v8.zip",
        "0fccfd4239406364c8d5707960411131ab9841056de83e0c27c053a9d4f93c44"),
}
ENGINES = ("SingleThreaded", "SingleThreadedJit", "MultiThreaded", "MultiThreadedJit")

def sha(data):
    return hashlib.sha256(data).hexdigest()

def download(entry):
    name, (url, expected) = entry
    target = ROOT / "analysis/runtime/cache" / name
    if not target.exists():
        temp = target.with_suffix(".part")
        with urllib.request.urlopen(url, timeout=60) as src, temp.open("wb") as dst:
            shutil.copyfileobj(src, dst)
        temp.replace(target)
    actual = sha(target.read_bytes())
    if actual != expected:
        raise RuntimeError(f"Refusing checksum mismatch for {name}: {actual}")
    print(f"Verified {name}: {actual}", flush=True)
    return target

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game-dir", type=Path, default=DEFAULT_GAME)
    parser.add_argument("--runtime-only", action="store_true")
    parser.add_argument("--patched-runtime", action="store_true", help="also build the pinned compatibility and performance runtime with its local SDK")
    args = parser.parse_args()
    runtime = ROOT / "public/runtime"
    evidence = ROOT / "analysis/runtime"
    runtime.mkdir(parents=True, exist_ok=True)
    (evidence / "cache").mkdir(parents=True, exist_ok=True)
    with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:
        list(pool.map(download, DOWNLOADS.items()))
    files = []
    with zipfile.ZipFile(evidence / "cache/build-87.zip") as archive:
        for engine in ENGINES:
            for name in ("boxedwine.js", "boxedwine.wasm", "boxedwine-shell.js", "boxedwine.css", "boxedwine.html"):
                member = f"Web/{engine}/{name}"
                data = archive.read(member)
                dest = runtime / engine / name
                dest.parent.mkdir(exist_ok=True)
                dest.write_bytes(data)
                files.append({"path":str(dest.relative_to(ROOT)), "sha256":sha(data), "bytes":len(data), "archiveMember":member})
        (runtime / "LICENSE-Boxedwine.txt").write_bytes(archive.read("Win64/Resources/license.txt"))
        (runtime / "UPSTREAM-README.txt").write_bytes(archive.read("Web/readme.txt"))
    shutil.copyfile(evidence / "cache/TinyCore15Wine11.0-web.zip", runtime / "wine.zip")
    shutil.copyfile(evidence / "cache/fullWine1.7.55-v8.zip", runtime / "wine-legacy.zip")
    # Upstream probes for an optional cache. An empty valid archive means no
    # prerecorded JIT modules and avoids an expected-but-noisy HTTP 404.
    with zipfile.ZipFile(runtime / "alpha-centauri-jit-modules.zip", "w"):
        pass
    provenance = {
        "project":"Boxedwine", "version":"26.1.0 CI master build 87", "builtAt":"2026-10-09 19:17 UTC",
        "sourceCommit":"65467424603484756a73308412f40b906d28b650",
        "sourceURL":"https://github.com/danoon2/Boxedwine/tree/65467424603484756a73308412f40b906d28b650",
        "license":"GPL-2.0-or-later", "downloads":[{"name":name,"url":url,"sha256":digest} for name,(url,digest) in DOWNLOADS.items()],
        "files":files, "wineVersion":"11.0", "networkingEnabled":False,
    }
    (evidence / "runtime-provenance.json").write_text(json.dumps(provenance, indent=2)+"\n")
    (runtime / "provenance.json").write_text(json.dumps(provenance, indent=2)+"\n")
    if args.patched_runtime:
        subprocess.run([sys.executable, str(ROOT / "tools/build_browser_runtime.py")], check=True)
    if args.runtime_only:
        return
    game = args.game_dir.resolve()
    for name in ("terran.exe", "terranx.exe", "alpha.txt", "alphax.txt"):
        if not (game / name).is_file():
            raise RuntimeError(f"Installed game missing required file: {game / name}")
    records = []
    archive_path = runtime / "alpha-centauri.zip"
    pending = archive_path.with_suffix(".part")
    overrides = {"ds3d":"0", "eax":"0", "DirectDraw":"0", "DisableOpeningMovie":"1"}
    with zipfile.ZipFile(pending, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=3, allowZip64=False) as archive:
        for path in sorted(game.rglob("*")):
            if not path.is_file() or path.is_symlink():
                continue
            name = path.relative_to(game).as_posix()
            original = path.read_bytes()
            data = original
            if name.lower() == "alpha centauri.ini":
                text = data.decode("cp1252")
                for key,value in overrides.items():
                    pattern = rf"(?im)^{re.escape(key)}=.*$"
                    if re.search(pattern,text):
                        text = re.sub(pattern,f"{key}={value}",text)
                    else:
                        text = re.sub(r"(?i)\[Alpha Centauri\]",f"[Alpha Centauri]\n{key}={value}",text)
                data = text.replace("\r\n","\n").replace("\n","\r\n").encode("cp1252")
            info = zipfile.ZipInfo(name, date_time=(2026,1,1,0,0,0))
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = 0o100644 << 16
            archive.writestr(info, data, compress_type=zipfile.ZIP_DEFLATED, compresslevel=3)
            records.append({"path":name,"bytes":len(original),"sha256":sha(original),"archiveBytes":len(data),"archiveSha256":sha(data),"modifiedInArchive":data != original})
    pending.replace(archive_path)
    manifest = {"sourceDirectory":str(game),"fileCount":len(records),"sourceBytes":sum(x["bytes"] for x in records),
                "archive":"/runtime/alpha-centauri.zip","archiveBytes":archive_path.stat().st_size,"archiveSha256":sha(archive_path.read_bytes()),
                "sourceInstallationModified":False,"iniOverrides":overrides,
                "iniOverrideEvidence":"Installed readme_ac.txt lines 59, 129, 227-228, 261; startup movie disabled, all movie assets retained.",
                "files":records}
    (evidence / "game-bundle-manifest.json").write_text(json.dumps(manifest,indent=2)+"\n")
    (runtime / "game-manifest.json").write_text(json.dumps(manifest,indent=2)+"\n")
    print(f"Packaged all {len(records)} installed files: {archive_path.stat().st_size:,} bytes",flush=True)

if __name__ == "__main__":
    main()
