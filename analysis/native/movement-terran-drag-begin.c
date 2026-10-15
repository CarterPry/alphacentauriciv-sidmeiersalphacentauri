// ev_9423ca9e4350e0052daf637e0b35b73a4d6c6b2087e1cbb706a7f449b9f15650

void FUN_005231b0(void)

{
  int *piVar1;
  undefined *puVar2;
  SHORT SVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00630290();
  if ((-1 < DAT_006ab4c4) && (DAT_0091f30c == 0)) {
    piVar1 = &DAT_007f0b54 + DAT_006ab4c4;
    FUN_00605720(&local_4,&local_8);
    SVar3 = GetAsyncKeyState(0x11);
    iVar6 = DAT_009430dc;
    if (((char)((ushort)SVar3 >> 8) == '\0') ||
       ((DAT_009430d8 != 0 || (iVar8 = 9, DAT_0094321c != 0)))) {
      iVar8 = 1;
    }
    iVar7 = DAT_009430dc;
    if ((*(uint *)(*piVar1 + 0x1dd70) & 0x40000) == 0) {
      if (((((iVar8 == 1) && (DAT_009430d8 == 0)) && (DAT_0094321c == 0)) &&
          ((((DAT_009430dc < 0 ||
             (iVar7 = DAT_009430dc * 0x34,
             (int)(short)(&DAT_009951b0)[DAT_009430dc * 0x1a] != (&DAT_00943110)[DAT_00943108])) ||
            (((int)(short)(&DAT_009951b2)[DAT_009430dc * 0x1a] != (&DAT_00943190)[DAT_00943108] ||
             ((iVar5 = FUN_005d9980(DAT_009430dc), iVar5 == 0 || ((&DAT_009951c1)[iVar7] != '\0'))))
            )) || (iVar7 = DAT_009430dc, ((&DAT_009951b4)[iVar6 * 0xd] & 0x4200) != 0)))) &&
         ((((iVar7 = FUN_005d8df0((&DAT_00943110)[DAT_00943108],(&DAT_00943190)[DAT_00943108],
                                  DAT_009430d4,0xffffffff), iVar7 < 0 ||
            (iVar6 = FUN_005d9980(iVar7), iVar6 == 0)) || ((&DAT_009951c1)[iVar7 * 0x34] != '\0'))
          || ((((&DAT_009951b4)[iVar7 * 0xd] & 0x200) != 0 ||
              (((&DAT_009951b4)[iVar7 * 0xd] & 0x4000) == 0)))))) {
        FUN_00522fc0();
        return;
      }
    }
    else {
      iVar8 = 9;
    }
    DAT_009430dc = iVar7;
    iVar6 = *piVar1;
    puVar2 = &DAT_00944728 + iVar8 * 0x2c;
    if (*(undefined **)(iVar6 + 0x1ef4c) != puVar2) {
      FUN_006055c0(puVar2,(&DAT_009446f8)[iVar8],(&DAT_009446c8)[iVar8]);
      *(undefined **)(iVar6 + 0x1ef4c) = puVar2;
    }
    if (DAT_009bffa4 == 0) {
      DAT_009bffa8 = 0;
      DAT_009bffa4 = *(int *)(*(int *)*piVar1 + 4) + *piVar1;
    }
    DAT_00943210 = iVar8;
    FUN_005ee070(9);
    FUN_00606850(0);
    uVar4 = 1;
    *(undefined4 *)(*piVar1 + 0x1dd80) = 1;
    if ((DAT_009430d8 != 0) || (DAT_0094321c == 0)) {
      uVar4 = 0;
    }
    *(undefined4 *)(*piVar1 + 0x1dd84) = uVar4;
    (**(code **)(*(int *)(*(int *)(*(int *)*piVar1 + 4) + *piVar1) + 0x44))(local_4,local_8);
  }
  return;
}

