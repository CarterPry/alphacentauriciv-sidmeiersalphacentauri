
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058f2f0(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  
  DAT_0068f21c = 1;
  DVar1 = timeGetTime();
  FUN_00538fb0(DVar1);
  DVar1 = timeGetTime();
  FUN_006257e0(DVar1);
  if (param_1 == 0) {
    FUN_00626450(0);
  }
  else {
    FUN_006168f0(0xc320);
    iVar3 = FUN_00616a00();
    if (iVar3 != 0) {
      return 1;
    }
    DAT_009b86a0 = 0;
    uVar2 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x198));
    FUN_00645470(&DAT_009b86a0,uVar2);
    if (DAT_009bc054 != 2) {
      CharUpperA(&DAT_009b86a0);
    }
    FUN_00601910(&DAT_009b86a0);
    DAT_009b86a0 = 0;
    uVar2 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x194));
    FUN_00645470(&DAT_009b86a0,uVar2);
    CharUpperA(&DAT_009b86a0);
    FUN_006018a0(&DAT_009b86a0);
  }
  FUN_00455eb0();
  iVar3 = FUN_005873c0(param_2);
  if (iVar3 != 0) {
    return 1;
  }
  FUN_0050f3d0();
  _DAT_009b7b00 = &DAT_0075ae4c;
  DAT_009b7b04 = &DAT_0075ae78;
  _DAT_009b7b0c = &DAT_0075ae20;
  return 0;
}

