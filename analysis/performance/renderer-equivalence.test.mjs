// Executes the actual EM_JS body and shell presenter from the source worktree.
// Browser canvas paint speed is deliberately outside this Node equivalence test.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import vm from 'node:vm';
import { test } from 'node:test';

export const sourceRoot = fileURLToPath(new URL('../runtime/jit/Boxedwine-disjoint/', import.meta.url));
const screenFile = 'platform/sdl/knativescreenSDL.cpp';
const shellFile = 'project/emscripten/boxedwine-shell.js';
export const baselineCommit = '65467424603484756a73308412f40b906d28b650';

function source(file, baseline) {
  return baseline
    ? execFileSync('git', ['-C', sourceRoot, 'show', `${baselineCommit}:${file}`], { encoding: 'utf8' })
    : readFileSync(new URL(file, `file://${sourceRoot}`), 'utf8');
}

function converterBody(text, multiThreaded) {
  const marker = 'EM_JS(void, boxedwinePresentSoftwareFrame, (const U32* pixels, int width, int height), {';
  const start = text.indexOf(marker);
  assert.ok(start >= 0, 'software presenter EM_JS must exist');
  const end = text.indexOf('\n});', start);
  assert.ok(end > start);
  const body = text.slice(start + marker.length, end);
  const stack = [];
  let keep = true;
  return body.split('\n').filter(line => {
    if (line === '#if !defined(BOXEDWINE_MULTI_THREADED)') {
      stack.push(keep);
      keep = keep && !multiThreaded;
      return false;
    }
    if (line === '#endif') {
      assert.equal(stack.length, 1, 'unexpected conditional nesting');
      keep = stack.pop();
      return false;
    }
    assert.ok(!line.trim().startsWith('#'), 'unknown preprocessor directive in test extraction');
    return keep;
  }).join('\n');
}

function presenterExpression(text) {
  const marker = 'boxedwinePresentSoftwareFrame: ';
  const start = text.indexOf(marker);
  assert.ok(start >= 0, 'shell software presenter must exist');
  const end = text.indexOf('\n        })(),', start);
  assert.ok(end > start);
  return text.slice(start + marker.length, end) + '\n        })()';
}

export function harness({ baseline = false, multiThreaded = false, worker = false, capture = true } = {}) {
  const stats = { allocations: 0, imageData: 0, frames: [], images: [], transfers: 0, checksum: 0 };
  const NativeClampedArray = Uint8ClampedArray;
  function CountedClampedArray(...args) {
    if (typeof args[0] === 'number') stats.allocations++;
    return new NativeClampedArray(...args);
  }
  const canvas = {
    width: 0, height: 0,
    parentElement: { style: { setProperty() {} } },
    getContext(type) {
      assert.equal(type, '2d');
      return {
        putImageData(image, x, y) {
          assert.equal(x, 0); assert.equal(y, 0);
          stats.checksum = (stats.checksum + image.data[0] + image.data[image.data.length - 1]) >>> 0;
          if (capture) {
            stats.frames.push(Uint8Array.from(image.data));
            stats.images.push(image);
          }
        },
      };
    },
  };
  const Module = {};
  const context = vm.createContext({
    Module, HEAPU32: new Uint32Array(1),
    Uint8ClampedArray: CountedClampedArray, Uint32Array, Int32Array,
    SharedArrayBuffer, Atomics,
    ImageData: class {
      constructor(data, width, height) {
        assert.equal(data.length, width * height * 4);
        this.data = data; this.width = width; this.height = height;
        stats.imageData++;
      }
    },
    document: { getElementById() { return canvas; } },
  });
  const present = vm.runInContext(presenterExpression(source(shellFile, baseline)), context);
  Module.boxedwinePresentSoftwareFrame = present;
  if (worker) {
    delete context.document;
    context.postMessage = (message, transfer) => {
      assert.equal(message.cmd, 'callHandler');
      assert.equal(message.handler, 'boxedwinePresentSoftwareFrame');
      assert.equal(transfer.length, 1);
      const originalBuffer = transfer[0];
      const cloned = structuredClone(message, { transfer });
      assert.equal(originalBuffer.byteLength, 0, 'worker buffer must be detached');
      stats.transfers++;
      const [width, height, buffer, presentState] = cloned.args;
      if (capture) stats.frames.push(new Uint8Array(buffer));
      stats.checksum = (stats.checksum + new Uint8Array(buffer)[0]) >>> 0;
      if (presentState) Atomics.store(presentState, 0, 0);
    };
  }
  const convert = vm.compileFunction(converterBody(source(screenFile, baseline), multiThreaded),
    ['pixels', 'width', 'height'], { parsingContext: context });
  return { stats, Module, canvas, context, present,
    run(pixels, width, height, offset = 0) {
      context.HEAPU32 = pixels;
      convert(offset * 4, width, height);
    },
  };
}

function random(seed = 0xabc123) {
  let value = seed >>> 0;
  return () => {
    value ^= value << 13; value ^= value >>> 17; value ^= value << 5;
    return value >>> 0;
  };
}

