
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407620(void)

{
  HDC hdc;
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_154;
  _STARTUPINFOA local_144;
  CHAR local_100 [256];
  
  GetCurrentDirectoryA(0x100,local_100);
  local_154.hProcess = (HANDLE)0x0;
  local_154.hThread = (HANDLE)0x0;
  local_154.dwProcessId = 0;
  local_154.dwThreadId = 0;
  p_Var3 = &local_144;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_144.cb = 0x44;
  hdc = GetDC((HWND)0x0);
  GetDeviceCaps(hdc,10);
  GetDeviceCaps(hdc,8);
  ReleaseDC((HWND)0x0,hdc);
  iVar2 = FUN_0042c410(s_10_10_0047a3c0);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_0042c240((LPPALETTEENTRY)&DAT_00487a90,&DAT_00487a68,s_axstart_0047a3b8,4,0x400,
                           0x300,8), iVar2 == 0)) {
    FUN_00407830();
    FUN_00404d80(DAT_00489f50,0);
    _DAT_0047a3a0 = DAT_00489f44;
    _DAT_0047a3a4 = DAT_00489f48;
    _DAT_0047a398 = 0;
    _DAT_0047a39c = 0;
    FUN_004013a0(&DAT_004821d0,(int *)&DAT_0047a398);
    FUN_0040f2c0(&DAT_004821d0);
    FUN_00401380(&DAT_004821d0);
    iVar2 = DAT_00484d58;
    while (DAT_00484d58 = iVar2, DAT_00484d54 != '\0') {
      FUN_00402230(&DAT_004821d0);
      FUN_00429670();
      iVar2 = DAT_00484d58;
    }
    thunk_FUN_00407c20((int *)&DAT_004821d0);
    FUN_00404df0();
    FUN_0042c3a0();
    if ((iVar2 != 4) && (iVar2 != 0)) {
      BVar1 = CreateProcessA((LPCSTR)0x0,(LPSTR)(&DAT_0047a0cc)[iVar2],(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_144,
                             &local_154);
      if (BVar1 != 0) {
        WaitForSingleObject(local_154.hProcess,0xffffffff);
        BVar1 = CloseHandle(local_154.hProcess);
        if (BVar1 == 0) {
          FUN_00407800();
        }
        BVar1 = CloseHandle(local_154.hThread);
        if (BVar1 != 0) {
          return 0;
        }
      }
      FUN_00407800();
    }
    return 0;
  }
  MessageBoxA((HWND)0x0,local_100,s_Program_Error_0047a3a8,0);
  return 1;
}

