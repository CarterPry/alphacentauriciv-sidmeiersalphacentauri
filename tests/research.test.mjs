import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { buildTechnologyModel } from '../src/research.mjs';

const data = JSON.parse(await readFile(new URL('../public/game-data/rules.json', import.meta.url)));
const model = buildTechnologyModel(data.versions.alphax.tables.technologies);
const index = id => model.records.find(t => t.id === id).index;

test('each reference resolves, and the entire original graph is acyclic', () => {
  assert.equal(model.records.length, 89);
  for (const t of model.records) {
    for (const p of t.prerequisites) {
      if (!['None', 'Disable'].includes(p.raw)) assert.ok(model.resolve(p) >= 0, `${t.id}: ${p.raw}`);
    }
    assert.ok(Number.isInteger(model.depth(t.index)));
  }
});

test('roots, both prerequisites, ownership, and zero faction follow recovered predicates', () => {
  const empty = new Set();
  assert.equal(model.eligible(index('Ecology'), empty), true);
  assert.equal(model.depth(index('Ecology')), 1);
  assert.equal(model.eligible(index('Chemist'), new Set(['Indust'])), false);
  assert.equal(model.eligible(index('Chemist'), new Set(['Physic'])), false);
  assert.equal(model.eligible(index('Chemist'), new Set(['Indust', 'Physic'])), true);
  assert.equal(model.eligible(index('Chemist'), new Set(['Indust', 'Physic', 'Chemist'])), false);
  assert.equal(model.eligible(index('Ecology'), empty, { faction: 0 }), false);
  assert.equal(model.hasTechnology(-1, empty), true);
  assert.equal(model.hasTechnology(-1, empty, 0), false);
});

test('disabled records cannot be owned or researched', () => {
  const owned = new Set(model.records.map(t => t.id));
  for (const t of model.records.filter(t => t.prerequisiteIndices.every(p => p === -2))) {
    assert.equal(model.eligible(t.index, owned), false);
    assert.equal(model.hasTechnology(t.index, owned), false);
  }
});

test('base-game mode excludes slots 78–86 regardless of their prerequisites', () => {
  for (let i = 78; i <= 86; i++) {
    const t = model.records.find(t => t.index === i);
    const owned = new Set(model.records.filter(x => x.id !== t.id).map(x => x.id));
    assert.equal(model.eligible(i, owned, { expansion: false }), false);
    if (t.prerequisiteIndices.every(p => p >= -1)) assert.equal(model.eligible(i, owned), true);
  }
});

test('slot 88 is repeatable because ownership storage excludes it', () => {
  const owned = new Set(model.records.map(t => t.id));
  assert.equal(model.hasTechnology(88, owned), false);
  assert.equal(model.eligible(88, owned), true);
});

test('web bounds reject invalid indices, and cycle detection protects edited rules', () => {
  assert.equal(model.eligible(-1, new Set()), false);
  assert.equal(model.eligible(89, new Set()), false);
  const cyclic = buildTechnologyModel([{ index: 0, id: 'a', prerequisites: ['a', 'None'] }]);
  assert.throws(() => cyclic.depth(0), /Cyclic/);
});
