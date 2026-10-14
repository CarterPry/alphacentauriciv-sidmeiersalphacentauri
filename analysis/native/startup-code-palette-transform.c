
undefined4 FUN_005de580(char param_1,char param_2)

{
  int *piVar1;
  LONG LVar2;
  BOOL BVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_94 [4];
  undefined4 local_84;
  int local_70;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  RECT local_18;
  int local_8;
  
  local_18.right = *(int *)(in_ECX + 0x80);
  local_18.bottom = -*(int *)(in_ECX + 0x84);
  if ((*(int *)(in_ECX + 0x54) == 0) && (*(int *)(in_ECX + 0x58) == 0)) {
    return 7;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_20 = in_ECX;
  BVar3 = IntersectRect(&local_18,(RECT *)(in_ECX + 0x20),&local_18);
  LVar2 = local_18.left;
  if (BVar3 == 0) {
    return 0;
  }
  local_8 = local_18.top;
  if ((local_18.left < *(int *)(in_ECX + 0x80)) && (local_18.top < -*(int *)(in_ECX + 0x84))) {
    piVar1 = *(int **)(in_ECX + 0x58);
    if (piVar1 == (int *)0x0) {
      local_70 = *(int *)(in_ECX + 0x54);
      *(int *)(in_ECX + 0x50) = local_70;
      if (local_70 == 0) {
        return 7;
      }
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 1;
    }
    else if (*(int *)(in_ECX + 0x50) == 0) {
      local_94[0] = 0x6c;
      iVar5 = (**(code **)(*piVar1 + 100))(piVar1,0,local_94,1,0);
      if (iVar5 != 0) {
        return 7;
      }
      *(undefined4 *)(in_ECX + 0x4a8) = local_84;
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 1;
      *(int *)(in_ECX + 0x50) = local_70;
    }
    else {
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 1;
      local_70 = *(int *)(in_ECX + 0x50);
    }
    if (local_70 != 0) {
      local_1c = (char *)(*(int *)(in_ECX + 0x4a8) * local_8 + *(int *)(in_ECX + 0x50) + LVar2);
      if (local_1c != (char *)0x0) {
        local_24 = local_18.right - local_18.left;
        local_28 = local_18.bottom - local_18.top;
        local_8 = *(int *)(in_ECX + 0x4a8) - local_24;
        iVar5 = local_24;
        pcVar6 = local_1c;
        iVar4 = local_28;
        do {
          do {
            if (*pcVar6 == param_1) {
              *pcVar6 = param_2;
            }
            pcVar6 = pcVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          pcVar6 = pcVar6 + local_8;
          iVar4 = iVar4 + -1;
          iVar5 = local_24;
        } while (iVar4 != 0);
        piVar1 = *(int **)(local_20 + 0x58);
        if (piVar1 == (int *)0x0) {
          iVar5 = *(int *)(local_20 + 0x6c) + -1;
          *(int *)(local_20 + 0x6c) = iVar5;
          if (0 < iVar5) {
            return 0;
          }
          *(undefined4 *)(local_20 + 0x50) = 0;
          *(undefined4 *)(local_20 + 0x6c) = 0;
          return 0;
        }
        iVar5 = *(int *)(local_20 + 0x6c) + -1;
        *(int *)(local_20 + 0x6c) = iVar5;
        if (*(int *)(local_20 + 0x50) == 0) {
          return 0;
        }
        if (0 < iVar5) {
          return 0;
        }
        (**(code **)(*piVar1 + 0x80))(piVar1,*(int *)(local_20 + 0x50));
        *(undefined4 *)(local_20 + 0x50) = 0;
        *(undefined4 *)(local_20 + 0x6c) = 0;
        return 0;
      }
    }
  }
  return 7;
}

