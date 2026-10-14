/* Local integration for the pinned Boxedwine runtime and documented emulator fixes. */
(async function () {
  const params = new URLSearchParams(location.search);
  const edition = params.get('edition') === 'alpha-centauri' ? 'alpha-centauri' : 'alien-crossfire';
  const executable = edition === 'alpha-centauri' ? 'terran.exe' : 'terranx.exe';
  const legacyWine = params.get('wine') === 'legacy';
  const engines = new Set(['SingleThreaded', 'SingleThreadedJit', 'MultiThreaded', 'MultiThreadedJit', 'SingleThreadedJitDisjoint', 'SingleThreadedJitFocus', 'SingleThreadedJitFast']);
  const requested = params.get('engine');
  const engine = engines.has(requested) ? requested : 'SingleThreadedJitFast';
  const base = '/runtime/' + engine + '/';
  const status = document.getElementById('session-status');
  const state = { edition, executable, engine, phase:'loading', error:null, log:[], source:'Installed original x86 executable; CPU emulated in WebAssembly', persistence:'IndexedDB, this browser and origin', coordinates:'Canvas pixels, origin top-left, x right and y down. Native game state is opaque to this wrapper.' };
  const title=edition === 'alpha-centauri' ? 'Alpha Centauri' : 'Alien Crossfire';
  document.getElementById('edition-title').textContent=title;
  document.getElementById('boot-title').textContent=title;
  const boot=document.getElementById('boot-screen');
  const gameLayers=[document.getElementById('canvas'),document.getElementById('boxedwine-webgl-canvas-0')];
  let stopReadiness=null, sampler=null, watchReadiness=null, startedAt=null;
  const bootState=(phase,stage,detail)=>{document.body.dataset.bootState=phase;boot.setAttribute('aria-busy',String(phase!=='ready'&&phase!=='error'));document.getElementById('boot-stage').textContent=stage;document.getElementById('boot-detail').textContent=detail;};
  const elapsedTimer=setInterval(()=>{if(startedAt){const seconds=Math.floor((performance.now()-startedAt)/1000);document.getElementById('boot-elapsed').textContent=Math.floor(seconds/60)+':'+String(seconds%60).padStart(2,'0')+' elapsed';}},1000);
  document.getElementById('fullscreen-btn').disabled=true;
  document.getElementById('boot-retry').onclick=()=>location.reload();
  // The emulator captures events on window and hit-tests coordinates, ignoring
  // DOM overlays. Install this gate before its handlers and the shortcut bridge.
  // Stop propagation only: host buttons, form controls, scrolling and dialog
  // Escape retain their browser defaults.
  const guestKeys=new Map(), guestButtons=new Set(), releaseEvents=new WeakSet();
  let lastGuestPoint={clientX:0,clientY:0};
  const specialScans={Enter:40,Escape:41,Backspace:42,Tab:43,Space:44,Minus:45,Equal:46,BracketLeft:47,BracketRight:48,Backslash:49,Semicolon:51,Quote:52,Backquote:53,Comma:54,Period:55,Slash:56,CapsLock:57,PrintScreen:70,ScrollLock:71,Pause:72,Insert:73,Home:74,PageUp:75,Delete:76,End:77,PageDown:78,ArrowRight:79,ArrowLeft:80,ArrowDown:81,ArrowUp:82,NumLock:83,NumpadDivide:84,NumpadMultiply:85,NumpadSubtract:86,NumpadAdd:87,NumpadEnter:88,NumpadDecimal:99,ControlLeft:224,ShiftLeft:225,AltLeft:226,MetaLeft:224,ControlRight:228,ShiftRight:229,AltRight:230,MetaRight:224};
  function inputScan(code) {
    if(/^Key[A-Z]$/.test(code))return code.charCodeAt(3)-61;
    if(/^Digit[1-9]$/.test(code))return Number(code[5])+29;
    if(code==='Digit0')return 39;
    if(/^F(?:[1-9]|1[0-2])$/.test(code))return Number(code.slice(1))+57;
    if(/^Numpad[1-9]$/.test(code))return Number(code.slice(6))+88;
    if(code==='Numpad0')return 98;
    return specialScans[code];
  }
  const isGameCanvas=target=>gameLayers.includes(target);
  const guestVisible=()=>document.body.dataset.gameReady==='true'&&boot.hidden&&!document.querySelector('dialog[open]');
  function releaseGuestInput() {
    // Key callbacks keep no JS capture state; release exactly the forwarded keys.
    if(typeof Module!=='undefined'&&typeof Module._boxedwineEmscriptenKey==='function')for(const {scan,key} of guestKeys.values())Module._boxedwineEmscriptenKey(scan,key,0);
    guestKeys.clear();
    // Mouse callbacks do keep private capture bits. A marked synthetic up goes
    // through that handler to clear them, without targeting a host control.
    for(const button of [...guestButtons]) {
      guestButtons.delete(button);
      const up=new MouseEvent('mouseup',{bubbles:true,cancelable:true,button,...lastGuestPoint});
      releaseEvents.add(up);gameLayers[0].dispatchEvent(up);
    }
  }
  function gateGuestInput(event) {
    if(releaseEvents.has(event))return;
    const visible=guestVisible(), keyboard=event.type==='keydown'||event.type==='keyup'||event.type==='keypress';
    const canvasTarget=isGameCanvas(event.target);
    const captured=guestButtons.size>0&&/^(?:mouse|pointer)(?:move|up)$/.test(event.type);
    const allowed=visible&&(keyboard?isGameCanvas(document.activeElement)&&canvasTarget:canvasTarget||captured||isGameCanvas(document.pointerLockElement));
    if(!allowed){if(!visible||keyboard||event.type==='mousedown'||event.type==='pointerdown')releaseGuestInput();event.stopImmediatePropagation();return;}
    if(keyboard) {
      // Closing a host dialog can restore canvas focus before the Escape/Enter
      // keyup arrives. A key whose down stayed on the host must stay there too.
      if(event.type==='keyup'&&!guestKeys.has(event.code)){event.stopImmediatePropagation();return;}
      const scan=inputScan(event.code);
      if(event.type==='keyup')guestKeys.delete(event.code);
      else if(event.type==='keydown'&&scan)guestKeys.set(event.code,{scan,key:/^Meta/.test(event.code)?17:event.key?.length===1?event.key.toLowerCase().charCodeAt(0):(event.keyCode||0)});
    } else {
      if(Number.isFinite(event.clientX)&&Number.isFinite(event.clientY))lastGuestPoint={clientX:event.clientX,clientY:event.clientY};
      if(event.type==='mousedown'&&event.button>=0&&event.button<5)guestButtons.add(event.button);
      if(event.type==='mouseup')guestButtons.delete(event.button);
    }
  }
  // SDL also consumes keypress on window and can cancel host button activation.
  for(const type of ['keydown','keyup','keypress','mousedown','mouseup','mousemove','wheel','pointerdown','pointerup','pointermove','touchstart','touchend','touchmove'])window.addEventListener(type,gateGuestInput,{capture:true,passive:true});
  window.addEventListener('blur',releaseGuestInput);
  window.addEventListener('focusin',event=>{if(!isGameCanvas(event.target))releaseGuestInput();},true);
  window.addEventListener('focusout',event=>{if(isGameCanvas(event.target)&&!isGameCanvas(event.relatedTarget))releaseGuestInput();},true);
  document.addEventListener('visibilitychange',()=>{if(document.hidden)releaseGuestInput();});
  document.addEventListener('pointerlockchange',releaseGuestInput);
  window.addEventListener('pointercancel',releaseGuestInput,true);
  new MutationObserver(()=>{if(!guestVisible())releaseGuestInput();}).observe(document.body,{subtree:true,attributes:true,attributeFilter:['open','hidden','data-game-ready']});
  function nativeReady(result) {
    if(state.error)return;
    state.phase='game-ready';state.nativeReady={kind:result.kind,consecutive:result.consecutive,elapsedMs:Math.round(performance.now()-startedAt)};
    stopReadiness?.();clearInterval(elapsedTimer);
    boot.hidden=true;boot.setAttribute('aria-busy','false');document.body.dataset.gameReady='true';
    for(const canvas of gameLayers){canvas.inert=false;canvas.removeAttribute('aria-hidden');}
    status.textContent='Game ready';document.getElementById('fullscreen-btn').disabled=false;
    document.getElementById('play-note').textContent='Click the game to focus keyboard controls. Ctrl+S opens Save Game; use Saved games to download backups.';
    if(!document.querySelector('dialog[open]'))gameLayers[0].focus();
  }
  window.render_game_to_text = () => JSON.stringify({...state, log:state.log.slice(-6), canvas:{width:document.getElementById('canvas').width,height:document.getElementById('canvas').height}});
  // Native Wine time is real time; this hook deliberately does not claim deterministic simulation.
  window.advanceTime = ms => new Promise(resolve => setTimeout(resolve, Math.min(ms, 1000)));
  const fail = error => {
    releaseGuestInput();
    state.error=String(error);state.phase='error';status.textContent='Unable to start';
    stopReadiness?.();clearInterval(elapsedTimer);
    boot.hidden=false;boot.setAttribute('aria-busy','false');document.body.dataset.gameReady='false';
    for(const canvas of gameLayers){canvas.inert=true;canvas.setAttribute('aria-hidden','true');canvas.blur();}
    document.getElementById('fullscreen-btn').disabled=true;
    bootState('error','The game could not start',String(error));
    document.getElementById('boot-retry').hidden=false;document.getElementById('startbtn').style.display='none';
    document.getElementById('play-note').textContent='Open Log for the captured error, or reload the player to try again.';
  };
  window.addEventListener('error', event => fail(event.message));
  window.addEventListener('unhandledrejection', event => fail(event.reason));
  function loadScript(src) {return new Promise((resolve,reject)=>{const script=document.createElement('script');script.src=src;script.onload=resolve;script.onerror=()=>reject(new Error('Could not load '+src));document.body.append(script);});}
  document.getElementById('fullscreen-btn').onclick=async()=>{
    try {const target=document.getElementById('dropzone');if(document.fullscreenElement)await document.exitFullscreen();else await target.requestFullscreen();}
    catch(error){document.getElementById('play-note').textContent='Fullscreen is unavailable. You can keep playing in this window.';}
  };
  document.getElementById('log-btn').onclick=()=>{const checkbox=document.getElementById('showConsole');checkbox.checked=!checkbox.checked;if(typeof toggleConsole==='function')toggleConsole();};
  const savesDialog=document.createElement('dialog');
  savesDialog.id='saved-games';
  savesDialog.innerHTML='<h2>Saved games</h2><p>Browser saves stay on this device. Download a copy for backup. Imports appear in the game’s Load Game list. If the game is already running, save your progress and reload this page after importing.</p><div id="saved-list"></div><label class="import-save">Import .SAV <input id="import-save" type="file" accept=".sav,.SAV"></label><p id="save-feedback" role="status"></p><button id="close-saves">Close</button>';
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
      const destination=ROOT+'/home/username/.wine/drive_c/files/saves';
      FS.mkdirTree(destination);
      let name='Imported - '+file.name.replace(/[^a-z0-9 _.()-]/gi,'_');
      if(!/\.sav$/i.test(name))name+='.SAV';
      const existing=new Set(FS.readdir(destination).map(name=>name.toLowerCase()));
      while(existing.has(name.toLowerCase()))name='Copy - '+name;
      FS.writeFile(destination+'/'+name,bytes);
      await new Promise((resolve,reject)=>FS.syncfs(false,error=>error?reject(error):resolve()));
      feedback.textContent='Imported '+name+'. '+(startedAt?'Save your current progress, then reload this page and choose it in Load Game.':'Start the game and choose it in Load Game.');refreshSaves();
    } catch(error){feedback.textContent=error.message||String(error);}
    event.target.value='';
  };
  try {
    const [readiness,samplesResponse]=await Promise.all([import('/native-ready.js'),fetch('/native-ready-samples.json')]);
    if(!samplesResponse.ok)throw new Error('The game readiness detector could not load. Reload the player to try again.');
    sampler=readiness.createReadinessSampler(await samplesResponse.json(),edition);watchReadiness=readiness.watchNativeReadiness;
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
    Module.onRuntimeInitialized=()=>{if(originalInit)originalInit();state.runtimeInitialized=true;};
    const originalStart=start;
    window.start=()=>{if(startedAt||state.error)return;startedAt=performance.now();state.phase='booting';status.textContent='Loading '+title;bootState('booting','Loading '+title,'Preparing the original menus and game assets. This can take several minutes.');stopReadiness=watchReadiness({sampler,layers:()=>gameLayers,onReady:nativeReady,onWaiting:result=>{state.readiness={kind:result.kind,menuMatches:result.menuMatches||0,worldMatches:result.worldMatches||0};if(result.error)state.readiness.error=result.error;}});originalStart();};
    const monitor=setInterval(()=>{if(state.phase==='loading'&&document.getElementById('startbtn').style.display!=='none'){state.phase='ready';status.textContent='Ready to start';bootState('ready','Ready to begin','Your local game files and browser saves are available.');}if(state.phase!=='loading')clearInterval(monitor);},250);
    await loadScript(base+'boxedwine.js');
  } catch(error) {fail(error.message);}
})();
