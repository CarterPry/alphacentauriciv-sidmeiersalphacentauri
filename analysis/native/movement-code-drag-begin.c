// ev_22fe0e083f085068c415904aa992a658870bff0e776c38c3d40e65f8b171e48d

void FUN_0050f170(void)

{
  undefined *puVar1;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  FUN_00616780();
  if ((-1 < DAT_0068a5cc) && (DAT_00915620 == 0)) {
    piVar7 = &DAT_007d3c3c + DAT_0068a5cc;
    local_8 = piVar7;
    FUN_005ec8a0(&local_10,&local_c);
    SVar2 = GetAsyncKeyState(0x11);
    iVar4 = DAT_0093928c;
    if (((char)((ushort)SVar2 >> 8) == '\0') ||
       ((DAT_00939288 != 0 || (iVar8 = 9, DAT_009393cc != 0)))) {
      iVar8 = 1;
    }
    iVar6 = DAT_0093928c;
    if ((*(uint *)(*piVar7 + 0x1dd70) & 0x40000) == 0) {
      if (((((iVar8 == 1) && (DAT_00939288 == 0)) && (DAT_009393cc == 0)) &&
          ((((DAT_0093928c < 0 ||
             (iVar6 = DAT_0093928c * 0x34,
             (int)(short)(&DAT_00952828)[DAT_0093928c * 0x1a] != (&DAT_009392c0)[DAT_009392b8])) ||
            (((int)(short)(&DAT_0095282a)[DAT_0093928c * 0x1a] != (&DAT_00939340)[DAT_009392b8] ||
             ((iVar3 = FUN_005c1a20(DAT_0093928c), iVar3 == 0 || ((&DAT_00952839)[iVar6] != '\0'))))
            )) || (piVar7 = local_8, iVar6 = DAT_0093928c,
                  ((&DAT_0095282c)[iVar4 * 0xd] & 0x4200) != 0)))) &&
         ((((iVar6 = FUN_005c0cb0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],
                                  DAT_00939284,0xffffffff), iVar6 < 0 ||
            (iVar4 = FUN_005c1a20(iVar6), iVar4 == 0)) || ((&DAT_00952839)[iVar6 * 0x34] != '\0'))
          || ((((&DAT_0095282c)[iVar6 * 0xd] & 0x200) != 0 ||
              (piVar7 = local_8, ((&DAT_0095282c)[iVar6 * 0xd] & 0x4000) == 0)))))) {
        FUN_0050ef50();
        return;
      }
    }
    else {
      iVar8 = 9;
    }
    DAT_0093928c = iVar6;
    iVar4 = *piVar7;
    puVar1 = &DAT_0093aa70 + iVar8 * 0x2c;
    if (*(undefined **)(iVar4 + 0x1ef4c) != puVar1) {
      FUN_005ec740(puVar1,*(undefined4 *)(&DAT_0093aa10 + iVar8 * 4),
                   *(undefined4 *)(&DAT_0093aa40 + iVar8 * 4));
      *(undefined **)(iVar4 + 0x1ef4c) = puVar1;
    }
    piVar7 = local_8;
    if (DAT_009b7abc == 0) {
      DAT_009b7ac0 = 0;
      DAT_009b7abc = *(int *)(*(int *)*local_8 + 4) + *local_8;
    }
    DAT_009393c0 = iVar8;
    FUN_005d5250(9);
    FUN_005ed9d0(0);
    uVar5 = 1;
    *(undefined4 *)(*piVar7 + 0x1dd80) = 1;
    if ((DAT_00939288 != 0) || (DAT_009393cc == 0)) {
      uVar5 = 0;
    }
    *(undefined4 *)(*piVar7 + 0x1dd84) = uVar5;
    (**(code **)(*(int *)(*(int *)(*(int *)*piVar7 + 4) + *piVar7) + 0x44))(local_10,local_c);
  }
  return;
}

