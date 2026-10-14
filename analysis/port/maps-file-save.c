// REA Evidence: ev_5d88a3328ccd7912e75f84e141d4c6a64b707d41577b81ed9855acd35ef98404

int FUN_005a9b20(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_104 [256];
  
  iVar4 = 1;
  local_104[0] = '\0';
  FUN_00645470(local_104,param_1);
  pcVar1 = _strchr(local_104,0x2e);
  if (pcVar1 == (char *)0x0) {
    FUN_00645470(local_104,&DAT_00690da4);
    FUN_00645470(local_104,PTR_DAT_00691b3c);
  }
  iVar2 = FUN_00634bb0(local_104,&DAT_00690da8);
  if (iVar2 != 0) {
    iVar4 = 2;
    FUN_0057d240(s_TERRANMAP_00690dac,iVar2);
    param_1 = 5;
    iVar3 = FUN_0064603f(&param_1,4,1,iVar2);
    if (iVar3 != 0) {
      iVar4 = 3;
      iVar3 = FUN_005a9280(iVar2,1,0);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
    }
  }
  FUN_00645598(iVar2);
  if (iVar4 != 0) {
    FUN_00646950(local_104);
  }
  return iVar4;
}

