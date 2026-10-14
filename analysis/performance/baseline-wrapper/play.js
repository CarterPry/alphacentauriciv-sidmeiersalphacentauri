/* Local integration for the pinned Boxedwine runtime and documented emulator fixes. */
(async function () {
  const params = new URLSearchParams(location.search);
  const edition = params.get('edition') === 'alpha-centauri' ? 'alpha-centauri' : 'alien-crossfire';
  const executable = edition === 'alpha-centauri' ? 'terran.exe' : 'terranx.exe';
  const legacyWine = params.get('wine') === 'legacy';
  const engines = new Set(['SingleThreaded', 'SingleThreadedJit', 'MultiThreaded', 'MultiThreadedJit', 'SingleThreadedJitDisjoint', 'SingleThreadedJitFocus']);
  const requested = params.get('engine');
  const engine = engines.has(requested) ? requested : 'SingleThreadedJitFocus';
  const base = '/runtime/' + engine + '/';
  const status = document.getElementById('session-status');
  const state = { edition, executable, engine, phase:'loading', error:null, log:[], source:'Installed original x86 executable; CPU emulated in WebAssembly', persistence:'IndexedDB, this browser and origin', coordinates:'Canvas pixels, origin top-left, x right and y down. Native game state is opaque to this wrapper.' };
  document.getElementById('edition-title').textContent = edition === 'alpha-centauri' ? 'Alpha Centauri' : 'Alien Crossfire';
  window.render_game_to_text = () => JSON.stringify({...state, log:state.log.slice(-6), canvas:{width:document.getElementById('canvas').width,height:document.getElementById('canvas').height}});
  // Native Wine time is real time; this hook deliberately does not claim deterministic simulation.
  window.advanceTime = ms => new Promise(resolve => setTimeout(resolve, Math.min(ms, 1000)));
  const fail = error => { state.error = String(error); state.phase='error'; status.textContent = 'Unable to start: ' + error; document.getElementById('play-note').textContent='See Log for the captured runtime error. Try the compatibility engine with ?engine=SingleThreaded.'; };
  window.addEventListener('error', event => fail(event.message));
  window.addEventListener('unhandledrejection', event => fail(event.reason));
  function loadScript(src) {return new Promise((resolve,reject)=>{const script=document.createElement('script');script.src=src;script.onload=resolve;script.onerror=()=>reject(new Error('Could not load '+src));document.body.append(script);});}
  document.getElementById('fullscreen-btn').onclick=async()=>{const target=document.getElementById('dropzone');if(document.fullscreenElement)await document.exitFullscreen();else await target.requestFullscreen();};
  document.getElementById('log-btn').onclick=()=>{const checkbox=document.getElementById('showConsole');checkbox.checked=!checkbox.checked;if(typeof toggleConsole==='function')toggleConsole();};
  const savesDialog=document.createElement('dialog');
  savesDialog.id='saved-games';
  savesDialog.innerHTML='<h2>Saved games</h2><p>Browser saves stay on this device. Download a copy for backup. Imported saves appear on drive D: in the game’s Load Game dialog.</p><div id="saved-list"></div><label class="import-save">Import .SAV <input id="import-save" type="file" accept=".sav,.SAV"></label><p id="save-feedback" role="status"></p><button id="close-saves">Close</button>';
  document.body.append(savesDialog);
  document.getElementById('close-saves').onclick=()=>savesDialog.close();
  function saveFiles() {
    const result=[];
    if(typeof FS==='undefined'||typeof ROOT==='undefined')return result;
    function walk(path,depth=0) {
      if(depth>8||!FS.analyzePath(path).exists)return;
      for(const name of FS.readdir(path)) {
        if(name==='.'||name==='..')continue;
        const file=path+'/'+name, stat=FS.stat(file);
        if(FS.isDir(stat.mode))walk(file,depth+1);
        else if(/\.sav$/i.test(name))result.push({file,name,bytes:stat.size});
      }
    }
    walk(ROOT+'/home/username/.wine/drive_c/files');
    if(typeof Config!=='undefined')walk(Config.d_drive);
    return result;
  }
  function refreshSaves() {
    const list=document.getElementById('saved-list');list.replaceChildren();
    const files=saveFiles();state.browserSaveCount=files.length;
    if(!files.length){const p=document.createElement('p');p.textContent='No browser saves yet. Saves from your installed copy remain available inside the game.';list.append(p);}
    for(const file of files){const row=document.createElement('div');row.className='save-row';const name=document.createElement('span');name.textContent=file.name+' · '+Math.ceil(file.bytes/1024)+' KB';const button=document.createElement('button');button.textContent='Download';button.onclick=()=>{const url=URL.createObjectURL(new Blob([FS.readFile(file.file)],{type:'application/octet-stream'}));const a=document.createElement('a');a.href=url;a.download=file.name;a.click();setTimeout(()=>URL.revokeObjectURL(url),1000);};row.append(name,button);list.append(row);}
  }
  document.getElementById('saves-btn').onclick=()=>{refreshSaves();savesDialog.showModal();};
  document.getElementById('import-save').onchange=async event=>{
    const file=event.target.files[0];if(!file)return;
    const feedback=document.getElementById('save-feedback');
    try {
      if(typeof FS==='undefined'||!FS.analyzePath(Config.d_drive).exists)throw new Error('Wait for the game files to finish loading.');
      const bytes=new Uint8Array(await file.arrayBuffer());
      const signature=[84,69,82,82,65,78,0,26];
      if(bytes.length<12||signature.some((value,index)=>bytes[index]!==value))throw new Error('This file does not have an Alpha Centauri save header. The game checks the remaining save format when loading.');
      let name=file.name.replace(/[^a-z0-9 _.()-]/gi,'_');
      if(!/\.sav$/i.test(name))name+='.SAV';
      if(FS.analyzePath(Config.d_drive+'/'+name).exists)name=Date.now()+'-'+name;
      FS.writeFile(Config.d_drive+'/'+name,bytes);
      await new Promise((resolve,reject)=>FS.syncfs(false,error=>error?reject(error):resolve()));
      feedback.textContent='Imported '+name+'. Load it from D: inside the game.';refreshSaves();
    } catch(error){feedback.textContent=error.message||String(error);}
    event.target.value='';
  };
  try {
    const manifestResponse=await fetch('/runtime/game-manifest.json');
    if(!manifestResponse.ok)throw new Error('Run python3 tools/setup_browser_runtime.py --patched-runtime first.');
    const manifest=await manifestResponse.json();
    state.gameFiles=manifest.fileCount;state.gameSha256=manifest.archiveSha256;
    await loadScript(base+'boxedwine-shell.js');
    // A single same-origin archive preserves every installed game asset and both editions.
    Config.urlParams = new URLSearchParams({root:legacyWine?'wine-legacy.zip':'wine.zip',rootBase:'/runtime/',app:'alpha-centauri.zip',appBase:'/runtime/',p:executable,resolution:'1024x768',bpp:'32',auto:params.get('autostart')==='1'?'true':'false',sound:params.get('sound')==='false'?'false':'true',audioFreq:'22050',storage:'indexeddb',storageKey:legacyWine?'legacy-alpha-centauri':'alpha-centauri',disableWasmJitForWrittenCode:params.get('jitWritten')==='allow'?'false':'true',network:'false'}).toString() + '&env=%22WINEDLLOVERRIDES:mscoree,mshtml' + (params.get('audio')==='disabled'?',sound,soundx':'') + '=%22';
    Config.showUploadDownload=false;
    Config.showSaveJITCache=false;
    if(params.get('trace')==='files') {
      const emulatorParams=getEmulatorParams;
      window.getEmulatorParams=()=>{const args=emulatorParams();args.splice(args.indexOf('/bin/wine'),0,'-env','WINEDEBUG=+file');return args;};
    }
    // The tested interpreter and patched JIT configurations use Wine's GDI renderer.
    // ?renderer=default is reserved for compatibility investigations.
    if(params.get('renderer')!=='default') {
      const initFilesystem=initBrowserFilesystem;
      window.initBrowserFilesystem=callback=>initFilesystem(()=>{
        const dir=ROOT+'/home/username/.wine';
        FS.mkdirTree(dir);
        const file=dir+'/user.reg';
        let reg=FS.analyzePath(file).exists?FS.readFile(file,{encoding:'utf8'}):'WINE REGISTRY Version 2\n';
        const section='[Software\\\\Wine\\\\Direct3D]';
        const lines=reg.split('\n');
        let inSection=false;
        // Replace only these two keys and avoid accumulating duplicate sections.
        reg=lines.filter(line=>{
          if(line.startsWith('['))inSection=line.startsWith(section);
          return !(inSection&&/^"(?:renderer|DirectDrawRenderer)"=/.test(line));
        }).join('\n');
        const index=reg.indexOf(section);
        const keys='\n"renderer"="gdi"\n"DirectDrawRenderer"="gdi"';
        if(index>=0){const end=reg.indexOf('\n',index);reg=reg.slice(0,end)+keys+reg.slice(end);}
        else reg+='\n'+section+keys+'\n';
        FS.writeFile(file,reg);
        FS.syncfs(false,error=>error?fail(error):callback());
      });
    }
    Module.locateFile = path => base+path;
    const originalPrint=Module.print;
    Module.print=(...args)=>{const text=args.join(' ');state.log.push(text);if(state.log.length>100)state.log.shift();originalPrint(...args);const output=document.getElementById('output');if(output.value.length>250000)output.value=output.value.slice(-200000);if(/Importing dlls.*failed|Main exe initialization.*failed|Unhandled page fault/.test(text))fail(text);};
    const originalError=Module.printErr;
    Module.printErr=(...args)=>{state.log.push(args.join(' '));originalError(...args);};
    Module.onAbort=reason=>fail(reason);
    const originalInit=Module.onRuntimeInitialized;
    Module.onRuntimeInitialized=()=>{if(originalInit)originalInit();state.phase='runtime-active';status.textContent='Runtime active';document.getElementById('play-note').textContent='Initial startup can take several minutes. Click the game to focus keyboard controls. Ctrl+S opens Save Game; use Saved games to download backups.';document.getElementById('canvas').focus();};
    const originalStart=start;
    window.start=()=>{state.phase='booting';status.textContent='Starting '+executable+'…';originalStart();};
    const monitor=setInterval(()=>{if(state.phase==='loading'&&document.getElementById('startbtn').style.display!=='none'){state.phase='ready';status.textContent='Ready · '+manifest.fileCount.toLocaleString()+' game files available';}if(state.phase==='runtime-active'||state.phase==='error')clearInterval(monitor);},500);
    await loadScript(base+'boxedwine.js');
  } catch(error) {fail(error.message);}
})();
