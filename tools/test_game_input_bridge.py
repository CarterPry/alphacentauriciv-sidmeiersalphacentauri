#!/usr/bin/env python3
"""Exercise the actual game-input bridge body with resident-memory/focus mocks.

Run from any working directory:
    python3 /path/to/repo/tools/test_game_input_bridge.py

Requires Python 3.10+, a C++20 compiler (CXX or clang++), and the pinned installed
terranx.exe identified by game-bundle-manifest.json's sourceDirectory. No Python
packages, engine execution, existing temporary files, or private paths required.
The bridge is extracted from the tracked patch so a build checkout is optional.
This checks bridge logic, not integration with actual Boxedwine headers or WASM.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shlex
import struct
import subprocess
import sys
import tempfile

REPO = Path(__file__).resolve().parents[1]
PATCH = Path("analysis/runtime/jit/game-input-state.patch")
CHECKOUT_SOURCE = Path("analysis/runtime/jit/Boxedwine-disjoint/platform/sdl/boxedwineGameRead.cpp")
DEFAULT_MANIFEST = Path("analysis/runtime/game-bundle-manifest.json")
IMAGE_BASE = 0x400000
PINNED_IMAGES = {
    "terranx.exe": "573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4",
    "terran.exe": "f3d10f92d2b4b5d6ce0cdef740f8af3ce90c8f97cbe7707932888c052ec79ced",
}


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def repo_path(path: Path) -> Path:
    return path if path.is_absolute() else REPO / path


def bridge_source() -> str:
    patch = (REPO / PATCH).read_text(encoding="utf-8")
    target = "+++ b/platform/sdl/boxedwineGameRead.cpp\n"
    if patch.count(target) != 1 or "--- /dev/null\n" not in patch:
        raise ValueError("expected exactly one new bridge file in the patch")
    additions = patch.split(target, 1)[1]
    lines = additions.splitlines(keepends=True)
    if any(not line.startswith(("@@ ", "+")) for line in lines):
        raise ValueError("bridge patch must be a pure new-file addition")
    source = "".join(line[1:] for line in lines if line.startswith("+"))
    checkout = REPO / CHECKOUT_SOURCE
    if checkout.exists() and checkout.read_text(encoding="utf-8") != source:
        raise ValueError("checkout source differs from the tracked patch; regenerate the patch first")
    # This narrow lexical check covers the observed None-macro build failure.
    # It deliberately does not claim to compile the production header graph.
    memory_include = '#include "../../source/emulation/softmmu/kmemory_soft.h"'
    x11_include = '#include "../../source/x11/x11.h"'
    if source.index(memory_include) > source.index(x11_include):
        raise ValueError("memory enum headers must precede x11.h's None macro")
    return source


def map_pe32(data: bytes) -> bytes:
    """Map PE headers/sections at their preferred VA; zero-fill the image/BSS.

    This fixture only models layout. Per-page residency and read permissions
    are supplied by the C++ mock and exercised separately below.
    """
    if data[:2] != b"MZ":
        raise ValueError("not a DOS/PE image")
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("invalid PE signature")
    machine, section_count = struct.unpack_from("<HH", data, pe + 4)
    optional_size = struct.unpack_from("<H", data, pe + 20)[0]
    optional = pe + 24
    magic = struct.unpack_from("<H", data, optional)[0]
    image_base = struct.unpack_from("<I", data, optional + 28)[0]
    image_size, headers_size = struct.unpack_from("<II", data, optional + 56)
    if (machine, magic, image_base) != (0x14C, 0x10B, IMAGE_BASE):
        raise ValueError("expected x86 PE32 at 0x400000")
    if not 0 < headers_size <= len(data) or not headers_size <= image_size <= 0x10000000:
        raise ValueError("invalid PE image/header size")
    mapped = bytearray(image_size)
    mapped[:headers_size] = data[:headers_size]
    table = optional + optional_size
    for index in range(section_count):
        offset = table + 40 * index
        virtual_size, rva, raw_size, raw_offset = struct.unpack_from("<IIII", data, offset + 8)
        if raw_offset + raw_size > len(data) or rva + max(raw_size, virtual_size) > image_size:
            raise ValueError("section exceeds source or mapped image")
        mapped[rva:rva + raw_size] = data[raw_offset:raw_offset + raw_size]
    return bytes(mapped)


def fingerprints(source: str) -> list[dict]:
    block = source.split("U32 gameFingerprintStatus", 1)[1].split("bool gameMapWindow", 1)[0]
    arrays = {
        name: bytes(int(value, 16) for value in re.findall(r"0x[0-9a-fA-F]+", literal))
        for name, literal in re.findall(r"static constexpr U8 (\w+)\[\] = \{(.*?)\};", block, re.S)
    }
    anchors = [
        {"name": name, "address": int(address, 16), "bytes": arrays[name]}
        for address, name in re.findall(r"gameAnchorStatus\(memory, (0x[0-9a-fA-F]+), (\w+), [0-6]\)", block)
    ]
    if len(anchors) != 7 or sum(len(anchor["bytes"]) for anchor in anchors) != 185:
        raise ValueError("expected the reviewed seven-anchor, 185-byte fingerprint")
    return anchors


PREAMBLE = r"""
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
using U8=uint8_t; using U32=uint32_t; using U64=uint64_t; using S32=int32_t; using S64=int64_t;
#define K_PAGE_SHIFT 12
#define K_PAGE_MASK 0xfff
#define K_PAGE_SIZE 4096
#define PAGE_READ 1
#define EMSCRIPTEN_KEEPALIVE
struct MMU { bool canReadRam=false; U32 flags=0; uintptr_t ramIndex=0; };
struct RamPage { uintptr_t value; };
U8* ramPageGet(RamPage page) { return (U8*)(page.value<<12); }
struct KMemoryData { std::vector<MMU> mmu=std::vector<MMU>(0x100000); };
struct KMemory {
 KMemoryData data; std::vector<void*> owned; bool dataAvailable=true;
 ~KMemory(){for(auto p:owned)std::free(p);}
 KMemoryData* getData(){return dataAvailable?&data:nullptr;}
 U8* mapPage(U32 page){auto&e=data.mmu[page];if(!e.ramIndex){void*p=nullptr;if(posix_memalign(&p,4096,4096))throw std::bad_alloc();std::memset(p,0,4096);owned.push_back(p);e.ramIndex=(uintptr_t)p>>12;}e.canReadRam=true;e.flags=1;return ramPageGet(RamPage{e.ramIndex});}
 void put(U32 address,const U8*p,U32 length){while(length){auto n=std::min(length,4096-(address&4095));std::memcpy(mapPage(address>>12)+(address&4095),p,n);address+=n;p+=n;length-=n;}}
 void word(U32 address,U32 v){U8 b[4]={(U8)v,(U8)(v>>8),(U8)(v>>16),(U8)(v>>24)};put(address,b,4);}
};
struct KProcess {KMemory*memory=nullptr;bool terminated=false;bool isTerminated(){return terminated;}};
using KProcessPtr=std::shared_ptr<KProcess>;
struct XWindow:std::enable_shared_from_this<XWindow>{U32 displayId=1;std::shared_ptr<XWindow>parent,pointed;std::shared_ptr<XWindow>getParent(){return parent;}std::shared_ptr<XWindow>getWindowFromPoint(S32,S32){return pointed?pointed:shared_from_this();}};using XWindowPtr=std::shared_ptr<XWindow>;
struct KNativeInput{bool available=true,lastAllowWarp=true;bool getMousePos(S32*x,S32*y,bool allowWarp){*x=100;*y=100;lastAllowWarp=allowWarp;return available;}};using KNativeInputPtr=std::shared_ptr<KNativeInput>;
struct KNativeSystem{static KNativeInputPtr input;static KNativeInputPtr getCurrentInput(){return input;}};
KNativeInputPtr KNativeSystem::input;
struct DisplayData{std::weak_ptr<KProcess>process;};using DisplayDataPtr=std::shared_ptr<DisplayData>;
struct XServer{XWindowPtr inputFocus;bool inputFocusIsPointerRoot=false;DisplayDataPtr display;static XServer* instance;static XServer*getServer(bool){return instance;}DisplayDataPtr getDisplayDataById(U32 id){return id==1?display:nullptr;}};
XServer*XServer::instance=nullptr;
"""

TESTS = r"""
int checks=0;
void check(bool ok,const char*message){++checks;if(!ok)throw std::runtime_error(message);}
int main(int argc,char**argv){
 try {
  if(argc!=2)throw std::runtime_error("expected mapped PE fixture path");
  std::ifstream in(argv[1],std::ios::binary);std::vector<U8>exe((std::istreambuf_iterator<char>(in)),{});
  KMemory memory;memory.put(0x400000,exe.data(),(U32)exe.size());
  auto active=[&](){memory.word(GAME_SELECTION,4);memory.word(GAME_MOUSE_MODE,1);memory.word(GAME_DRAG,1);memory.word(GAME_SPRITE,GAME_UNIT_DRAG_SPRITE);memory.word(GAME_MAP_WINDOW,0x680000);memory.word(0x680004,0x100);memory.word(GAME_CAPTURE_WINDOW,GAME_MAP_WINDOW+0x100);};
  active();check(gameMatchesSteamTerranx(&memory),"actual installed image fingerprint");check(gameFingerprintStatus(&memory)==0x7f7f,"all seven anchors readable and matching");check(gameReadDragState(&memory)==1,"active native drag and capture");
  memory.word(GAME_VEHICLE_MODE,0);check(gameReadUnitMode(&memory)==0,"native view map mode");memory.word(GAME_VEHICLE_MODE,1);check(gameReadUnitMode(&memory)==1,"native move units mode");memory.word(GAME_VEHICLE_MODE,0xffffffff);check(gameReadUnitMode(&memory)==1,"nonzero unit mode normalized");
  for(auto pair:std::vector<std::pair<U32,U32>>{{GAME_SELECTION,0xffffffff},{GAME_MOUSE_MODE,9},{GAME_DRAG,0},{GAME_SPRITE,0},{GAME_CAPTURE_WINDOW,0},{GAME_CAPTURE_WINDOW,0x1234}}){active();memory.word(pair.first,pair.second);check(gameReadDragState(&memory)==0,"each missing active predicate returns idle");}
  active();memory.word(0x680004,0xfffffffc);memory.word(GAME_CAPTURE_WINDOW,GAME_MAP_WINDOW-4);check(gameReadDragState(&memory)==1,"signed negative subobject displacement");
  memory.word(0x680004,0U-GAME_MAP_WINDOW);check(gameReadDragState(&memory)==-1,"zero computed capture pointer rejected");
  active();memory.word(GAME_MAP_WINDOW,0xfffffff9);check(gameReadDragState(&memory)==-1,"vbtable read overflow rejected");
  active();memory.word(GAME_MAP_WINDOW,0);check(gameReadDragState(&memory)==-1,"null vbtable rejected");
  active();auto codeByte=exe[0x10f32d];U8 changed=codeByte^1;memory.put(0x50f32d,&changed,1);check(gameReadDragState(&memory)==-1&&gameReadUnitMode(&memory)==-1&&gameFingerprintStatus(&memory)==0x7f3f,"readable mismatched anchor rejected and diagnosed");memory.put(0x50f32d,&codeByte,1);
  auto originalEntry=memory.data.mmu[0x50f000>>12];memory.data.mmu[0x50f000>>12].canReadRam=false;check(gameFingerprintStatus(&memory)==0x1f1f,"both unavailable code anchors distinguished from mismatches");memory.data.mmu[0x50f000>>12]=originalEntry;
  originalEntry=memory.data.mmu[0x400000>>12];memory.data.mmu[0x400000>>12].flags=0;check(gameFingerprintStatus(&memory)==0x6060,"all five unreadable header anchors diagnosed");memory.data.mmu[0x400000>>12]=originalEntry;
  originalEntry=memory.data.mmu[GAME_SELECTION>>12];memory.data.mmu[GAME_SELECTION>>12].flags=4;check(gameReadDragState(&memory)==-1&&gameReadUnitMode(&memory)==-1,"execute-only drag and mode state rejected");memory.data.mmu[GAME_SELECTION>>12]=originalEntry;
  originalEntry=memory.data.mmu[0x680000>>12];memory.data.mmu[0x680000>>12].canReadRam=false;check(gameReadDragState(&memory)==-1,"nonresident vbtable rejected without page-in");memory.data.mmu[0x680000>>12]=originalEntry;
  U8 four[]={0x12,0x34,0x56,0x78};memory.put(0x10000ffe,four,4);U32 result=0;check(gameReadU32(&memory,0x10000ffe,result)&&result==0x78563412,"LE read across discontiguous pages");
  U8 out[4]={0xaa,0xaa,0xaa,0xaa};auto page=0x10001U;originalEntry=memory.data.mmu[page];memory.data.mmu[page].flags=0;
  check(!gameReadResident(&memory,0x10000ffe,out,4)&&std::all_of(out,out+4,[](U8 v){return v==0xaa;}),"preflight leaves destination untouched on later unreadable page");
  memory.data.mmu[page]=originalEntry;memory.data.mmu[page].ramIndex=0;check(!gameReadResident(&memory,0x10000ffe,out,4),"zero resident backing rejected");memory.data.mmu[page]=originalEntry;
  memory.put(0xfffffffc,four,4);check(gameReadU32(&memory,0xfffffffc,result)&&result==0x78563412,"last complete 32-bit word allowed");check(!gameReadU32(&memory,0xfffffffd,result),"32-bit wrapping read rejected");
  check(!gameReadResident(nullptr,0,out,4)&&!gameReadResident(&memory,0,nullptr,4)&&!gameReadResident(&memory,0,out,0),"null and zero-length inputs rejected");
  U32 seed=0x13579bdf;for(int i=0;i<96;++i){seed=seed*1664525+1013904223;U32 start=0x20000000+(seed&4095);U32 length=1+((seed>>12)&8191);std::vector<U8>expected(length),actual(length,0xcc);for(U32 j=0;j<length;++j)expected[j]=(U8)(j*29+i);memory.put(start,expected.data(),length);check(gameReadResident(&memory,start,actual.data(),length)&&actual==expected,"randomized resident range matches");}

  auto visible=[&](U32 window,U8 flags,U32 parent){memory.put(window+0x9c,&flags,1);memory.word(window+0xc4,parent);};
  auto ready=[&](){active();for(U32 address:{GAME_MOUSE_MODE,GAME_DRAG,GAME_CAPTURE_WINDOW,0x009b7ac0U,0x009b7accU,0x009b7ad0U,0x009b7ae0U,0x009b7ae4U,0x0093a934U,0x0093a938U,0x007f67c4U,GAME_MAP_WINDOW+0x1dd78})memory.word(address,0);memory.word(0x90d938,1);memory.word(GAME_VEHICLE_MODE,1);memory.word(GAME_SELECTION,4);memory.word(GAME_UNIT_COUNT,5);memory.word(GAME_PLAYER,3);U8 owner=3;memory.put(GAME_UNITS+4*0x34+0x0e,&owner,1);visible(GAME_MAP_WINDOW+0x100,1,0);visible(0x6a7628,0,0);visible(0x9380dc,0,0);};
  ready();check(gameReadCanPlanMove(&memory)==1,"owned selected unit on visible unblocked map can plan");
  for(U32 address:{GAME_MOUSE_MODE,GAME_DRAG,GAME_CAPTURE_WINDOW,0x009b7ac0U,0x009b7accU,0x009b7ad0U,0x009b7ae0U,0x009b7ae4U,0x0093a934U,0x0093a938U,0x007f67c4U,GAME_MAP_WINDOW+0x1dd78}){ready();memory.word(address,1);check(gameReadCanPlanMove(&memory)==0,"every modal, owner and native busy gate blocks entry");}
  for(auto pair:std::vector<std::pair<U32,U32>>{{0x90d938,0},{GAME_VEHICLE_MODE,0},{GAME_SELECTION,0xffffffff},{GAME_SELECTION,5},{GAME_UNIT_COUNT,0},{GAME_UNIT_COUNT,2049},{GAME_PLAYER,0},{GAME_PLAYER,8}}){ready();memory.word(pair.first,pair.second);check(gameReadCanPlanMove(&memory)==0,"selection, player and count bounds block entry");}
  ready();U8 otherOwner=4;memory.put(GAME_UNITS+4*0x34+0x0e,&otherOwner,1);check(gameReadCanPlanMove(&memory)==0,"foreign unit cannot plan");
  ready();memory.word(GAME_UNIT_COUNT,2048);memory.word(GAME_SELECTION,2047);U8 own=3;memory.put(GAME_UNITS+2047*0x34+0x0e,&own,1);check(gameReadCanPlanMove(&memory)==1,"last valid unit safely addressed");
  for(U32 window:{0x6a7628U,0x9380dcU}){ready();visible(window,1,0);check(gameReadCanPlanMove(&memory)==0,"visible base or menu blocks map entry");}
  ready();visible(GAME_MAP_WINDOW+0x100,0,0);check(gameReadCanPlanMove(&memory)==0,"hidden map blocks entry");
  ready();visible(GAME_MAP_WINDOW+0x100,1,0x12000000);visible(0x12000000,0,0);check(gameReadCanPlanMove(&memory)==0,"hidden map ancestor blocks entry");
  ready();visible(GAME_MAP_WINDOW+0x100,1,0x12000000);visible(0x12000000,1,GAME_MAP_WINDOW+0x100);check(gameReadCanPlanMove(&memory)==-1,"cyclic window chain is unknown");
  ready();visible(GAME_MAP_WINDOW+0x100,1,0x12000000);for(U32 i=0;i<33;++i)visible(0x12000000+i*4096,1,i<32?0x12000000+(i+1)*4096:0);check(gameReadCanPlanMove(&memory)==-1,"window depth beyond bound is unknown");
  for(U32 i=0;i<32;++i)visible(0x13000000+i*4096,1,i<31?0x13000000+(i+1)*4096:0);check(gameWindowVisible(&memory,0x13000000)==1,"exact32-node visible ancestor chain supported");
  visible(0xffffff38,1,0);check(gameWindowVisible(&memory,0xffffff38)==1,"last nonwrapping window header supported");check(gameWindowVisible(&memory,0xffffff39)==-1,"window header overflow rejected");
  ready();const auto allocations=memory.owned.size();originalEntry=memory.data.mmu[(GAME_UNITS+4*0x34+0x0e)>>12];memory.data.mmu[(GAME_UNITS+4*0x34+0x0e)>>12].canReadRam=false;check(gameReadCanPlanMove(&memory)==-1&&memory.owned.size()==allocations,"unresident unit returns unknown without page allocation");memory.data.mmu[(GAME_UNITS+4*0x34+0x0e)>>12]=originalEntry;
  KNativeSystem::input=std::make_shared<KNativeInput>();XServer server;XServer::instance=&server;server.inputFocus=std::make_shared<XWindow>();server.display=std::make_shared<DisplayData>();auto process=std::make_shared<KProcess>();process->memory=&memory;server.display->process=process;active();check(boxedwineGameDragState()==1,"focused client resolves by mapped image");check(boxedwineGameBridgeDiagnostic()==0x7f7f,"focused client fingerprint diagnostics");memory.dataAvailable=false;check(boxedwineGameBridgeDiagnostic()==-8,"absent MMU diagnosed");memory.dataAvailable=true;process->memory=nullptr;check(boxedwineGameBridgeDiagnostic()==-7,"absent process memory diagnosed");process->memory=&memory;memory.word(GAME_VEHICLE_MODE,0);check(boxedwineGameUnitMode()==0,"focused client reports view mode");memory.word(GAME_VEHICLE_MODE,1);check(boxedwineGameUnitMode()==1,"focused client reports unit mode");process->terminated=true;check(boxedwineGameBridgeDiagnostic()==-6,"terminated process diagnosed");check(boxedwineGameDragState()==-1&&boxedwineGameUnitMode()==-1&&boxedwineGameCanPlanMove()==-1,"terminated process rejected by all exports");process->terminated=false;server.inputFocus.reset();check(boxedwineGameBridgeDiagnostic()==-2,"absent focus diagnosed");check(boxedwineGameDragState()==-1&&boxedwineGameUnitMode()==-1&&boxedwineGameCanPlanMove()==-1,"absent focus rejected by all exports");server.inputFocus=std::make_shared<XWindow>();server.inputFocus->displayId=0;check(boxedwineGameBridgeDiagnostic()==-3,"root/server focus diagnosed");server.inputFocus->displayId=2;check(boxedwineGameBridgeDiagnostic()==-4,"missing display diagnosed");check(boxedwineGameDragState()==-1&&boxedwineGameUnitMode()==-1&&boxedwineGameCanPlanMove()==-1,"foreign display unavailable by all exports");server.inputFocus->displayId=1;
  auto explicitFocus=server.inputFocus;auto root=std::make_shared<XWindow>();root->displayId=0;auto child=std::make_shared<XWindow>();child->parent=root;root->pointed=child;server.inputFocus=root;server.inputFocusIsPointerRoot=true;active();check(boxedwineGameBridgeDiagnostic()==0x7f7f&&boxedwineGameDragState()==1&&!KNativeSystem::input->lastAllowWarp,"PointerRoot uses pointed descendant without warping");ready();check(boxedwineGameCanPlanMove()==1&&boxedwineGameUnitMode()==1,"PointerRoot resolves all state exports");
  auto pointerInput=KNativeSystem::input;KNativeSystem::input.reset();check(boxedwineGameBridgeDiagnostic()==-9&&boxedwineGameDragState()==-1,"missing native pointer is unknown");KNativeSystem::input=pointerInput;pointerInput->available=false;check(boxedwineGameBridgeDiagnostic()==-9,"out-of-bounds pointer is unknown");pointerInput->available=true;
  root->pointed.reset();check(boxedwineGameBridgeDiagnostic()==-3,"bare PointerRoot still has no client");root->pointed=std::make_shared<XWindow>();check(boxedwineGameBridgeDiagnostic()==-10,"pointer outside focus subtree rejected");root->pointed=child;child->parent=child;check(boxedwineGameBridgeDiagnostic()==-10,"cyclic pointer ancestry bounded");child->parent=root;
  std::vector<XWindowPtr>chain{root};for(int i=0;i<63;++i){auto next=std::make_shared<XWindow>();next->parent=chain.back();chain.push_back(next);}root->pointed=chain.back();check(boxedwineGameBridgeDiagnostic()==0x7f7f,"exact64-node pointer ancestry accepted");auto excessive=std::make_shared<XWindow>();excessive->parent=chain.back();root->pointed=excessive;check(boxedwineGameBridgeDiagnostic()==-10,"pointer ancestry over bound rejected");root->pointed.reset();
  server.inputFocus=explicitFocus;server.inputFocusIsPointerRoot=false;explicitFocus->pointed=std::make_shared<XWindow>();explicitFocus->pointed->displayId=2;check(boxedwineGameBridgeDiagnostic()==0x7f7f,"explicit client focus retained despite another pointer client");explicitFocus->pointed.reset();
  process.reset();check(boxedwineGameBridgeDiagnostic()==-5,"expired process diagnosed");check(boxedwineGameDragState()==-1&&boxedwineGameUnitMode()==-1&&boxedwineGameCanPlanMove()==-1,"expired process rejected by all exports");XServer::instance=nullptr;check(boxedwineGameBridgeDiagnostic()==-1,"absent X server diagnosed");check(boxedwineGameDragState()==-1&&boxedwineGameUnitMode()==-1&&boxedwineGameCanPlanMove()==-1,"absent X server rejected by all exports");
  std::cout<<"PASS "<<checks<<" source-extracted C++ assertions; original PE-mapped anchors; no engine execution\n";
 }catch(const std::exception&e){std::cerr<<"FAIL after "<<checks<<" assertions: "<<e.what()<<"\n";return 1;}
}
"""


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--manifest", type=Path, default=DEFAULT_MANIFEST,
                        help="game manifest path, relative to repository root unless absolute")
    parser.add_argument("--report", type=Path,
                        help="optional JSON results path, relative to repository root")
    args = parser.parse_args()
    source = bridge_source()
    body = source[source.index("namespace {"):source.rindex("#endif")]
    anchors = fingerprints(source)
    manifest_path = repo_path(args.manifest)
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    installation = Path(manifest["sourceDirectory"])
    if not installation.is_absolute():
        installation = REPO / installation
    image_reports = []
    target_image = None
    for name, expected_hash in PINNED_IMAGES.items():
        path = installation / name
        if not path.exists() and name == "terran.exe":
            image_reports.append({"name": name, "status": "not installed; optional negative fixture skipped"})
            continue
        data = path.read_bytes()
        actual_hash = sha256(data)
        if actual_hash != expected_hash:
            raise ValueError(f"{name} differs from the reviewed Steam image: {actual_hash}")
        mapped = map_pe32(data)
        matches = [
            mapped[anchor["address"] - IMAGE_BASE:anchor["address"] - IMAGE_BASE + len(anchor["bytes"])] == anchor["bytes"]
            for anchor in anchors
        ]
        if name == "terranx.exe":
            if not all(matches):
                raise ValueError("supported image fails its bridge fingerprint")
            target_image = mapped
        elif all(matches):
            raise ValueError("unsupported base edition unexpectedly passes the bridge fingerprint")
        image_reports.append({"name": name, "sizeBytes": len(data), "sha256": actual_hash,
                              "anchorMatches": matches, "matchedAnchors": sum(matches),
                              "acceptedByFingerprint": all(matches)})
    if target_image is None:
        raise ValueError("required terranx.exe fixture is unavailable")
    compiler = shlex.split(os.environ.get("CXX", "clang++"))
    if not compiler:
        raise ValueError("CXX must name a C++20 compiler")
    flags = ["-std=c++20", "-O1", "-Wall", "-Wextra", "-Werror"]
    version = subprocess.run(compiler + ["--version"], check=True, text=True,
                             capture_output=True).stdout.splitlines()[0]
    with tempfile.TemporaryDirectory(prefix="game-input-bridge-") as temporary:
        build = Path(temporary)
        cpp, executable, fixture = build / "bridge-test.cpp", build / "bridge-test", build / "mapped-pe.bin"
        cpp.write_text(PREAMBLE + body + TESTS, encoding="utf-8")
        fixture.write_bytes(target_image)
        subprocess.run(compiler + flags + [str(cpp), "-o", str(executable)], check=True)
        completed = subprocess.run([str(executable), str(fixture)], check=True,
                                   text=True, capture_output=True)
    print(completed.stdout, end="")
    match = re.search(r"PASS (\d+) source-extracted C\+\+ assertions", completed.stdout)
    if match is None:
        raise ValueError("test executable did not report its assertion count")
    result = {
        "schemaVersion": 1,
        "status": "passed",
        "testKind": "source-extracted host C++ with mocked resident memory and focus",
        "sourcePath": CHECKOUT_SOURCE.as_posix(),
        "sourceOrigin": "tracked new-file patch (checkout equality checked if present)",
        "sourceSha256": sha256(source.encode("utf-8")),
        "patchPath": PATCH.as_posix(),
        "patchSha256": sha256((REPO / PATCH).read_bytes()),
        "harnessPath": Path(__file__).resolve().relative_to(REPO).as_posix(),
        "harnessSha256": sha256(Path(__file__).read_bytes()),
        "compiler": version,
        "compilerFlags": flags,
        "assertionsPassed": int(match[1]),
        "includeOrderCheck": "memory enum header precedes X11 None macro",
        "diagnosticExport": {
            "name": "boxedwineGameBridgeDiagnostic",
            "matchedAnchorMask": "value & 0x7f",
            "readableAnchorMask": "(value >> 8) & 0x7f",
            "allAnchorsMatch": 32639,
            "negativeStatuses": {
                "-1": "no X server", "-2": "no focus",
                "-3": "root/server-owned focus has no resolved client",
                "-4": "missing display", "-5": "expired process",
                "-6": "terminated process", "-7": "no process memory",
                "-8": "no MMU", "-9": "unavailable or out-of-bounds pointer",
                "-10": "invalid or excessive pointer ancestry",
            },
        },
        "images": image_reports,
        "fingerprints": [{"name": a["name"], "address": f"0x{a['address']:08x}",
                          "length": len(a["bytes"]), "expectedHex": a["bytes"].hex()}
                         for a in anchors],
        "limitations": [
            "The mock supplies MMU entries and X11 focus; no actual engine or guest executes.",
            "Includes are excluded from the extracted body; actual Boxedwine/WASM build remains required.",
            "Seven live anchors are a partial revision fingerprint, not a full in-memory image hash.",
            "Entry guards do not establish complete UI readiness, route legality, or safe cancellation.",
        ],
    }
    print("Source SHA-256", result["sourceSha256"])
    print("Patch SHA-256", result["patchSha256"])
    if args.report:
        report = repo_path(args.report)
        report.parent.mkdir(parents=True, exist_ok=True)
        report.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
        print("JSON report", report.relative_to(REPO) if report.is_relative_to(REPO) else report)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (OSError, ValueError, KeyError, struct.error, subprocess.CalledProcessError) as error:
        print(f"FAIL: {error}", file=sys.stderr)
        raise SystemExit(1)
