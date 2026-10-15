const isolation = {
  'Cross-Origin-Opener-Policy': 'same-origin',
  'Cross-Origin-Embedder-Policy': 'require-corp',
  'Cross-Origin-Resource-Policy': 'same-origin',
  'X-Content-Type-Options': 'nosniff',
};
export function parseRange(value, size) {
  if (!value) return null;
  const m = /^bytes=(\d*)-(\d*)$/.exec(value);
  if (!m || (!m[1] && !m[2])) return false;
  const a = Number(m[1]), b = Number(m[2]);
  if (!Number.isSafeInteger(a) || !Number.isSafeInteger(b)) return false;
  const start = m[1] ? a : Math.max(0, size - b);
  const end = m[1] && m[2] ? Math.min(b, size - 1) : size - 1;
  return start > end || start >= size ? false : { start, end };
}
export async function serve(request, env, files) {
  if (!['GET', 'HEAD'].includes(request.method)) return new Response(null, {status:405, headers:{...isolation, Allow:'GET, HEAD'}});
  const url = new URL(request.url);
  const file = files[url.pathname];
  if (!file) {
    if (url.pathname === '/') url.pathname = '/index.html';
    return env.ASSETS.fetch(new Request(url, request));
  }
  const headers = new Headers({...isolation, 'Content-Type':file.type, 'Accept-Ranges':'bytes', 'ETag':file.etag, 'Cache-Control':'public, max-age=3600, must-revalidate'});
  if ((request.headers.get('if-none-match') || '').split(/\s*,\s*/).some(v=>v==='*'||v.replace(/^W\//,'')===file.etag)) return new Response(null,{status:304,headers});
  const ifRange = request.headers.get('if-range');
  const range = request.method === 'HEAD' || (ifRange && ifRange !== file.etag) ? null : parseRange(request.headers.get('range'), file.size);
  if (range === false) { headers.set('Content-Range',`bytes */${file.size}`); return new Response(null,{status:416,headers}); }
  const {start,end} = range || {start:0,end:file.size-1};
  headers.set('Content-Length',String(end-start+1));
  if (range) headers.set('Content-Range',`bytes ${start}-${end}/${file.size}`);
  const status=range?206:200;
  if (request.method === 'HEAD') return new Response(null,{status,headers});
  const slices=[];let offset=0;
  for (const part of file.parts) {
    const from=Math.max(start,offset),to=Math.min(end,offset+part.size-1);
    if(from<=to)slices.push({key:part.key,range:{offset:from-offset,length:to-from+1}});
    offset+=part.size;
  }
  // Keep one R2 stream active at a time; never assemble the archive in memory.
  const first=await env.GAME_FILES.get(slices[0].key,{range:slices[0].range});
  if(!first) return new Response('Game files unavailable',{status:503,headers:isolation});
  if(slices.length===1)return new Response(first.body,{status,headers});
  // Identity piping lets the runtime forward bytes without a JS callback for
  // every network chunk, even for a full 500 MB archive response.
  const stream=new TransformStream();
  void (async()=>{
    try {
      await first.body.pipeTo(stream.writable,{preventClose:true});
      for(const slice of slices.slice(1)) {
        const object=await env.GAME_FILES.get(slice.key,{range:slice.range});
        if(!object)throw new Error('Game archive is incomplete');
        await object.body.pipeTo(stream.writable,{preventClose:true});
      }
      await stream.writable.getWriter().close();
    } catch(error) {
      await stream.writable.abort(error).catch(()=>{});
    }
  })();
  const body=stream.readable;
  return new Response(body,{status,headers});
}
