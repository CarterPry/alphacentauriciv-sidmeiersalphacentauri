import test from 'node:test';
import assert from 'node:assert/strict';
import { copyFile, mkdir, mkdtemp, readFile, readdir, rename, rm, symlink, writeFile } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { tmpdir } from 'node:os';
import path from 'node:path';
import { parseMap, MapFormatError } from '../src/map.mjs';

// Expected values were recorded directly from the installed .MP bytes before
// writing the reader. Copyrighted fixtures are imported locally, not committed.
const cases = [
  ['planet.MP', 80, 3200, 128,
    '24b1a6b018f0aaddde0ecc5712cc302359c872228b0342f0f30b9004670cdb30',
    '12172ff922b894b1d5c557a2d7cacd6ff279686ca493e8f55515d01d895349c7'],
  ['planetx.MP', 128, 8192, 338,
    '81e96fbe71c7be0b829e014bb66a15e033052e9c86d0e9b01c93aab10fc2614c',
    '202fae0815f2af9db8eda865aaf9691131a4c365c75adc3e157b8167b453d77b'],
  ['xplanet.MP', 80, 3200, 128,
    'f9e99006281a88f33cfe1ae390eae8e6870e1baeb520947a0169d329e0ef50d6',
    '00ea60505389fca8cc64b4537a29c380e83fb7da25fcba11e0df9f3d502bf0f0'],
  ['xplanetx.MP', 128, 8192, 338,
    'f93deb3cc59aaf74a4d5efdda08358ce2c2a1a4e837c043a82afea59bce90023',
    '9350c0bfe82b2ca3f0186e74e3868b9472b56e733614fb6b4ab1e7b898209da9'],
];
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const fixtures = await Promise.all(cases.map(async ([name]) => {
  try {
    return await readFile(new URL(`../public/game-data/maps/${name}`, import.meta.url));
  } catch (error) {
    if (error.code === 'ENOENT') return null;
    throw error;
  }
}));
const missingFixture = 'Local original .MP fixture is absent; see analysis/port/maps-format.md.';

for (const [index, [name, dimension, count, secondaryBytes, fileHash, tileHash]] of cases.entries()) {
  test(`decodes ${name} and preserves every original tile byte`, { skip: !fixtures[index] && missingFixture }, () => {
    const map = parseMap(fixtures[index]);
    assert.equal(sha256(map.rawBytes), fileHash);
    assert.equal(sha256(map.rawTiles), tileHash);
    assert.equal(map.version, 5);
    assert.equal(map.width, dimension);
    assert.equal(map.height, dimension);
    assert.equal(map.tileCount, count);
    assert.equal(map.mapFlags, 0);
    assert.equal(map.rawSecondary.byteLength, secondaryBytes);
    assert.equal(map.rawHeader.byteLength, 2724);
    assert.equal(map.tileAtIndex(0).raw.byteLength, 44);
    assert.equal(map.tileAtIndex(0).flags, 0x20);
    assert.equal(map.tileAtIndex(count / 2).flags, 0x100000);
    assert.equal(map.tileAtIndex(count / 2).factionNibble, 15);
    assert.equal(map.tileAtIndex(count - 1).raw.byteLength, 44);
    assert.equal('terrain' in map.tileAtIndex(0), false);
  });
}

const source = fixtures[0];
const requiresMap = { skip: !source && missingFixture };

test('accepts fetch-style ArrayBuffer and views with nonzero byte offsets', requiresMap, () => {
  const padded = new Uint8Array(source.byteLength + 37);
  padded.fill(0xab);
  padded.set(source, 19);
  const buffer = source.buffer.slice(source.byteOffset, source.byteOffset + source.byteLength);
  for (const input of [buffer, padded.subarray(19, 19 + source.byteLength), new DataView(padded.buffer, 19, source.byteLength)]) {
    assert.equal(sha256(parseMap(input).rawBytes), cases[0][4]);
  }
});

test('retains an owned snapshot when the input is subsequently changed', requiresMap, () => {
  const input = Uint8Array.from(source);
  const map = parseMap(input);
  input.fill(0);
  assert.equal(sha256(map.rawBytes), cases[0][4]);
  assert.equal(map.tileAtIndex(1600).flags, 0x100000);
});

test('rejects altered signature terminators and unsupported version numbers', requiresMap, () => {
  for (const offset of [0, 9, 10]) {
    const bad = Uint8Array.from(source);
    bad[offset] ^= 1;
    assert.throws(() => parseMap(bad), /TERRANMAP signature/);
  }
  for (const version of [4, 6]) {
    const bad = Uint8Array.from(source);
    new DataView(bad.buffer).setUint32(11, version, true);
    assert.throws(() => parseMap(bad), /Unsupported map version/);
  }
});

test('rejects truncation and unrecognized trailing payloads', requiresMap, () => {
  for (const length of [0, 14, 2738, 2739, source.byteLength - 1]) {
    assert.throws(() => parseMap(source.subarray(0, length)), MapFormatError);
  }
  const extra = new Uint8Array(source.byteLength + 1);
  extra.set(source);
  assert.throws(() => parseMap(extra), /byte length/);
});

