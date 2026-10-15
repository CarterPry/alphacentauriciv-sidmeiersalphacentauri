import test from 'node:test';
import assert from 'node:assert/strict';
import { createMovementControls } from '../public/movement-controls.js';

function setup() {
  let clock=0, id=0, visible=true, drag=0, unit=1, can=1;
  const events=[], timers=new Map();
  const api={
    _boxedwineGameDragState:()=>drag, _boxedwineGameUnitMode:()=>unit,
    _boxedwineGameCanPlanMove:()=>can,
    _boxedwineEmscriptenKey:(...args)=>events.push(['key',...args]),
    _boxedwineEmscriptenMouseButton:(...args)=>events.push(['button',...args]),
    _boxedwineEmscriptenMouseMove:(...args)=>events.push(['move',...args]),
  };
  const c=createMovementControls({native:()=>api,canvas:()=>({width:1024,height:768,focus(){}}),visible:()=>visible,
    point:e=>({x:e.x,y:e.y}),note:text=>events.push(['note',text]),changed:()=>{},now:()=>clock,
    schedule:(fn,ms)=>{timers.set(++id,{fn,ms});return id;},unschedule:id=>timers.delete(id)});
  function step(){const [n,t]=timers.entries().next().value;timers.delete(n);clock+=t.ms;t.fn();}
  return {c,api,events,timers,step,set:(s)=>{if('drag'in s)drag=s.drag;if('unit'in s)unit=s.unit;if('can'in s)can=s.can;if('visible'in s)visible=s.visible;},ups:()=>events.filter(e=>e[0]==='button'&&e[1]===0)};
}
function preview(f) {f.c.start();f.set({drag:1});f.step();assert.equal(f.c.state().phase,'preview');}

test('blocked/unsupported native entry never injects input',()=>{
  for(const can of[-1,0]){const f=setup();f.set({can});f.c.start();assert.deepEqual(f.events.filter(e=>e[0]!=='note'),[]);assert.equal(f.timers.size,0);}
});
test('activation waits for native drag and only then releases synthetic Shift',()=>{
  const f=setup();f.c.start();f.step();assert.equal(f.c.state().phase,'starting');
  assert.equal(f.events.some(e=>e[0]==='key'&&e[1]===225&&e[3]===0),false);
  f.set({drag:1});f.step();assert.equal(f.c.state().phase,'preview');
  assert.deepEqual(f.events.filter(e=>e[0]==='key'),[['key',225,16,1],['key',225,16,0]]);
});
test('hover and destination click use guest pixels; release occurs once and idle does not poll',()=>{
  const f=setup();preview(f);
  assert.equal(f.c.handle({type:'mousemove',x:500,y:220}),true);
  assert.equal(f.c.handle({type:'mousedown',button:0,x:520,y:230}),true);
  assert.deepEqual(f.ups(),[['button',0,0,520,230]]);
  assert.equal(f.c.handle({type:'mouseup',button:0}),true);
  assert.equal(f.c.handle({type:'mouseup',button:0}),false);
  assert.equal(f.c.state().phase,'idle');assert.equal(f.timers.size,0);
});
test('rapid click while activation is pending cannot commit a move',()=>{
  const f=setup();f.c.start();f.c.handle({type:'mousedown',button:0,x:600,y:200});f.c.handle({type:'mouseup',button:0});
  assert.equal(f.ups().length,0);f.set({drag:1});f.step();assert.equal(f.c.state().phase,'preview');
});
test('cancel waits for BOTH route reset and View Map acknowledgement',()=>{
  const f=setup();preview(f);f.c.handle({type:'mousedown',button:2});
  f.step();assert.equal(f.ups().length,0);
  f.set({drag:0});f.step();assert.equal(f.ups().length,0);
  f.set({unit:0});f.step();assert.equal(f.ups().length,1);
  assert.equal(f.c.state().phase,'restoring');f.set({unit:1});f.step();
  assert.equal(f.c.state().phase,'idle');assert.equal(f.timers.size,0);
});
test('host focus loss cancels without releasing a still-active guest route',()=>{
  const f=setup();preview(f);f.set({visible:false});f.c.beforeRelease();f.c.beforeRelease();
  assert.equal(f.events.filter(e=>e[0]==='key'&&e[1]===25&&e[3]===1).length,1);
  assert.equal(f.ups().length,0);f.set({drag:0,unit:0});f.step();assert.equal(f.ups().length,1);
  f.set({unit:1});f.step();assert.equal(f.c.state().phase,'idle');
});
test('Escape is consumed throughout cancellation and never reaches Quit',()=>{
  const f=setup();preview(f);assert.equal(f.c.handle({type:'keydown',key:'Escape'}),true);
  assert.equal(f.c.handle({type:'keyup',key:'Escape'}),true);
  assert.equal(f.events.some(e=>e[0]==='key'&&e[1]===41),false);
});
test('lost revision/focus never treats unknown native state as a cancelled drag',()=>{
  const f=setup();preview(f);f.c.cancel();f.set({drag:-1,unit:-1});for(let i=0;i<70;i++)f.step();
  assert.equal(f.ups().length,0);assert.equal(f.c.state().phase,'cancelling');
});
test('an already-reset native route releases once without typing V into a new dialog',()=>{
  const f=setup();preview(f);f.set({drag:0});f.step();
  assert.equal(f.ups().length,1);assert.equal(f.events.some(e=>e[0]==='key'&&e[1]===25),false);
});
