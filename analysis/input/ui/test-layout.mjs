// Run from the repository root with the local server on port 5173.
// Isolated layout/input replay: intercept both engine scripts; never start Wine.
import {chromium} from 'playwright';
import fs from 'node:fs/promises';
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';
const out='analysis/input/ui/layout';
await fs.mkdir(out,{recursive:true});
const nativeInput=await fs.readFile('tools/fixtures/boxedwine-input-listeners.js','utf8');
const browser=await chromium.launch({headless:true});
const page=await browser.newPage({viewport:{width:1400,height:1000}});
const errors=[],nativeDownloads=[];
page.on('pageerror',error=>errors.push(String(error)));
page.on('request',request=>{if(/\.(?:wasm|zip)(?:$|\?)/.test(request.url()))nativeDownloads.push(request.url());});
await page.route('**/runtime/*/boxedwine-shell.js',route=>route.fulfill({contentType:'text/javascript',body:`
var Config={};var ROOT='/test';
var Module={canvas:document.getElementById('canvas'),print:()=>{},printErr:()=>{},onRuntimeInitialized:()=>{},_boxedwineGameUnitMode:()=>-1,_boxedwineGameDragState:()=>-1,_boxedwineGameCanPlanMove:()=>0};
function initBrowserFilesystem(callback){callback()}
function start(){document.getElementById('startbtn').style.display='none';}
function toggleConsole(){document.getElementById('output').style.display=document.getElementById('showConsole').checked?'block':'none';}
document.getElementById('canvas').tabIndex=0;
`}));
await page.route('**/runtime/*/boxedwine.js',route=>route.fulfill({contentType:'text/javascript',body:`
window.guestInputLog=[];
function _boxedwineEmscriptenKey(scan,key,down){guestInputLog.push({type:'key',scan,key,down});}
function _boxedwineEmscriptenMouseButton(down,button,x,y){guestInputLog.push({type:'button',button,down,x,y});}
function _boxedwineEmscriptenMouseMove(x,y){guestInputLog.push({type:'move',x,y});}
function _boxedwineEmscriptenPointerLock(){}
Module._boxedwineEmscriptenKey=_boxedwineEmscriptenKey;
${nativeInput}
// Deliberately hostile keypress consumer. The separate loading regression also
// replays the exact generated SDL keypress callback, not this small guard stub.
window.addEventListener('keypress',event=>{guestInputLog.push({type:'keypress'});event.preventDefault();event.stopImmediatePropagation();});
for(const canvas of document.querySelectorAll('canvas')){canvas.width=1024;canvas.height=768;}
Module.onRuntimeInitialized();document.getElementById('startbtn').style.display='';
`}));
try {
 await page.goto('http://127.0.0.1:5173/');
 assert.equal(await page.locator('main a').count(),2);
 assert.equal(await page.locator('body').innerText(),'Regular game\nExpansion pack\n\nSaves stay in this browser');
 assert.equal(await page.locator('header,h1,canvas').count(),0);
 assert.equal(await page.getByRole('link',{name:'Regular game',exact:true}).getAttribute('href'),'/play.html?edition=alpha-centauri');
 assert.equal(await page.getByRole('link',{name:'Expansion pack',exact:true}).getAttribute('href'),'/play.html?edition=alien-crossfire');
 assert.equal(await page.locator('.edition-choice img').count(),2);
 await page.waitForFunction(()=>[...document.querySelectorAll('.edition-choice img')].every(image=>image.complete&&image.naturalWidth>0));
 await page.screenshot({path:out+'/edition-choice.png'});
 await page.getByText('Expansion pack',{exact:true}).click();
 await page.waitForFunction(()=>JSON.parse(render_game_to_text()).phase==='booting');
 assert.equal(await page.locator('#startbtn').isVisible(),false);
 assert.equal(await page.locator('header,h1,.boot-planet').count(),0);
 await page.evaluate(()=>{const c=document.getElementById('canvas');c.getContext('2d').fillStyle='#2040cc';c.getContext('2d').fillRect(0,0,1024,768);});
 await page.waitForTimeout(1200);
 assert.equal(await page.locator('#boot-screen').isVisible(),true);
 assert.equal(await page.locator('#boot-stage').innerText(),'Loading…');
 assert.equal(await page.locator('#boot-detail').isVisible(),false);
 const covered=await page.evaluate(()=>({boot:document.getElementById('boot-screen').getBoundingClientRect().toJSON(),width:innerWidth,height:innerHeight}));
 assert.equal(covered.boot.width,covered.width);assert.equal(covered.boot.height,covered.height);
 await page.screenshot({path:out+'/loading-covered.png'});
 await page.locator('summary').focus();await page.keyboard.press('Enter');
 assert.equal(await page.locator('#player-tools').getAttribute('open'),'');
 await page.keyboard.press('Tab');
 assert.equal(await page.evaluate(()=>document.activeElement.id),'saves-btn');
 await page.keyboard.press('Enter');
 assert.equal(await page.locator('#saved-games').isVisible(),true);
 await page.locator('#close-saves').focus();await page.keyboard.press('Enter');
 assert.equal(await page.locator('#saved-games').isVisible(),false);
 assert.deepEqual(await page.evaluate(()=>guestInputLog),[]);
 await page.locator('#log-btn').click();
 assert.equal(await page.locator('#output').isVisible(),true);
 await page.locator('#log-btn').click();
 await page.screenshot({path:out+'/tools-menu.png'});
 await page.locator('summary').click();
 const replaySource='analysis/runtime/browser-native-reload/native-world-final.png';
 const raw=await fs.readFile(replaySource);
 await page.evaluate(async uri=>{const im=new Image();im.src=uri;await im.decode();document.getElementById('canvas').getContext('2d').drawImage(im,66,120,1268,951,0,0,1024,768);},'data:image/png;base64,'+raw.toString('base64'));
 await page.waitForFunction(()=>document.body.dataset.gameReady==='true',{},{timeout:10000});
 await page.screenshot({path:out+'/native-world-frame-replayed.png'});
 assert.equal(await page.locator('#boot-screen').isVisible(),false);
 assert.equal(await page.locator('#fullscreen-btn').isDisabled(),false);
 await page.evaluate(()=>{Module.onAbort('Fixture startup error: retry remains available.');});
 assert.equal(await page.locator('#boot-detail').isVisible(),true);
 assert.equal(await page.locator('#boot-retry').isVisible(),true);
 await page.screenshot({path:out+'/error-and-retry.png'});
 await page.setViewportSize({width:390,height:844});
 await page.goto('http://127.0.0.1:5173/');
 assert.equal(await page.evaluate(()=>document.documentElement.scrollWidth<=innerWidth),true);
 await page.waitForFunction(()=>[...document.querySelectorAll('.edition-choice img')].every(image=>image.complete&&image.naturalWidth>0));
 assert.equal(await page.evaluate(()=>{
  const watermark=document.querySelector('.save-watermark').getBoundingClientRect();
  return [...document.querySelectorAll('.edition-choice')].every(choice=>{
   const rect=choice.getBoundingClientRect();return rect.left>=0&&rect.right<=innerWidth&&rect.top>=0&&rect.bottom<watermark.top;
  });
 }),true,'both edition covers remain visible above the save watermark on mobile');
 await page.screenshot({path:out+'/edition-choice-mobile.png'});
 // Same-document hash changes and direct old bookmarks both retain the archive.
 await page.goto('http://127.0.0.1:5173/#research');
 await page.waitForURL('**/library.html#research');
 await page.waitForFunction(()=>typeof render_game_to_text==='function'&&JSON.parse(render_game_to_text()).mode==='research');
 await page.getByRole('link',{name:'Assets',exact:true}).click();
 await page.waitForFunction(()=>JSON.parse(render_game_to_text()).mode==='assets');
 assert.equal(new URL(page.url()).pathname,'/library.html');
 await page.goto('http://127.0.0.1:5173/?edition=alpha-centauri#evidence');
 await page.waitForURL('**/library.html?edition=alpha-centauri#evidence');
 await page.waitForFunction(()=>typeof render_game_to_text==='function'&&JSON.parse(render_game_to_text()).mode==='evidence');
 assert.deepEqual(errors,[]);assert.deepEqual(nativeDownloads,[]);
 const artifacts=[];
 for(const name of (await fs.readdir(out)).filter(name=>name.endsWith('.png')).sort()){
   const data=await fs.readFile(out+'/'+name);
   artifacts.push({path:out+'/'+name,sha256:createHash('sha256').update(data).digest('hex')});
 }
 const evidence={passed:true,scope:'Isolated DOM with original native input listeners, hostile keypress stub, mocked read-only unit/route state, and replayed saved native frame; no emulator or native game files loaded.',checks:['Two exact edition links with decoded cover images and watermark','Autostart without visible Start','Full-viewport opaque cover over blue frame','Keyboard tools menu','Saved games dialog Enter close with native key handlers','Log toggle','Existing native-frame detector reveals replayed world','Error/retry readable','Mobile covers stay inside viewport above watermark without horizontal overflow','Legacy root archive hash on direct load and same-page changes; query preserved','Archive research/assets/evidence navigation'],replay:{source:replaySource,sha256:createHash('sha256').update(raw).digest('hex'),crop:{x:66,y:120,width:1268,height:951}},errors,nativeDownloads,artifacts};
 await fs.writeFile(out+'/validation.json',JSON.stringify(evidence,null,2)+'\n');
 console.log(JSON.stringify({out,checks:evidence.checks.length,errors,nativeDownloads}));
} finally {await browser.close();}
