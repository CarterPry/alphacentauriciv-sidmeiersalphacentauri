// ev_0fd95801d342389ce0c8e0c5418fe07fbd755866c8ad9dc8fb261cfac99cf7d0

void FUN_0047ba60(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char local_6c [80];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((((DAT_008136dc != 0) || (DAT_009445fc != 0)) || (DAT_00944600 != 0)) ||
       ((DAT_0091763c == 0 || (*(int *)(in_ECX + -0x3cf4) != 0)))) ||
      ((iVar4 = FUN_0046fa70(param_1,param_2,&local_10,&local_8), iVar4 != 0 ||
       ((local_8 < 0 || (DAT_009b8afc <= local_8)))))) ||
     ((local_10 < 0 || (DAT_009b8af8 <= local_10)))) {
    return;
  }
  if (*(int *)(in_ECX + -0x3ce0) != 0) {
    FUN_00477d60(local_10,local_8,*(int *)(in_ECX + -0x3ce0) == 2);
    return;
  }
  iVar4 = FUN_005245d0(local_10,local_8);
  if (iVar4 == 0) {
    if ((*(int *)(in_ECX + -0x2b20) == 0) && (*(int *)(in_ECX + -0x2b1c) == 0x7f00)) {
      return;
    }
    FUN_00605640(0x7f00);
    *(undefined4 *)(in_ECX + -0x2b1c) = 0x7f00;
    *(undefined4 *)(in_ECX + -0x2b20) = 0;
    return;
  }
  if (*(int *)(in_ECX + -0x3cec) == 0) goto LAB_0047c16e;
  DAT_008136dc = 1;
  FUN_00615c40();
  DAT_008136dc = 0;
  if ((*(int *)(in_ECX + -0x3c60) == local_10) && (*(int *)(in_ECX + -0x3c5c) == local_8))
  goto LAB_0047c16e;
  FUN_005ee070(9);
  *(int *)(in_ECX + -0x3c60) = local_10;
  *(int *)(in_ECX + -0x3c5c) = local_8;
  iVar4 = DAT_009430dc;
  if (DAT_009430dc < 0) {
    FUN_0060a6a0(0,1);
    *(undefined4 *)(in_ECX + -0x3c58) = 10;
    *(int *)(in_ECX + -0x3c88) = (int)(short)(&DAT_0096f1b0)[*(int *)(in_ECX + -0x3c48) * 0x98];
    *(int *)(in_ECX + -0x3c74) = (int)(short)(&DAT_0096f1b2)[*(int *)(in_ECX + -0x3c48) * 0x98];
    *(int *)(in_ECX + -0x3c84) = local_8;
    *(undefined4 *)(in_ECX + -0x3c54) = 2;
    *(undefined4 *)(in_ECX + -0x3c50) = 0;
    *(undefined4 *)(in_ECX + -0x3c4c) = 1;
    FUN_00473a50(*(undefined4 *)(in_ECX + -0x3c88),*(undefined4 *)(in_ECX + -0x3c74),
                 *(undefined4 *)(in_ECX + -0x3c84),*(undefined4 *)(in_ECX + -0x3c70),
                 *(undefined4 *)(in_ECX + -0x3c58),DAT_009430d4,*(undefined4 *)(in_ECX + -0x3c54),
                 *(undefined4 *)(in_ECX + -0x3c50),3,5,1);
  }
  else {
    local_c = DAT_009430dc * 0x34;
    *(int *)(in_ECX + -0x3c58) = (int)(short)(&DAT_009951ba)[DAT_009430dc * 0x1a];
    bVar13 = DAT_00943210 == 8;
    *(uint *)(in_ECX + -0x3c50) = (uint)bVar13;
    if (bVar13 == 0) {
      if (DAT_00943210 == 1) {
        if (((&DAT_009951b4)[iVar4 * 0xd] & 0x2000000) != 0) goto LAB_0047bbda;
        (&DAT_009951c4)[iVar4 * 0x1a] = (short)local_10;
        (&DAT_009951cc)[iVar4 * 0x1a] = (undefined2)local_8;
        (&DAT_009951c2)[local_c] = 0;
      }
    }
    else {
LAB_0047bbda:
      (&DAT_009951c4)[(uint)(byte)(&DAT_009951c2)[local_c] + iVar4 * 0x1a] = (short)local_10;
      (&DAT_009951cc)[(uint)(byte)(&DAT_009951c2)[local_c] + iVar4 * 0x1a] = (undefined2)local_8;
    }
    *(uint *)(in_ECX + -0x3c54) =
         (uint)(byte)(&DAT_009b7141)
                     [(uint)(byte)(&DAT_009b020c)[(short)(&DAT_009951ba)[iVar4 * 0x1a] * 0x34] *
                      0x90];
    iVar10 = 0;
    while( true ) {
      if ((*(int *)(in_ECX + -0x3c50) == 0) || ((&DAT_009951c2)[local_c] == '\0')) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
      if ((int)((byte)(&DAT_009951c2)[local_c] + 1 + iVar7) <= iVar10) break;
      FUN_0060a6a0(0,1);
      if (iVar10 == 0) {
        sVar2 = *(short *)((int)&DAT_009951b0 + local_c);
      }
      else {
        sVar2 = *(short *)(&DAT_009951c2 + (iVar10 + iVar4 * 0x1a) * 2);
      }
      local_14 = (int)sVar2;
      if (iVar10 == 0) {
        sVar2 = *(short *)((int)&DAT_009951b2 + local_c);
      }
      else {
        sVar2 = *(short *)(&DAT_009951ca + (iVar10 + iVar4 * 0x1a) * 2);
      }
      local_1c = (int)sVar2;
      local_18 = iVar10 + 1;
      iVar7 = local_18 % (int)((byte)(&DAT_009951c2)[local_c] + 2);
      if (iVar7 == 0) {
        sVar2 = *(short *)((int)&DAT_009951b0 + local_c);
      }
      else {
        sVar2 = *(short *)(&DAT_009951c2 + (iVar7 + iVar4 * 0x1a) * 2);
      }
      if (iVar7 == 0) {
        sVar3 = *(short *)((int)&DAT_009951b2 + local_c);
      }
      else {
        sVar3 = *(short *)(&DAT_009951ca + (iVar7 + iVar4 * 0x1a) * 2);
      }
      *(int *)(in_ECX + -0x3c88 + iVar10 * 4) = local_14;
      *(int *)(in_ECX + -0x3c74 + iVar10 * 4) = local_1c;
      *(int *)(in_ECX + -0x3c84 + iVar10 * 4) = (int)sVar2;
      *(int *)(in_ECX + -0x3c70 + iVar10 * 4) = (int)sVar3;
      *(int *)(in_ECX + -0x3c4c) = local_18;
      FUN_00473a50(local_14,local_1c,(int)sVar2,(int)sVar3,*(undefined4 *)(in_ECX + -0x3c58),
                   DAT_009430d4,*(undefined4 *)(in_ECX + -0x3c54),*(undefined4 *)(in_ECX + -0x3c50),
                   3,5,1);
      iVar10 = local_18;
    }
  }
  DAT_009c0b87._1_1_ = 0;
  if (DAT_00943210 == 8) {
    uVar6 = *(undefined4 *)(DAT_009c15b8 + 0x668);
  }
  else if (*(int *)(in_ECX + -0x3ce8) == 0) {
    uVar6 = *(undefined4 *)(DAT_009c15b8 + 0x66c);
  }
  else {
    uVar6 = *(undefined4 *)(DAT_009c15b8 + 0x6c4);
  }
  pcVar5 = (char *)FUN_0062e860(uVar6);
  uVar8 = 0xffffffff;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = &DAT_006a6734;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_005a9680(0x9c0b88,local_10,local_8,0,2,0);
  uVar8 = 0xffffffff;
  pcVar5 = &DAT_006a68dc;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; iVar4 = DAT_009c15b8, uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar5 = (char *)FUN_0062e860(*(undefined4 *)(iVar4 + 0x670));
  uVar8 = 0xffffffff;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = &DAT_006a936c;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  iVar4 = DAT_007f0a88 / DAT_009ba428;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_0066f9b4(iVar4,local_6c,10);
  iVar4 = DAT_007f0a88;
  uVar8 = 0xffffffff;
  pcVar5 = local_6c;
  do {
    pcVar12 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar10 = -1;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    pcVar11 = pcVar5;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  iVar4 = iVar4 % DAT_009ba428;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (iVar4 != 0) {
    uVar8 = 0xffffffff;
    pcVar5 = &DAT_006a6734;
    do {
      pcVar12 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar10 = -1;
    pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
    do {
      pcVar11 = pcVar5;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar5 = pcVar12 + -uVar8;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_0066f9b4(iVar4,local_6c,10);
    uVar8 = 0xffffffff;
    pcVar5 = local_6c;
    do {
      pcVar12 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar4 = -1;
    pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
    do {
      pcVar11 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar5 = pcVar12 + -uVar8;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar5 = &DAT_006a68d8;
    do {
      pcVar12 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar4 = -1;
    pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
    do {
      pcVar11 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar5 = pcVar12 + -uVar8;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_0066f9b4(DAT_009ba428,local_6c,10);
    uVar8 = 0xffffffff;
    pcVar5 = local_6c;
    do {
      pcVar12 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar4 = -1;
    pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
    do {
      pcVar11 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar5 = pcVar12 + -uVar8;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  FUN_005f3ab0(0x9f,0x41,1,1);
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar6 = FUN_0059f0d0(0xc,1,0,0,0);
  FUN_005f3a70(uVar6,uVar14,uVar15,uVar16);
  iVar4 = *(int *)(&DAT_0091f9c4 + *(int *)(DAT_0091f500 + 4));
  iVar10 = FUN_005f5590(0x9c0b88);
  uVar8 = 0xffffffff;
  pcVar5 = (char *)((int)&DAT_009c0b87 + 1);
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_005f5ca0(0x9c0b88,param_1 - (iVar10 * param_1) / iVar4,DAT_0093d2b8 + param_2,~uVar8 - 1);
LAB_0047c16e:
  FUN_005ee6b0();
  return;
}

