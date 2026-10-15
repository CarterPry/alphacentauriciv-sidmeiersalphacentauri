import {chromium} from 'playwright';
import fs from 'node:fs/promises';
import assert from 'node:assert/strict';
const browser=await chromium.launch({headless:true});
const page=await browser.newPage();
await page.goto('http://localhost:5173/');
const cases=[
 ['alien-crossfire','browser-native-reload/focus-menu-now.png','menu'],
 ['alien-crossfire','browser-probe/native-main-menu.png','menu'],
 ['alpha-centauri','browser-base-focus/base-boot-progress.png','menu'],
 ['alpha-centauri','browser-base-focus/base-keyboard-menu-selection.png','menu'],
 ['alien-crossfire','browser-native-reload/native-world-final.png','world'],
 ['alien-crossfire','browser-native-reload/native-loaded-world.png','world'],
 ['alpha-centauri','browser-base-focus/native-world-final.png','world'],
 ['alien-crossfire','browser-jit-disjoint/jit-next-turn.png','world'],
 ['alien-crossfire','browser-probe/boot-40sec.png',null],
 ['alien-crossfire','browser-probe/boot-70sec.png',null],
 ['alien-crossfire','browser-probe/interpreter-boot.png',null],
 ['alien-crossfire','browser-probe/after-mono-cancel.png',null],
 ['alien-crossfire','browser-probe/splash-120sec.png',null],
 ['alien-crossfire','browser-jit-disjoint/boot-30.png',null],
 ['alpha-centauri','browser-base-focus/base-boot.png',null],
 ['alien-crossfire','browser-probe/legacy-wine-25s.png',null],
 ['alien-crossfire','browser-probe/jit-failure.png',null],
];
const results=[];
for(const [edition,file,expected] of cases) {
 const image=await fs.readFile('analysis/runtime/'+file);
 const result=await page.evaluate(async({edition,uri})=>{
  const {createReadinessSampler}=await import('/native-ready.js');
  const samples=await(await fetch('/native-ready-samples.json')).json();
  const source=new Image();source.src=uri;await source.decode();
  const canvas=document.createElement('canvas');canvas.width=1024;canvas.height=768;
  canvas.getContext('2d').drawImage(source,66,120,1268,951,0,0,1024,768);
  const sampler=createReadinessSampler(samples,edition);
  const start=performance.now();const result=sampler.sample([canvas]);
  return {...result,milliseconds:performance.now()-start};
 },{edition,uri:'data:image/png;base64,'+image.toString('base64')});
 results.push({file,edition,expected,...result});
 console.log(file,expected,result.kind,Math.round(result.milliseconds*100)/100,'ms',result.menuMatches,result.worldMatches);
}
await browser.close();
const out=process.env.TEST_OUTPUT||'analysis/input/ui';
await fs.mkdir(out,{recursive:true});
await fs.writeFile(out+'/readiness-corpus.json',JSON.stringify(results,null,2)+'\n');
for(const r of results)assert.equal(r.kind,r.expected,r.file);
console.log('Readiness screenshot corpus passed:',results.length);
