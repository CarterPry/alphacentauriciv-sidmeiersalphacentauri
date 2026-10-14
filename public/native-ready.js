/* Detect the original 1024×768 menu controls / world HUD, not runtime boot.
   Ten tiny patches total 1,280 pixels; the watcher samples at most once a second
   and stops permanently after two matching draws. No full-frame readback. */
export function createReadinessSampler(samples, edition, canvasFactory=()=>document.createElement('canvas')) {
  const {width,height,regions,referenceSize}=samples;
  const atlas=canvasFactory();atlas.width=width*regions.length;atlas.height=height;
  const context=atlas.getContext('2d',{willReadFrequently:true});
  const decode=value=>Uint8Array.from(atob(value),char=>char.charCodeAt(0));
  const menu=decode(samples.templates[edition]),world=decode(samples.templates.world);
  function distance(pixels,region,expected,expectedRegion) {
    let sum=0;
    for(let y=0;y<height;y++)for(let x=0;x<width;x++) {
      const src=(y*atlas.width+region*width+x)*4;
      const dst=((expectedRegion*height+y)*width+x)*3;
      for(let c=0;c<3;c++)sum+=Math.abs(pixels[src+c]-expected[dst+c]);
    }
    return sum/(width*height*3);
  }
  return {
    pixelsPerSample:atlas.width*atlas.height,
    sample(layers) {
      const primary=layers[0];
      if(!primary||primary.width<640||primary.height<480)return {kind:null};
      context.fillStyle='#000';context.fillRect(0,0,atlas.width,atlas.height);
      regions.forEach(([x,y,w,h],index)=>{
        for(const source of layers) {
          if(!source||!source.width||!source.height)continue;
          context.drawImage(source,x*source.width/referenceSize[0],y*source.height/referenceSize[1],w*source.width/referenceSize[0],h*source.height/referenceSize[1],index*width,0,width,height);
        }
      });
      const pixels=context.getImageData(0,0,atlas.width,atlas.height).data;
      const menuErrors=regions.slice(0,7).map((_,i)=>distance(pixels,i,menu,i));
      const worldErrors=regions.slice(7).map((_,i)=>distance(pixels,i+7,world,i));
      const menuMatches=menuErrors.filter(error=>error<=19).length;
      const worldMatches=worldErrors.filter(error=>error<=19).length;
      return {kind:menuMatches===7?'menu':worldMatches===3?'world':null,menuMatches,worldMatches,menuErrors,worldErrors};
    }
  };
}

export function watchNativeReadiness({sampler,layers,onReady,onWaiting,interval=1000}) {
  let previous=null, consecutive=0, stopped=false, timer=null;
  function check() {
    if(stopped)return;
    try {
      const result=sampler.sample(layers());
      consecutive=result.kind&&result.kind===previous?consecutive+1:result.kind?1:0;
      previous=result.kind;
      if(consecutive>=2){stopped=true;onReady({...result,consecutive});return;}
      onWaiting?.(result);
    } catch(error) {previous=null;consecutive=0;onWaiting?.({kind:null,error:String(error)});}
    timer=setTimeout(check,interval);
  }
  timer=setTimeout(check,interval);
  return ()=>{stopped=true;clearTimeout(timer);};
}
