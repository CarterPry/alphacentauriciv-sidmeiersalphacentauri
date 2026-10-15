/* Native route planning. Input stays in the original engine; the read-only
   bridge verifies its revision, UI guards, drag state, and cancellation. */
export function createMovementControls({ native, canvas, visible, point, note, changed, now = () => performance.now(), schedule = setTimeout, unschedule = clearTimeout }) {
  let phase = 'idle', timer = null, started = 0, shift = false, held = false;
  let last = { x: 512, y: 276 }, cancelMessage = '';
  const swallowedUps = new Set();
  const state = () => ({ phase, preview: 'Original engine route; may span multiple turns' });
  function setPhase(value) { phase = value; changed(state()); }
  function key(scan, value, down) { native()?._boxedwineEmscriptenKey?.(scan, value, down); }
  function releaseShift() { if (shift) { shift = false; key(225, 16, 0); } }
  function stopTimer() { if (timer !== null) unschedule(timer); timer = null; }
  function releaseMouse() {
    if (held) { held = false; native()._boxedwineEmscriptenMouseButton(0, 0, last.x, last.y); }
  }
  function finish() { stopTimer(); releaseShift(); setPhase('idle'); }
  function cancel(message = 'Move cancelled.') {
    if (phase === 'idle' || phase === 'cancelling' || phase === 'restoring') return;
    if(phase==='preview'&&native()._boxedwineGameDragState()===0) {
      releaseMouse(); finish(); note(message); return;
    }
    stopTimer(); releaseShift(); cancelMessage = message;
    setPhase('cancelling'); started = now();
    // Native V resets orders/capture and suppresses the next map click, then
    // switches to View Map. Wait for that observable transition before up.
    key(25, 118, 1); key(25, 118, 0);
    timer = schedule(poll, 25);
  }
  function poll() {
    timer = null;
    if (phase === 'idle') return;
    const api = native(), drag = api?._boxedwineGameDragState?.() ?? -1;
    if (phase === 'cancelling') {
      if (drag === 0 && api._boxedwineGameUnitMode() === 0) {
        releaseMouse(); setPhase('restoring');
        // Restore Move Units through the same native command. The game retains
        // the selected unit when selectable, otherwise chooses its next unit.
        key(25, 118, 1); key(25, 118, 0);
      }
      if (now() - started > 3000) {
        // Fail closed: releasing an unacknowledged drag can issue an order.
        note('Waiting for the game to cancel the route…');
      }
    } else if (phase === 'restoring') {
      if(drag===0&&api._boxedwineGameUnitMode()===1) {
        finish(); note(cancelMessage); return;
      }
    } else if (!visible()) {
      cancel(); return;
    } else if (phase === 'starting') {
      if (drag === 1) {
        releaseShift(); setPhase('preview');
        note('Hover to preview. Click to move; right-click or Esc to cancel.');
      } else if (now() - started > 1500 || drag < 0) {
        cancel('Route cancelled. Select an active unit on the map, then try Move again.'); return;
      }
    } else if (drag === 0) {
      // A native reset already ended this route; avoid sending V into a new
      // dialog. Its ignored-click flag handles the outstanding virtual up.
      releaseMouse(); finish(); note('Route preview ended. Select a unit to plan another move.'); return;
    } else if(drag < 0) {
      // Do not issue commands to an unidentified or temporarily unfocused guest.
      note('Waiting for the game…');
    }
    timer = schedule(poll, 50);
  }
  function start() {
    if (phase !== 'idle') return cancel();
    if (!visible()) return;
    const api = native();
    if (typeof api?._boxedwineGameUnitMode !== 'function') {
      note('Reload the player to use Move. You can also drag a unit to its destination.'); return;
    }
    if (api._boxedwineGameCanPlanMove() !== 1) {
      note('Select an active unit on the map and close game menus, then choose Move.'); return;
    }
    canvas().focus(); started = now(); setPhase('starting');
    note('Preparing route…');
    shift = true; key(225, 16, 1);
    last = { x: Math.round(canvas().width * 0.5), y: Math.round(canvas().height * 0.36) };
    // Own this virtual hold ourselves. The emulator's DOM capture state must
    // not auto-release it on blur before native cancellation is acknowledged.
    held = true;
    api._boxedwineEmscriptenMouseButton(1, 0, last.x, last.y);
    timer = schedule(poll, 25);
  }
  function handle(event) {
    if (event.type === 'mouseup' && swallowedUps.delete(event.button)) return true;
    if (phase === 'idle') return false;
    if (event.type === 'keydown') {
      cancel();
      // Avoid mixing another command into asynchronous cancellation. A new
      // key press works after acknowledgment; Escape never opens Quit.
      return true;
    }
    if (event.type === 'keypress' || event.type === 'keyup') return true;
    if (event.type === 'wheel') { cancel(); return true; }
    if (event.type === 'mousemove') {
      if (phase !== 'preview') return true;
      last = point(event);
      native()._boxedwineEmscriptenMouseMove(last.x, last.y);
      return true;
    }
    if (event.type === 'mousedown') {
      swallowedUps.add(event.button);
      if (event.button === 2) cancel();
      else if (event.button === 0 && phase === 'preview') {
        if (native()._boxedwineGameDragState() === 1) {
          last = point(event);
          native()._boxedwineEmscriptenMouseMove(last.x, last.y);
          releaseMouse(); finish(); note('Move ordered. Right-click a unit for other actions.');
        } else cancel();
      }
      return true;
    }
    return event.type === 'mouseup';
  }
  return { start, cancel, beforeRelease: () => cancel(), handle, state };
}
