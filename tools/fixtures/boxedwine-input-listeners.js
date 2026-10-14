/* Boxedwine native browser input listeners, extracted without behavioral edits.
   Copyright 2012–2025 The BoxedWine Team; GPL-2.0-or-later.
   Source: https://github.com/danoon2/Boxedwine/blob/65467424603484756a73308412f40b906d28b650/platform/sdl/knativeinputSDL.cpp
   Source file SHA-256: 943cb191eb739010e5fede260355d8764de7900b49746a3daef5769b9cac0925
   C++/preprocessor wrapper removed; single-threaded JS branch retained. */
(function(){
if (typeof document === 'undefined' || typeof window === 'undefined') {
    return;
}
if (Module.__boxedwineInputHandlersInstalled) {
    return;
}
var canvas = Module.canvas || document.getElementById('canvas');
if (!canvas) {
    return;
}
Module.__boxedwineInputHandlersInstalled = true;

canvas.tabIndex = canvas.tabIndex >= 0 ? canvas.tabIndex : 0;

var capturingMouse = 0;
var lastMousePoint = {x: 0, y: 0};

function releaseCapturedMouseButtons() {
    var buttons = capturingMouse;
    capturingMouse = 0;
    for (var button = 0; button < 5; button++) {
        if (buttons & (1 << button)) {
            _boxedwineEmscriptenMouseButton(0, boxedwineButton(button), lastMousePoint.x, lastMousePoint.y);
        }
    }
}

document.addEventListener('pointerlockchange', function() {
    releaseCapturedMouseButtons();
    _boxedwineEmscriptenPointerLock(document.pointerLockElement === canvas ? 1 : 0);
}, false);

window.addEventListener('blur', releaseCapturedMouseButtons, false);

function activeCanvasRect() {
    var presentCanvas = document.getElementById('boxedwine-webgl-canvas-0');
    if (presentCanvas && presentCanvas.width && presentCanvas.height) {
        var style = window.getComputedStyle(presentCanvas);
        if (style.display !== 'none' && style.visibility !== 'hidden') {
            return presentCanvas;
        }
    }
    return canvas;
}

function canvasPoint(event, allowOutside) {
    // Also retry on input if lock was acquired before SDL's window existed.
    _boxedwineEmscriptenPointerLock(document.pointerLockElement === canvas ? 1 : 0);
    // Pointer lock freezes clientX/Y. SDL consumes movementX/Y and keeps
    // its virtual cursor in sync with guest warps; do not replace those
    // events with absolute coordinates from the fixed browser pointer.
    if (document.pointerLockElement === canvas) {
        releaseCapturedMouseButtons();
        return null;
    }
    var rectCanvas = activeCanvasRect();
    var rect = rectCanvas.getBoundingClientRect();
    if (!rect.width || !rect.height || !rectCanvas.width || !rectCanvas.height) {
        return null;
    }
    if (!allowOutside && (event.clientX < rect.left || event.clientX >= rect.right || event.clientY < rect.top || event.clientY >= rect.bottom)) {
        return null;
    }
    return {
        // A worker's placeholder canvas can retain its initial 800x600
        // attributes. Use the pixels of the layer the user actually sees.
        x: Math.max(0, Math.min(rectCanvas.width - 1, Math.round((event.clientX - rect.left) * rectCanvas.width / rect.width))),
        y: Math.max(0, Math.min(rectCanvas.height - 1, Math.round((event.clientY - rect.top) * rectCanvas.height / rect.height)))
    };
}

function boxedwineButton(button) {
    if (button === 1) {
        return 2;
    }
    if (button === 2) {
        return 1;
    }
    return button;
}

var keyCodeToSDLScanCode = {
    Escape: 41,
    F1: 58, F2: 59, F3: 60, F4: 61, F5: 62, F6: 63, F7: 64, F8: 65, F9: 66, F10: 67, F11: 68, F12: 69,
    Backquote: 53,
    Digit1: 30, Digit2: 31, Digit3: 32, Digit4: 33, Digit5: 34, Digit6: 35, Digit7: 36, Digit8: 37, Digit9: 38, Digit0: 39,
    Minus: 45, Equal: 46, Backspace: 42, Tab: 43,
    KeyQ: 20, KeyW: 26, KeyE: 8, KeyR: 21, KeyT: 23, KeyY: 28, KeyU: 24, KeyI: 12, KeyO: 18, KeyP: 19,
    BracketLeft: 47, BracketRight: 48, Backslash: 49, CapsLock: 57,
    KeyA: 4, KeyS: 22, KeyD: 7, KeyF: 9, KeyG: 10, KeyH: 11, KeyJ: 13, KeyK: 14, KeyL: 15,
    Semicolon: 51, Quote: 52, Enter: 40,
    ShiftLeft: 225, KeyZ: 29, KeyX: 27, KeyC: 6, KeyV: 25, KeyB: 5, KeyN: 17, KeyM: 16,
    Comma: 54, Period: 55, Slash: 56, ShiftRight: 229,
    ControlLeft: 224, MetaLeft: 227, AltLeft: 226, Space: 44, AltRight: 230, MetaRight: 231, ControlRight: 228,
    PrintScreen: 70, ScrollLock: 71, Pause: 72,
    Insert: 73, Home: 74, PageUp: 75, Delete: 76, End: 77, PageDown: 78,
    ArrowRight: 79, ArrowLeft: 80, ArrowDown: 81, ArrowUp: 82,
    NumLock: 83, NumpadDivide: 84, NumpadMultiply: 85, NumpadSubtract: 86, NumpadAdd: 87, NumpadEnter: 88,
    Numpad1: 89, Numpad2: 90, Numpad3: 91, Numpad4: 92, Numpad5: 93, Numpad6: 94, Numpad7: 95, Numpad8: 96, Numpad9: 97,
    Numpad0: 98, NumpadDecimal: 99
};

function boxedwineKey(event) {
    var target = event.target;
    if (target && (target.isContentEditable || /^(INPUT|TEXTAREA|SELECT)$/.test(target.tagName || ""))) {
        return null;
    }
    if ((event.ctrlKey || event.metaKey) && !/^(Control|Shift|Alt|Meta)/.test(event.code)) {
        return null;
    }
    var scanCode = keyCodeToSDLScanCode[event.code];
    if (!scanCode) {
        return null;
    }
    return {
        scanCode: scanCode,
        key: event.key && event.key.length === 1 ? event.key.toLowerCase().charCodeAt(0) : (event.keyCode || 0)
    };
}

window.addEventListener('keydown', function(event) {
    var key = boxedwineKey(event);
    if (!key) {
        return;
    }
    _boxedwineEmscriptenKey(key.scanCode, key.key, 1);
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);

window.addEventListener('keyup', function(event) {
    var key = boxedwineKey(event);
    if (!key) {
        return;
    }
    _boxedwineEmscriptenKey(key.scanCode, key.key, 0);
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);

window.addEventListener('mousemove', function(event) {
    var point = canvasPoint(event, capturingMouse);
    if (!point) {
        return;
    }
    lastMousePoint = point;
    _boxedwineEmscriptenMouseMove(point.x, point.y);
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);

window.addEventListener('mousedown', function(event) {
    if (event.button < 0 || event.button >= 5) {
        return;
    }
    var point = canvasPoint(event, false);
    if (!point) {
        return;
    }
    capturingMouse |= 1 << event.button;
    lastMousePoint = point;
    canvas.focus();
    _boxedwineEmscriptenMouseButton(1, boxedwineButton(event.button), point.x, point.y);
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);

window.addEventListener('mouseup', function(event) {
    if (event.button < 0 || event.button >= 5 || !(capturingMouse & (1 << event.button))) {
        return;
    }
    var point = canvasPoint(event, true);
    if (!point) {
        return;
    }
    capturingMouse &= ~(1 << event.button);
    lastMousePoint = point;
    _boxedwineEmscriptenMouseButton(0, boxedwineButton(event.button), point.x, point.y);
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);

canvas.addEventListener('contextmenu', function(event) {
    event.preventDefault();
    event.stopImmediatePropagation();
}, true);
})();
