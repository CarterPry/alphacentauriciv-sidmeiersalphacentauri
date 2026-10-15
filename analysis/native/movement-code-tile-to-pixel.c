// ev_a8e5efe96a8dd48ef025b57cfad33c94886f9c0ef80bf5968dc723f32c9afd7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462f00(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if ((param_2 < *(int *)(in_ECX + 0x1dda8)) ||
     (*(int *)(in_ECX + 0x1ddd8) + *(int *)(in_ECX + 0x1ddd0) + *(int *)(in_ECX + 0x1dda8) <=
      param_2)) {
LAB_00462f95:
    iVar4 = param_1 - *(int *)(in_ECX + 0x1dda4);
    if (DAT_00949870 / 2 < iVar4) {
      iVar4 = iVar4 - DAT_00949870;
    }
    if (-(DAT_00949870 / 2) <= iVar4) goto LAB_00462fbc;
  }
  else {
    iVar1 = param_1;
    if ((_DAT_0094988c & 1) == 0) {
      if (param_1 < *(int *)(in_ECX + 0x1dda4)) {
        iVar1 = DAT_00949870 + param_1;
      }
      if (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + *(int *)(in_ECX + 0x1dda4) <=
          iVar1) {
        iVar1 = iVar1 - DAT_00949870;
      }
    }
    iVar4 = *(int *)(in_ECX + 0x1dda4);
    if ((iVar1 < iVar4) ||
       (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + iVar4 <= iVar1))
    goto LAB_00462f95;
    iVar4 = param_1 - iVar4;
    if ((_DAT_0094988c & 1) != 0) goto LAB_00462fbc;
    if (-1 < iVar4) {
      if (DAT_00949870 <= iVar4) {
        iVar4 = iVar4 - DAT_00949870;
      }
      goto LAB_00462fbc;
    }
  }
  iVar4 = iVar4 + DAT_00949870;
LAB_00462fbc:
  *param_3 = *(int *)(in_ECX + 0x1ddbc) * (iVar4 + -1) + *(int *)(in_ECX + 0x1ddac);
  iVar1 = FUN_0046fe70(param_1,param_2,4);
  iVar4 = FUN_0046fe70(param_1,param_2,3);
  iVar2 = FUN_0046fe70(param_1,param_2,2);
  iVar3 = FUN_0046fe70(param_1,param_2,1);
  *param_4 = (((param_2 - *(int *)(in_ECX + 0x1dda8)) + -1) * *(int *)(in_ECX + 0x1ddc0) +
             *(int *)(in_ECX + 0x1ddb0)) - (iVar1 + iVar4 + iVar2 + iVar3 >> 2);
  return;
}

