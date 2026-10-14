// Persistent diagnostic session: JSON commands on stdin, evidence on disk.
import {chromium} from 'playwright';
import fs from 'node:fs';
import readline from 'node:readline';
const out=process.argv[4]||'analysis/runtime/browser-probe';
fs.mkdirSync(out,{recursive:true});
const context=await chromium.launchPersistentContext(process.argv[3]||'analysis/runtime/cache/browser-profile', {headless:true,viewport:{width:1400,height:1080},acceptDownloads:true,args:['--disable-background-timer-throttling','--disable-renderer-backgrounding','--js-flags=--max-old-space-size=4096']});
const page=context.pages()[0];
const logs=[];
page.on('console',m=>{const event={time:new Date().toISOString(),type:m.type(),text:m.text()};logs.push(event);fs.appendFileSync(out+'/console.ndjson',JSON.stringify(event)+'\n');});
page.on('pageerror',e=>{console.log('PAGEERROR',String(e));});
page.on('response',r=>{if(r.status()>=400)console.log('HTTP',r.status(),r.url());});
await page.goto(process.argv[2]||'http://localhost:5173/play.html?edition=alien-crossfire&autostart=1',{waitUntil:'domcontentloaded'});
console.log('READY FOR COMMANDS');
for await(const line of readline.createInterface({input:process.stdin})) {
  try {
    const c=JSON.parse(line);
    if(c.action==='close'){await context.close();break;}
    if(c.action==='wait')await page.waitForTimeout(c.ms||1000);
    if(c.action==='click')await page.mouse.click(c.x,c.y,{button:c.button||'left',clickCount:c.count||1});
    if(c.action==='key')await page.keyboard.press(c.key);
    if(c.action==='hold'){await page.keyboard.down(c.key);await page.waitForTimeout(c.ms||150);await page.keyboard.up(c.key);}
    if(c.action==='download') {const pending=page.waitForEvent('download');await page.locator(c.selector||'.save-row button').first().click();const download=await pending;await download.saveAs(c.path||out+'/native-roundtrip.SAV');console.log('DOWNLOAD',download.suggestedFilename());}
    if(c.action==='upload')await page.locator(c.selector||'#import-save').setInputFiles(c.path);
    if(c.action==='type')await page.keyboard.type(c.text);
    if(c.action==='reload')await page.reload({waitUntil:'domcontentloaded'});
    if(c.action==='goto')await page.goto(c.url,{waitUntil:'domcontentloaded'});
    if(c.action==='evaluate')console.log('RESULT',JSON.stringify(await page.evaluate(c.code)));
    if(c.action==='shot')await page.screenshot({path:out+'/'+(c.name||'current')+'.png',fullPage:true});
    console.log('STATE',await page.evaluate(()=>window.render_game_to_text?.()||document.title));
  } catch(e){console.log('ERROR',String(e));}
}
