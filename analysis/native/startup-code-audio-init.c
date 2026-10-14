
int FUN_004c5ce0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004c5e50();
  if (iVar1 == 0) {
    if (DAT_0090db78 != (HMODULE)0x0) {
      (*DAT_0090db2c)(0,0);
    }
    iVar1 = FUN_004c4f40(param_1,param_2);
    if (iVar1 != 0) {
      DAT_0090db7c = 0;
      if (DAT_0090db78 != (HMODULE)0x0) {
        FreeLibrary(DAT_0090db78);
        DAT_0090db78 = (HMODULE)0x0;
      }
      puVar3 = &DAT_0090db24;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      return iVar1;
    }
    if ((param_2 & 2) != 0) {
      FUN_004c57a0(param_1,2);
    }
    if ((param_2 & 8) != 0) {
      FUN_004c5a10(param_1,param_2);
    }
    DAT_0090db7c = 1;
    iVar1 = 0;
  }
  return iVar1;
}

