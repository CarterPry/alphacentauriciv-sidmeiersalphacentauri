#!/usr/bin/env python3
"""Stage the site and content-addressed R2 chunks without touching installed files."""
import hashlib,json,pathlib,shutil,subprocess
ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'output/deploy'
STATIC=OUT/'static'
CHUNKS=OUT/'chunks'
for p in (STATIC,CHUNKS):
 if p.exists(): shutil.rmtree(p)
 p.mkdir(parents=True)
manifest={}
uploads=[]
def stage(source,relative):
 size=source.stat().st_size
 if size <= 25*1024*1024:
  target=STATIC/relative; target.parent.mkdir(parents=True,exist_ok=True); shutil.copyfile(source,target)
  return
 digest=hashlib.sha256(source.read_bytes()).hexdigest()
 parts=[]
 with source.open('rb') as f:
  while data:=f.read(64*1024*1024):
   partsha=hashlib.sha256(data).hexdigest(); key='objects/'+partsha
   target=CHUNKS/partsha; target.write_bytes(data)
   parts.append({'key':key,'size':len(data)})
   uploads.append({'key':key,'file':str(target.relative_to(ROOT)),'sha256':partsha,'bytes':len(data)})
 manifest['/'+relative]={'size':size,'etag':'"'+digest+'"','type':'application/zip','parts':parts}
for p in (ROOT/'public').rglob('*'):
 if not p.is_file(): continue
 rel=p.relative_to(ROOT/'public').as_posix()
 # Keep the validated default and prior fallback; omit old diagnostic runtimes.
 if rel.startswith('runtime/') and len(p.relative_to(ROOT/'public').parts)>2 and p.relative_to(ROOT/'public').parts[1] not in ('SingleThreadedJitInput','SingleThreadedJitFast'): continue
 if rel in ('runtime/wine-legacy.zip','runtime/provenance.json'): continue
 stage(p,rel)
for p in (ROOT/'src').rglob('*'):
 if p.is_file():stage(p,p.relative_to(ROOT).as_posix())
# Publish only the explicit archive's evidence links and their text/JSON references,
# never analysis caches, SDKs, browser profiles, or personal saves.
tracked=subprocess.check_output(['git','ls-files','-z','analysis'],cwd=ROOT).decode().split('\0')
for name in tracked:
 p=ROOT/name
 if name and p.is_file() and p.suffix in ('.json','.md','.c','.asm'):
  stage(p,'evidence/'+p.relative_to(ROOT/'analysis').as_posix())
(STATIC/'_headers').write_text('/*\n  Cross-Origin-Opener-Policy: same-origin\n  Cross-Origin-Embedder-Policy: require-corp\n  Cross-Origin-Resource-Policy: same-origin\n  X-Content-Type-Options: nosniff\n')
(OUT/'large-files.json').write_text(json.dumps(manifest,indent=2)+'\n')
(OUT/'uploads.json').write_text(json.dumps(uploads,indent=2)+'\n')
print(json.dumps({'staticFiles':sum(p.is_file() for p in STATIC.rglob('*')),'largeFiles':len(manifest),'chunks':len(uploads),'largeBytes':sum(x['size'] for x in manifest.values())}))
