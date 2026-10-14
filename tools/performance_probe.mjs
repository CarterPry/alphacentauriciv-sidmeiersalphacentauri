// Persistent, opt-in runtime profiling. The game still runs entirely in Chromium.
import { chromium } from 'playwright';
import fs from 'node:fs';
import readline from 'node:readline';

const out = process.argv[4] || 'analysis/performance/baseline';
fs.mkdirSync(out, { recursive: true });
const context = await chromium.launchPersistentContext(process.argv[3] || `${out}/profile`, {
  headless: true, viewport: { width: 1400, height: 1080 }, acceptDownloads: true,
  args: ['--disable-background-timer-throttling', '--disable-renderer-backgrounding', '--js-flags=--max-old-space-size=4096'],
});
const page = context.pages()[0];
await page.addInitScript(() => {
  const measurements = window.__perf = { started: Date.now(), longTasks: [], events: [] };
  new PerformanceObserver(list => {
    for (const e of list.getEntries()) measurements.longTasks.push({ start: e.startTime, duration: e.duration });
  }).observe({ type: 'longtask', buffered: true });
  for (const type of ['pointermove', 'pointerdown', 'keydown']) {
    window.addEventListener(type, e => {
      measurements.events.push({ type, at: performance.now(), delay: performance.now() - e.timeStamp });
      if (measurements.events.length > 2000) measurements.events.shift();
    }, true);
  }
});
page.on('console', m => fs.appendFileSync(`${out}/console.ndjson`, JSON.stringify({ at: Date.now(), type: m.type(), text: m.text() }) + '\n'));
page.on('pageerror', e => console.log('PAGEERROR', String(e)));
page.on('response', r => { if (r.status() >= 400) console.log('HTTP', r.status(), r.url()); });
const cdp = await context.newCDPSession(page);
await cdp.send('Profiler.enable');
await cdp.send('Profiler.setSamplingInterval', { interval: 1000 });
await page.goto(process.argv[2], { waitUntil: 'domcontentloaded' });
console.log('READY FOR COMMANDS', new Date().toISOString());
for await (const line of readline.createInterface({ input: process.stdin })) {
  try {
    const c = JSON.parse(line);
    if (c.action === 'close') { await context.close(); process.exit(0); }
    if (c.action === 'wait') await page.waitForTimeout(c.ms || 1000);
    if (c.action === 'move') await page.mouse.move(c.x, c.y);
    if (c.action === 'click') await page.mouse.click(c.x, c.y, { button: c.button || 'left', clickCount: c.count || 1 });
    if (c.action === 'key') await page.keyboard.press(c.key);
    if (c.action === 'hold') { await page.keyboard.down(c.key); await page.waitForTimeout(c.ms || 150); await page.keyboard.up(c.key); }
    if (c.action === 'type') await page.keyboard.type(c.text);
    if (c.action === 'upload') await page.locator(c.selector || '#import-save').setInputFiles(c.path);
    if (c.action === 'download') { const pending = page.waitForEvent('download'); await page.locator(c.selector || '.save-row button').first().click(); const d = await pending; await d.saveAs(c.path || `${out}/native-roundtrip.SAV`); }
    if (c.action === 'shot') await page.screenshot({ path: `${out}/${c.name || 'current'}.png`, fullPage: true });
    if (c.action === 'evaluate') console.log('RESULT', JSON.stringify(await page.evaluate(c.code)));
    if (c.action === 'profile-start') { await cdp.send('Profiler.start'); console.log('PROFILE START'); }
    if (c.action === 'profile-stop') { const { profile } = await cdp.send('Profiler.stop'); fs.writeFileSync(`${out}/${c.name || 'cpu'}.cpuprofile`, JSON.stringify(profile)); console.log('PROFILE SAVED'); }
    if (c.action === 'hover') {
      await page.evaluate(async () => {
        (await import('/runtime-measure.js')).observePresentation(Module);
        window.__presentation.moves = []; window.__presentation.frames = [];
      });
      await page.waitForTimeout(100);
      const rect = await page.locator('#canvas').boundingBox();
      for (let i = 0; i < (c.count || 12); i++) {
        const y = 253 + (i % 2 ? 0 : 75);
        await page.evaluate(({ y, i }) => window.__presentation.arm({ x: 780, y: y + 16, w: 160, h: 24 }, `hover-${i}`), { y, i });
        await page.mouse.move(rect.x + 835 * rect.width / 1024, rect.y + (y + 30) * rect.height / 768);
        await page.waitForTimeout(500);
      }
      const data = await page.evaluate(() => window.__presentation.summary());
      fs.writeFileSync(`${out}/${c.name || 'hover'}.json`, JSON.stringify(data, null, 2));
      const latencies = data.moves.map(m => m.latency + m.dispatchDelay).sort((a,b) => a-b);
      console.log('HOVER', JSON.stringify({ count: data.moves.length, eventToPresentMs: latencies, pending: data.pending }));
    }
    if (c.action === 'metrics') {
      const data = await page.evaluate(() => ({ ...window.__perf, elapsed: performance.now(), title: document.title, state: window.render_game_to_text?.() }));
      fs.writeFileSync(`${out}/${c.name || 'metrics'}.json`, JSON.stringify(data, null, 2));
      console.log('METRICS', JSON.stringify({ elapsed: data.elapsed, title: data.title, longTasks: data.longTasks.length, recentTasks: data.longTasks.slice(-5), recentEvents: data.events.slice(-5) }));
    }
    if (c.action === 'goto') await page.goto(c.url, { waitUntil: 'domcontentloaded' });
    console.log('STATE', await page.evaluate(() => {
      const s = JSON.parse(window.render_game_to_text?.() || '{}');
      return { phase: s.phase, engine: s.engine, error: s.error, nativeReady: s.nativeReady, title: document.title };
    }));
  } catch (e) { console.log('ERROR', String(e)); }
}
