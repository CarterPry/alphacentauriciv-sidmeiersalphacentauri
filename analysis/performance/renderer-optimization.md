# Isolated single-thread software presenter candidate

The source patch is applied to `analysis/runtime/jit/Boxedwine-disjoint`. It changes only `platform/sdl/knativescreenSDL.cpp` and `project/emscripten/boxedwine-shell.js`. The isolated review below preceded integration; the parent subsequently built and staged it with the scheduler patch as `SingleThreadedJitFast`. [Combined build identity](../runtime/jit/browser-build-result.json) and [live measurements and acceptance](PERFORMANCE.md) record that later work. Unchanged public-artifact hashes in the isolated provenance describe the earlier review point.

[renderer-optimization.patch](renderer-optimization.patch) has SHA-256 `97a8ce1621ae9bd9097717ea5fd37d0db2e541b1dbc551eac88523635d04d9dd`. [Provenance](renderer-optimization-provenance.json) records before/after source hashes, checks and unchanged public-artifact hashes. The patch is independent of the existing disjoint and focus changes; do not apply it again to the already modified worktree.

## Behavior changed

For a single-thread runtime with a document, `boxedwinePresentSoftwareFrame` keeps one RGBA byte array and 32-bit view per frame size. It swizzles each packed source ARGB value into one RGBA word with opaque alpha. The shell reuses the corresponding `ImageData` only when dimensions and the exact buffer identity match this owned frame. Size changes allocate a new frame object and therefore a new `ImageData`. The source heap view is refreshed for every frame.

The worker converter still allocates and transfers a new buffer each frame. A test confirms that preprocessing out the single-thread branch leaves its converter body text identical to the pinned baseline. Foreign/transferred buffers in the shell use the original fresh-`ImageData` path. Canvas dimensions, CSS updates, palette conversion, clipping, presentation locking, scheduling and guest code are unchanged.

## Verification

```sh
node --test analysis/performance/renderer-equivalence.test.mjs
nice -n 10 node analysis/performance/renderer-microbenchmark.mjs
```

The tests execute the actual extracted `EM_JS` converter and shell-presenter expression, comparing against source from pinned commit `65467424603484756a73308412f40b906d28b650`; they do not substitute a rewritten conversion implementation. **Eight tests passed:** known channel values/source-alpha behavior; 96 randomized frames and source offsets; pixel-buffer and `ImageData` reuse while contents change; resize and equal-area reshape; replacement heap views; actual `structuredClone` worker transfer/detachment; foreign-buffer handling; busy-presentation locking. The eight-test count includes the exact worker-body comparison. [Test output](renderer-equivalence.log).

Shell syntax checking, scoped `git diff --check`, and reverse patch applicability checking passed. The existing upstream shell suite has six failures from a missing `target.contains` DOM mock, occurring identically on the pristine pinned baseline and this candidate. [Baseline/candidate result](renderer-upstream-shell-result.json), [baseline log](renderer-upstream-shell-baseline.log), [candidate log](renderer-upstream-shell-candidate.log). Those unrelated test fixtures were left unchanged.

## Microbenchmark, not browser performance

The [recorded Node microbenchmark](renderer-microbenchmark.json) executes the extracted conversion and shell handoff with a mock `ImageData`/canvas sink. Seven alternating samples of 12 frames, after four warm-up frames per variant, at 1024×768 produced:

| Metric | Original | Candidate |
|---|---:|---:|
| Median sample mean, ms/frame | 1.032 | 0.599 |
| Frame-buffer allocations during 84 measured frames | 84 | 0 |
| `ImageData` constructions during measured frames | 84 | 0 |

This is **1.72× faster for this conversion/handoff microbenchmark**. It does not measure real browser `ImageData` construction, `putImageData`, guest rendering, FPS, or input-to-visible-change latency. No forced GC or CPU isolation was used. Both variants produced the same sink checksum. The final timed interval was `2026-10-14T21:25:30.403Z–21:25:30.544Z`; an initial pre-final-source microbenchmark ran `21:24:27.327Z–21:24:27.473Z`, if these intervals need exclusion from a concurrent baseline trace.

## Integration and limits

The optimized packed conversion relies on the little-endian execution environment already used by Emscripten's typed WASM heap. Tests establish byte equivalence on this arm64 host. The combined WASM build subsequently passed observed menu, world, movement, turn, save and native reload checks; its hover comparison is in the integration report. No isolated browser A/B trial attributes the whole improvement to this presenter patch. Resize correctness is covered by the extracted-source tests, rather than a native in-game resolution change. The frame object intentionally retains one buffer and `ImageData` for reuse; it releases the old references when the frame size changes.
