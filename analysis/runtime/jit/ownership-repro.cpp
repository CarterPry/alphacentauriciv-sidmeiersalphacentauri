
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

static void markPendingBlock(WasmJitPendingBlock& pending) {
    pending.op->blockLen = pending.emulatedLen;
    pending.op->blockOpCount = pending.blockOpCount;
    pending.op->runCount = JIT_RUN_COUNT;
    DecodedOp* cur = pending.op;
    for (U32 i = 0; i < pending.blockOpCount && cur; ++i) {
        DecodedOp* owner = cur->blockStart;
        if (!owner || owner->blockLen < pending.emulatedLen) {
            owner = pending.op;
        }
        cur->blockStart = owner;
        if (cur == pending.op) {
            cur->pfnJitCode = nullptr;
            cur->flags &= ~OP_FLAG_JIT;
            cur->flags2 &= ~OP_FLAG2_WASM_JIT_MEM_ARRAYS;
            cur->flags2 |= OP_FLAG2_WASM_JIT_PENDING;
        }
        cur = cur->next;
    }
}
static bool wasmJitRangeIsUnowned(DecodedOp* op, U32 count) {
    for (U32 i = 0; i < count; ++i) {
        if (!op || op->blockStart) {
            return false;
        }
        op = op->next;
    }
    return true;
}

void commitOwnerLoop(std::vector<PreparedCodeInvalidationBlock>& preparedCodeBlocks) {
    for (PreparedCodeInvalidationBlock& block : preparedCodeBlocks) {
        DecodedOp* blockOp = block.blockStart;
        DecodedOp* nextOp = blockOp;
        U32 blockOpCount = blockOp->blockOpCount;
        for (U32 i = 0; i < blockOpCount; ++i) {
            if (nextOp->blockStart != blockOp && nextOp->inst != Done) {
                kpanic("KMemory::commitPreparedCodeInvalidation nextOp->blockStart");
            }
#if defined(BOXEDWINE_WASM_JIT) && defined(BOXEDWINE_MULTI_THREADED)
            if (nextOp->flags2 & OP_FLAG2_WASM_JIT_RELOC_HAZARD) {
                __atomic_exchange_n(&nextOp->pfnJitCode, nullptr, __ATOMIC_SEQ_CST);
            } else {
                nextOp->setJitCode(nullptr);
            }
#endif
            nextOp->blockStart = nullptr;
            nextOp->blockOpCount = 0;
            nextOp->blockLen = 0;
            if (nextOp->runCount) {
                nextOp->runCount = 1;
            }
            nextOp->pfn = NormalCPU::getFunctionForOp(nextOp);
            nextOp->flags &= ~OP_FLAG_JIT;
#if !defined(BOXEDWINE_WASM_JIT) || !defined(BOXEDWINE_MULTI_THREADED)
            nextOp->setJitCode(nullptr);
#endif
            nextOp->jitLen = 0;
            nextOp = nextOp->next;
        }
    }
}

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
