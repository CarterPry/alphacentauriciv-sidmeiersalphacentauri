
int FUN_0063ce20(void)

{
  int iVar1;
  undefined1 local_594 [1416];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006639a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7210();
  local_4 = 0;
  iVar1 = FUN_005d7de0(s_jackal_pcx_00698cac,0,10,0xec);
  if (iVar1 == 0) {
    iVar1 = FUN_005e39a0(local_594,9,1,0x12,0x10,0x10,0);
  }
  else {
    iVar1 = FUN_005eaf3f(0x10,0x10,9);
  }
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_005d7410();
    ExceptionList = local_c;
    return iVar1;
  }
  FUN_005d7410();
  ExceptionList = local_c;
  return 0;
}

