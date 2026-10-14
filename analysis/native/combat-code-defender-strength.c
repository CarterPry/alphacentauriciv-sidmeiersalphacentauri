// REA evidence ev_99598b4694bbd1224b5ba610c12a7c0d106fa53a5776a6b9af53117215dbd010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00501940(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  
  uVar6 = (uint)(byte)(&DAT_00952836)[param_1 * 0x34];
  if (uVar6 == 0) {
    if (param_2 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(byte)(&DAT_00952836)[param_2 * 0x34];
    }
    iVar2 = FUN_00501350(param_1,uVar5);
  }
  else {
    iVar2 = FUN_005c0e40(param_1,1,0);
  }
  iVar3 = FUN_004e3a50((int)(short)(&DAT_00952828)[param_1 * 0x1a],
                       (int)(short)(&DAT_0095282a)[param_1 * 0x1a]);
  if (-1 < iVar3) {
    FUN_0050ba00(2,&local_8,&local_c);
    iVar3 = iVar3 * 0x134;
    local_c = (uint)(((&DAT_0097d0cc)[local_8 + iVar3] & (byte)local_c) != 0);
    if (local_c == 0) {
      FUN_0050ba00(0x23,&local_c,&local_8);
      local_c = (uint)(((&DAT_0097d0cc)[local_c + iVar3] & (byte)local_8) != 0);
      if (((local_c != 0) && (sVar1 = (&DAT_00952832)[param_1 * 0x1a], sVar1 < 0x40)) &&
         (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] < '\0' ||
          (sVar1 == 0xf)))) {
        iVar3 = *(int *)(&DAT_0096cc68 + uVar6 * 0x20cc);
        if (iVar3 < -4) {
          iVar3 = -4;
LAB_00501b39:
          iVar3 = iVar3 + 1;
        }
        else if (iVar3 < 5) {
          if (iVar3 < -1) goto LAB_00501b39;
        }
        else {
          iVar3 = 4;
        }
        iVar2 = (iVar2 + 1) - iVar3;
      }
    }
    else {
      iVar4 = *(int *)(&DAT_0096cc68 + uVar6 * 0x20cc);
      if (iVar4 < -4) {
        iVar4 = -4;
LAB_00501a2d:
        iVar4 = iVar4 + 1;
      }
      else if (iVar4 < 1) {
        if (iVar4 < -1) goto LAB_00501a2d;
      }
      else {
        iVar4 = 0;
      }
      iVar2 = (iVar2 + 1) - iVar4;
      FUN_0050ba00(0x23,&local_c,&local_8);
      local_c = (uint)(((&DAT_0097d0cc)[local_c + iVar3] & (byte)local_8) != 0);
      if (((local_c != 0) && (sVar1 = (&DAT_00952832)[param_1 * 0x1a], sVar1 < 0x40)) &&
         (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] < '\0' ||
          (sVar1 == 0xf)))) {
        iVar2 = iVar2 + 1;
      }
    }
    if ((1 < *(int *)(&DAT_0096cc3c + uVar6 * 0x20cc)) &&
       (*(int *)(&DAT_0096cc3c + uVar6 * 0x20cc) < 4)) {
      iVar2 = iVar2 + 1;
    }
    if (param_2 < 0) goto LAB_00501c03;
    if ((&DAT_00952836)[param_2 * 0x34] == '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  if (((((-1 < param_2) && ((&DAT_00952836)[param_2 * 0x34] != '\0')) &&
       ((sVar1 = (&DAT_00952832)[param_1 * 0x1a], 0x3f < sVar1 ||
        ((-1 < (char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] &&
         (sVar1 != 0xf)))))) && (iVar3 = FUN_005bf1f0((int)sVar1,0x2000000), iVar3 == 0)) &&
     (iVar3 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_2 * 0x1a],0x1000000), iVar3 != 0)) {
    iVar2 = iVar2 + -2;
  }
LAB_00501c03:
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (6 < iVar2) {
    iVar2 = 6;
  }
  _DAT_00912424 = iVar2;
  iVar3 = (short)(&DAT_00952832)[param_1 * 0x1a] * 0x34;
  if ((&DAT_009ab892)[iVar3] != '\f') {
    if ((((&DAT_009ab892)[iVar3] == '\v') &&
        ((&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[iVar3] * 0x10] == '\x01')) &&
       ((&DAT_009ab892)[(short)(&DAT_00952832)[param_2 * 0x1a] * 0x34] != '\v')) {
      return 1;
    }
    iVar3 = FUN_005c1290((int)(short)(&DAT_00952832)[param_1 * 0x1a],param_2,param_4);
    if (param_3 != 0) {
      if (*(int *)(&DAT_00946f4c + uVar6 * 0x59c) != 0) {
        iVar3 = ((*(int *)(&DAT_00946f4c + uVar6 * 0x59c) + 100) * iVar3) / 100;
      }
      if ((-1 < DAT_009a6538) && ((byte)(&DAT_0097d044)[DAT_009a6538 * 0x134] == uVar6)) {
        iVar3 = iVar3 + iVar3 / 2;
      }
      if ((&DAT_00952832)[param_1 * 0x1a] == 0x13) {
        iVar3 = iVar3 + iVar3 / 2;
      }
    }
    return iVar3 * (iVar2 + 6);
  }
  return 1;
}

