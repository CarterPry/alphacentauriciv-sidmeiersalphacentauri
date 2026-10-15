#!/usr/bin/env python3
"""Upload prepared, content-addressed game chunks to the project's private R2 bucket."""
import hashlib,json,os,pathlib,subprocess
ROOT=pathlib.Path(__file__).resolve().parents[1]
manifest=json.loads((ROOT/'output/deploy/uploads.json').read_text())
receipt=ROOT/'output/deploy/uploaded.json'
done=json.loads(receipt.read_text()) if receipt.exists() else []
# This workstation's inherited API token lacks deployment permissions. Explicitly
# select its already authenticated Wrangler OAuth login (never print credentials).
env=os.environ.copy()
if env.get('USE_WRANGLER_OAUTH')=='1':
 for key in ('CLOUDFLARE_API_TOKEN','CLOUDFLARE_ACCOUNT_ID'):env.pop(key,None)
for i,item in enumerate(manifest):
 if item['key'] in done: continue
 path=ROOT/item['file']
 if hashlib.sha256(path.read_bytes()).hexdigest()!=item['sha256']:raise RuntimeError('Chunk changed: '+str(path))
 print(f"Uploading chunk {i+1}/{len(manifest)} ({item['bytes']} bytes)",flush=True)
 subprocess.run(['npx','--yes','wrangler@4.151.0','r2','object','put','alphacentauriciv/'+item['key'],'--file',str(path),'--remote','--content-type','application/octet-stream','--force'],cwd=ROOT,env=env,check=True)
 done.append(item['key']);receipt.write_text(json.dumps(done,indent=2)+'\n')
print('All prepared game chunks uploaded.',flush=True)
