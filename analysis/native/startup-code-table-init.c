
undefined4 FUN_00616a00(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_009b90f8 != 0) {
    FUN_00644ef2(DAT_009b90f8);
    DAT_009b90f8 = 0;
  }
  DAT_009b90fc = 0;
  iVar1 = FUN_005fd550(s_labels_0069720c,s_labels_00697204);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_005fd570();
  DAT_009b90fc = FUN_005fd740();
  DAT_009b90f8 = FUN_005d4510(DAT_009b90fc << 2);
  if (DAT_009b90f8 == 0) {
    return 1;
  }
  if (0 < DAT_009b90fc) {
    do {
      uVar2 = FUN_005fd5e0();
      iVar3 = iVar3 + 1;
      *(undefined4 *)(DAT_009b90f8 + -4 + iVar3 * 4) = uVar2;
    } while (iVar3 < DAT_009b90fc);
  }
  FUN_005fd530();
  return 0;
}

