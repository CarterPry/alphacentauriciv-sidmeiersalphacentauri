// ev_35154d77355d6e0f3ded955a0606f61b9888eeccb11de8d8a3603d1055ea5a46

undefined4 FUN_005f7e90(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x9c) & 1) == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0xc4) != 0) {
    iVar1 = FUN_005f7e90();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

