#!/bin/sh
set -eu
JIT_DIAG_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
. "$JIT_DIAG_DIR/emsdk/emsdk_env.sh"
cd "$JIT_DIAG_DIR/Boxedwine-disjoint/project/emscripten/Build/TestJit"
# The surrounding browser project uses type=module; Emscripten's Node loader
# uses CommonJS. Preserve the emitted JS and run an identical .cjs copy.
cp boxedwine.js boxedwine.cjs
exec "$EMSDK_NODE" boxedwine.cjs "${1:-0}" "${2:-1}" "${3:-1}"
