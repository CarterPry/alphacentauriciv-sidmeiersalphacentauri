
int FUN_00600400(int param_1,int param_2)

{
  undefined4 *puVar1;
  UINT UVar2;
  HANDLE hFindFile;
  int iVar3;
  CHAR aCStack_24c [12];
  CHAR aCStack_240 [256];
  _WIN32_FIND_DATAA _Stack_140;
  
  if (param_1 == 0) {
    return 0x10;
  }
  DAT_009b8298 = 0;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_00696ecc)();
  if (puVar1 == (undefined4 *)0x0) {
    return 4;
  }
  DAT_009b8598 = 0;
  FUN_00645470(&DAT_009b8598,param_1);
  DAT_009b8198 = 0;
  DAT_009b8498 = 0;
  DAT_009b8398 = 0;
  GetCurrentDirectoryA(0x100,&DAT_009b8498);
  aCStack_240[0] = '\0';
  FUN_00645470(aCStack_240,&DAT_009b8498);
  FUN_00645470(&DAT_009b8498,&DAT_00696ea0);
  do {
    aCStack_24c[0] = '\0';
    FUN_00645470(aCStack_24c,&DAT_00696ea4);
    iVar3 = 0;
    do {
      UVar2 = GetDriveTypeA(aCStack_24c);
      if (UVar2 == 5) {
        DAT_009b8398 = 0;
        FUN_00645470(&DAT_009b8398,aCStack_24c);
        FUN_00645470(&DAT_009b8398,param_1);
        hFindFile = FindFirstFileA(&DAT_009b8398,&_Stack_140);
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          FUN_00645470(&DAT_009b8198,aCStack_24c);
          goto LAB_00600560;
        }
      }
      aCStack_24c[0] = aCStack_24c[0] + '\x01';
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1a);
    if (param_2 != 0) {
      (**(code **)*puVar1)(1);
      return 0;
    }
    iVar3 = FUN_00601bf0(s_jackal_00696eb8,s_FILEFIND_NOCD_00696ea8,0xffffffff,0,0,0);
    if (iVar3 != 0) {
      (**(code **)*puVar1)(1);
      return iVar3;
    }
  } while (puVar1[0xc40] == 1);
LAB_00600560:
  SetCurrentDirectoryA(aCStack_240);
  (**(code **)*puVar1)(1);
  return 0;
}

