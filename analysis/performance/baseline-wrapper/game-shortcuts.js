/* Forward native game shortcuts that upstream reserves for the host browser.
   Only the focused game canvas receives them. Plain keys use upstream input. */
(function () {
  const held = new Map();
  let metaControl = false;
  const special = {Enter:40,Escape:41,Backspace:42,Tab:43,Space:44,Minus:45,Equal:46,BracketLeft:47,BracketRight:48,Backslash:49,Semicolon:51,Quote:52,Backquote:53,Comma:54,Period:55,Slash:56,Insert:73,Home:74,PageUp:75,Delete:76,End:77,PageDown:78,ArrowRight:79,ArrowLeft:80,ArrowDown:81,ArrowUp:82};
  function scanCode(code) {
    if(/^Key[A-Z]$/.test(code))return code.charCodeAt(3)-61;
    if(/^Digit[1-9]$/.test(code))return Number(code[5])+29;
    if(code==='Digit0')return 39;
    if(/^F(?:[1-9]|1[0-2])$/.test(code))return Number(code.slice(1))+57;
    return special[code];
  }
  function send(scan,key,down) {Module._boxedwineEmscriptenKey(scan,key,down);}
  function canSend() {
    return typeof Module!=='undefined'&&typeof Module._boxedwineEmscriptenKey==='function'&&
      (document.activeElement?.id==='canvas'||document.activeElement?.id==='boxedwine-webgl-canvas-0');
  }
  function intercept(event,down) {
    if(!canSend())return;
    if(/^Meta(?:Left|Right)$/.test(event.code)) {
      // Command+game shortcut is the macOS equivalent of Control+shortcut.
      send(224,17,down);metaControl=Boolean(down);
    } else {
      const scan=scanCode(event.code);
      if(!scan||(!(event.ctrlKey||event.metaKey)&&!held.has(event.code)))return;
      const key=event.key?.length===1?event.key.toLowerCase().charCodeAt(0):(event.keyCode||0);
      send(scan,key,down);
      if(down)held.set(event.code,{scan,key});else held.delete(event.code);
    }
    event.preventDefault();event.stopImmediatePropagation();
  }
  window.addEventListener('keydown',event=>intercept(event,1),true);
  window.addEventListener('keyup',event=>intercept(event,0),true);
  function releaseShortcuts() {
    if(typeof Module==='undefined'||typeof Module._boxedwineEmscriptenKey!=='function')return;
    for(const {scan,key} of held.values())send(scan,key,0);
    held.clear();if(metaControl)send(224,17,0);metaControl=false;
  }
  window.addEventListener('blur',releaseShortcuts);
  window.addEventListener('focusin',()=>{if(!canSend())releaseShortcuts();});
})();
