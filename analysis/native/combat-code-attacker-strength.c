// REA evidence ev_d6ba21279fa03846796f112ed6d2df88f0271e29b70b5167266a5e8403fb262c

int FUN_005015b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1 * 0x34;
  uVar5 = (uint)(byte)(&DAT_00952836)[local_8];
  if (uVar5 == 0) {
    if (param_2 < 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)(byte)(&DAT_00952836)[param_2 * 0x34];
    }
    iVar2 = FUN_00501350(param_1,uVar4);
  }
  else {
    iVar2 = FUN_005c0e40(param_1,1,0);
  }
  iVar3 = FUN_004e3a50((int)(short)(&DAT_00952828)[param_1 * 0x1a],
                       (int)(short)(&DAT_0095282a)[param_1 * 0x1a]);
  param_1 = iVar2;
  if (-1 < iVar3) {
    FUN_0050ba00(2,&local_c,&local_10);
    iVar3 = iVar3 * 0x134;
    local_10 = (uint)(((&DAT_0097d0cc)[local_c + iVar3] & (byte)local_10) != 0);
    if (local_10 == 0) {
      FUN_0050ba00(0x23,&local_10,&local_c);
      local_10 = (uint)(((&DAT_0097d0cc)[local_10 + iVar3] & (byte)local_c) != 0);
      if (((local_10 != 0) && (sVar1 = *(short *)((int)&DAT_00952832 + local_8), sVar1 < 0x40)) &&
         (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] < '\0' ||
          (sVar1 == 0xf)))) {
        param_1 = *(int *)(&DAT_0096cc68 + uVar5 * 0x20cc);
        if (param_1 < -4) {
          param_1 = -4;
LAB_005017b8:
          param_1 = param_1 + 1;
        }
        else if (param_1 < 5) {
          if (param_1 < -1) goto LAB_005017b8;
        }
        else {
          param_1 = 4;
        }
        param_1 = (iVar2 + 1) - param_1;
      }
    }
    else {
      param_1 = *(int *)(&DAT_0096cc68 + uVar5 * 0x20cc);
      if (param_1 < -4) {
        param_1 = -4;
LAB_005016a9:
        param_1 = param_1 + 1;
      }
      else if (param_1 < 5) {
        if (param_1 < -1) goto LAB_005016a9;
      }
      else {
        param_1 = 4;
      }
      param_1 = (iVar2 + 1) - param_1;
      FUN_0050ba00(0x23,&local_10,&local_c);
      local_10 = (uint)(((&DAT_0097d0cc)[local_10 + iVar3] & (byte)local_c) != 0);
      if (((local_10 != 0) && (sVar1 = *(short *)((int)&DAT_00952832 + local_8), sVar1 < 0x40)) &&
         (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] < '\0' ||
          (sVar1 == 0xf)))) {
        param_1 = param_1 + 1;
      }
    }
    if (param_5 == 0) goto LAB_00501898;
    if ((1 < *(int *)(&DAT_0096cc3c + uVar5 * 0x20cc)) &&
       (*(int *)(&DAT_0096cc3c + uVar5 * 0x20cc) < 4)) {
      param_1 = param_1 + 1;
    }
    if (-1 < param_2) {
      if ((&DAT_00952836)[param_2 * 0x34] == '\0') {
        param_1 = param_1 + 1;
      }
      else {
        sVar1 = *(short *)((int)&DAT_00952832 + local_8);
        if ((((0x3f < sVar1) ||
             ((-1 < (char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar1 * 0x34] * 0x10] &&
              (sVar1 != 0xf)))) && (iVar2 = FUN_005bf1f0((int)sVar1,0x2000000), iVar2 == 0)) &&
           (iVar2 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_2 * 0x1a],0x1000000), iVar2 != 0)
           ) {
          param_1 = param_1 + -2;
        }
      }
    }
  }
  if (param_5 != 0) {
    if (param_1 < 1) {
      param_1 = 1;
    }
    else if (6 < param_1) {
      param_1 = 6;
    }
  }
LAB_00501898:
  iVar2 = FUN_005c1150((int)*(short *)((int)&DAT_00952832 + local_8),param_2,param_4);
  if (param_3 != 0) {
    if (*(int *)(&DAT_00946f4c + uVar5 * 0x59c) != 0) {
      iVar2 = ((*(int *)(&DAT_00946f4c + uVar5 * 0x59c) + 100) * iVar2) / 100;
    }
    if ((-1 < DAT_009a6560) && ((byte)(&DAT_0097d044)[DAT_009a6560 * 0x134] == uVar5)) {
      iVar2 = iVar2 + iVar2 / 2;
    }
  }
  *(int *)(&DAT_00912420 + (uint)(param_5 != 0) * 4) = param_1;
  return iVar2 * (param_1 + 6) * 4;
}

