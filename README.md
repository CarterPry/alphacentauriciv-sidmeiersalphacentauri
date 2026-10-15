# alphacentauriciv (sidmeiersalphacentauri)

The target is the **full installed Planetary Pack**, including its mechanics and assets. This workspace combines REA evidence, reusable browser data/readers, and an experimental browser runtime for the original Windows executables.

**Current status:** both original editions reach gameplay in the browser. Alien Crossfire has demonstrated a new world, base founding, unit movement, turn advancement, a native save, and loading that save after a full browser restart. Base Alpha Centauri has demonstrated a new world, base naming/founding, unit movement, turn advancement, and saving. Ctrl+S opens the native save dialog in both. The default is the locally built runtime with compatibility and performance fixes. The data library and research laboratory also work. The independent JavaScript engine remains partial; long campaigns and complete compatibility are not yet verified. [Exact test scope and evidence](analysis/runtime/runtime-validation.json).

## Play online

Open **https://alphacentauriciv.carterpry.com**. Choose either cover to start loading. The complete runtime/game download is about 603 MB before native initialization. No CrossOver, Steam or installed game is required on the visiting computer. Saves stay in that browser and origin; use **… → Saved games** to transfer a localhost save.

## Open locally

For a fresh clone, first follow **Rebuild the local assets and runtime** below using your installed game files. Git includes the source, runtime patches, analysis and evidence; generated game/runtime bundles, SDKs, browser profiles and personal saves stay local.

```sh
npm install
npm start
```

Open **http://127.0.0.1:5173**. Keep the same host and port for browser-local saved data. The server binds only to the local machine and supplies the isolation headers and byte-range requests required by the runtime.

Choose **Regular game** or **Expansion pack** on the cover screen. Loading starts immediately and stays covered until the original game menu has drawn. The small **…** menu contains fullscreen, saved-game backups and logs. The archive remains at `/library.html`.

The default runtime is `SingleThreadedJitInput`, which adds a read-only native input-state bridge to the earlier `SingleThreadedJitFast` optimizations. Those earlier local trials reduced initial menu startup from about 197 to 60 seconds and median menu hover response from 135 to 51 ms. These are measurements on this Mac, not guarantees for other devices or full campaigns. [Performance changes, measurements, and comparison with the BO1 repository](analysis/performance/PERFORMANCE.md).

In **Alien Crossfire**, select an active unit and click the small **Move** button. Hover to see the original engine’s route, then click a destination. Right-click or Escape cancels. The path can span multiple turns; it is not a highlight of every tile reachable this turn. Right-click a unit for the original action menu. Base Alpha Centauri retains its native drag-to-move controls; its planning-entry guards have not been verified.

- **Play:** browser compatibility launchers for `terran.exe` and `terranx.exe`.
- **Research:** original technology tables and an interactive prerequisite laboratory. Its marked discoveries are separate from saved games.
- **Assets:** all 760 converted PCX images and 508 original WAV/MP3 files, with source identity.
- **Analysis:** direct links to recovered code and its evidence.

The installed game remains unchanged. Generated data and runtime files are excluded from Git. No game files are downloaded from third parties.

## Rebuild the local assets and runtime

Python needs Pillow. The importer opens the source installation read-only:

```sh
python3 tools/import_game.py "/Users/carte/Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri"
node tools/import_maps.mjs "/Users/carte/Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri"
python3 tools/setup_browser_runtime.py --patched-runtime
```

Use `--game-dir "/another/installation"` for another local game path. The script downloads checksum-pinned Boxedwine/Wine artifacts and packages the complete installed game. `--patched-runtime` also builds the pinned emulator with the JIT ownership guard, X11 focus backport, scheduler optimization, reusable frame buffers, and the revision-checked input-state bridge, using an SDK installed inside this workspace. Git, Make, and Python are required for that build. The archive changes only documented compatibility preferences in its copied INI; both original executable hashes remain intact. Initial browser loading uses approximately 600 MB of local archives.

