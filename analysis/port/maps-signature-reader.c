// REA Evidence: ev_b8b5f0e512e27e6871255080dd140c9ee106da421eb1ca7c41454b32b71ac00b

void FUN_0057d1f0(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = FUN_00646855(param_2);
  *param_1 = cVar1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    if (0xff < iVar2) break;
    cVar1 = FUN_00646855(param_2);
    *param_1 = cVar1;
  }
  FUN_00646855(param_2);
  return;
}

