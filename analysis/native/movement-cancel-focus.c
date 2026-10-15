// ev_ab2d49dbe800ca52f8c6ce3eb281a74517a52a6c5b7feaf2cdd6b27c2b8ddd23


int FUN_005108a0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if ((int)param_3 < 0) {
    param_3 = 0x60000000;
  }
  else {
    param_3 = (-(uint)(param_3 != DAT_00939284) & 0x20000000) + 0x20000000;
  }
  do {
    iVar1 = (&DAT_007d3c3c)[iVar2];
    if ((iVar1 != 0) && ((iVar2 == 0 || (*(int *)(iVar1 + 0x1dd74) != 0)))) {
      if ((param_3 & *(uint *)(iVar1 + 0x1dd70)) == 0) {
        if ((iVar2 == 0) && (DAT_0093a938 != 0)) {
LAB_0051091f:
          FUN_005109b0(param_1,param_2);
          if (*(int *)(in_ECX + 0x23c00) == 0) goto LAB_00510964;
          *(undefined4 *)(in_ECX + 0x23c00) = 0;
          iVar1 = FUN_0046b310(param_1,param_2);
          if (iVar1 == 0) {
            FUN_0046a550(1);
            goto LAB_00510981;
          }
          goto LAB_0051097a;
        }
      }
      else {
        if (iVar2 == 0) goto LAB_0051091f;
LAB_00510964:
        iVar1 = FUN_0046b310(param_1,param_2);
        if ((iVar1 != 0) && (iVar2 == 0)) {
LAB_0051097a:
          local_8 = 1;
        }
      }
    }
LAB_00510981:
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      if (local_8 != 0) {
        FUN_005fd120();
      }
      return local_8;
    }
  } while( true );
}

