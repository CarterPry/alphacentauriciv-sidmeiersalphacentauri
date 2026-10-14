// REA Evidence: ev_845e32fada519b5916a349b7c1784754fe0e36d687172ab67e7355a2cf167675
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_00584d60(char *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  sVar1 = _strlen(param_1);
  while ((sVar1 != 0 && (sVar1 = _strlen(param_1), param_1[sVar1 - 1] == ' '))) {
    sVar1 = _strlen(param_1);
    param_1[sVar1 - 1] = '\0';
    sVar1 = _strlen(param_1);
  }
  iVar2 = FUN_0064fd20(param_1,&DAT_0068f268);
  if (iVar2 != 0) {
    iVar2 = FUN_0064fd20(param_1,s_Disable_0068f270);
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar4 = &DAT_0094f360;
      do {
        iVar3 = FUN_0064fd20(param_1,puVar4);
        if (iVar3 == 0) {
          return iVar2;
        }
        puVar4 = puVar4 + 0x2c;
        iVar2 = iVar2 + 1;
      } while ((int)puVar4 < 0x9502ac);
      FUN_00625ec0(0,&DAT_009b7bf0,0xffffffff,0xffffffff);
      FUN_00625ec0(1,param_1,0xffffffff,0xffffffff);
      FUN_00625ec0(2,DAT_009b7d00,0xffffffff,0xffffffff);
      FUN_005bf310(s_BADTECHKEY_0068f278,0);
    }
    return -2;
  }
  return -1;
}

