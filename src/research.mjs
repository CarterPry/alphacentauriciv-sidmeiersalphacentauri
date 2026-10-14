// A bounded transcription of the installed terranx.exe research predicates.
// Evidence: analysis/native/code-research-eligibility.c (0x5bac20),
// code-tech-evaluation-b.c (0x5b9f20), code-tech-depth.c (0x5b9f90).
// This module does not implement the context-dependent AI scorer or research cost.
export function buildTechnologyModel(technologies) {
  const byKey = new Map(technologies.map(t => [t.id.toLowerCase(), t]));
  const resolve = prerequisite => {
    const raw = (typeof prerequisite === 'string' ? prerequisite : prerequisite.raw).trim();
    if (raw.toLowerCase() === 'none') return -1;
    if (raw.toLowerCase() === 'disable') return -2;
    return byKey.get(raw.toLowerCase())?.index ?? -2;
  };
  const records = technologies.map(t => ({ ...t, prerequisiteIndices: t.prerequisites.map(resolve) }));
  const at = index => records.find(t => t.index === index);

  function hasTechnology(index, owned, faction = 1) {
    if (!Number.isInteger(faction) || faction < 1 || faction > 7) return false;
    if (index === -1) return true;
    if (index < 0 || index >= 0x58) return false;
    const t = at(index);
    if (!t) return false;
    const [a, b] = t.prerequisiteIndices;
    return a >= -1 && (b >= -1 || a === -1) && owned.has(t.id);
  }

  function eligible(index, owned, { expansion = true, faction = 1 } = {}) {
    // Native callers supply a table index. Explicit bounds protect the web API.
    if (!Number.isInteger(index) || index < 0 || index >= 0x59 || faction < 1 || faction > 7) return false;
    const t = at(index);
    if (!t || hasTechnology(index, owned, faction)) return false;
    if (!expansion && index >= 0x4e && index <= 0x56) return false;
    const [a, b] = t.prerequisiteIndices;
    return a >= -1 && b >= -1 && hasTechnology(a, owned, faction) && hasTechnology(b, owned, faction);
  }

  function depth(index, visiting = new Set()) {
    if (index < 0 || index >= 0x59 || !at(index)) return 0;
    if (visiting.has(index)) throw new Error(`Cyclic technology prerequisite at ${index}`);
    const next = new Set(visiting).add(index);
    return 1 + Math.max(...at(index).prerequisiteIndices.map(i => depth(i, next)));
  }
  return { records, hasTechnology, eligible, depth, resolve };
}
