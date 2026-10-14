// REA evidence ev_f08fe03ef6934c9326d2395f21e052370575f718eaf374fdbd9fa979796bf70e
// terranx.exe SHA256 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4

uint FUN_005c1850(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte local_8 [4];
  
  iVar1 = param_2;
  iVar3 = param_1;
  iVar5 = param_1 * 0x34;
  uVar4 = (uint)(byte)(&DAT_009ab891)[iVar5];
  if (((int)param_1 < 0x40) &&
     ((((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar5] * 0x10] < '\0' || (param_1 == 0xf))
      && (FUN_0050ba00(0x23,&param_2,local_8),
         ((&DAT_0097d0cc)[iVar1 * 0x134 + param_2] & local_8[0]) != 0)))) {
    uVar4 = (int)(uVar4 * 3) >> 2;
  }
  param_1 = uVar4;
  if (((&DAT_009ab892)[iVar5] == '\b') && (-1 < iVar1)) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    else if (999 < param_1) {
      param_1 = 999;
    }
  }
  if ((iVar3 < 0x40) || ((*(byte *)(&DAT_009ab898 + iVar3 * 0x1a) & 4) != 0)) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6;
    if (((&DAT_00946f59)[iVar2 * 0x59c] & 2) == 0) {
      if ((int)(&DAT_0096c9e8)[iVar2 * 0x833] < 2) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_00949794;
        if (((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar5] * 0x90] != '\x01') &&
           (iVar2 = DAT_00949798,
           (&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar5] * 0x90] != '\x02')) {
          iVar2 = DAT_00949790;
        }
      }
    }
    else {
      iVar2 = 0;
    }
    iVar3 = FUN_005a5d00(iVar3);
    iVar3 = (iVar3 * iVar2 + 0x32) / 100;
    if ((-1 < iVar1) &&
       (FUN_0050ba00(10,&param_2,local_8),
       ((&DAT_0097d0cc)[iVar1 * 0x134 + param_2] & local_8[0]) != 0)) {
      iVar3 = 0;
    }
    param_1 = param_1 + iVar3;
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)(iVar3 != 0);
      return param_1;
    }
  }
  return param_1;
}


