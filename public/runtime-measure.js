// Diagnostic only: explicitly imported by the performance probe, never by play.html.
export function observePresentation(Module) {
  if (window.__presentation) return window.__presentation;
  const original = Module.boxedwinePresentSoftwareFrame;
  const result = window.__presentation = { frames: [], moves: [], pending: null, last: null };
  function sample(width, height, buffer, region) {
    const pixels = new Uint32Array(buffer), values = [];
    for (let y = region.y; y < region.y + region.h; y += 3)
      for (let x = region.x; x < region.x + region.w; x += 3)
        values.push(pixels[Math.floor(y * height / 768) * width + Math.floor(x * width / 1024)]);
    return values;
  }
  Module.boxedwinePresentSoftwareFrame = function(width, height, buffer, state) {
    const t = performance.now();
    original(width, height, buffer, state);
    result.frames.push({ at: t, duration: performance.now() - t });
    if (result.frames.length > 10000) result.frames.shift();
    result.last = { width, height, buffer };
    const p = result.pending;
    if (p && p.dispatched !== undefined && !p.completed) {
      const current = sample(width, height, buffer, p.region);
      const changed = current.reduce((n, v, i) => n + (v !== p.before[i] ? 1 : 0), 0);
      if (changed > 12) {
        p.completed = true;
        p.presented = performance.now();
        p.changed = changed;
        p.latency = p.presented - p.dispatched;
        p.dispatchDelay = p.dispatched - p.eventTimestamp;
        result.moves.push(p);
      }
    }
  };
  window.addEventListener('pointermove', e => {
    const p = result.pending;
    if (p && p.dispatched === undefined) {
      p.dispatched = performance.now(); p.eventTimestamp = e.timeStamp;
    }
  }, true);
  result.arm = (region, label) => {
    if (!result.last) throw new Error('No native presentation observed');
    const { width, height, buffer } = result.last;
    result.pending = { label, region, armed: performance.now(), before: sample(width, height, buffer, region) };
  };
  result.summary = () => ({
    frames: result.frames,
    moves: result.moves.map(({ before, ...entry }) => entry),
    pending: result.pending && { label: result.pending.label, dispatched: result.pending.dispatched, completed: result.pending.completed },
  });
  return result;
}
