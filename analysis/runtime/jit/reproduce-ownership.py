#!/usr/bin/env python3
"""Extract two pinned Boxedwine code fragments and check their ownership invariant.

This exercises copied source fragments with small stubs; it does not execute
the browser emulator or demonstrate the exact Alpha Centauri triggering input.
"""
import hashlib
import json
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parent
SOURCE = ROOT / 'Boxedwine'
PIN = '65467424603484756a73308412f40b906d28b650'
assert subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=SOURCE, text=True).strip() == PIN

def extract(relative, start, end):
    text = (SOURCE / relative).read_text()
    a = text.index(start)
    b = text.index(end, a)
    return text[a:b].rstrip(), {
        'path': relative,
        'firstLine': text[:a].count('\n') + 1,
        'lastLine': text[:b].count('\n'),
        'fileSha256': hashlib.sha256((SOURCE / relative).read_bytes()).hexdigest(),
    }

mark, mark_ref = extract(
    'source/emulation/cpu/wasm/jitWasmCodeGen.cpp',
    'static void markPendingBlock(WasmJitPendingBlock& pending) {',
    '\nstatic void registerPendingWasmJitBlock',
)
loop, loop_ref = extract(
    'source/kernel/kmemory.cpp',
    '    for (PreparedCodeInvalidationBlock& block : preparedCodeBlocks) {\n        DecodedOp* blockOp = block.blockStart;',
    '    for (PreparedJitCodeInvalidation& invalidation : preparedBackendInvalidations)',
)
fixed_source = (ROOT / 'Boxedwine-disjoint/source/emulation/cpu/jit/jitCodeGen.cpp').read_text()
guard_start = fixed_source.index('static bool wasmJitRangeIsUnowned(')
guard_end = fixed_source.index('\n#endif', guard_start)
guard = fixed_source[guard_start:guard_end]
prefix = r'''
// Generated from GPL-2.0-or-later Boxedwine source; see fragment-provenance.json.
// Isolated source-fragment reproduction, not a full emulator regression test.
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using U32 = uint32_t;
constexpr U32 JIT_RUN_COUNT = 10;
constexpr U32 OP_FLAG_JIT = 1;
constexpr U32 OP_FLAG2_WASM_JIT_MEM_ARRAYS = 2;
constexpr U32 OP_FLAG2_WASM_JIT_PENDING = 4;
constexpr U32 Done = 999;
#define BOXEDWINE_WASM_JIT
struct DecodedOp {
    DecodedOp* blockStart = nullptr;
    DecodedOp* next = nullptr;
    U32 blockOpCount = 0, blockLen = 0, runCount = 0;
    U32 flags = 0, flags2 = 0, inst = 1, jitLen = 0;
    void* pfnJitCode = nullptr;
    void* pfn = nullptr;
    void setJitCode(void* code) { pfnJitCode = code; }
};
struct WasmJitPendingBlock { DecodedOp* op; U32 emulatedLen; U32 blockOpCount; };
struct PreparedCodeInvalidationBlock { DecodedOp* blockStart; };
struct NormalCPU { static void* getFunctionForOp(DecodedOp*) { return nullptr; } };
[[noreturn]] void kpanic(const char* message) { throw std::runtime_error(message); }
'''
suffix = r'''
bool scenario(const char* name, U32 aStart, U32 aCount, U32 bStart, U32 bCount, const char* expected, bool disjoint = false) {
    std::vector<DecodedOp> ops(12);
    for (U32 i = 0; i + 1 < ops.size(); ++i) ops[i].next = &ops[i + 1];
    WasmJitPendingBlock a{&ops[aStart], aCount, aCount};
    WasmJitPendingBlock b{&ops[bStart], bCount, bCount};
    markPendingBlock(a);
    if (!disjoint || wasmJitRangeIsUnowned(b.op, b.blockOpCount)) markPendingBlock(b);
    // Mirrors preparation's distinct-owner collection over the full range.
    std::vector<PreparedCodeInvalidationBlock> prepared;
    std::cout << name << " owners:";
    for (auto& op : ops) {
        if (!op.blockStart) continue;
        std::cout << ' ' << (&op - ops.data()) << "->" << (op.blockStart - ops.data());
        bool found = false;
        for (const auto& item : prepared) if (item.blockStart == op.blockStart) found = true;
        if (!found) prepared.push_back({op.blockStart});
    }
    std::cout << '\n';
    std::string outcome = "complete";
    try { commitOwnerLoop(prepared); }
    catch (const std::runtime_error& error) {
        outcome = "assertion";
        std::cout << "  caught: " << error.what() << '\n';
    }
    if (outcome == "complete") for (const auto& op : ops) {
        if (op.blockStart) outcome = "uncleared-tail";
    }
    std::cout << "  " << ((outcome == expected) ? "PASS" : "FAIL")
              << ": expected " << expected << ", observed " << outcome << '\n';
    return outcome == expected;
}
int main() {
    bool ok = true;
    ok &= scenario("disjoint", 0, 3, 5, 3, "complete");
    ok &= scenario("contained", 0, 6, 2, 3, "complete");
    ok &= scenario("crossing-equal-length", 0, 3, 2, 3, "uncleared-tail");
    ok &= scenario("crossing-longer-second", 0, 3, 2, 4, "assertion");
    ok &= scenario("crossing-free-entry", 2, 4, 0, 3, "assertion");
    ok &= scenario("fixed-disjoint", 0, 3, 5, 3, "complete", true);
    ok &= scenario("fixed-contained", 0, 6, 2, 3, "complete", true);
    ok &= scenario("fixed-crossing-equal-length", 0, 3, 2, 3, "complete", true);
    ok &= scenario("fixed-crossing-longer-second", 0, 3, 2, 4, "complete", true);
    ok &= scenario("fixed-crossing-free-entry", 2, 4, 0, 3, "complete", true);
    DecodedOp finalOp;
    if (wasmJitRangeIsUnowned(&finalOp, 2)) {
        std::cout << "FAIL: short decoded chain accepted\n";
        ok = false;
    } else std::cout << "PASS: short decoded chain rejected\n";
    return ok ? 0 : 1;
}
'''
cpp = prefix + '\n' + mark + '\n' + guard + '\n\nvoid commitOwnerLoop(std::vector<PreparedCodeInvalidationBlock>& preparedCodeBlocks) {\n' + loop + '\n}\n' + suffix
(ROOT / 'ownership-repro.cpp').write_text(cpp)
provenance = {
    'commit': PIN,
    'sourceURL': f'https://github.com/danoon2/Boxedwine/tree/{PIN}',
    'fragments': [mark_ref, loop_ref],
    'localGuard': {'path': 'Boxedwine-disjoint/source/emulation/cpu/jit/jitCodeGen.cpp', 'function': 'wasmJitRangeIsUnowned', 'status': 'experimental local policy, not upstream code'},
    'limitations': [
        'The ownership-marking function and commit loop are copied verbatim; types, collection, and panic handling are small test stubs.',
        'Does not execute JIT code, generate WASM, exercise the complete allocator, or prove which decoded blocks triggered the browser failure.',
        'Unmodified fragments reproduce assertion/uncleared-tail outcomes; the experimental range guard prevents those inputs in the stub harness. This is not full-engine or game validation.',
    ],
}
(ROOT / 'fragment-provenance.json').write_text(json.dumps(provenance, indent=2) + '\n')
compiler = subprocess.check_output(['clang++', '--version'], text=True)
subprocess.run(['clang++', '-std=c++17', '-O0', str(ROOT / 'ownership-repro.cpp'), '-o', str(ROOT / 'ownership-repro.bin')], check=True)
result = subprocess.run([str(ROOT / 'ownership-repro.bin')], text=True, capture_output=True)
(ROOT / 'ownership-repro-output.txt').write_text(compiler + '\n' + result.stdout + result.stderr + f'\nexitCode={result.returncode}\n')
print(result.stdout, end='')
raise SystemExit(result.returncode)
