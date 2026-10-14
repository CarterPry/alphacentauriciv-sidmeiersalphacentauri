// REA Evidence: ev_4314ac9386434d96365d29d806140284cd98aeab82a03b4b4eedc7f084d8fff4
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_004e4430(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if ((DAT_009a64e8 & 0xff & 1 << ((byte)param_1 & 0x1f)) == 0) {
    if ((DAT_0093f660 == 0) && ((DAT_009a64e8 & 0xff & 1 << ((byte)DAT_009a6508 & 0x1f)) != 0)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    iVar1 = FUN_00539c00(DAT_009a6508,0);
    iVar4 = (*(int *)(&DAT_00689378 + DAT_009a64c4 * 4) - (uint)(iVar1 != 0)) - iVar4;
  }
  else {
    iVar4 = 10;
  }
  iVar1 = param_3;
  iVar2 = DAT_00949750;
  if (param_2 != 0) {
    iVar2 = DAT_00949754;
  }
  if (iVar2 != 10) {
    iVar4 = (iVar2 * iVar4) / 10;
  }
  if (DAT_0094a2a0 == 1) {
    iVar4 = iVar4 * 9;
  }
  else {
    if (DAT_0094a2a0 != 0) goto LAB_004e4505;
    iVar4 = iVar4 << 3;
  }
  iVar4 = iVar4 / 10;
LAB_004e4505:
  if (param_2 == 0) {
    iVar3 = *(int *)(&DAT_0096cc44 + iVar3 * 0x20cc);
    if (-1 < param_3) {
      FUN_0050ba00(2,&param_1,&param_2);
      if (((&DAT_0097d0cc)[param_1 + iVar1 * 0x134] & (byte)param_2) != 0) {
        iVar3 = iVar3 + 2;
      }
      if ((*(byte *)(&DAT_0097d070 + iVar1 * 0x4d) & 4) != 0) {
        iVar3 = iVar3 + 2;
      }
    }
    if (iVar3 < -2) {
      iVar3 = -2;
    }
    else if (5 < iVar3) {
      iVar3 = 5;
    }
    return ((10 - iVar3) * iVar4 + 9) / 10;
  }
  if (param_2 == 1) {
    switch(*(undefined4 *)(&DAT_0096cc50 + iVar3 * 0x20cc)) {
    case 0:
      return iVar4;
    case 1:
      return (iVar4 * 9 + 9) / 10;
    case 2:
      iVar4 = iVar4 * 4;
      break;
    case 3:
      return (iVar4 * 7 + 9) / 10;
    case 4:
      iVar4 = iVar4 * 3;
      break;
    case 0xfffffff9:
    case 0xfffffffa:
    case 0xfffffffb:
    case 0xfffffffc:
    case 0xfffffffd:
      return (iVar4 * 0xd + 9) / 10;
    case 0xfffffffe:
      return (iVar4 * 6 + 4) / 5;
    case 0xffffffff:
      return (iVar4 * 0xb + 9) / 10;
    default:
      return (iVar4 + 1) / 2;
    }
    return (iVar4 + 4) / 5;
  }
  return iVar4;
}

