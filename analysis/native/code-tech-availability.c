// REA Evidence: ev_232cd2c9f7b0275c8c788920a4fc9cf575f29bb72d7e37496d0c7bf102c1f0e8
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

bool FUN_005ba910(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x34;
  if ((*(byte *)(&DAT_009ab898 + param_1 * 0x1a) & 1) == 0) {
    return false;
  }
  bVar4 = (byte)(1 << ((byte)param_2 & 0x1f));
  if ((bVar4 & (&DAT_009ab894)[iVar5]) != 0) {
    return false;
  }
  if (param_1 < 0x40) {
    iVar3 = (int)(short)(&DAT_009ab89a)[param_1 * 0x1a];
    if (0 < param_2) {
      if (iVar3 == -1) goto LAB_005ba9a6;
      if ((-1 < iVar3) && (iVar3 < 0x58)) {
        if ((-2 < (int)(&DAT_0094f37c)[iVar3 * 0xb]) &&
           (((-2 < (int)(&DAT_0094f380)[iVar3 * 0xb] || ((&DAT_0094f37c)[iVar3 * 0xb] == -1)) &&
            (((&DAT_009a6670)[iVar3] & bVar4) != 0)))) goto LAB_005ba9a6;
      }
    }
    return false;
  }
LAB_005ba9a6:
  if (((&DAT_009ab892)[iVar5] == '\b') && ((DAT_009a649c & 0x400000) != 0)) {
    return false;
  }
  if ((-1 < param_3) && ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar5] * 0x90] == '\x01')) {
    iVar3 = FUN_004e49d0((int)(short)(&DAT_0097d040)[param_3 * 0x9a],
                         (int)(short)(&DAT_0097d042)[param_3 * 0x9a],0);
    if (iVar3 == 0) {
      return false;
    }
  }
  if (DAT_009a6488 == 0) {
    if (9 < (byte)(&DAT_009ab88e)[iVar5]) {
      return false;
    }
    cVar1 = (&DAT_009ab88d)[iVar5];
    if (cVar1 == '\f') {
      return false;
    }
    if (cVar1 == '\r') {
      return false;
    }
    if (cVar1 == '\x0e') {
      return false;
    }
    if (cVar1 == '\x18') {
      return false;
    }
    if (cVar1 == '\x19') {
      return false;
    }
    uVar2 = (&DAT_009ab888)[param_1 * 0xd];
    if ((uVar2 & 0x1000000) != 0) {
      return false;
    }
    if ((uVar2 & 0x2000000) != 0) {
      return false;
    }
    if ((uVar2 & 0x4000000) != 0) {
      return false;
    }
    if ((uVar2 & 0x8000000) != 0) {
      return false;
    }
    if ((uVar2 & 0x10000000) != 0) {
      return false;
    }
    if (param_1 == 0xe) {
      return false;
    }
    if (param_1 == 0xf) {
      return false;
    }
    if (param_1 == 0x10) {
      return false;
    }
    if (param_1 == 0x11) {
      return false;
    }
    if (param_1 == 0x12) {
      return false;
    }
    if (param_1 == 0x13) {
      return false;
    }
    if (param_1 == 0x14) {
      return false;
    }
  }
  if (param_1 < 0x40) {
    return true;
  }
  return (int)(param_1 + (param_1 >> 0x1f & 0x3fU)) >> 6 == param_2;
}

