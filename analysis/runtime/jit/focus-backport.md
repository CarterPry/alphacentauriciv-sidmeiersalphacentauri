# Keyboard focus candidate

The game accepted mouse menu actions, while ordinary keypresses and save shortcuts did not produce the expected native actions in the first browser trials. That observation does not by itself locate the defect. The browser integration separately addresses the upstream JavaScript bridge's Ctrl/Meta filtering.

Official Boxedwine commit [`ef51c62642833684cacc1885bf4db1fd47b679ca`](https://github.com/danoon2/Boxedwine/commit/ef51c62642833684cacc1885bf4db1fd47b679ca) changes X11 keyboard focus after regressions in other applications. Its exact source diff is retained as [focus-fix.patch](focus-fix.patch). It initializes focus to PointerRoot and starts key delivery at the pointer window when that window is a descendant of the focus window, stopping propagation at the focus window.

That patch does not apply directly to the pinned source `65467424603484756a73308412f40b906d28b650`: its parent introduced a larger focus-state API. The [minimal backport](focus-backport.patch) adapts the two behaviors to the older `inputFocus` pointer and existing parent traversal. It does not claim to include the newer mutex, notification, validation, or timestamp machinery.

The candidate combines this backport with the previously tested disjoint-JIT ownership guard. It builds successfully with Emscripten 6.0.12 and is staged separately under `public/runtime/SingleThreadedJitFocus/`. The earlier disjoint-only and original interpreter artifacts remain intact. [Artifact and patch hashes](focus-provenance.json) identify this candidate.

The automated bootstrap checks source/patch identities, installs the pinned local SDK when needed, builds, and stages the candidate:

```sh
python3 tools/build_browser_runtime.py
```

Its `--check` mode verifies existing source and patch identities without building. The bootstrap was exercised locally and reproduced the staged artifact hashes. See [the recipe](browser-build-recipe.json) and [build result](browser-build-result.json).

For a manual rebuild from the pinned source with the disjoint patch already applied:

```sh
git -C analysis/runtime/jit/Boxedwine-disjoint apply ../focus-backport.patch
sh analysis/runtime/jit/build-experimental.sh
```

Apply the patch once; the current local worktree already contains it. Build outputs are in `Boxedwine-disjoint/project/emscripten/Build/Jit/`. The preserved disjoint-only outputs are in `experimental/`, and this candidate is in `experimental-focus/`.

Subsequent native tests demonstrated menu navigation, base-name typing, unit movement, Ctrl+S and Command+S saving in both editions. Alien Crossfire also loaded a game-created save after a full browser restart. The combined build is now the local player default. [Runtime validation](../runtime-validation.json) records screenshots, hashes, edition-specific coverage, and remaining limits; these observations do not establish universal emulator correctness.
