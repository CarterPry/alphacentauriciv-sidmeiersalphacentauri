
void FUN_0052aa30(void)

{
  bool bVar1;
  SHORT SVar2;
  ushort uVar3;
  int iVar4;
  LSTATUS LVar5;
  undefined4 uVar6;
  BYTE local_20 [12];
  DWORD local_14 [3];
  HKEY local_8;
  
  iVar4 = FUN_0058f040();
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_0058f2f0(0,1);
  if (iVar4 != 0) {
    return;
  }
  DAT_0093a948 = 0;
  DAT_0068f21c = 1;
  DAT_009b2068 = 0;
  DAT_0093f660 = 0;
  local_14[2] = FUN_0062d9e0(&DAT_007d3970,&DAT_00689218,3,9);
  if (local_14[2] != 0) goto LAB_0052ab75;
  SVar2 = GetAsyncKeyState(0x10);
  if ((char)((ushort)SVar2 >> 8) == '\0') {
    bVar1 = false;
    LVar5 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Microsoft_DirectPlay_Ap_0068be94,0,0,&local_8)
    ;
    if (LVar5 == 0) {
      local_14[1] = 10;
      LVar5 = RegQueryValueExA(local_8,s_Complete_0068bedc,(LPDWORD)0x0,local_14,local_20,
                               local_14 + 1);
      if ((LVar5 == 0) && (iVar4 = FUN_0064fd20(local_20,&DAT_0068bee8), iVar4 == 0)) {
        bVar1 = true;
      }
      RegCloseKey(local_8);
      if (bVar1) goto LAB_0052ab1b;
    }
    uVar6 = 0;
  }
  else {
LAB_0052ab1b:
    uVar6 = 1;
  }
  FUN_00600400(s_movies_virtualWorld_wve_0068beec,uVar6);
  FUN_0059dcf0(0);
  DAT_009a6490 = DAT_0094b464;
  iVar4 = FUN_0059db40(s_DisableOpeningMovie_0068bf04,0,0);
  FUN_0059e530(s_DisableOpeningMovie_0068bf18,iVar4,0);
  if ((iVar4 == 0) && ((DAT_009a6490 & 0x10000000) != 0)) {
    FUN_00403be0(s_openingx_0068bf2c);
  }
LAB_0052ab75:
  uVar3 = GetAsyncKeyState(0x10);
  if ((uVar3 & 0x8000) == 0) {
    FUN_00445cd0();
  }
  while( true ) {
    if (DAT_0093a948 != 0) {
      iVar4 = FUN_004c6b10();
      if (iVar4 != 0) {
        FUN_004c6600(2000);
      }
      FUN_005edcd0();
      FUN_005fcbb0();
      FUN_00645460(&DAT_009b2078,&DAT_0093aa0c);
      FUN_006003b0(&DAT_009b2078);
      iVar4 = FUN_0058f450(0,1);
      if (iVar4 != 0) goto LAB_0052ad18;
      DAT_009a64c8 = 0;
      FUN_005b3920(1);
      DAT_009a649c = DAT_0094b470;
      DAT_009a681c = 0;
    }
    DAT_0093a948 = 0;
    DAT_0068f21c = 1;
    DAT_009b2068 = 0;
    DAT_0093f660 = 0;
    FUN_005fd120();
    if (local_14[2] != 0) break;
    iVar4 = FUN_0058e360();
    if (iVar4 != 0) goto LAB_0052ad13;
LAB_0052ac78:
    local_14[2] = 0;
    if (DAT_0093a95c == 0) {
      FUN_005d5250(9);
      FUN_005edcd0();
    }
    else {
      FUN_005d5250(0);
      FUN_005ed9d0(0);
    }
    iVar4 = FUN_0058ee60(DAT_009b2070 == 0);
    if (iVar4 != 0) goto LAB_0052ad13;
    DAT_0068f21c = 0;
    *(uint *)(DAT_007d3c3c + 0x1dd70) = *(uint *)(DAT_007d3c3c + 0x1dd70) | 0x8c0;
    DAT_00939290 = 0xffffffff;
    if (DAT_0093f660 == 0) {
      FUN_005275b0();
    }
    else {
      FUN_0052a2e0();
    }
    FUN_0058eff0();
    if (DAT_0093a948 == 0) {
LAB_0052ad18:
      FUN_0058f430(0);
      FUN_0058f250();
      return;
    }
  }
  FUN_0059dcf0(0);
  FUN_0059e950();
  iVar4 = FUN_0058db30(1);
  if (iVar4 == 0) goto LAB_0052ac78;
LAB_0052ad13:
  FUN_00589b20();
  goto LAB_0052ad18;
}

