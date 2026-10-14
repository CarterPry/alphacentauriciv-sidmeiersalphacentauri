
undefined4 FUN_0045f950(undefined4 param_1,undefined4 param_2,int param_3)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  DAT_007d3970 = 0;
  if (param_3 != 0) {
    FUN_00645470(&DAT_007d3970,param_3);
  }
  DAT_009a6488 = 1;
  DAT_009469fc = 0;
  PTR_FUN_00696ecc = FUN_00404fb0;
  DAT_006970dc = DAT_006970dc | 4;
  iVar2 = FUN_0059db40(s_Video_Mode_006853c0,0,0);
  iVar3 = FUN_0059db40(s_DirectDraw_006853cc,1,0);
  iVar4 = param_3;
  iVar6 = param_3;
  if (iVar3 != 0) {
    if (iVar2 == 0) {
      iVar2 = GetSystemMetrics(0);
    }
    if (iVar2 < 0x400) {
      param_3 = 8;
      iVar4 = 600;
      iVar6 = 800;
    }
    else {
      param_3 = 8;
      iVar4 = 0x300;
      iVar6 = 0x400;
    }
  }
  iVar2 = FUN_0062d570(s_10_10_00685418);
  if ((iVar2 == 0) &&
     (iVar4 = FUN_0062d3a0(&DAT_0094c590,&DAT_007d3948,s_Sid_Meier_s_Alpha_Centauri_006853d8,
                           -(iVar3 != 0) & 4,iVar6,iVar4,param_3), iVar4 == 0)) {
    iVar4 = FUN_006185a0();
    if (iVar4 != 0) {
      return 0;
    }
    uVar5 = 10;
    iVar4 = FUN_0059db40(&DAT_006853f4,1,0);
    if (iVar4 != 0) {
      uVar5 = 0x2a;
      FUN_0059e530(&DAT_006853fc,1,0);
      iVar4 = FUN_0059db40(&DAT_00685404,1,0);
      if (iVar4 != 0) {
        uVar5 = 0x6a;
        FUN_0059e530(&DAT_00685408,1,0);
      }
    }
    SVar1 = GetAsyncKeyState(0x10);
    if ((char)((ushort)SVar1 >> 8) == '\0') {
      FUN_004c5ce0(DAT_009b7b28,uVar5);
    }
    FUN_006190d0(s_arialn_ttf_0068540c,PTR_s_Arial_00691b2c,0xc,0);
    FUN_0052aa30();
    FUN_00618d20();
    FUN_0062d500();
    return 1;
  }
  return 0;
}