For an existing game bundle, `python3 tools/build_browser_runtime.py` rebuilds just the patched emulator. Its `--check` mode verifies source and patch identities without building. Source pins, patch hashes, modified-source hashes, and resulting artifact hashes are retained under `analysis/runtime/jit/`.

Map fixtures were imported from the four installed `.MP` files; their paths and hashes are recorded in `public/game-data/maps/index.json`. The importer does not delete these extra files when rerun.

## Evidence and implementation

- [Initial internal analysis](ALPHA_CENTAURI_ANALYSIS.md): launch, rules, research AI, rendering, sound, and saves; 64 main-session REA records plus separate launcher evidence.
- [State and turn mechanics](analysis/port/state-mechanics.md): 21 further REA records, exact record layouts, turn/upkeep chain, and growth ordering.
- [Combat mechanics](analysis/port/combat-findings.md): 13 further REA records identifying combat rounds, damage updates, artillery caps, and the exact RNG arithmetic.
- [Production mechanics](analysis/port/production-mechanics.md): seven further records tracing accumulation, completion costs, overflow, and queue advancement.
- [Map format](analysis/port/maps-format.md): 8 further REA records and a verified standalone-map schema.
- [Startup investigation](analysis/port/startup-findings.md): 55 further REA records tracing the splash, expensive palette conversions, resource loading, and opening-movie gate, corroborated by runtime file events.
- [Asset import report](analysis/port/assets-import-report.md): ordered rules, factions, media conversion, hashes, and unsupported formats.
- [Port scope and architecture](FULL_GAME_PORT.md): what is implemented and what is still needed for a replacement engine.
- [Runtime provenance](analysis/runtime/runtime-provenance.json): upstream version, source commit, download URLs, and hashes.
- [Emulator diagnosis](analysis/runtime/jit/diagnosis.md): reproducible JIT ownership failure, conservative patch, and targeted engine tests.
- [Keyboard focus backport](analysis/runtime/jit/focus-backport.md): isolated adaptation of the upstream keyboard fix and repeatable build.
- [Save-import path analysis](analysis/port/save-import-findings.md): 19 additional REA records and a native-tested import destination.
- [Mouse planning and minimal launcher](analysis/input/INPUT_AND_UI.md): original route preview, acknowledged cancellation, cover choices and direct launch.
- [Deployment](deploy/README.md): Cloudflare custom domain and exact-byte game archive delivery.
- [Loading screen](analysis/runtime/loading/LOADING_SCREEN.md): native menu detection, startup coverage, input isolation, and screenshot evidence.
- [Evidence verification](analysis/port/evidence-verification.json): all 168 REA records across six bundles and report references checked.

`src/research.mjs` translates the recovered ownership, eligibility, and dependency-depth predicates. It deliberately does not substitute a simplified formula for the original context-dependent AI scorer. `src/map.mjs` reads version-5 `.MP` files and retains every byte; it does not label unproven terrain fields or apply the original loader's gameplay fixups.

```js
import { parseMap } from '/src/map.mjs';
const bytes = await fetch('/game-data/maps/planet.MP').then(r => r.arrayBuffer());
const map = parseMap(bytes);
console.log(map.width, map.height, map.tileCount); // 80, 80, 3200
console.log(map.tileAtIndex(0).raw);              // complete 44-byte record
```

## Validation

```sh
npm test
python3 -m unittest discover -s tools -p 'test_import_game.py' -v
npx playwright install chromium
# Keep npm start running in a separate terminal:
npm run test:browser
npm run test:skill -- --url http://127.0.0.1:5173/ --actions-json '{"steps":[{"buttons":[],"frames":1}]}' --iterations 1 --screenshot-dir output/skill
```

The skill runner copies the installed `develop-web-game` client unchanged into `output/` so it can resolve this project's Playwright dependency. Browser checks exercise prerequisite chains, reset/mode changes, asset search/previews, audio metadata, evidence links, and mobile layout. These tests establish the archive/laboratory behavior, not full original-engine gameplay.
