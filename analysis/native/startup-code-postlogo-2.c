
int FUN_0060fc60(void)

{
  int iVar1;
  undefined1 local_594 [1416];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00662f8f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7210();
  local_4 = 0;
  FUN_005d7670(0x20,0x20,0,0);
  iVar1 = FUN_005d7de0(s_jackal_pcx_0069710c,0,10,0xec);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_005d7410();
    ExceptionList = local_c;
    return iVar1;
  }
  FUN_005e39a0(local_594,0x109,1,0x44,0x20,0x20,0);
  FUN_005e39a0(local_594,0x109,0x22,0x44,0x20,0x20,0);
  local_4 = 0xffffffff;
  FUN_005d7410();
  ExceptionList = local_c;
  return 0;
}

