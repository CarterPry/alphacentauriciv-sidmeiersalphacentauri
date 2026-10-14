// Exercises actual .SAV import, download, and IndexedDB reload through the UI.
// It does not substitute for an in-game save/load acceptance test.
import {chromium} from 'playwright';
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
const manifest=JSON.parse(fs.readFileSync('analysis/runtime/game-bundle-manifest.json','utf8'));
const source=process.argv[2]||path.join(manifest.sourceDirectory,manifest.files.find(x=>/\.sav$/i.test(x.path)).path);
const sha=buffer=>crypto.createHash('sha256').update(buffer).digest('hex');
const output='analysis/runtime/storage-ui-test';fs.mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true});
try {
  const context=await browser.newContext({viewport:{width:1400,height:1080},acceptDownloads:true});
  const page=await context.newPage();const errors=[];page.on('pageerror',e=>errors.push(String(e)));
  await page.goto('http://localhost:5173/play.html?edition=alien-crossfire');
  await page.waitForFunction(()=>JSON.parse(window.render_game_to_text?.()||'{}').phase==='ready',{},{timeout:120000});
  await page.click('#saves-btn');
  for(const bytes of [Buffer.from([84,69,82,82,65,78,0,26]),Buffer.from([84,69,82,82,65,78,9,9,0,0,0,0])]) {
    await page.locator('#import-save').setInputFiles({name:'invalid.SAV',mimeType:'application/octet-stream',buffer:bytes});
    await page.waitForFunction(()=>document.getElementById('save-feedback').textContent.includes('does not have an Alpha Centauri save header'));
    if(await page.locator('.save-row').count())throw new Error('Rejected header was imported');
  }
  await page.locator('#import-save').setInputFiles(source);
  await page.waitForFunction(()=>document.getElementById('save-feedback').textContent.startsWith('Imported'));
  const downloadWait=page.waitForEvent('download');await page.locator('.save-row button').first().click();
  const download=await downloadWait;await download.saveAs(output+'/roundtrip.SAV');
  const original=fs.readFileSync(source), exported=fs.readFileSync(output+'/roundtrip.SAV');
  if(sha(original)!==sha(exported))throw new Error('Downloaded save differs from imported bytes');
  await page.reload();await page.waitForFunction(()=>JSON.parse(window.render_game_to_text?.()||'{}').phase==='ready',{},{timeout:120000});
  await page.click('#saves-btn');
  await page.locator('.save-row').waitFor();
  const persisted=await page.evaluate(async()=>{
    const dir=ROOT+'/home/username/.wine/drive_c/files/saves';
    const name=FS.readdir(dir).find(n=>/\.SAV$/i.test(n));
    const data=FS.readFile(dir+'/'+name);
    const digest=await crypto.subtle.digest('SHA-256',data);
    const reg=FS.readFile(ROOT+'/home/username/.wine/user.reg',{encoding:'utf8'});
    return {directory:dir,name,bytes:data.length,sha256:Array.from(new Uint8Array(digest),x=>x.toString(16).padStart(2,'0')).join(''),gdiRendererKeys:(reg.match(/"renderer"="gdi"/g)||[]).length};
  });
  if(persisted.sha256!==sha(original))throw new Error('Save did not persist unchanged');
  if(persisted.gdiRendererKeys!==1)throw new Error('GDI configuration duplicated across reload');
  await page.screenshot({path:output+'/after-reload.png',fullPage:true});
  const evidence={scope:'Browser UI .SAV header rejection, import, download, IndexedDB persistence across page reload; original native game was not started in this test.',passed:errors.length===0,rejectedInvalidHeaders:2,sourceBytes:original.length,sourceSha256:sha(original),downloadSha256:sha(exported),persisted,errors,screenshot:output+'/after-reload.png'};
  fs.writeFileSync(output+'/validation.json',JSON.stringify(evidence,null,2)+'\n');console.log(JSON.stringify(evidence,null,2));
} finally {await browser.close();}
