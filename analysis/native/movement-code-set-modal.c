// ev_24551a33ac84cfdccf2ae3052a14faad0be27407c317040df3ea484b763ccdca

undefined4 FUN_005ee190(code *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  HCURSOR hCursor;
  int iVar2;
  int *in_ECX;
  
  piVar1 = DAT_009b7abc;
  if (3 < DAT_009b7ae4) {
    return 0;
  }
  (&DAT_009b6ef8)[DAT_009b7ae4] = in_ECX;
  *(int **)(&DAT_009b7a1c + DAT_009b7ae4 * 4) = param_3;
  DAT_009b7ae4 = DAT_009b7ae4 + 1;
  DAT_009b7acc = 0;
  DAT_009b7ad0 = 0;
  DAT_009b7ae0 = in_ECX;
  if ((piVar1 != (int *)0x0) && (piVar1 != in_ECX)) {
    (**(code **)(*piVar1 + 0x10))();
    DAT_009b7abc = (int *)0x0;
  }
  DAT_009b7ac4 = 0;
  if (param_3 != (int *)0x0) {
    DAT_009b7adc = param_3;
    (**(code **)(*param_3 + 4))(0);
  }
  (**(code **)(*in_ECX + 4))(0);
  FUN_005fd120();
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  if (DAT_009b7ae0 == in_ECX) {
    while (iVar2 = (**(code **)(*in_ECX + 0xec))(), iVar2 != 0) {
      if ((param_1 != (code *)0x0) && (iVar2 = (*param_1)(), iVar2 == 0)) {
        if (DAT_009b7ae0 != (int *)0x0) {
          (**(code **)(*DAT_009b7ae0 + 0xe8))();
        }
        return 1;
      }
      FUN_005fc700();
      if (DAT_009b7ae0 != in_ECX) {
        return 0;
      }
    }
  }
  return 0;
}

