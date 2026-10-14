import http from 'node:http';
import { createReadStream } from 'node:fs';
import { stat, realpath } from 'node:fs/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const publicRoot = path.join(root, 'public');
const port = Number(process.env.PORT || 5173);
const mime = { '.html': 'text/html; charset=utf-8', '.css': 'text/css', '.js': 'text/javascript', '.mjs': 'text/javascript', '.json': 'application/json', '.wasm': 'application/wasm', '.png': 'image/png', '.jpg': 'image/jpeg', '.svg': 'image/svg+xml', '.wav': 'audio/wav', '.mp3': 'audio/mpeg', '.zip': 'application/zip', '.txt': 'text/plain; charset=utf-8', '.md': 'text/plain; charset=utf-8', '.c': 'text/plain; charset=utf-8', '.ico': 'image/x-icon' };

const server = http.createServer(async (req, res) => {
  res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
  res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
  res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
  res.setHeader('X-Content-Type-Options', 'nosniff');
  if (!['GET', 'HEAD'].includes(req.method)) { res.writeHead(405); res.end(); return; }
  try {
    const requested = decodeURIComponent(new URL(req.url, 'http://localhost').pathname);
    const sourceMode = requested.startsWith('/src/');
    const evidenceMode = requested.startsWith('/evidence/');
    const base = sourceMode ? path.join(root, 'src') : evidenceMode ? path.join(root, 'analysis') : publicRoot;
    const relative = sourceMode ? requested.slice(5) : evidenceMode ? requested.slice(10) : requested === '/' ? 'index.html' : requested.slice(1);
    const file = path.resolve(base, relative);
    if (!file.startsWith(base + path.sep)) { res.writeHead(403); res.end(); return; }
    const actual = await realpath(file);
    if (!actual.startsWith(base + path.sep)) { res.writeHead(403); res.end(); return; }
    const info = await stat(actual);
    if (!info.isFile()) { res.writeHead(404); res.end(); return; }
    res.setHeader('Content-Type', mime[path.extname(file).toLowerCase()] || 'application/octet-stream');
    res.setHeader('Accept-Ranges', 'bytes');
    res.setHeader('Cache-Control', 'no-cache');
    let start = 0, end = info.size - 1;
    if (req.headers.range) {
      const match = /^bytes=(\d*)-(\d*)$/.exec(req.headers.range);
      if (!match || (!match[1] && !match[2])) { res.writeHead(416, { 'Content-Range': `bytes */${info.size}` }); res.end(); return; }
      if (!match[1]) start = Math.max(0, info.size - Number(match[2]));
      else { start = Number(match[1]); if (match[2]) end = Math.min(end, Number(match[2])); }
      if (start > end || start >= info.size) { res.writeHead(416, { 'Content-Range': `bytes */${info.size}` }); res.end(); return; }
      res.statusCode = 206;
      res.setHeader('Content-Range', `bytes ${start}-${end}/${info.size}`);
    }
    res.setHeader('Content-Length', Math.max(0, end - start + 1));
    if (req.method === 'HEAD' || info.size === 0) { res.end(); return; }
    createReadStream(actual, { start, end }).on('error', () => res.destroy()).pipe(res);
  } catch (error) {
    res.writeHead(error.code === 'ENOENT' ? 404 : 400, { 'Content-Type': 'text/plain' });
    res.end(error.code === 'ENOENT' ? 'Not found' : 'Invalid request');
  }
});
server.listen(port, '127.0.0.1', () => console.log(`Alpha Centauri browser workspace: http://127.0.0.1:${port}`));
