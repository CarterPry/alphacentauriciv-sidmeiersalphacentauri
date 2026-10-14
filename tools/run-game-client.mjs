// Run the skill's exact client bytes within local dependency resolution.
import { copyFile, mkdir } from 'node:fs/promises';
import { homedir } from 'node:os';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
const source = `${homedir()}/.codex/skills/develop-web-game/scripts/web_game_playwright_client.js`;
const target = new URL('../output/web_game_playwright_client.mjs', import.meta.url);
await mkdir(new URL('../output/', import.meta.url), { recursive: true });
await copyFile(source, target);
const child = spawn(process.execPath, [fileURLToPath(target), ...process.argv.slice(2)], { stdio: 'inherit' });
child.on('exit', code => { process.exitCode = code ?? 1; });
