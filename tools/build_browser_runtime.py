#!/usr/bin/env python3
"""Build the isolated local Boxedwine compatibility candidate from pinned sources.

Installs its SDK inside analysis/runtime/jit, without changing shell profiles.
Refuses unexpected tracked source changes. Never reads or patches game binaries.
"""
import argparse
import hashlib
import json
import shutil
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / "analysis/runtime/jit"


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def run(args, cwd=None, capture=False):
    return subprocess.run(args, cwd=cwd, check=True, text=True,
                          stdout=subprocess.PIPE if capture else None).stdout


def git(directory, *args, capture=False):
    return run(["git", "-C", str(directory), *args], capture=capture)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="verify existing source and patch identities only")
    args = parser.parse_args()
    recipe = json.loads((WORK / "browser-build-recipe.json").read_text())
    for name, expected in recipe["patches"].items():
        if digest(WORK / name) != expected:
            raise RuntimeError(f"Patch identity changed: {name}")

    source = WORK / "Boxedwine"
    tree = WORK / "Boxedwine-disjoint"
    if not source.exists() and not args.check:
        run(["git", "clone", "--filter=blob:none", "https://github.com/danoon2/Boxedwine.git", str(source)])
    if not tree.exists() and not args.check:
        git(source, "worktree", "add", "--detach", str(tree), recipe["sourceCommit"])
    if git(tree, "rev-parse", "HEAD", capture=True).strip() != recipe["sourceCommit"]:
        raise RuntimeError("Build worktree is on an unexpected commit; leaving it unchanged.")
    changed = set(git(tree, "diff", "HEAD", "--name-only", capture=True).splitlines())
    if changed - recipe["patchedSourceFiles"].keys():
        raise RuntimeError(f"Unexpected tracked changes; leaving them unchanged: {sorted(changed)}")
    if not args.check:
        for name in recipe["patches"]:
            patch = str(WORK / name)
            present = subprocess.run(["git", "-C", str(tree), "apply", "--reverse", "--check", patch],
                                     stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL).returncode == 0
            if not present:
                git(tree, "apply", "--check", patch)
                git(tree, "apply", patch)
    for name, expected in recipe["patchedSourceFiles"].items():
        if digest(tree / name) != expected:
            raise RuntimeError(f"Unexpected source contents; no build or installation performed: {name}")
    print(f"Pinned source and {len(recipe['patches'])} runtime patches verified.", flush=True)
    if args.check:
        return

    sdk = WORK / "emsdk"
    if not sdk.exists():
        run(["git", "clone", "https://github.com/emscripten-core/emsdk.git", str(sdk)])
        git(sdk, "checkout", "--detach", recipe["sdkCommit"])
    if git(sdk, "rev-parse", "HEAD", capture=True).strip() != recipe["sdkCommit"]:
        raise RuntimeError("Local SDK source is on an unexpected commit; leaving it unchanged.")
    run([str(sdk / "emsdk"), "install", recipe["sdkVersion"]])
    run([str(sdk / "emsdk"), "activate", recipe["sdkVersion"]])
    run(["sh", str(WORK / "build-experimental.sh")], cwd=ROOT)

    built = tree / "project/emscripten/Build/Jit"
    destination = ROOT / "public/runtime" / recipe["engine"]
    destination.mkdir(parents=True, exist_ok=True)
    artifacts = {}
    for name in ("boxedwine.js", "boxedwine.wasm", "boxedwine-shell.js", "boxedwine.css", "boxedwine.html"):
        source_file = built / name
        shutil.copyfile(source_file, destination / name)
        artifacts[name] = {"sha256": digest(source_file), "bytes": source_file.stat().st_size}
    provenance = {"recipe": recipe, "artifacts": artifacts,
                  "validation": "Build identity only. Gameplay observations are recorded separately in runtime-validation.json."}
    (destination / "build-provenance.json").write_text(json.dumps(provenance, indent=2) + "\n")
    (WORK / "browser-build-result.json").write_text(json.dumps(provenance, indent=2) + "\n")
    print(f"Installed {recipe['engine']} to {destination}")


if __name__ == "__main__":
    main()
