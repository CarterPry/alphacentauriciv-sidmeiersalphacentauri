import { buildTechnologyModel } from '/src/research.mjs';

const app = document.querySelector('#app');
const esc = text => String(text ?? '').replace(/[&<>"']/g, ch => ({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[ch]));
// Imported URLs already escape each path segment; static UI paths may not.
const assetURL = url => '/game-data/' + url.split('/').map(segment => encodeURIComponent(decodeURIComponent(segment))).join('/');
const state = { view: 'play', edition: 'alphax', known: new Set(), selected: 6, search: '', kind: 'image', page: 0, filter: 'all' };
let rules, assetData, factions, manifest, model;
const get = async path => { const response = await fetch(path); if (!response.ok) throw new Error(`Could not read ${path} (${response.status})`); return response.json(); };

function render() {
  document.querySelectorAll('nav a').forEach(a => a.classList.toggle('active', a.dataset.view === state.view));
  if (!rules) return;
  model = buildTechnologyModel(rules.versions[state.edition].tables.technologies);
  if (state.view === 'play') renderPlay();
  else if (state.view === 'research') renderResearch();
  else if (state.view === 'assets') renderAssets();
  else renderEvidence();
}

function renderPlay() {
  const images = assetData.assets.filter(a => a.kind === 'image' && a.status === 'converted');
  const media = assetData.assets.filter(a => /\.(wav|mp3)$/i.test(a.path));
  app.innerHTML = `<section class="hero"><div class="eyebrow">A new world. A new beginning.</div><h1>Welcome back<br>to Planet.</h1><p>Return to humanity’s next chapter. Your installed Planetary Pack, its original worlds, factions, and archives.</p><a class="btn" id="start-btn" href="/play.html?edition=alien-crossfire">Launch Alien Crossfire <span>↗</span></a><div class="hero-meta">ORIGINAL ENGINE · LOCAL BROWSER EDITION</div></section>
    <div class="section-head"><h2>Choose your expedition</h2><span>Desktop Chromium tested. Allow several minutes for startup.</span></div>
    <section class="edition-grid"><article class="edition"><img src="${assetURL('images/openinga.png')}" alt="Original Alpha Centauri title artwork"><div><div class="eyebrow">THE ORIGINAL GAME</div><h3>Alpha Centauri</h3><p>Seven factions. The struggle for humanity’s future.</p><a class="btn secondary small" href="/play.html?edition=alpha-centauri">Launch original <span>↗</span></a></div></article><article class="edition"><img src="${assetURL('images/xopeninga.png')}" alt="Alien Crossfire title artwork"><div><div class="eyebrow">THE EXPANSION</div><h3>Alien Crossfire</h3><p>New factions, discoveries, units, and alien visitors.</p><a class="btn secondary small" href="/play.html?edition=alien-crossfire">Launch expansion <span>↗</span></a></div></article></section>
    <section class="stats" aria-label="Imported archive"><div class="stat"><strong>${images.length}</strong><span>Converted images</span></div><div class="stat"><strong>${model.records.length}</strong><span>Technology slots</span></div><div class="stat"><strong>${Object.keys(factions.factions).length}</strong><span>Faction files</span></div><div class="stat"><strong>${media.length}</strong><span>Audio assets</span></div></section>`;
}

function techState(t) { return model.hasTechnology(t.index, state.known) ? 'Known' : model.eligible(t.index, state.known, {expansion: state.edition === 'alphax'}) ? 'Available' : t.prerequisiteIndices.some(i => i < -1) ? 'Disabled' : 'Locked'; }
function visibleTechnologies() { return model.records.filter(t => (t.name+' '+t.id).toLowerCase().includes(state.search.toLowerCase()) && (state.filter === 'all' || techState(t).toLowerCase() === state.filter)); }
function renderResearch() {
  const technologies = visibleTechnologies();
  app.innerHTML = `<div class="page-title"><div><div class="eyebrow">DATALINKS / TECHNOLOGY</div><h1>The path to discovery</h1><p>Explore the original prerequisite graph. Mark discoveries to inspect which research becomes available; this laboratory has its own state.</p></div><span class="chip">${state.known.size} DISCOVERIES MARKED</span></div><div class="toolbar"><label for="edition">Rules</label><select id="edition"><option value="alphax" ${state.edition==='alphax'?'selected':''}>Alien Crossfire</option><option value="alpha" ${state.edition==='alpha'?'selected':''}>Alpha Centauri</option></select><input id="tech-search" type="search" placeholder="Find a technology…" aria-label="Find a technology" value="${esc(state.search)}"><select id="tech-filter" aria-label="Research status">${['all','available','known','locked','disabled'].map(f=>`<option ${state.filter===f?'selected':''}>${f}</option>`).join('')}</select><button class="btn secondary small" id="clear-known">Reset discoveries</button></div><div class="research-layout"><div class="tech-list" role="list" aria-label="Technologies">${technologies.map(t=>`<button class="tech-row ${t.index===state.selected?'selected':''}" data-tech="${t.index}" role="listitem"><span><strong>${esc(t.name)}</strong><small>${esc(t.id)} · level ${model.depth(t.index)}</small></span><span class="state ${techState(t)==='Known'?'known':''}">${techState(t)}</span></button>`).join('') || '<div class="empty">No matching discoveries.</div>'}</div><section class="tech-detail" id="tech-detail"></section></div>`;
  document.querySelector('#edition').onchange = e => { state.edition=e.target.value;state.known.clear();render(); };
  document.querySelector('#tech-search').oninput = e => { const pos=e.target.selectionStart;state.search=e.target.value;renderResearch();const input=document.querySelector('#tech-search');input.focus();input.setSelectionRange(pos,pos); };
  document.querySelector('#tech-filter').onchange=e=>{state.filter=e.target.value;renderResearch();};
  document.querySelector('#clear-known').onclick=()=>{state.known.clear();renderResearch();};
  document.querySelectorAll('[data-tech]').forEach(b=>b.onclick=()=>{state.selected=Number(b.dataset.tech);renderResearch();});
  renderTechnology();
}
function renderTechnology() {
  const t=model.records.find(t=>t.index===state.selected) || model.records[0];
  const weights=t.aiWeights;
  const prereqs=t.prerequisiteIndices.map(i=>model.records.find(t=>t.index===i)).filter(Boolean);
  const detail=document.querySelector('#tech-detail');
  detail.innerHTML=`<div class="eyebrow">${esc(t.id)} / SLOT ${String(t.index).padStart(2,'0')}</div><h2>${esc(t.name)}</h2><span class="chip">${techState(t).toUpperCase()}</span><canvas id="tech-graph" aria-label="Prerequisite graph for ${esc(t.name)}"></canvas><h3>Required discoveries</h3><div>${prereqs.length?prereqs.map(p=>`<button class="dependency" data-prereq="${p.index}">${esc(p.name)} ↗</button>`).join(''):t.prerequisiteIndices.some(i=>i===-2)?'<p>Disabled by a prerequisite in the source table.</p>':'<p>Available without prior discoveries.</p>'}</div><h3>Original AI weights</h3><div class="weights">${[['Power',weights.military],['Knowledge',weights.knowledge],['Wealth',weights.infrastructure],['Growth',weights.colonization]].map(([n,v])=>`<div class="weight"><strong>${v}</strong><span>${n}</span></div>`).join('')}</div><button id="mark-known" class="btn small" ${t.index===88||t.prerequisiteIndices.some(i=>i < -1)?'disabled':''}>${state.known.has(t.id)?'Unmark discovery':'Mark as discovered'} <span>＋</span></button><div class="source-line">Source: ${state.edition}.txt:${t.line} · flags ${esc(t.flags)}<br>Predicate: <a href="/evidence/native/code-research-eligibility.c" target="_blank">terranx.exe @ 0x5bac20 ↗</a><br>The full AI scorer also uses live faction and world state.</div>`;
  document.querySelector('#mark-known').onclick=()=>{state.known.has(t.id)?state.known.delete(t.id):state.known.add(t.id);renderResearch();};
  detail.querySelectorAll('[data-prereq]').forEach(b=>b.onclick=()=>{state.selected=Number(b.dataset.prereq);renderResearch();});
  drawGraph();
}
function drawGraph() {
  const canvas=document.querySelector('#tech-graph');if(!canvas)return;
  const t=model.records.find(t=>t.index===state.selected)||model.records[0];
  const ratio=window.devicePixelRatio||1,w=canvas.clientWidth,h=230;
  canvas.width=w*ratio;canvas.height=h*ratio;const c=canvas.getContext('2d');c.scale(ratio,ratio);c.fillStyle='#111d1c';c.fillRect(0,0,w,h);
  const parents=t.prerequisiteIndices.map(i=>model.records.find(t=>t.index===i)).filter(Boolean);
  const next=model.records.filter(x=>x.prerequisiteIndices.includes(t.index)).slice(0,3);
  const box=(x,y,label,current=false)=>{c.fillStyle=current?'#345145':'#1c3029';c.strokeStyle=current?'#a9c9a6':'#4a6256';c.fillRect(x-58,y-15,116,30);c.strokeRect(x-58,y-15,116,30);c.fillStyle=current?'#f2efdf':'#b9cabb';c.textAlign='center';c.font='10px system-ui';c.fillText(label.length>19?label.slice(0,17)+'…':label,x,y+4);};
  const positions=list=>list.map((x,i)=>({t:x,x:w*(i+1)/(list.length+1)}));
  c.strokeStyle='#486356';c.lineWidth=1;for(const p of positions(parents)){c.beginPath();c.moveTo(p.x,45);c.lineTo(w/2,100);c.stroke();}for(const p of positions(next)){c.beginPath();c.moveTo(w/2,130);c.lineTo(p.x,190);c.stroke();}
  positions(parents).forEach(p=>box(p.x,30,p.t.name));positions(next).forEach(p=>box(p.x,205,p.t.name));box(w/2,115,t.name,true);
}

function filteredAssets(){return assetData.assets.filter(a=>(state.kind==='all'||a.kind===state.kind||(state.kind==='audio'&&/\.(wav|mp3)$/i.test(a.path)))&&a.path.toLowerCase().includes(state.search.toLowerCase()));}
function renderAssets(){
  const filtered=filteredAssets(),pages=Math.max(1,Math.ceil(filtered.length/24));state.page=Math.min(state.page,pages-1);const entries=filtered.slice(state.page*24,state.page*24+24);
  app.innerHTML=`<div class="page-title"><div><div class="eyebrow">DATALINKS / ORIGINAL RESOURCES</div><h1>The planetary archive</h1><p>Browse the artwork, voices, and music from your installed copy. Every entry retains the identity of its source file.</p></div><span class="chip">${filtered.length} FILES</span></div><div class="toolbar"><input id="asset-search" type="search" aria-label="Search assets" placeholder="Search filenames…" value="${esc(state.search)}"><select id="asset-kind" aria-label="Asset kind">${[['image','Images'],['audio','Audio'],['all','All formats']].map(([k,l])=>`<option value="${k}" ${state.kind===k?'selected':''}>${l}</option>`).join('')}</select></div><div class="asset-grid">${entries.map(a=>`<button class="asset-card" data-path="${esc(a.path)}"><div class="preview">${a.kind==='image'&&a.url?`<img loading="lazy" src="${assetURL(a.url)}" alt="${esc(a.path)}">`:`<span class="media-icon">${/\.(wav|mp3)$/i.test(a.path)?'♫':'◇'}</span>`}</div><div class="asset-caption"><strong>${esc(a.path)}</strong><small>${a.width?`${a.width} × ${a.height}`:`${(a.sizeBytes/1024).toFixed(0)} KB`} · ${esc(a.status)}</small></div></button>`).join('')||'<div class="empty">No matching assets.</div>'}</div><div class="pagination"><button id="prev" class="btn secondary small" ${state.page===0?'disabled':''}>← Previous</button><span>${state.page+1} / ${pages}</span><button id="next" class="btn secondary small" ${state.page>=pages-1?'disabled':''}>Next →</button></div>`;
  document.querySelector('#asset-search').oninput=e=>{const pos=e.target.selectionStart;state.search=e.target.value;state.page=0;renderAssets();const input=document.querySelector('#asset-search');input.focus();input.setSelectionRange(pos,pos);};
  document.querySelector('#asset-kind').onchange=e=>{state.kind=e.target.value;state.page=0;renderAssets();};
  document.querySelector('#prev').onclick=()=>{state.page--;renderAssets();};document.querySelector('#next').onclick=()=>{state.page++;renderAssets();};
  document.querySelectorAll('[data-path]').forEach(b=>b.onclick=()=>showAsset(assetData.assets.find(a=>a.path===b.dataset.path)));
}
function showAsset(a){
  document.querySelector('#asset-detail').innerHTML=`<div class="eyebrow">ORIGINAL RESOURCE</div><h2>${esc(a.path)}</h2>${a.url&&a.kind==='image'?`<img class="asset-large" src="${assetURL(a.url)}" alt="${esc(a.path)}">`:a.url&&/\.(wav|mp3)$/i.test(a.path)?`<audio controls src="${assetURL(a.url)}"></audio>`:'<p class="muted">This format is inventoried; a browser decoder has not been implemented.</p>'}<div class="asset-metadata">Source SHA-256: ${esc(a.sha256)}<br>Source size: ${a.sizeBytes.toLocaleString()} bytes<br>Status: ${esc(a.status)}${a.outputSha256?`<br>Converted SHA-256: ${esc(a.outputSha256)}`:''}</div>`;
  document.querySelector('#asset-dialog').showModal();
}
function renderEvidence(){
  const cards=[
    ['01 / RULES','Text files become engine tables','0x5873c0','The engine reads named sections for technologies, terrain, unit components, and facilities. The browser importer keeps ordered records and source lines.','code-component-loader.c','code-section-parser.c'],
    ['02 / RESEARCH','Prerequisites are executable rules','0x5bac20','Eligibility checks ownership, both prerequisites, disabled entries, and expansion exclusions. The research laboratory translates this bounded predicate.','code-research-eligibility.c','code-tech-evaluation-b.c'],
    ['03 / AI','Preferences meet world state','0x5bdc10','Research selection combines technology weights, faction priorities, context adjustments, and a randomized selection branch. The full scorer is not yet ported to JavaScript.','code-research-choice.c','code-tech-evaluation-c.c'],
    ['04 / PERSISTENCE','Saves serialize simulation state','0x5a94f0','The writer emits TERRAN, a format field of 86, and state blocks. Native save compatibility requires more than loading the text rules.','code-save-writer.c','code-state-serializer.c'],
    ['05 / PRESENTATION','Images, voxels, and native APIs','0x4bf4b0','The engine uses DirectDraw and separate asset formats. PCX artwork is converted to PNG; CVR geometry and movie formats still need native web decoders.','code-display-init.c','code-voxel-config.c'],
    ['06 / AUDIO','A versioned sound module','0x4c5e50','The engine loads soundx.dll and resolves numbered exports. Browser-readable WAV and MP3 files retain their original bytes.','function-sound-loader.c','soundx.dll.inventory.json'],
    ['07 / MAPS','Forty-four bytes per tile','0x590ed0','The map allocator uses half the full coordinate width per row. All four shipped version-5 maps load in the independent browser reader with complete raw records preserved.','port-code-map-allocation.c','port-code-map-load.c'],
    ['08 / UPKEEP','Turn order changes the outcome','0x4ef1c0','Round processing visits each faction and then its units and bases. Population growth checks stored nutrients before adding the current surplus, and normal growth clears the old stock.','port-code-base-stage-4ef1c0.c','port-code-turn-dispatch.c'],
    ['09 / COMBAT','Separate rolls decide each round','0x506af0','The examined round draws separately against each strength. Ties damage the attacker. Damage is stored before visual effects and the next health check; special branches require further analysis.','combat-code-resolution.c','combat-code-rng.c'],
    ['10 / PRODUCTION','Completion preserves conditional overflow','0x4f07e0','Eligible mineral surplus is added before completion. Cost is deducted and overflow can be capped. Queue advancement discards unavailable items without itself resetting mineral stock.','../port/production-main-4f07e0.c','../port/production-queue-4f06e0.c']
  ];
  app.innerHTML=`<div class="page-title"><div><div class="eyebrow">REA / INTERNAL ARCHITECTURE</div><h1>From evidence to a browser</h1><p>Claims below are tied to the installed executable and its data. Decompiled code establishes static behavior; runtime compatibility is tested separately.</p></div><a class="btn secondary small" target="_blank" href="/evidence/native/evidence-index.json">Open evidence index ↗</a></div><div class="evidence-grid">${cards.map(([n,title,address,body,a,b])=>`<article class="evidence-card"><div class="eyebrow">${n}</div><h2>${title}</h2><code>terranx.exe · ${address}</code><p>${body}</p><a target="_blank" href="/evidence/native/${a}">Primary evidence ↗</a><a target="_blank" href="/evidence/native/${b}">Supporting record ↗</a></article>`).join('')}</div><div class="note">The original-engine browser route preserves the compiled simulation through compatibility software. The independent web implementation currently covers data ingestion, research predicates, and standalone map files; it is not a complete replacement engine.</div><table class="fidelity"><thead><tr><th>SUBSYSTEM</th><th>INDEPENDENT WEB IMPLEMENTATION</th></tr></thead><tbody><tr><td>Rules, factions, images, WAV / MP3</td>Imported with source identity and provenance</td></tr><tr><td>Research ownership, eligibility, depth; version-5 map files</td>Bounded implementation from REA evidence</td></tr><tr><td>World simulation, combat, AI, diplomacy, victory</td>Requires further reconstruction and parity testing</td></tr><tr><td>CVR voxels, movies, original saves, multiplayer</td>Independent decoders, save schema, and networking remain incomplete</td></tr></tbody></table>`;
}

window.render_game_to_text=()=>JSON.stringify({mode:state.view,edition:state.edition,coordinateSystem:state.view==='research'?'Research graph uses canvas pixels, origin top-left; prerequisites above, dependents below.':'DOM interface',selectedTechnology:model?.records.find(t=>t.index===state.selected)?.id,known:[...state.known],eligible:model?.records.filter(t=>model.eligible(t.index,state.known,{expansion:state.edition==='alphax'})).map(t=>t.id),search:state.search,assetPage:state.page,assetResults:assetData?filteredAssets().length:0,launchURLs:['/play.html?edition=alpha-centauri','/play.html?edition=alien-crossfire']});
window.advanceTime=()=>drawGraph();
window.addEventListener('resize',drawGraph);
window.addEventListener('hashchange',()=>{const next=location.hash.slice(1);state.view=['play','research','assets','evidence'].includes(next)?next:'play';state.search='';state.page=0;render();});
document.querySelector('.dialog-close').onclick=()=>document.querySelector('#asset-dialog').close();
document.querySelector('#asset-dialog').addEventListener('close',()=>{const a=document.querySelector('audio');if(a)a.pause();});
document.addEventListener('keydown',e=>{if(e.key==='f'&&!['INPUT','SELECT','TEXTAREA'].includes(document.activeElement.tagName)){document.fullscreenElement?document.exitFullscreen():document.documentElement.requestFullscreen().catch(()=>{});}});
try {
  [rules,assetData,factions,manifest]=await Promise.all(['/game-data/rules.json','/game-data/assets.json','/game-data/factions.json','/game-data/manifest.json'].map(get));
  const requested=location.hash.slice(1);state.view=['research','assets','evidence'].includes(requested)?requested:'play';render();
} catch(error) {app.innerHTML=`<div class="page-title"><div><div class="eyebrow">LOCAL ARCHIVE</div><h1>Import your installation</h1><p>The local archive is not available yet. Run the importer described in README.md, then reload this page.</p><p>${esc(error.message)}</p></div></div>`;}
