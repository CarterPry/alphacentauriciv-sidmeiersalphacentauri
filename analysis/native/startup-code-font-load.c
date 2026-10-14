
undefined4 FUN_006190d0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  CHAR local_104 [260];
  
  *in_ECX = 0xffffffff;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  if ((HGDIOBJ)in_ECX[2] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)in_ECX[2]);
    in_ECX[2] = 0;
  }
  if ((LPCSTR)in_ECX[9] != (LPCSTR)0x0) {
    RemoveFontResourceA((LPCSTR)in_ECX[9]);
    if (in_ECX[9] != 0) {
      FUN_00644ef2(in_ECX[9]);
    }
    in_ECX[9] = 0;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    return 0x10;
  }
  sVar1 = _strlen(param_1);
  puVar2 = (undefined1 *)FUN_005d4510(sVar1 + 1);
  in_ECX[9] = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    return 4;
  }
  *puVar2 = 0;
  FUN_00645470(in_ECX[9],param_1);
  sVar1 = _strlen((char *)in_ECX[9]);
  *(undefined1 *)((sVar1 - 4) + in_ECX[9]) = 0;
  FUN_00645470(in_ECX[9],&DAT_006972ac);
  GetCurrentDirectoryA(0x104,local_104);
  CreateScalableFontResourceA(0,(LPCSTR)in_ECX[9],param_1,local_104);
  iVar3 = AddFontResourceA((LPCSTR)in_ECX[9]);
  if (iVar3 == 0) {
    GetLastError();
    return 1;
  }
  PostMessageA((HWND)0xffff,0x1d,0,0);
  in_ECX[1] = in_ECX[1] | 1;
  uVar4 = FUN_00618f40(param_2,param_3,param_4);
  return uVar4;
}