test('rejects inconsistent or unsafe stored dimensions', requiresMap, () => {
  for (const [offset, value, message] of [
    [15, 81, /positive even width/],
    [19, -1, /positive height/],
    [35, 3199, /tile count/],
    [2619, 127, /secondary-buffer/],
  ]) {
    const bad = Uint8Array.from(source);
    new DataView(bad.buffer).setInt32(offset, value, true);
    assert.throws(() => parseMap(bad), message);
  }
  const huge = Uint8Array.from(source);
  const view = new DataView(huge.buffer);
  view.setInt32(15, 0x7ffffffe, true);
  view.setInt32(19, 0x7fffffff, true);
  assert.throws(() => parseMap(huge), /integer layout/);
});

test('rejects invalid record indexes and nonbinary input', requiresMap, () => {
  const map = parseMap(source);
  for (const index of [-1, 0.5, map.tileCount, NaN, '0']) {
    assert.throws(() => map.tileAtIndex(index), RangeError);
  }
  assert.throws(() => parseMap('TERRANMAP'), TypeError);
});

test('map importer reproduces fixtures and enforces its output boundary', {
  skip: fixtures.some(fixture => !fixture) && missingFixture,
}, async t => {
  const scratch = await mkdtemp(path.join(tmpdir(), 'alpha-maps-import-'));
  t.after(() => rm(scratch, { recursive: true, force: true }));
  const project = path.join(scratch, 'project');
  const installation = path.join(scratch, 'installation');
  const outside = path.join(scratch, 'outside');
  const destination = path.join(project, 'public', 'game-data', 'maps');
  for (const directory of [path.join(project, 'tools'), path.join(project, 'src'), path.join(installation, 'maps'), outside]) {
    await mkdir(directory, { recursive: true });
  }
  await copyFile(new URL('../tools/import_maps.mjs', import.meta.url), path.join(project, 'tools', 'import_maps.mjs'));
  await copyFile(new URL('../src/map.mjs', import.meta.url), path.join(project, 'src', 'map.mjs'));
  for (const [index, [name]] of cases.entries()) {
    await writeFile(path.join(installation, 'maps', name), fixtures[index]);
  }
  await writeFile(path.join(installation, 'maps', 'unrelated.MP'), 'Do not import this file.');
  const run = (sourceRoot = installation) => spawnSync(process.execPath, [path.join(project, 'tools', 'import_maps.mjs'), sourceRoot], { encoding: 'utf8' });
  const outputIdentity = async () => Promise.all((await readdir(destination)).sort().map(async name => [name, sha256(await readFile(path.join(destination, name)))]));

  await t.test('creates exactly four maps and an index with their source hashes', async () => {
    const result = run();
    assert.equal(result.status, 0, result.stderr);
    const names = (await readdir(destination)).sort();
    assert.deepEqual(names, ['index.json', ...cases.map(([name]) => name)].sort());
    const index = JSON.parse(await readFile(path.join(destination, 'index.json'), 'utf8'));
    assert.deepEqual(index.files.map(file => file.name), cases.map(([name]) => name));
    for (const [i, file] of index.files.entries()) {
      assert.deepEqual(file, { name: cases[i][0], url: `/game-data/maps/${cases[i][0]}`, bytes: fixtures[i].byteLength, sha256: cases[i][4] });
      assert.equal(sha256(await readFile(path.join(destination, file.name))), cases[i][4]);
      assert.equal(sha256(await readFile(path.join(installation, 'maps', file.name))), cases[i][4]);
    }
  });

  const expectedOutput = await outputIdentity();
  await t.test('reimport is deterministic', async () => {
    const result = run();
    assert.equal(result.status, 0, result.stderr);
    assert.deepEqual(await outputIdentity(), expectedOutput);
  });

  await t.test('validates the last source before replacing any generated file', async () => {
    const sourceFile = path.join(installation, 'maps', 'xplanetx.MP');
    await writeFile(sourceFile, 'invalid final source');
    const result = run();
    assert.equal(result.status, 1);
    assert.match(result.stderr, /Cannot import xplanetx.MP/);
    assert.deepEqual(await outputIdentity(), expectedOutput);
    await writeFile(sourceFile, fixtures[3]);
  });

  await t.test('rejects a redirected output directory', async () => {
    const saved = `${destination}-saved`;
    await rename(destination, saved);
    await symlink(outside, destination, 'dir');
    const result = run();
    assert.equal(result.status, 1);
    assert.match(result.stderr, /Refusing redirected/);
    assert.deepEqual(await readdir(outside), []);
    await rm(destination);
    await rename(saved, destination);
  });

  await t.test('rejects a redirected output file without modifying its target', async () => {
    const outputFile = path.join(destination, 'planet.MP');
    const saved = `${outputFile}-saved`;
    const target = path.join(outside, 'source-sentinel');
    await writeFile(target, 'unchanged');
    await rename(outputFile, saved);
    await symlink(target, outputFile);
    const result = run();
    assert.equal(result.status, 1);
    assert.match(result.stderr, /Refusing redirected/);
    assert.equal(await readFile(target, 'utf8'), 'unchanged');
    await rm(outputFile);
    await rename(saved, outputFile);
  });

  await t.test('rejects source/output overlap before touching output', async () => {
    const result = run(project);
    assert.equal(result.status, 1);
    assert.match(result.stderr, /must not overlap/);
    assert.deepEqual(await outputIdentity(), expectedOutput);
    for (const [name, , , , expectedHash] of cases) {
      assert.equal(sha256(await readFile(path.join(installation, 'maps', name))), expectedHash);
    }
  });
});
