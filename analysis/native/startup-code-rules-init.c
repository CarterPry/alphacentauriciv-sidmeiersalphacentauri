
undefined4 FUN_005873c0(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined2 *puVar6;
  size_t sVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined1 local_118 [256];
  int *local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  FUN_006168f0(0xc320);
  iVar3 = FUN_00616a00();
  if (iVar3 != 0) {
    return 1;
  }
  FUN_005fe270();
  FUN_005fe1f0(PTR_s_SCRIPT_00691b0c);
  FUN_005fe1f0(PTR_s_ALPHAX_00691afc);
  iVar3 = FUN_00585e30();
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = FUN_00585170();
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_TERRAIN_0068f390);
  if (iVar3 != 0) {
    return 1;
  }
  local_8 = 0x30;
  local_c = &DAT_00691890;
  do {
    puVar12 = local_c;
    FUN_005fd570();
    puVar12 = puVar12 + -4;
    iVar3 = 2;
    do {
      uVar4 = FUN_005fd6d0();
      puVar12[-2] = uVar4;
      uVar4 = FUN_005fd670();
      uVar4 = FUN_00584d60(uVar4);
      *puVar12 = uVar4;
      puVar12 = puVar12 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar4 = FUN_005fd740();
    puVar11 = local_c;
    *local_c = uVar4;
    uVar4 = FUN_005fd670();
    FUN_00645460(local_118,uVar4);
    puVar11 = puVar11 + -6;
    iVar3 = 2;
    puVar12 = (undefined4 *)((int)&DAT_0096c878 + local_8);
    do {
      FUN_00625e50(0,*puVar11,0xffffffff,0xffffffff);
      DAT_009b86a0 = 0;
      FUN_00625880(local_118,&DAT_009b86a0);
      uVar4 = FUN_00616970(&DAT_009b86a0);
      *puVar12 = uVar4;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar4 = FUN_005fd6d0();
    iVar3 = local_8;
    *(undefined4 *)((int)&DAT_0096c880 + local_8) = uVar4;
    uVar4 = FUN_005fd6d0();
    local_8 = iVar3 + 0xc;
    local_c[1] = uVar4;
    local_c = local_c + 8;
  } while (local_8 < 0x120);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_RESOURCEINFO_0068f398);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_00945f50;
  do {
    FUN_005fd570();
    FUN_005fd670();
    iVar3 = 4;
    do {
      uVar4 = FUN_005fd740();
      *puVar12 = uVar4;
      puVar12 = puVar12 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while ((int)puVar12 < 0x945fe0);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_TIMECONTROLS_0068f3a8);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0094f1bc;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd740();
    *puVar12 = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[1] = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[2] = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[3] = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[4] = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[5] = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[6] = uVar4;
    puVar12 = puVar12 + 8;
  } while ((int)puVar12 < 0x94f27c);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_CHASSIS_0068f3b8);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0094a348;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-6] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    *puVar12 = 0;
    puVar12[6] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      *puVar12 = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      *puVar12 = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      *puVar12 = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[6] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[6] = 1;
    }
    uVar4 = FUN_005fd6d0();
    puVar12[-5] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    puVar12[1] = 0;
    puVar12[7] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      puVar12[1] = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      puVar12[1] = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      puVar12[1] = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[7] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[7] = 1;
    }
    uVar4 = FUN_005fd6d0();
    puVar12[-3] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    puVar12[3] = 0;
    puVar12[9] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      puVar12[3] = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      puVar12[3] = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      puVar12[3] = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[9] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[9] = 1;
    }
    uVar4 = FUN_005fd6d0();
    puVar12[-2] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    puVar12[4] = 0;
    puVar12[10] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      puVar12[4] = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      puVar12[4] = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      puVar12[4] = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[10] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[10] = 1;
    }
    uVar1 = FUN_005fd740();
    *(undefined1 *)(puVar12 + 0xc) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 0x31) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 0x32) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 0x35) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 0x33) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)(puVar12 + 0xd) = uVar1;
    uVar4 = FUN_005fd670();
    uVar2 = FUN_00584d60(uVar4);
    *(undefined2 *)((int)puVar12 + 0x76) = uVar2;
    uVar4 = FUN_005fd6d0();
    puVar12[-4] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    puVar12[2] = 0;
    puVar12[8] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      puVar12[2] = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      puVar12[2] = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      puVar12[2] = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[8] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[8] = 1;
    }
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    pcVar5 = (char *)FUN_005fd670();
    puVar12[5] = 0;
    puVar12[0xb] = 0;
    if ((*pcVar5 == 'M') || (*pcVar5 == 'm')) {
      puVar12[5] = 0;
    }
    if ((*pcVar5 == 'F') || (*pcVar5 == 'f')) {
      puVar12[5] = 1;
    }
    if ((*pcVar5 == 'N') || (*pcVar5 == 'n')) {
      puVar12[5] = 2;
    }
    if (pcVar5[1] == '1') {
      puVar12[0xb] = 0;
    }
    if (pcVar5[1] == '2') {
      puVar12[0xb] = 1;
    }
    puVar12 = puVar12 + 0x24;
  } while ((int)puVar12 < 0x94a858);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_REACTORS_0068f3c0);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = (undefined4 *)&DAT_009527fc;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    FUN_005fd670();
    uVar4 = FUN_005fd670();
    uVar2 = FUN_00584d60(uVar4);
    *(undefined2 *)(puVar12 + 1) = uVar2;
    puVar12 = puVar12 + 3;
  } while ((int)puVar12 < 0x95282c);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_WEAPONS_0068f3cc);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0094ae64;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    uVar1 = FUN_005fd740();
    *(undefined1 *)(puVar12 + 1) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 6) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 7) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 5) = uVar1;
    uVar4 = FUN_005fd670();
    uVar2 = FUN_00584d60(uVar4);
    *(undefined2 *)(puVar12 + 2) = uVar2;
    puVar12 = puVar12 + 4;
  } while ((int)puVar12 < 0x94b004);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_DEFENSES_0068f3d4);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0094f27c;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    uVar1 = FUN_005fd740();
    *(undefined1 *)(puVar12 + 1) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 5) = uVar1;
    uVar1 = FUN_005fd740();
    *(undefined1 *)((int)puVar12 + 6) = uVar1;
    uVar4 = FUN_005fd670();
    uVar2 = FUN_00584d60(uVar4);
    *(undefined2 *)(puVar12 + 2) = uVar2;
    puVar12 = puVar12 + 4;
  } while ((int)puVar12 < 0x94f35c);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_ABILITIES_0068f3e0);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_009ab544;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-3] = uVar4;
    uVar4 = FUN_005fd740();
    *puVar12 = uVar4;
    uVar4 = FUN_005fd670();
    uVar2 = FUN_00584d60(uVar4);
    *(undefined2 *)(puVar12 + 3) = uVar2;
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd7a0();
    puVar12[2] = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[-2] = uVar4;
    puVar12 = puVar12 + 7;
  } while ((int)puVar12 < 0x9ab870);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_MORALE_0068f3ec);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0095232c;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    puVar12 = puVar12 + 2;
  } while ((int)puVar12 < 0x952364);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_DEFENSEMODES_0068f3f4);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_00946a04;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[1] = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[2] = uVar4;
    puVar12 = puVar12 + 4;
  } while ((int)puVar12 < 0x946a34);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_OFFENSEMODES_0068f404);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0094617c;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-1] = uVar4;
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[1] = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[2] = uVar4;
    puVar12 = puVar12 + 4;
  } while ((int)puVar12 < 0x9461ac);
  if (param_1 != 0) {
    puVar6 = &DAT_009ab898;
    do {
      *(undefined1 *)(puVar6 + -0x18) = 0;
      *puVar6 = 0;
      *(undefined1 *)((int)puVar6 + -5) = 0;
      puVar6 = puVar6 + 0x1a;
    } while ((int)puVar6 < 0x9b2098);
    iVar3 = FUN_00587240();
    if (iVar3 != 0) {
      return 1;
    }
  }
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_FACILITIES_0068f414);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_009a4ba4;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    puVar12[-3] = uVar4;
    uVar4 = FUN_005fd740();
    *puVar12 = uVar4;
    uVar4 = FUN_005fd740();
    puVar12[1] = uVar4;
    uVar4 = FUN_005fd670();
    uVar4 = FUN_00584d60(uVar4);
    puVar12[2] = uVar4;
    uVar4 = FUN_005fd670();
    uVar4 = FUN_00584d60(uVar4);
    puVar12[3] = uVar4;
    uVar4 = FUN_005fd6d0();
    puVar12[-2] = uVar4;
    puVar12[3] = 0xfffffffe;
    if (0x9a5893 < (int)puVar12) {
      uVar4 = FUN_005fd740();
      puVar12[4] = uVar4;
      uVar4 = FUN_005fd740();
      puVar12[8] = uVar4;
      uVar4 = FUN_005fd740();
      puVar12[6] = uVar4;
      uVar4 = FUN_005fd740();
      puVar12[7] = uVar4;
      uVar4 = FUN_005fd740();
      puVar12[5] = uVar4;
    }
    puVar12 = puVar12 + 0xc;
  } while ((int)puVar12 < 0x9a6494);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_ORDERS_0068f420);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_0096c87c;
  do {
    if (((int)puVar12 < 0x96c8ac) || (0x96c99b < (int)puVar12)) {
      FUN_005fd570();
      uVar4 = FUN_005fd6d0();
      puVar12[-1] = uVar4;
      *puVar12 = uVar4;
      uVar4 = FUN_005fd6d0();
      puVar12[1] = uVar4;
    }
    puVar12 = puVar12 + 3;
  } while ((int)puVar12 < 0x96c9e4);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_COMPASS_0068f428);
  if (iVar3 != 0) {
    return 1;
  }
  puVar12 = &DAT_00945d48;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    *puVar12 = uVar4;
    puVar12 = puVar12 + 1;
  } while ((int)puVar12 < 0x945d68);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_PLANS_0068f430);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = 0;
  do {
    FUN_005fd570();
    uVar4 = FUN_005fd6d0();
    *(undefined4 *)((int)&DAT_00945fe0 + iVar3) = uVar4;
    uVar4 = FUN_005fd6d0();
    *(undefined4 *)((int)&DAT_00952360 + iVar3) = uVar4;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x3c);
  iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_TRIAD_0068f438);
  if (iVar3 == 0) {
    puVar12 = &DAT_0094f1a8;
    do {
      FUN_005fd570();
      uVar4 = FUN_005fd6d0();
      *puVar12 = uVar4;
      puVar12 = puVar12 + 1;
    } while ((int)puVar12 < 0x94f1b4);
    iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_RESOURCES_0068f440);
    if (iVar3 != 0) {
      return 1;
    }
    puVar12 = &DAT_0094615c;
    do {
      FUN_005fd570();
      uVar4 = FUN_005fd6d0();
      puVar12[-1] = uVar4;
      uVar4 = FUN_005fd6d0();
      *puVar12 = uVar4;
      puVar12 = puVar12 + 2;
    } while ((int)puVar12 < 0x94617c);
    iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_ENERGY_0068f44c);
    if (iVar3 != 0) {
      return 1;
    }
    puVar12 = &DAT_0094a31c;
    do {
      FUN_005fd570();
      uVar4 = FUN_005fd6d0();
      puVar12[-1] = uVar4;
      uVar4 = FUN_005fd6d0();
      *puVar12 = uVar4;
      puVar12 = puVar12 + 2;
    } while ((int)puVar12 < 0x94a334);
    iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_CITIZENS_0068f454);
    if (iVar3 != 0) {
      return 1;
    }
    puVar12 = &DAT_00946024;
    do {
      FUN_005fd570();
      uVar4 = FUN_005fd6d0();
      puVar12[-1] = uVar4;
      uVar4 = FUN_005fd6d0();
      *puVar12 = uVar4;
      if ((int)puVar12 < 0x9460e8) {
        uVar4 = FUN_005fd670();
        uVar4 = FUN_00584d60(uVar4);
        puVar12[1] = uVar4;
        uVar4 = FUN_005fd670();
        uVar4 = FUN_00584d60(uVar4);
        puVar12[2] = uVar4;
        puVar11 = puVar12 + 3;
        iVar3 = 3;
        do {
          uVar4 = FUN_005fd740();
          *puVar11 = uVar4;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puVar12 = puVar12 + 7;
    } while ((int)puVar12 < 0x94613c);
    iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_SOCIO_0068f460);
    if (iVar3 == 0) {
      FUN_005fd570();
      puVar13 = &DAT_00946580;
      do {
        uVar4 = FUN_005fd670();
        FUN_00645460(puVar13,uVar4);
        puVar13 = puVar13 + 0x68;
      } while ((int)puVar13 < 0x9469f8);
      FUN_005fd570();
      puVar13 = &DAT_00946598;
      do {
        uVar4 = FUN_005fd670();
        FUN_00645460(puVar13,uVar4);
        puVar13 = puVar13 + 0x68;
      } while ((int)puVar13 < 0x946a10);
      FUN_005fd570();
      puVar12 = &DAT_0094b000;
      do {
        uVar4 = FUN_005fd6d0();
        *puVar12 = uVar4;
        puVar12 = puVar12 + 0x35;
      } while ((int)puVar12 < 0x94b350);
      local_8 = 0;
      do {
        local_14 = 0;
        puVar12 = (undefined4 *)((int)&DAT_0094b004 + local_8);
        do {
          iVar3 = local_14;
          local_10 = puVar12;
          FUN_005fd570();
          uVar4 = FUN_005fd6d0();
          puVar12[4] = uVar4;
          uVar4 = FUN_005fd670();
          uVar4 = FUN_00584d60(uVar4);
          *puVar12 = uVar4;
          local_18 = (int *)(&DAT_0094b024 + iVar3 + local_8);
          piVar9 = local_18;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = 0;
            piVar9 = piVar9 + 1;
          }
          pcVar5 = (char *)FUN_005fd670();
          sVar7 = _strlen(pcVar5);
          piVar9 = local_18;
          while (local_18 = piVar9, sVar7 != 0) {
            local_c = (undefined4 *)0x0;
            pcVar5 = DAT_009b7d04;
            while( true ) {
              for (; *pcVar5 == '+'; pcVar5 = pcVar5 + 1) {
                local_c = (undefined4 *)((int)local_c + 1);
              }
              if (*pcVar5 != '-') break;
              local_c = (undefined4 *)((int)local_c + -1);
              pcVar5 = pcVar5 + 1;
            }
            puVar13 = &DAT_00946580;
            do {
              iVar3 = FUN_0064fd20(pcVar5,puVar13);
              if (iVar3 == 0) {
                *piVar9 = *piVar9 + (int)local_c;
              }
              puVar13 = puVar13 + 0x68;
              piVar9 = piVar9 + 1;
            } while ((int)puVar13 < 0x9469f8);
            pcVar5 = (char *)FUN_005fd670();
            sVar7 = _strlen(pcVar5);
            puVar12 = local_10;
            piVar9 = local_18;
            iVar3 = local_14;
          }
          local_14 = iVar3 + 0x2c;
          puVar12 = puVar12 + 1;
        } while (local_14 < 0xb0);
        local_8 = local_8 + 0xd4;
      } while (local_8 < 0x350);
      local_10 = puVar12;
      iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,&DAT_0068f468);
      if (iVar3 != 0) {
        return 1;
      }
      puVar12 = &DAT_0096c85c;
      do {
        FUN_005fd570();
        uVar4 = FUN_005fd6d0();
        *puVar12 = uVar4;
        puVar12 = puVar12 + 1;
      } while ((int)puVar12 < 0x96c874);
      if ((param_1 != 0) && (iVar3 = FUN_00586f30(), iVar3 != 0)) {
        return 1;
      }
      iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_MANDATE_0068f470);
      if (iVar3 != 0) {
        return 1;
      }
      puVar12 = &DAT_0094b4a4;
      do {
        FUN_005fd570();
        uVar4 = FUN_005fd6d0();
        puVar12[-1] = uVar4;
        uVar4 = FUN_005fd6d0();
        *puVar12 = uVar4;
        puVar12 = puVar12 + 2;
      } while ((int)puVar12 < 0x94b4c4);
      iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,&DAT_0068f478);
      if (iVar3 == 0) {
        puVar12 = &DAT_0094c9e4;
        do {
          FUN_005fd570();
          uVar4 = FUN_005fd6d0();
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while ((int)puVar12 < 0x94ca08);
        iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_REPUTE_0068f480);
        if (iVar3 != 0) {
          return 1;
        }
        puVar12 = &DAT_00946a30;
        do {
          FUN_005fd570();
          uVar4 = FUN_005fd6d0();
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while ((int)puVar12 < 0x946a50);
        iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_MIGHT_0068f488);
        if (iVar3 != 0) {
          return 1;
        }
        puVar12 = &DAT_0094c55c;
        do {
          FUN_005fd570();
          uVar4 = FUN_005fd6d0();
          puVar12[-1] = uVar4;
          uVar4 = FUN_005fd6d0();
          *puVar12 = uVar4;
          puVar12 = puVar12 + 2;
        } while ((int)puVar12 < 0x94c594);
        iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_PROPOSALS_0068f490);
        if (iVar3 == 0) {
          puVar12 = &DAT_009a6830;
          do {
            FUN_005fd570();
            uVar4 = FUN_005fd6d0();
            puVar12[-2] = uVar4;
            uVar4 = FUN_005fd670();
            uVar4 = FUN_00584d60(uVar4);
            *puVar12 = uVar4;
            uVar4 = FUN_005fd6d0();
            puVar12[-1] = uVar4;
            puVar12 = puVar12 + 3;
          } while ((int)puVar12 < 0x9a68b4);
          iVar3 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_NATURAL_0068f49c);
          if (iVar3 == 0) {
            puVar12 = &DAT_0094ade4;
            do {
              FUN_005fd570();
              uVar4 = FUN_005fd6d0();
              puVar12[-1] = uVar4;
              uVar4 = FUN_005fd6d0();
              *puVar12 = uVar4;
              puVar12 = puVar12 + 2;
            } while ((int)puVar12 < 0x94ae64);
            iVar3 = 0x11;
            puVar13 = &DAT_007bb62c;
            do {
              iVar8 = iVar3 + -0x11;
              iVar10 = 0;
              piVar9 = &DAT_00691888;
              do {
                if ((*piVar9 == 0) && (iVar10 <= iVar8)) {
                  iVar8 = iVar8 + 1;
                }
                piVar9 = piVar9 + 8;
                iVar10 = iVar10 + 1;
              } while ((int)piVar9 < 0x691b08);
              uVar4 = FUN_006169a0((&DAT_00691878)[iVar8 * 8]);
              FUN_00607550(uVar4);
              puVar13 = puVar13 + 0xb4c;
              iVar3 = iVar3 + 1;
            } while ((int)puVar13 < 0x7c5455);
            uVar4 = FUN_006169a0(DAT_0094adf4);
            FUN_00607550(uVar4);
            uVar4 = FUN_006169a0(DAT_0094ae14);
            FUN_00607550(uVar4);
            uVar4 = FUN_006169a0(DAT_0094adfc);
            FUN_00607550(uVar4);
            uVar4 = FUN_006169a0(DAT_0094ae34);
            FUN_00607550(uVar4);
            return 0;
          }
          return 1;
        }
        return 1;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

