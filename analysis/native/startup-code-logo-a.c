
undefined4 FUN_005f01f0(LPCSTR param_1)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA local_5bc [4];
  int iStack_514;
  int iStack_510;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00662cd7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7210();
  DAT_009b6ef8 = 0;
  DAT_009b6efc = 0;
  local_4 = 0;
  DAT_009b6f00 = 0;
  DAT_009b6f04 = 0;
  DAT_009b7b14 = GetModuleHandleA((LPCSTR)0x0);
  local_5bc[0].style = 0x2b;
  local_5bc[0].lpfnWndProc = (WNDPROC)&LAB_005f0650;
  local_5bc[0].cbClsExtra = 0;
  local_5bc[0].cbWndExtra = 0;
  local_5bc[0].hInstance = DAT_009b7b14;
  local_5bc[0].hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_5bc[0].hCursor = (HCURSOR)0x0;
  local_5bc[0].hbrBackground = GetStockObject(4);
  local_5bc[0].lpszMenuName = (LPCSTR)0x0;
  local_5bc[0].lpszClassName = s_JackalClass_00696dc8;
  AVar1 = RegisterClassA(local_5bc);
  if (AVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_005d7410();
    ExceptionList = local_c;
    return 1;
  }
  DAT_009b7b1c = GetSystemMetrics(0);
  DAT_009b7b20 = GetSystemMetrics(1);
  DAT_009b7b28 = CreateWindowExA(0x40000,s_JackalClass_00696dd4,param_1,0x80000000,0,0,DAT_009b7b1c,
                                 DAT_009b7b20,(HWND)0x0,(HMENU)0x0,DAT_009b7b14,(LPVOID)0x0);
  if (DAT_009b7b28 == (HWND)0x0) {
    local_4 = 0xffffffff;
    FUN_005d7410();
    ExceptionList = local_c;
    return 1;
  }
  if (DAT_009b3ab0 == 0) {
    if (DAT_009bc498 == (int *)0x0) {
      DAT_009b7b2c = GetDC(DAT_009b7b28);
    }
    else {
      (**(code **)(*DAT_009bc498 + 0x44))(DAT_009bc498,&DAT_009b7b2c);
    }
    if (DAT_009b7b2c != (HDC)0x0) {
      DAT_009b3ab0 = 1;
    }
  }
  else {
    DAT_009b3ab0 = DAT_009b3ab0 + 1;
  }
  SetBkMode(DAT_009b7b2c,1);
  SetSystemPaletteUse(DAT_009b7b2c,1);
  SelectPalette(DAT_009b7b2c,DAT_009b8178,0);
  DAT_009b3ab0 = DAT_009b3ab0 + -1;
  if (DAT_009b3ab0 == 0) {
    if (DAT_009bc498 == (int *)0x0) {
      ReleaseDC(DAT_009b7b28,DAT_009b7b2c);
    }
    else {
      (**(code **)(*DAT_009bc498 + 0x68))(DAT_009bc498,DAT_009b7b2c);
    }
    DAT_009b7b2c = (HDC)0x0;
  }
  FUN_005d7670(DAT_009b7b1c,DAT_009b7b20,0,0);
  FUN_005dfb50(0);
  iVar2 = FUN_005d7de0(s_logo_pcx_00696de0,DAT_009b8180,10,0xec);
  if (iVar2 == 0) {
    FUN_005dff00(&DAT_009b7490,0,0,(DAT_009b7510 - iStack_514) / 2,(iStack_510 - DAT_009b7514) / 2,
                 iStack_514,-iStack_510);
  }
  if (((byte)DAT_009bc4b0 & 4) == 0) {
    ShowWindow(DAT_009b7b28,5);
    FUN_005efd20(0);
  }
  local_4 = 0xffffffff;
  FUN_005d7410();
  ExceptionList = local_c;
  return 0;
}

