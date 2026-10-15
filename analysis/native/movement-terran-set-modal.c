// ev_90d5aa08636de2908df8b24fc0e190d663b7fbe058de208a45fc4f72a7007b5d

undefined4 FUN_00607010(code *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  HCURSOR hCursor;
  int iVar2;
  int *in_ECX;
  
  piVar1 = DAT_009bffa4;
  if (3 < DAT_009bffcc) {
    return 0;
  }
  (&DAT_009bf3e0)[DAT_009bffcc] = in_ECX;
  *(int **)(&DAT_009bff04 + DAT_009bffcc * 4) = param_3;
  DAT_009bffcc = DAT_009bffcc + 1;
  DAT_009bffb4 = 0;
  DAT_009bffb8 = 0;
  DAT_009bffc8 = in_ECX;
  if ((piVar1 != (int *)0x0) && (piVar1 != in_ECX)) {
    (**(code **)(*piVar1 + 0x10))();
    DAT_009bffa4 = (int *)0x0;
  }
  DAT_009bffac = 0;
  if (param_3 != (int *)0x0) {
    DAT_009bffc4 = param_3;
    (**(code **)(*param_3 + 4))(0);
  }
  (**(code **)(*in_ECX + 4))(0);
  FUN_00616240();
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  if (DAT_009bffc8 == in_ECX) {
    while (iVar2 = (**(code **)(*in_ECX + 0xec))(), iVar2 != 0) {
      if ((param_1 != (code *)0x0) && (iVar2 = (*param_1)(), iVar2 == 0)) {
        if (DAT_009bffc8 != (int *)0x0) {
          (**(code **)(*DAT_009bffc8 + 0xe8))();
        }
        return 1;
      }
      FUN_00615820();
      if (DAT_009bffc8 != in_ECX) {
        return 0;
      }
    }
  }
  return 0;
}

