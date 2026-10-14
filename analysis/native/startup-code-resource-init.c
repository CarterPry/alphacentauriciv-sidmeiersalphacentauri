
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00588aa0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_c;
  int local_8;
  
  DAT_00939e5c = DAT_009b7b1c;
  DAT_00939e58 = DAT_009b7b20;
  DAT_009b86a0 = 0;
  FUN_00645470(&DAT_009b86a0,PTR_s_SCRIPT_00691b0c);
  FUN_00645470(&DAT_009b86a0,&DAT_0068f4a4);
  FUN_006043d0(&DAT_009b86a0);
  local_8 = FUN_0059db40(s_MainFontSize_0068f4ac,0x10,0);
  local_c = FUN_0059db40(s_InterludeFontSize_0068f4bc,0x10,0);
  DAT_0094581c = FUN_0059db40(s_FastUnitAnim_0068f4d0,0,0);
  FUN_0059e530(s_FastUnitAnim_0068f4e0,DAT_0094581c,0);
  if (DAT_0094581c == 0) {
    iVar1 = FUN_0059db40(s_SmoothUnitAnim_0068f4f0,0,0);
    if (iVar1 != 0) {
      DAT_0094581c = -1;
    }
  }
  FUN_0059e530(s_SmoothUnitAnim_0068f500,DAT_0094581c < 0,0);
  FUN_0059e530(s_MainFontSize_0068f510,local_8,0);
  FUN_0059e530(s_InterludeFontSize_0068f520,local_c,0);
  if (DAT_009b7b1c == 800) {
    local_8 = local_8 + -2;
    local_c = local_c + -2;
  }
  piVar4 = &DAT_0068f220;
  do {
    puVar5 = &DAT_0068f250;
    do {
      iVar1 = *piVar4;
      puVar3 = PTR_s_Arial_Narrow_00691b30;
      if (iVar1 < 0xd) {
        puVar3 = PTR_s_Arial_00691b2c;
      }
      FUN_00618f40(puVar3,iVar1,(uint)(0xc < iVar1) | *puVar5);
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < 0x68f260);
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar6 = 0;
  iVar1 = 9999;
  iVar7 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_8;
    if (iVar2 < 0) {
      iVar2 = local_8 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar6 = iVar7;
    }
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar7 = 0;
  DAT_009403d8 = &DAT_0093fc58 + iVar6 * 0xa0;
  iVar1 = 9999;
  iVar6 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_8;
    if (iVar2 < 0) {
      iVar2 = local_8 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar7 = iVar6;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar6 = 0;
  DAT_00945760 = &DAT_0093fca8 + iVar7 * 0xa0;
  iVar1 = 9999;
  iVar7 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_8;
    if (iVar2 < 0) {
      iVar2 = local_8 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar6 = iVar7;
    }
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar7 = 0;
  DAT_0094575c = &DAT_0093fc80 + iVar6 * 0xa0;
  iVar1 = 9999;
  iVar6 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_c;
    if (iVar2 < 0) {
      iVar2 = local_c - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar7 = iVar6;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar6 = 0;
  DAT_00945770 = &DAT_0093fc58 + iVar7 * 0xa0;
  iVar1 = 9999;
  iVar7 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_c;
    if (iVar2 < 0) {
      iVar2 = local_c - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar6 = iVar7;
    }
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar7 = 0;
  DAT_009457f8 = &DAT_0093fca8 + iVar6 * 0xa0;
  iVar1 = 9999;
  iVar6 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 - local_c;
    if (iVar2 < 0) {
      iVar2 = local_c - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar7 = iVar6;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar6 = 0;
  DAT_009457fc = &DAT_0093fc80 + iVar7 * 0xa0;
  iVar1 = 9999;
  iVar7 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 + -0x10;
    if (iVar2 < 0) {
      iVar2 = 0x10 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar6 = iVar7;
    }
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar7 = 0;
  DAT_0094576c = &DAT_0093fc58 + iVar6 * 0xa0;
  iVar1 = 9999;
  iVar6 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 + -0x10;
    if (iVar2 < 0) {
      iVar2 = 0x10 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar7 = iVar6;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar6 = 0;
  DAT_00945808 = &DAT_0093fca8 + iVar7 * 0xa0;
  iVar1 = 9999;
  iVar7 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 + -0x10;
    if (iVar2 < 0) {
      iVar2 = 0x10 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar6 = iVar7;
    }
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar4 < 0x68f250);
  iVar7 = 0;
  DAT_0094580c = &DAT_0093fc80 + iVar6 * 0xa0;
  iVar1 = 9999;
  iVar6 = 0;
  piVar4 = &DAT_0068f220;
  do {
    iVar2 = *piVar4 + -0x10;
    if (iVar2 < 0) {
      iVar2 = 0x10 - *piVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      iVar7 = iVar6;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x68f250);
  _DAT_00945774 = &DAT_0093fc58 + iVar7 * 0xa0;
  _DAT_00945800 = FUN_005882f0(0x10,2);
  _DAT_00945804 = FUN_005882f0(0x10,1);
  if (DAT_009b7b1c == 800) {
    DAT_009457ec = FUN_005882f0(0xc,0);
    DAT_00945768 = FUN_005882f0(0xc,2);
    uVar8 = 0xc;
  }
  else {
    DAT_009457ec = FUN_005882f0(0x10,0);
    DAT_00945768 = FUN_005882f0(0x10,2);
    uVar8 = 0x10;
  }
  DAT_00945764 = FUN_005882f0(uVar8,1);
  DAT_009403dc = FUN_005882f0(0xc,0);
  _DAT_009457f0 = FUN_005882f0(0xc,2);
  _DAT_009457f4 = FUN_005882f0(0xc,1);
  DAT_009b7a54 = DAT_009403dc;
  DAT_00945810 = FUN_005882f0(0xc,1);
  DAT_00945778 = FUN_005882f0(10,1);
  FUN_005faee0(DAT_009457ec);
  DAT_009b7b68 = DAT_009457ec;
  DAT_009b7af4 = DAT_00945810;
  FUN_00588460();
  return;
}

