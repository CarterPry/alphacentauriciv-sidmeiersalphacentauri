// ev_cf4c8e180a83e5dd3f7f8a6e405d82b6e0fad5b9e8f6c3c617e128525faa610f

void FUN_00522fc0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_00606b50();
  FUN_00630290();
  iVar2 = 0;
  piVar3 = &DAT_007f0b54;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) &&
       ((((piVar3 == &DAT_007f0b54 || (*(int *)(iVar1 + 0x1dd74) != 0)) && (iVar2 != DAT_006ab4c4))
        && (*(int *)(iVar1 + 0x1dd80) != 0)))) {
      *(undefined4 *)(iVar1 + 0x1dd88) = 1;
      *(undefined4 *)(*piVar3 + 0x1dd80) = 0;
      *(undefined4 *)(*piVar3 + 0x1dd8c) = 0;
      *(undefined4 *)(*piVar3 + 0x1dd84) = 0;
      *(undefined4 *)(*piVar3 + 0x1de0c) = 0xffffffff;
      piVar4 = (int *)(*(int *)(*(int *)*piVar3 + 4) + *piVar3);
      if (DAT_009bffa4 == piVar4) {
        DAT_009bffa4 = (int *)0x0;
        (**(code **)(*piVar4 + 0x10))();
      }
      if (DAT_009bffa8 == piVar4) {
        DAT_009bffa8 = (int *)0x0;
      }
      (**(code **)(*(int *)(*(int *)(*(int *)*piVar3 + 4) + *piVar3) + 0xfc))();
      FUN_004c93e0(0);
    }
    iVar1 = DAT_007f0b54;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar3 < 0x7f0b74);
  if ((*(int *)(DAT_007f0b54 + 0x1ef4c) != 0) || (*(int *)(DAT_007f0b54 + 0x1ef50) != 0x7f00)) {
    FUN_00605640(0x7f00);
    *(undefined4 *)(iVar1 + 0x1ef50) = 0x7f00;
    *(undefined4 *)(iVar1 + 0x1ef4c) = 0;
  }
  if (-1 < DAT_006ab4c4) {
    iVar2 = (&DAT_007f0b54)[DAT_006ab4c4];
    piVar3 = &DAT_007f0b54 + DAT_006ab4c4;
    if (((*(undefined **)(iVar2 + 0x1ef4c) == &DAT_00944754) ||
        (*(undefined **)(iVar2 + 0x1ef4c) == &DAT_009448b4)) &&
       ((*(int *)(iVar2 + 0x1ef4c) != 0 || (*(int *)(iVar2 + 0x1ef50) != 0x7f00)))) {
      FUN_00605640(0x7f00);
      *(undefined4 *)(iVar2 + 0x1ef50) = 0x7f00;
      *(undefined4 *)(iVar2 + 0x1ef4c) = 0;
    }
    *(undefined4 *)(*piVar3 + 0x1dd88) = 1;
    *(undefined4 *)(*piVar3 + 0x1dd80) = 0;
    *(undefined4 *)(*piVar3 + 0x1dd8c) = 0;
    *(undefined4 *)(*piVar3 + 0x1dd84) = 0;
    *(undefined4 *)(*piVar3 + 0x1de0c) = 0xffffffff;
    piVar4 = (int *)(*(int *)(*(int *)*piVar3 + 4) + *piVar3);
    if (DAT_009bffa4 == piVar4) {
      DAT_009bffa4 = (int *)0x0;
      (**(code **)(*piVar4 + 0x10))();
    }
    if (DAT_009bffa8 == piVar4) {
      DAT_009bffa8 = (int *)0x0;
    }
    (**(code **)(*(int *)(*(int *)(*(int *)*piVar3 + 4) + *piVar3) + 0xfc))();
    FUN_004c93e0(0);
    DAT_006ab4c4 = -1;
  }
  return;
}

