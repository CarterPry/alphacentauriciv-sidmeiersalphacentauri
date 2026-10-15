// ev_942b7c982ea50eb8029c85e2a91b676cf9ca983f589c6c293e5cd613f82bc825

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00463040(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_8;
  
  if ((param_1 < *(int *)(*(int *)(*in_ECX + 4) + 0x4c4 + (int)in_ECX)) &&
     (param_2 < -*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x4c8))) {
    param_1 = param_1 - in_ECX[0x776b];
    param_2 = param_2 - in_ECX[0x776c];
    if ((-1 < param_1) && (-1 < param_2)) {
      iVar5 = in_ECX[0x7769];
      iVar3 = iVar5 + 1 + (param_1 / in_ECX[0x776d]) * 2;
      uVar6 = _DAT_0094988c & 1;
      if (uVar6 == 0) {
        if (iVar3 < 0) {
          iVar3 = DAT_00949870 + iVar3;
        }
        else if (DAT_00949870 <= iVar3) {
          iVar3 = iVar3 - DAT_00949870;
        }
      }
      iVar1 = in_ECX[0x776f];
      iVar2 = iVar5 + 1 + ((param_1 - iVar1) / in_ECX[0x776d]) * 2;
      if (uVar6 == 0) {
        if (iVar2 < 0) {
          iVar2 = iVar2 + DAT_00949870;
        }
        else if (DAT_00949870 <= iVar2) {
          iVar2 = iVar2 - DAT_00949870;
        }
      }
      bVar9 = iVar2 != iVar3;
      if (bVar9) {
        local_8 = iVar3 + -1;
      }
      else {
        iVar3 = iVar3 + 1;
        local_8 = iVar3;
      }
      bVar9 = !bVar9;
      iVar3 = iVar3 - iVar5;
      iVar5 = iVar3 + -1;
      if (uVar6 == 0) {
        if (iVar5 < 0) {
          iVar5 = iVar5 + DAT_00949870;
        }
        else if (DAT_00949870 <= iVar5) {
          iVar5 = iVar5 - DAT_00949870;
        }
      }
      if (uVar6 == 0) {
        if (iVar3 < 0) {
          iVar3 = iVar3 + DAT_00949870;
        }
        else if (DAT_00949870 <= iVar3) {
          iVar3 = iVar3 - DAT_00949870;
        }
      }
      iVar2 = in_ECX[0x776a] + (param_2 / in_ECX[0x776e]) * 2;
      do {
        iVar8 = iVar2;
        bVar9 = bVar9 == false;
        if (bVar9) {
          iVar2 = FUN_0046fe70(local_8,iVar8,2);
          iVar2 = ((iVar8 - in_ECX[0x776a]) + -1) * in_ECX[0x7770] - iVar2;
          iVar4 = FUN_0046fe70(local_8,iVar8,3);
          iVar4 = (iVar8 - in_ECX[0x776a]) * in_ECX[0x7770] - iVar4;
          local_8 = local_8 + 1;
        }
        else {
          iVar2 = FUN_0046fe70(local_8,iVar8,1);
          iVar2 = (iVar8 - in_ECX[0x776a]) * in_ECX[0x7770] - iVar2;
          iVar4 = FUN_0046fe70(local_8,iVar8,2);
          iVar4 = ((iVar8 - in_ECX[0x776a]) + -1) * in_ECX[0x7770] - iVar4;
          local_8 = local_8 + -1;
        }
        iVar4 = (iVar4 - iVar2) * (param_1 - iVar1 * iVar5);
        iVar7 = (param_2 - iVar2) * (iVar1 * iVar3 - iVar1 * iVar5);
        iVar2 = iVar8 + 1;
      } while (iVar4 - iVar7 == 0 || iVar4 < iVar7);
      iVar8 = iVar8 + -1;
      if ((_DAT_0094988c & 1) == 0) {
        if (local_8 < 0) {
          local_8 = local_8 + DAT_00949870;
        }
        else if (DAT_00949870 <= local_8) {
          local_8 = local_8 - DAT_00949870;
        }
      }
      *param_3 = local_8;
      *param_4 = iVar8;
      if ((((-1 < iVar8) && (iVar8 < DAT_00949874)) && (-1 < *param_3)) && (*param_3 < DAT_00949870)
         ) {
        return 0;
      }
    }
  }
  return 1;
}

