// Verify static routing, isolation and exact archive ranges against local originals.
import assert from 'node:assert/strict';
import fs from 'node:fs/promises';
import {createHash} from 'node:crypto';
const base=process.argv[2]||'https://alphacentauriciv.carterpry.com';
const out=process.argv[3]||'analysis/deployment';
const records=[];
async function check(path,options={}){
 const r=await fetch(new URL(path,base),options);
 assert.equal(r.headers.get('cross-origin-opener-policy'),'same-origin',path);
 assert.equal(r.headers.get('cross-origin-embedder-policy'),'require-corp',path);
 return r;
}
for(const path of ['/','/play.html','/library.html','/play.js','/movement-controls.js','/game-data/images/openinga.png','/game-data/images/xopeninga.png','/runtime/SingleThreadedJitInput/boxedwine.css','/runtime/SingleThreadedJitInput/boxedwine.wasm','/src/research.mjs','/evidence/native/evidence-index.json']){
 const r=await check(path);assert.equal(r.status,200,path);const bytes=Buffer.from(await r.arrayBuffer());
 const source=path==='/'?'public/index.html':path.startsWith('/evidence/')?'analysis/'+path.slice(10):path.startsWith('/src/')?path.slice(1):'public'+path;
 assert.deepEqual(bytes,await fs.readFile(source),path);
 records.push({path,status:r.status,bytes:bytes.length,sha256:createHash('sha256').update(bytes).digest('hex'),matchesLocal:true});
}
const manifest=JSON.parse(await fs.readFile('output/deploy/large-files.json','utf8'));
for(const [path,file] of Object.entries(manifest)){
 const head=await check(path,{method:'HEAD'});assert.equal(head.status,200);assert.equal(Number(head.headers.get('content-length')),file.size);assert.equal(head.headers.get('etag'),file.etag);
 const local=await fs.open('public'+path);let at=0;
 const ranges=[[0,63],[file.size-64,file.size-1]];
 for(const part of file.parts.slice(0,-1)){at+=part.size;ranges.push([at-32,at+31]);}
 for(const [start,end] of ranges){
  const r=await check(path,{headers:{Range:`bytes=${start}-${end}`}});assert.equal(r.status,206);assert.equal(r.headers.get('content-range'),`bytes ${start}-${end}/${file.size}`);
  const data=Buffer.from(await r.arrayBuffer()),expected=Buffer.alloc(end-start+1);await local.read(expected,0,expected.length,start);assert.deepEqual(data,expected);
 }
 await local.close();
 const bad=await check(path,{headers:{Range:`bytes=${file.size}-`}});assert.equal(bad.status,416);
 const cached=await check(path,{headers:{'If-None-Match':file.etag}});assert.equal(cached.status,304);
 let fullSha256;
 if(process.argv.includes('--full')){
  const response=await check(path);assert.equal(response.status,200);const hash=createHash('sha256');let bytes=0;
  for await(const chunk of response.body){hash.update(chunk);bytes+=chunk.length;}
  fullSha256=hash.digest('hex');assert.equal(bytes,file.size);assert.equal('\"'+fullSha256+'\"',file.etag);
 }
 records.push({path,bytes:file.size,etag:file.etag,fullSha256,head:true,exactRanges:ranges,invalidRange:416,conditional:304});
}
await fs.mkdir(out,{recursive:true});await fs.writeFile(out+'/http-validation.json',JSON.stringify({base,checkedAt:new Date().toISOString(),passed:true,records},null,2)+'\n');
console.log(`Deployment HTTP checks passed: ${records.length} resources; all archive boundaries match local bytes.`);
