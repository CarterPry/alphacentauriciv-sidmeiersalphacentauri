// ev_d25045b3e84539aeb69b41f5f2adb8c716b18a653aa643887554989c78ea75dc

void FUN_005166d0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  switch(param_2) {
  case 0x20:
    iVar3 = FUN_004e3a50((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
    if (-1 < iVar3) {
      if (((byte)DAT_009a64c0 & 0x80) != 0) {
LAB_00516761:
        FUN_0041a920(iVar3,0);
        return;
      }
      if (((byte)(&DAT_0097d044)[iVar3 * 0x134] == DAT_00939284) ||
         ((((&DAT_0097d04a)[iVar3 * 0x134] & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) != 0 &&
          (iVar2 = FUN_0055bc00((uint)(byte)(&DAT_0097d044)[iVar3 * 0x134]), iVar2 != 0))))
      goto LAB_00516761;
    }
  case 0x61:
    if (DAT_0093e944 == 0) {
      FUN_004d2f00((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],1);
      return;
    }
    break;
  case 0x62:
    iVar3 = FUN_004e3c60((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],DAT_00939284);
    if (-1 < iVar3) {
      FUN_0041a920(iVar3,0);
      return;
    }
    break;
  case 0x67:
    if (((DAT_0093a938 == 0) && (DAT_0093e944 == 0)) &&
       (iVar3 = FUN_004e3a50((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]),
       -1 < iVar3)) {
      FUN_004d61a0(iVar3,0xffffffff,0);
      return;
    }
    break;
  case 0x70:
    piVar4 = &DAT_007d3c3c;
    uVar1 = *(uint *)(DAT_007d3c3c + 0x1dd70);
    do {
      iVar3 = *piVar4;
      if ((iVar3 != 0) && ((piVar4 == &DAT_007d3c3c || (*(int *)(iVar3 + 0x1dd74) != 0)))) {
        if ((uVar1 & 0x400000) == 0) {
          *(uint *)(iVar3 + 0x1dd70) = *(uint *)(iVar3 + 0x1dd70) | 0x400000;
          FUN_00467970(1);
        }
        else {
          *(uint *)(iVar3 + 0x1dd70) = *(uint *)(iVar3 + 0x1dd70) & 0xffbfffff;
          FUN_0046a550(1);
        }
      }
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0x7d3c5c);
  }
  return;
}

