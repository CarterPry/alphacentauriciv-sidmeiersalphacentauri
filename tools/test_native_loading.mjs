// Test the real loading UI using native browser input handlers and replayed frames.
// Never starts Wine or reads/writes the native save filesystem.
import {chromium} from 'playwright';
import fs from 'node:fs/promises';
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';
const out='analysis/input/ui/loading';await fs.mkdir(out,{recursive:true});
const browser=await chromium.launch({headless:true});
const page=await browser.newPage({viewport:{width:1400,height:1080}});
const errors=[];page.on('pageerror',error=>errors.push(String(error)));
const nativeInput=await fs.readFile('tools/fixtures/boxedwine-input-listeners.js','utf8');
// Extract the real generated listener rather than approximating preventDefault.
// The WASM callback is stubbed to SDL_HandleKeyPress's text-input-enabled return.
const generatedRuntimePath='public/runtime/SingleThreadedJitFocus/boxedwine.js';
const generatedRuntime=await fs.readFile(generatedRuntimePath,'utf8');
const keyCallbackStart=generatedRuntime.indexOf('var registerKeyEventCallback=');
const keyCallbackEnd=generatedRuntime.indexOf('function _emscripten_set_keydown_callback_on_thread',keyCallbackStart);
assert.ok(keyCallbackStart>=0&&keyCallbackEnd>keyCallbackStart);
const generatedKeyCallback=generatedRuntime.slice(keyCallbackStart,keyCallbackEnd);
const keypressFixture={path:generatedRuntimePath,function:'registerKeyEventCallback',sha256:createHash('sha256').update(generatedKeyCallback).digest('hex'),wasmCallback:'SDL_HandleKeyPress with SDL_TEXTINPUT enabled; returns true'};
await page.addInitScript(()=>{
 window.readinessReads=0;
 const read=CanvasRenderingContext2D.prototype.getImageData;
 CanvasRenderingContext2D.prototype.getImageData=function(...args){if(this.canvas.width===160&&this.canvas.height===8)window.readinessReads++;return read.apply(this,args);};
});
await page.route('**/runtime/*/boxedwine-shell.js',route=>route.fulfill({contentType:'text/javascript',body:`
var Config={};var ROOT='/test';
var Module={canvas:document.getElementById('canvas'),print:()=>{},printErr:()=>{},onRuntimeInitialized:()=>{}};
function initBrowserFilesystem(callback){callback()}
function start(){document.getElementById('startbtn').style.display='none';window.installSdlKeyboard?.();}
function toggleConsole(){}
document.getElementById('canvas').tabIndex=0;
`}));
await page.route('**/runtime/*/boxedwine.js',route=>route.fulfill({contentType:'text/javascript',body:`
window.guestInputLog=[];window.heldGuestKeys=new Set();window.heldGuestButtons=new Set();
function _boxedwineEmscriptenKey(scan,key,down){guestInputLog.push({type:'key',scan,key,down});if(down)heldGuestKeys.add(scan);else heldGuestKeys.delete(scan);}
function _boxedwineEmscriptenMouseButton(down,button,x,y){guestInputLog.push({type:'button',button,down,x,y});if(down)heldGuestButtons.add(button);else heldGuestButtons.delete(button);}
function _boxedwineEmscriptenMouseMove(x,y){guestInputLog.push({type:'move',x,y});}
function _boxedwineEmscriptenPointerLock(){}
Module._boxedwineEmscriptenKey=_boxedwineEmscriptenKey;
${nativeInput}
window.installSdlKeyboard=()=>{
 const heap=new ArrayBuffer(512),HEAPF64=new Float64Array(heap),HEAP32=new Int32Array(heap),HEAP8=new Int8Array(heap);
 const _malloc=()=>8,stringToUTF8=()=>{},findEventTarget=target=>target;
 const getWasmTableEntry=()=>((type,data)=>{guestInputLog.push({type:'keypress',charCode:HEAP32[(data>>>2)+5]});return 1;});
 const JSEvents={registerOrRemoveHandler:handler=>handler.target.addEventListener(handler.eventTypeString,handler.handlerFunc,handler.useCapture)};
 ${generatedKeyCallback}
 registerKeyEventCallback(window,0,false,1,1,'keypress',0);
};
// Also exercise a coordinate-only wheel consumer, like the SDL fallback path.
window.addEventListener('wheel',event=>{const rect=Module.canvas.getBoundingClientRect();if(event.clientX>=rect.left&&event.clientX<rect.right&&event.clientY>=rect.top&&event.clientY<rect.bottom){guestInputLog.push({type:'wheel'});event.preventDefault();event.stopImmediatePropagation();}},{capture:true,passive:false});
Module.onRuntimeInitialized();document.getElementById('startbtn').style.display='';
`}));
async function open(edition='alien-crossfire',autoStart=false) {
 await page.goto('http://localhost:5173/play.html?edition='+edition+(autoStart?'':'&autostart=0'));
 await page.waitForFunction(phase=>JSON.parse(render_game_to_text()).phase===phase,autoStart?'booting':'ready');
}
async function openTools() {
 if(!await page.locator('#player-tools').evaluate(details=>details.open))await page.locator('#player-tools summary').click();
}
async function paint(file) {
 const b=await fs.readFile('analysis/runtime/'+file);
 await page.evaluate(async(uri)=>{const image=new Image();image.src=uri;await image.decode();const canvas=document.getElementById('canvas');canvas.width=1024;canvas.height=768;const overlay=document.getElementById('boxedwine-webgl-canvas-0');overlay.width=1024;overlay.height=768;canvas.getContext('2d').drawImage(image,66,120,1268,951,0,0,1024,768);},'data:image/png;base64,'+b.toString('base64'));
}
const inputLog=()=>page.evaluate(()=>guestInputLog);
const clearInput=()=>page.evaluate(()=>{guestInputLog.length=0;});
const heldInput=()=>page.evaluate(()=>({keys:[...heldGuestKeys],buttons:[...heldGuestButtons]}));
async function gamePoint(){const rect=await page.locator('#canvas').boundingBox();return{x:rect.x+rect.width*.2,y:rect.y+rect.height*.2};}
async function canvasClick(){const{x,y}=await gamePoint();await page.mouse.click(x,y);}
async function coveredInput() {
 await clearInput();const{x,y}=await gamePoint();await page.mouse.move(x,y);await page.mouse.click(x,y);await page.mouse.wheel(0,40);await page.keyboard.press('ArrowRight');await page.keyboard.press('a');await page.keyboard.press('Control+s');await page.keyboard.press('Meta+s');
 assert.deepEqual(await inputLog(),[],'covered input never reaches coordinate-only guest listeners');
 assert.deepEqual(await heldInput(),{keys:[],buttons:[]});
}
await open();
assert.equal(await page.locator('#boot-screen').isVisible(),true);
assert.equal(await page.locator('#boot-screen').getAttribute('aria-busy'),'false');
assert.equal(await page.locator('#canvas').evaluate(c=>c.inert),true);
assert.equal(await page.locator('#fullscreen-btn').isDisabled(),true);
assert.equal(await page.evaluate(()=>JSON.parse(render_game_to_text()).runtimeInitialized),true);
assert.equal(await page.locator('#startbtn').isVisible(),false,'diagnostic startup control stays out of the player UI');
await page.screenshot({path:out+'/runtime-initialized-covered.png'});
await coveredInput();
await openTools();
await page.locator('#saves-btn').click();
assert.equal(await page.locator('#saved-games').isVisible(),true);
await page.keyboard.press('Escape');
assert.equal(await page.locator('#saved-games').isVisible(),false);
assert.deepEqual(await inputLog(),[],'host dialog and Escape remain outside the guest before Start');
await page.locator('#player-tools summary').click();
// The hidden compatibility control is not a user-facing start gate. Start the
// stub explicitly so initialization-before-start remains independently tested.
await page.evaluate(()=>start());
await page.waitForFunction(()=>JSON.parse(render_game_to_text()).phase==='booting');
await page.evaluate(()=>{const c=document.getElementById('canvas');c.width=1024;c.height=768;c.getContext('2d').fillStyle='#2040cc';c.getContext('2d').fillRect(0,0,1024,768)});
await page.waitForTimeout(2200);
assert.equal(await page.locator('#boot-screen').isVisible(),true);
await coveredInput();
await page.screenshot({path:out+'/blue-frame-covered.png'});
await paint('browser-probe/splash-120sec.png');await page.waitForTimeout(2200);
assert.equal(await page.locator('#boot-screen').isVisible(),true);
await page.screenshot({path:out+'/splash-covered.png'});
await paint('browser-native-reload/focus-menu-now.png');
await page.waitForTimeout(30);assert.equal(await page.locator('#boot-screen').isVisible(),true);
await page.waitForFunction(()=>JSON.parse(render_game_to_text()).phase==='game-ready');
assert.equal(await page.locator('#boot-screen').isVisible(),false);
assert.equal(await page.locator('#canvas').evaluate(c=>c.inert),false);
assert.equal(await page.locator('#fullscreen-btn').isDisabled(),false);
assert.equal(await page.evaluate(()=>document.activeElement.id),'canvas');
await page.screenshot({path:out+'/native-menu-revealed.png'});
const reads=await page.evaluate(()=>readinessReads);await page.waitForTimeout(2200);
assert.equal(await page.evaluate(()=>readinessReads),reads,'sampling stops after reveal');
const completed=await page.evaluate(()=>JSON.parse(render_game_to_text()));
// Normal game controls, shortcuts and a drag outside the canvas still reach the guest.
await clearInput();await canvasClick();await page.keyboard.press('ArrowRight');await page.keyboard.press('Control+s');await page.keyboard.press('Meta+s');await page.mouse.wheel(0,50);
await page.locator('#canvas').dispatchEvent('keypress',{key:'a',code:'KeyA',charCode:97,keyCode:97,which:97,bubbles:true,cancelable:true});
let input=await inputLog();
assert.ok(input.some(event=>event.type==='button'&&event.down===1));
assert.ok(input.some(event=>event.type==='button'&&event.down===0));
assert.ok(input.some(event=>event.type==='key'&&event.scan===79&&event.down===1));
assert.equal(input.filter(event=>event.type==='key'&&event.scan===22&&event.down===1).length,2,'Ctrl+S and Command+S both forward');
assert.ok(input.some(event=>event.type==='wheel'));
assert.ok(input.some(event=>event.type==='keypress'&&event.charCode===97),'generated SDL keypress listener remains active for the canvas');
assert.deepEqual(await heldInput(),{keys:[],buttons:[]});
await clearInput();await canvasClick();await clearInput();await page.mouse.down();await page.mouse.move(8,8);await page.mouse.up();
input=await inputLog();
assert.deepEqual(input.filter(event=>event.type==='button').map(event=>event.down),[1,0],'drag release remains paired outside the canvas');
assert.deepEqual(await heldInput(),{keys:[],buttons:[]});
// A ready game must never steal normal host dialog keys or covered clicks.
await openTools();
await page.locator('#saves-btn').click();await clearInput();
await page.locator('#saved-games h2').click();await page.mouse.wheel(0,60);
await page.locator('#close-saves').focus();await page.keyboard.press('Tab');
assert.notEqual(await page.evaluate(()=>document.activeElement.id),'close-saves','Tab retains normal dialog focus navigation');
await page.locator('#close-saves').focus();await page.keyboard.press('Enter');
assert.equal(await page.locator('#saved-games').isVisible(),false,'Enter activates a host button');
assert.deepEqual(await inputLog(),[],'modal keys, clicks and wheel never reach the guest');
await page.locator('#saves-btn').click();await clearInput();await page.keyboard.press('Escape');
assert.equal(await page.locator('#saved-games').isVisible(),false,'Escape keeps its native dialog default after readiness');
assert.deepEqual(await inputLog(),[]);
// Even a programmatic modal opening during a held key/button must release it.
await canvasClick();await page.keyboard.down('ArrowRight');
assert.deepEqual((await heldInput()).keys,[79]);
await page.evaluate(()=>document.getElementById('saved-games').showModal());
assert.deepEqual(await heldInput(),{keys:[],buttons:[]},'moving focus out releases held game keys');
await clearInput();await page.keyboard.up('ArrowRight');await page.keyboard.press('Escape');assert.deepEqual(await inputLog(),[]);
await canvasClick();await page.mouse.down();assert.deepEqual((await heldInput()).buttons,[0]);
await page.evaluate(()=>document.getElementById('saved-games').showModal());
assert.deepEqual(await heldInput(),{keys:[],buttons:[]},'modal open releases native mouse capture');
await clearInput();await page.mouse.up();await page.locator('#saved-games h2').click();await page.keyboard.press('Escape');assert.deepEqual(await inputLog(),[],'released capture cannot leak later host events');
// A cancelled fullscreen request is a local toolbar message, never a fatal error.
await page.evaluate(()=>{document.getElementById('dropzone').requestFullscreen=()=>Promise.reject(new DOMException('Denied by browser','NotAllowedError'));});
await page.locator('#fullscreen-btn').click();
assert.match(await page.locator('#play-note').textContent(),/Fullscreen is unavailable/);
assert.equal(await page.locator('#boot-screen').isVisible(),false);
assert.equal(await page.evaluate(()=>JSON.parse(render_game_to_text()).phase),'game-ready');
assert.equal(await page.locator('#canvas').evaluate(canvas=>canvas.inert),false);
await canvasClick();await clearInput();await page.keyboard.press('ArrowLeft');assert.ok((await inputLog()).some(event=>event.type==='key'&&event.scan===80&&event.down===1));
await page.screenshot({path:out+'/fullscreen-rejected-game-active.png'});
// A runtime failure restores the opaque cover rather than exposing an emulator error screen.
await page.evaluate(()=>dispatchEvent(new ErrorEvent('error',{message:'Simulated startup failure'})));
assert.equal(await page.locator('#boot-screen').isVisible(),true);
assert.equal(await page.locator('#boot-retry').isVisible(),true);
assert.equal(await page.locator('#canvas').evaluate(c=>c.inert),true);
assert.equal(await page.locator('#fullscreen-btn').isDisabled(),true);
assert.equal(await page.locator('#boot-stage').textContent(),'The game could not start');
await coveredInput();
await page.screenshot({path:out+'/runtime-error-covered.png'});
// The ordinary base-edition URL must start automatically without a button.
await open('alpha-centauri',true);
assert.equal(await page.locator('#startbtn').isVisible(),false);
await paint('browser-base-focus/base-boot-progress.png');
await page.waitForFunction(()=>JSON.parse(render_game_to_text()).phase==='game-ready');
assert.equal(await page.locator('#edition-title').textContent(),'Alpha Centauri');
await page.screenshot({path:out+'/base-menu-revealed.png'});
await browser.close();
assert.deepEqual(errors,[]);
await fs.writeFile(out+'/dom-validation.json',JSON.stringify({passed:true,emulatorStarted:false,scope:'Real player DOM with exact pinned runtime window-capture input handlers, generated SDL keypress listener, stub native exports and retained native screenshots',nativeInputFixture:'tools/fixtures/boxedwine-input-listeners.js',keypressFixture,runtimeInitializationDoesNotReveal:true,blueAndSplashRemainCovered:true,twoSampleNativeMenuReveal:true,bothEditions:true,defaultAutostart:true,compatibilityStartHidden:true,diagnosticStartAndDialogEscape:true,toolsMenuAccessible:true,coveredGuestInputBlocked:true,readyDialogTabEnterEscapePreserved:true,canvasMouseArrowAndCtrlMetaShortcuts:true,dragOutsideCanvasRelease:true,heldKeyAndMouseReleasedOnModalOpen:true,fullscreenRejectionNonfatal:true,canvasFocusRestored:true,readinessReadsAtReveal:reads,noSamplingAfterReveal:true,failureRestoresCover:true,consoleErrors:errors,completedState:completed},null,2)+'\n');
console.log('Loading DOM replay passed; no native emulation started.');