// Importing the harness for the benchmark must not run tests in the timing run.
if (process.argv[1] === fileURLToPath(import.meta.url)) {
  test('MT preprocessed converter body is unchanged from the pinned baseline', () => {
    assert.equal(converterBody(source(screenFile, false), true),
      converterBody(source(screenFile, true), true));
  });

  test('known channels and arbitrary source alpha match original opaque RGBA', () => {
    const old = harness({ baseline: true }); const next = harness();
    const pixels = Uint32Array.from([0, 0xffffffff, 0x00ff0000, 0xff00ff00, 0x550000ff, 0x12345678]);
    old.run(pixels, 3, 2); next.run(pixels, 3, 2);
    assert.deepEqual(next.stats.frames[0], old.stats.frames[0]);
    assert.deepEqual(Array.from(next.stats.frames[0]), [
      0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 255,
      0, 255, 0, 255, 0, 0, 255, 255, 52, 86, 120, 255,
    ]);
  });

  test('randomized frames, dimensions and source offsets are byte-identical', () => {
    const old = harness({ baseline: true }); const next = harness(); const nextRandom = random();
    for (let n = 0; n < 96; n++) {
      const width = 1 + nextRandom() % 131; const height = 1 + nextRandom() % 97;
      const offset = 1 + nextRandom() % 17;
      const pixels = Uint32Array.from({ length: width * height + offset + 5 }, nextRandom);
      old.run(pixels, width, height, offset); next.run(pixels, width, height, offset);
      assert.deepEqual(next.stats.frames.at(-1), old.stats.frames.at(-1), `random frame ${n}`);
    }
  });

  test('same-size frames reuse pixel storage and ImageData while pixels change', () => {
    const next = harness();
    next.run(new Uint32Array(32).fill(0xff123456), 8, 4);
    const frame = next.Module.__boxedwineSoftwareFrame;
    next.run(new Uint32Array(32).fill(0x00abcdef), 8, 4);
    assert.equal(next.Module.__boxedwineSoftwareFrame, frame);
    assert.equal(next.stats.images[0], next.stats.images[1]);
    assert.equal(next.stats.allocations, 1); assert.equal(next.stats.imageData, 1);
    assert.notDeepEqual(next.stats.frames[0], next.stats.frames[1]);
    assert.deepEqual(Array.from(next.stats.frames[1].subarray(0, 4)), [171, 205, 239, 255]);
  });

  test('resize, equal-area reshape, resize back and refreshed heap use correct buffers', () => {
    const old = harness({ baseline: true }); const next = harness(); const nextRandom = random(987);
    for (const [width, height] of [[7, 9], [9, 7], [1024, 768], [7, 9], [7, 9]]) {
      const pixels = Uint32Array.from({ length: width * height + 3 }, nextRandom);
      old.run(pixels, width, height, 3); next.run(pixels, width, height, 3);
      assert.deepEqual(next.stats.frames.at(-1), old.stats.frames.at(-1));
      assert.equal(next.canvas.width, width); assert.equal(next.canvas.height, height);
    }
    assert.equal(next.stats.allocations, 4); assert.equal(next.stats.imageData, 4);
    assert.notEqual(next.stats.images[0], next.stats.images[1]);
    assert.equal(next.stats.images[3], next.stats.images[4]);
  });

  test('MT worker retains a fresh transferable detached buffer for every frame', () => {
    const old = harness({ baseline: true, multiThreaded: true, worker: true });
    const next = harness({ multiThreaded: true, worker: true }); const nextRandom = random(812);
    for (let n = 0; n < 8; n++) {
      const pixels = Uint32Array.from({ length: 63 }, nextRandom);
      old.run(pixels, 7, 9); next.run(pixels, 7, 9);
      assert.deepEqual(next.stats.frames.at(-1), old.stats.frames.at(-1));
    }
    assert.equal(next.stats.allocations, 8); assert.equal(next.stats.transfers, 8);
    assert.equal(next.Module.__boxedwineSoftwareFrame, undefined);
  });

  test('shell does not reuse ImageData for foreign or MT transferred frame buffers', () => {
    const next = harness();
    next.run(new Uint32Array(2).fill(0x00123456), 2, 1);
    const foreign = Uint8ClampedArray.from([4, 5, 6, 255, 7, 8, 9, 255]);
    next.present(2, 1, foreign.buffer, null);
    assert.notEqual(next.stats.images[0], next.stats.images[1]);
    assert.deepEqual(Array.from(next.stats.frames[1]), Array.from(foreign));
  });

  test('busy presentation guard skips work and successful frame releases it', () => {
    const next = harness();
    next.run(new Uint32Array(1), 1, 1);
    const state = next.Module.__boxedwineSoftwarePresentState;
    assert.equal(Atomics.load(state, 0), 0);
    Atomics.store(state, 0, 1);
    next.run(new Uint32Array(4), 2, 2);
    assert.equal(next.stats.frames.length, 1); assert.equal(next.stats.allocations, 1);
    Atomics.store(state, 0, 0);
    next.run(new Uint32Array(4), 2, 2);
    assert.equal(next.stats.frames.length, 2); assert.equal(Atomics.load(state, 0), 0);
  });
}
