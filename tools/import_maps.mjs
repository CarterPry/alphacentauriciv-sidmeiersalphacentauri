#!/usr/bin/env node
// Recreate the generated browser map fixtures from an existing installation.
import { createHash } from 'node:crypto';
import { lstat, mkdir, mkdtemp, readFile, realpath, rename, rm, writeFile } from 'node:fs/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseMap } from '../src/map.mjs';

const FILENAMES = ['planet.MP', 'planetx.MP', 'xplanet.MP', 'xplanetx.MP'];
const projectRoot = await realpath(path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..'));
const outputDirectory = path.join(projectRoot, 'public', 'game-data', 'maps');

function contains(parent, child) {
  const relative = path.relative(parent, child);
  return relative === '' || (!relative.startsWith(`..${path.sep}`) && relative !== '..' && !path.isAbsolute(relative));
}

async function inspect(file) {
  try {
    return await lstat(file);
  } catch (error) {
    if (error.code === 'ENOENT') return null;
    throw error;
  }
}

async function prepareOutput() {
  // Check every component beneath the actual project root; mkdir({recursive})
  // alone would follow a redirected public/game-data directory.
  let directory = projectRoot;
  for (const component of ['public', 'game-data', 'maps']) {
    directory = path.join(directory, component);
    let info = await inspect(directory);
    if (!info) {
      await mkdir(directory);
      info = await inspect(directory);
    }
    if (info.isSymbolicLink() || !info.isDirectory()) {
      throw new Error(`Refusing redirected or non-directory output component: ${directory}`);
    }
  }
  const resolved = await realpath(outputDirectory);
  if (resolved !== outputDirectory || !contains(projectRoot, resolved)) {
    throw new Error('Map output must remain inside this project at public/game-data/maps.');
  }
  for (const name of [...FILENAMES, 'index.json']) {
    const destination = path.join(outputDirectory, name);
    const info = await inspect(destination);
    if (info && (info.isSymbolicLink() || !info.isFile())) {
      throw new Error(`Refusing redirected or non-file output: ${destination}`);
    }
  }
}

export async function importMaps(installation) {
  if (typeof installation !== 'string' || !installation.trim()) {
    throw new TypeError('Provide the path to the installed Alpha Centauri directory.');
  }
  const sourceRoot = await realpath(installation);
  if (contains(sourceRoot, outputDirectory) || contains(outputDirectory, sourceRoot)) {
    throw new Error('Source installation and generated map output must not overlap.');
  }

  // Validate all four files before changing any generated output. Read and hash
  // the same snapshots that are written, even if the installation later changes.
  const sources = [];
  for (const name of FILENAMES) {
    const source = await realpath(path.join(sourceRoot, 'maps', name));
    if (!contains(sourceRoot, source)) {
      throw new Error(`Source map resolves outside the selected installation: ${name}`);
    }
    const bytes = await readFile(source);
    try {
      parseMap(bytes);
    } catch (error) {
      throw new Error(`Cannot import ${name}: ${error.message}`, { cause: error });
    }
    sources.push({ name, bytes, sha256: createHash('sha256').update(bytes).digest('hex') });
  }
  await prepareOutput();
  const index = {
    files: sources.map(({ name, bytes, sha256 }) => ({
      name,
      url: `/game-data/maps/${name}`,
      bytes: bytes.byteLength,
      sha256,
    })),
  };

  const staging = await mkdtemp(path.join(outputDirectory, '.import-maps-'));
  try {
    for (const { name, bytes } of sources) {
      await writeFile(path.join(staging, name), bytes, { flag: 'wx' });
    }
    await writeFile(path.join(staging, 'index.json'), `${JSON.stringify(index, null, 2)}\n`, { flag: 'wx' });
    // Atomic replacement also avoids modifying a source through a hard-linked
    // old destination. Publish the index only after all four maps are present.
    for (const name of [...FILENAMES, 'index.json']) {
      await rename(path.join(staging, name), path.join(outputDirectory, name));
    }
  } finally {
    await rm(staging, { recursive: true, force: true });
  }
  return { outputDirectory, ...index };
}

const invokedPath = process.argv[1] ? await realpath(process.argv[1]).catch(() => null) : null;
if (invokedPath === await realpath(fileURLToPath(import.meta.url))) {
  const arguments_ = process.argv.slice(2);
  const usage = 'Usage: node tools/import_maps.mjs "/path/to/Sid Meier\'s Alpha Centauri"';
  if (arguments_.length === 1 && ['--help', '-h'].includes(arguments_[0])) {
    console.log(usage);
  } else if (arguments_.length !== 1 || arguments_[0].startsWith('-')) {
    console.error(usage);
    process.exitCode = 2;
  } else {
    try {
      const result = await importMaps(arguments_[0]);
      console.log(`Imported ${result.files.length} validated maps into ${result.outputDirectory}`);
      for (const file of result.files) console.log(`${file.name}: ${file.bytes} bytes, SHA-256 ${file.sha256}`);
    } catch (error) {
      console.error(`Map import failed: ${error.message}`);
      process.exitCode = 1;
    }
  }
}
