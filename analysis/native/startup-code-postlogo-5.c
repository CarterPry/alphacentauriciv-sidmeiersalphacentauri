
int FUN_006195b0(int param_1)

{
  int iVar1;
  
  DAT_009bb48c = DAT_009bb48c + 1;
  if (DAT_009bb48c < 2) {
    if (param_1 == 0) {
      return 3;
    }
    DAT_009bb488 = CreateCompatibleDC((HDC)0x0);
    if (DAT_009bb488 == (HDC)0x0) {
      return 2;
    }
    DAT_009bb484 = param_1;
    if ((*(int *)(param_1 + 8) == 0) &&
       (iVar1 = FUN_00618f40(s_Times_New_Roman_006972b4,0xc,0), iVar1 != 0)) {
      return iVar1;
    }
  }
  return 0;
}

