
int FUN_004c4f40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)(param_2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)in_ECX[5] + 0xc))(param_1,param_2);
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 4))();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

