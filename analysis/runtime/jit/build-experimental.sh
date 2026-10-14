#!/bin/sh
set -eu
JIT_DIAG_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
. "$JIT_DIAG_DIR/emsdk/emsdk_env.sh"
cd "$JIT_DIAG_DIR/Boxedwine-disjoint/project/emscripten"
export SOURCE_DATE_EPOCH=1791544620
exec make "${1:-jit}" make_jobs=6 WASM_PROFILING=1 GCC_EXTRA_FLAGS=-DBOXEDWINE_WASM_JIT_DISJOINT 'LINK_EXCEPTION_FLAG=-fwasm-exceptions -sWASM_LEGACY_EXCEPTIONS=0 -sDEFAULT_TO_CXX'
