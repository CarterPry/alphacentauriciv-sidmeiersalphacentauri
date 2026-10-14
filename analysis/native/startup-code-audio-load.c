
undefined4 FUN_004c5e50(void)

{
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_0090db78 == (HMODULE)0x0) {
    DAT_0090db78 = LoadLibraryA(s___soundx_dll_00687b14);
    if (DAT_0090db78 == (HMODULE)0x0) {
      return 1;
    }
    iVar5 = 0;
    puVar4 = &DAT_0090db24;
    do {
      pFVar1 = GetProcAddress(DAT_0090db78,(LPCSTR)(iVar5 + 1U & 0xffff));
      *puVar4 = pFVar1;
      if (pFVar1 == (FARPROC)0x0) {
        DAT_0090db7c = 0;
        if (DAT_0090db78 != (HMODULE)0x0) {
          FreeLibrary(DAT_0090db78);
          DAT_0090db78 = (HMODULE)0x0;
        }
        DAT_0090db7c = 0;
        puVar4 = &DAT_0090db24;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        return 1;
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar4 < 0x90db50);
    if (DAT_0090db78 == (HMODULE)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*DAT_0090db4c)();
    }
    if ((uVar3 & 0xff00) != 0x100) {
      FUN_004c9080("The sound header files used in the game do not match the ones used in sound.dll. Check all sound.h and sound device.h versions!"
                   ,"Sound Version Warning");
    }
    iVar5 = FUN_0062d390();
    if (iVar5 != 1) {
      FUN_004c9080("The sound header files used by jackal do not match the ones used by the game. Check all sound.h and sound device.h versions!"
                   ,"Sound Version Warning");
    }
    uVar2 = FUN_0062d390();
    if (uVar2 != (uVar3 >> 8 & 0xff)) {
      FUN_004c9080("The sound header files used by jackal do not match the ones used in sound.dll. "
                   ,"Sound Version Warning");
    }
  }
  return 0;
}

