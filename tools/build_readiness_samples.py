"""Build tiny readiness fingerprints from retained, observed native UI frames.
Only RGB patch averages are shipped, not the screenshots or executable data.
"""
from pathlib import Path
from PIL import Image
import base64,json,hashlib
regions=[[680,253+75*i,300,55] for i in range(7)]+[[10,526,110,24],[900,526,115,24],[780,571,237,24]]
fixtures={
 'alpha-centauri':'analysis/runtime/browser-base-focus/base-boot-progress.png',
 'alien-crossfire':'analysis/runtime/browser-native-reload/focus-menu-now.png',
 'world':'analysis/runtime/browser-native-reload/native-world-final.png',
}
result={'width':16,'height':8,'regions':regions,'referenceSize':[1024,768],'templates':{},'provenance':{'method':'RGB averages of native UI patches; screenshot game rectangle [66,120,1334,1071].','fixtures':fixtures}}
result['provenance']['sha256']={key:hashlib.sha256(Path(path).read_bytes()).hexdigest() for key,path in fixtures.items()}
for key,path in fixtures.items():
 im=Image.open(path).convert('RGB').crop((66,120,1334,1071)).resize((1024,768),Image.Resampling.BOX)
 chosen=regions[7:] if key=='world' else regions[:7]
 data=b''.join(im.crop((x,y,x+w,y+h)).resize((16,8),Image.Resampling.BOX).tobytes() for x,y,w,h in chosen)
 result['templates'][key]=base64.b64encode(data).decode()
Path('public/native-ready-samples.json').write_text(json.dumps(result,separators=(',',':'))+'\n')
