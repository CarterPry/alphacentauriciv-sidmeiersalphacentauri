// ev_57661b2350f1fc3076a124c1acb51fb628ec4e3443a48ffa893444669b616f6f

void FUN_0050ef50(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  FUN_005edcd0();
  FUN_00616780();
  piVar2 = &DAT_007d3c3c;
  local_8 = 0;
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) &&
       ((((piVar2 == &DAT_007d3c3c || (*(int *)(iVar1 + 0x1dd74) != 0)) && (local_8 != DAT_0068a5cc)
         ) && (*(int *)(iVar1 + 0x1dd80) != 0)))) {
      *(undefined4 *)(iVar1 + 0x1dd88) = 1;
      *(undefined4 *)(*piVar2 + 0x1dd80) = 0;
      *(undefined4 *)(*piVar2 + 0x1dd8c) = 0;
      *(undefined4 *)(*piVar2 + 0x1dd84) = 0;
      *(undefined4 *)(*piVar2 + 0x1de0c) = 0xffffffff;
      piVar3 = (int *)(*(int *)(*(int *)*piVar2 + 4) + *piVar2);
      if (DAT_009b7abc == piVar3) {
        DAT_009b7abc = (int *)0x0;
        (**(code **)(*piVar3 + 0x10))();
      }
      if (DAT_009b7ac0 == piVar3) {
        DAT_009b7ac0 = (int *)0x0;
      }
      (**(code **)(*(int *)(*(int *)(*(int *)*piVar2 + 4) + *piVar2) + 0xfc))();
      FUN_004b4a20(0);
    }
    iVar1 = DAT_007d3c3c;
    piVar2 = piVar2 + 1;
    local_8 = local_8 + 1;
  } while ((int)piVar2 < 0x7d3c5c);
  if ((*(int *)(DAT_007d3c3c + 0x1ef4c) != 0) || (*(int *)(DAT_007d3c3c + 0x1ef50) != 0x7f00)) {
    FUN_005ec7c0(0x7f00);
    *(undefined4 *)(iVar1 + 0x1ef50) = 0x7f00;
    *(undefined4 *)(iVar1 + 0x1ef4c) = 0;
  }
  if (-1 < DAT_0068a5cc) {
    iVar1 = (&DAT_007d3c3c)[DAT_0068a5cc];
    piVar2 = &DAT_007d3c3c + DAT_0068a5cc;
    if (((*(undefined **)(iVar1 + 0x1ef4c) == &DAT_0093aa9c) ||
        (*(undefined **)(iVar1 + 0x1ef4c) == &DAT_0093abfc)) &&
       ((*(int *)(iVar1 + 0x1ef4c) != 0 || (*(int *)(iVar1 + 0x1ef50) != 0x7f00)))) {
      FUN_005ec7c0(0x7f00);
      *(undefined4 *)(iVar1 + 0x1ef50) = 0x7f00;
      *(undefined4 *)(iVar1 + 0x1ef4c) = 0;
    }
    *(undefined4 *)(*piVar2 + 0x1dd88) = 1;
    *(undefined4 *)(*piVar2 + 0x1dd80) = 0;
    *(undefined4 *)(*piVar2 + 0x1dd8c) = 0;
    *(undefined4 *)(*piVar2 + 0x1dd84) = 0;
    *(undefined4 *)(*piVar2 + 0x1de0c) = 0xffffffff;
    piVar3 = (int *)(*(int *)(*(int *)*piVar2 + 4) + *piVar2);
    if (DAT_009b7abc == piVar3) {
      DAT_009b7abc = (int *)0x0;
      (**(code **)(*piVar3 + 0x10))();
    }
    if (DAT_009b7ac0 == piVar3) {
      DAT_009b7ac0 = (int *)0x0;
    }
    (**(code **)(*(int *)(*(int *)(*(int *)*piVar2 + 4) + *piVar2) + 0xfc))();
    FUN_004b4a20(0);
    DAT_0068a5cc = -1;
  }
  return;
}

