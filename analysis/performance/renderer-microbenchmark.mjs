// Source-extracted conversion + shell handoff microbenchmark, NOT browser FPS.
import assert from 'node:assert/strict';
import { writeFileSync } from 'node:fs';
import os from 'node:os';
import { performance } from 'node:perf_hooks';
import { harness, baselineCommit } from './renderer-equivalence.test.mjs';

const width = 1024, height = 768, framesPerSample = 12, samples = 7;
const pixels = new Uint32Array(width * height);
for (let i = 0; i < pixels.length; ++i) pixels[i] = Math.imul(i + 123, 2654435761) >>> 0;
const original = harness({ baseline: true, capture: false });
const optimized = harness({ capture: false });

function batch(target, frames) {
  const start = performance.now();
  for (let i = 0; i < frames; ++i) {
    pixels[0] = (0x123456 + i * 0x1234) >>> 0;
    target.run(pixels, width, height);
  }
  return (performance.now() - start) / frames;
}

batch(original, 4); batch(optimized, 4);
const initial = { original: { ...original.stats }, optimized: { ...optimized.stats } };
const values = { original: [], optimized: [] };
const startedAtUTC = new Date().toISOString();
for (let i = 0; i < samples; ++i) {
  for (const mode of (i % 2 ? ['optimized', 'original'] : ['original', 'optimized'])) {
    values[mode].push(batch(mode === 'original' ? original : optimized, framesPerSample));
  }
}

function summarize(mode, target) {
  const ordered = [...values[mode]].sort((a, b) => a - b);
  return {
    sampleMeanMsPerFrame: values[mode], medianMsPerFrame: ordered[Math.floor(ordered.length / 2)],
    frameBufferAllocationsDuringSamples: target.stats.allocations - initial[mode].allocations,
    imageDataConstructionsDuringSamples: target.stats.imageData - initial[mode].imageData,
    finalChecksum: target.stats.checksum,
  };
}
const before = summarize('original', original), after = summarize('optimized', optimized);
assert.equal(before.finalChecksum, after.finalChecksum);
assert.equal(before.frameBufferAllocationsDuringSamples, samples * framesPerSample);
assert.equal(after.frameBufferAllocationsDuringSamples, 0);
assert.equal(after.imageDataConstructionsDuringSamples, 0);
const result = {
  kind: 'Node source-extracted software conversion microbenchmark; not browser gameplay or paint latency',
  startedAtUTC, finishedAtUTC: new Date().toISOString(), baselineCommit,
  node: process.version, platform: process.platform, arch: process.arch, cpu: os.cpus()[0]?.model,
  width, height, framesPerSample, samples, warmupFramesPerVariant: 4, order: 'alternating variants each sample',
  original: before, optimized: after,
  medianConversionHandoffSpeedup: before.medianMsPerFrame / after.medianMsPerFrame,
  limitations: [
    'Runs actual extracted source in Node VM, with a mock ImageData/canvas sink.',
    'Does not include real ImageData construction validation, putImageData paint, guest rendering or game execution.',
    'Short local run, no forced GC or CPU isolation; sample variability and concurrent workloads remain.',
    'No claim about browser FPS or user input latency follows from this microbenchmark alone.',
  ],
};
writeFileSync(new URL('renderer-microbenchmark.json', import.meta.url), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
