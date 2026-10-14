
undefined4 FUN_00635510(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iStack_514;
  int iStack_510;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0066387b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7210();
  local_4 = 0;
  if (param_3 != 0) {
    if (DAT_009b7b28 == 0) {
      local_4 = 0xffffffff;
      FUN_005d7410();
      ExceptionList = local_c;
      return 7;
    }
    piVar1 = (int *)in_ECX[3];
    if ((piVar1 != (int *)0x0) && (in_ECX[4] != 0)) {
      (**(code **)(*piVar1 + 0x80))(piVar1,in_ECX[4]);
      in_ECX[4] = 0;
    }
    piVar2 = (int *)in_ECX[1];
    piVar1 = in_ECX + 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x4c))(piVar2);
      (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
      *piVar1 = 0;
    }
    if ((HWND)*in_ECX != (HWND)0x0) {
      DestroyWindow((HWND)*in_ECX);
      *in_ECX = 0;
      UnregisterClassA(s_DirectDClass_00697f3c,DAT_009b7b14);
    }
    in_ECX[3] = 0;
    FUN_005efd00();
    if ((param_1 == 0) || (param_2 == 0)) {
      param_1 = GetSystemMetrics(0);
      param_2 = GetSystemMetrics(1);
    }
    if ((((*piVar1 == 0) && (iVar3 = DirectDrawCreate(0,piVar1,0), iVar3 != 0)) ||
        (iVar3 = (**(code **)(*(int *)*piVar1 + 0x50))((int *)*piVar1,DAT_009b7b28,0x11), iVar3 != 0
        )) || ((iVar3 = (**(code **)(*(int *)*piVar1 + 0x54))
                                  ((int *)*piVar1,param_1,param_2,param_3), iVar3 != 0 ||
               (iVar3 = (**(code **)(*(int *)*piVar1 + 0x50))((int *)*piVar1,0,8), iVar3 != 0)))) {
      FUN_00635870(iVar3);
      local_4 = 0xffffffff;
      FUN_005d7410();
      ExceptionList = local_c;
      return 0x12;
    }
    DAT_009b7b1c = param_1;
    DAT_009b7b20 = param_2;
    if (param_4 != 0) {
      FUN_005d7670(param_1,param_2,0,0);
      FUN_005dfb50(0);
      iVar3 = FUN_005d7de0(s_logo_pcx_00697f30,DAT_009b8180,10,0xec);
      if (iVar3 == 0) {
        FUN_005dff00(&DAT_009b7490,0,0,(DAT_009b7510 - iStack_514) / 2,
                     (iStack_510 - DAT_009b7514) / 2,iStack_514,-iStack_510);
      }
    }
    FUN_005efd20(0);
  }
  local_4 = 0xffffffff;
  FUN_005d7410();
  ExceptionList = local_c;
  return 0;
}

