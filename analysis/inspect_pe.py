"""Read-only PE/COFF inventory, imports, exports and selected strings.

Supplemental byte evidence; these records are not REA Evidence.
Usage: python3 analysis/inspect_pe.py /absolute/path/to/game
"""
import hashlib
import json
import re
import struct
import sys
from pathlib import Path


def inspect(path):
    data = path.read_bytes()
    u16 = lambda off: struct.unpack_from('<H', data, off)[0]
    u32 = lambda off: struct.unpack_from('<I', data, off)[0]
    pe = u32(0x3C)
    assert data[pe:pe+4] == b'PE\0\0'
    opt = pe + 24
    assert u16(opt) == 0x10B, 'Only PE32 supported by this inventory'
    base = u32(opt + 28)
    sections = []
    for i in range(u16(pe + 6)):
        off = opt + u16(pe + 20) + i * 40
        name = data[off:off+8].rstrip(b'\0').decode('ascii', 'replace')
        vs, rva, size, raw = struct.unpack_from('<4I', data, off + 8)
        sections.append(dict(name=name, rva=rva, virtual_size=vs, raw_size=size,
                             file_offset=raw, flags=hex(u32(off + 36))))

    def rvaoff(rva):
        for s in sections:
            delta = rva - s['rva']
            if 0 <= delta < s['raw_size']:
                return s['file_offset'] + delta
        if rva < u32(opt + 60):
            return rva
        raise ValueError(f'unmapped RVA {rva:#x}')

    def cstr(off):
        end = data.index(b'\0', off)
        return data[off:end].decode('ascii', 'replace')

    imports = []
    irva = u32(opt + 104)
    if irva:
        desc = rvaoff(irva)
        while any(data[desc:desc+20]):
            oft, _, _, nrva, ft = struct.unpack_from('<5I', data, desc)
            dll = cstr(rvaoff(nrva))
            thunk = rvaoff(oft or ft)
            functions = []
            i = 0
            while value := u32(thunk + 4*i):
                functions.append(dict(name=f'ordinal:{value & 0xffff}' if value & 0x80000000
                                      else cstr(rvaoff(value) + 2),
                                      iat_va=hex(base + ft + 4*i)))
                i += 1
            imports.append(dict(dll=dll, functions=functions))
            desc += 20
    exports = []
    erva = u32(opt + 96)
    if erva:
        e = rvaoff(erva)
        ordinal_base, count, names, funcs, nametab, ords = struct.unpack_from('<6I', data, e+16)
        for i in range(names):
            ordinal_index = u16(rvaoff(ords) + i*2)
            exports.append(dict(name=cstr(rvaoff(u32(rvaoff(nametab)+i*4))),
                                ordinal=ordinal_base+ordinal_index,
                                va=hex(base+u32(rvaoff(funcs)+ordinal_index*4))))
    selected = []
    pattern = re.compile(r'alpha|terran|\.txt|\.sav|\.pcx|\.cvr|\.dll|DirectDraw|DirectSound|smack|voxel|CreateProcess|WinExec|GetProcAddress|rules|autosave|faction|technology|sound|network|multiplayer|dplay|directplay|TERRAN', re.I)
    for m in re.finditer(rb'[\x20-\x7e]{5,}', data):
        value = m.group().decode('ascii')
        if not pattern.search(value):
            continue
        va = None
        for s in sections:
            if s['file_offset'] <= m.start() < s['file_offset'] + s['raw_size']:
                va = hex(base + s['rva'] + m.start() - s['file_offset'])
                break
        selected.append(dict(file_offset=m.start(), va=va, value=value))
    return dict(path=str(path), sha256=hashlib.sha256(data).hexdigest(), bytes=len(data),
                machine=hex(u16(pe+4)), image_base=hex(base), entry_va=hex(base+u32(opt+16)),
                subsystem=u16(opt+68), cli_directory_rva=u32(opt+96+14*8),
                sections=sections, imports=imports, exports=exports, selected_strings=selected)


if __name__ == '__main__':
    root = Path(sys.argv[1]).resolve()
    out = Path(__file__).parent / 'native'
    out.mkdir(exist_ok=True)
    for name in ['axstart.exe', 'terran.exe', 'terranx.exe', 'sound.dll', 'soundx.dll']:
        value = inspect(root / name)
        (out / (name + '.inventory.json')).write_text(json.dumps(value, indent=2) + '\n')
        print(json.dumps(dict(file=name, sha256=value['sha256'], entry_va=value['entry_va'],
                              imports=[x['dll'] for x in value['imports']],
                              exports=len(value['exports']), selected_strings=len(value['selected_strings']))))
