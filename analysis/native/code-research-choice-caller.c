// REA Evidence: ev_a616cbb6158980068de1af9a3dcdd210ee85dafd7022b52b3a0e91e3e7509585
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b0e00(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  byte bVar15;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  short *psVar23;
  int iVar24;
  uint uVar25;
  char *pcVar26;
  bool bVar27;
  undefined1 local_e0 [31];
  undefined1 local_c1;
  undefined1 local_90 [80];
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar18 = param_1;
  local_3c = 0;
  local_10 = 0;
  if (1 < (int)param_1) {
    local_14 = param_1 - 1;
    pcVar20 = &DAT_00947020;
    local_20 = &DAT_00946a84 + param_1 * 0x59c;
    do {
      iVar6 = _strcmp(pcVar20,local_20);
      pcVar26 = local_20;
      if (iVar6 == 0) {
        local_10 = local_10 + 1;
      }
      pcVar20 = pcVar20 + 0x59c;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_10 != 0) {
      (&DAT_00946a99)[param_1 * 0x59c] = 0;
      FUN_00645470(local_20,&DAT_00691500);
      FUN_0064fc88(local_10 + 1,local_90,10);
      FUN_00645470(pcVar26,local_90);
    }
  }
  local_10 = 0;
  if (1 < (int)param_1) {
    local_14 = param_1 - 1;
    pcVar20 = &DAT_009472d0;
    local_20 = &DAT_00946d34 + param_1 * 0x59c;
    do {
      iVar6 = _strcmp(pcVar20,local_20);
      pcVar26 = local_20;
      if (iVar6 == 0) {
        local_10 = local_10 + 1;
      }
      pcVar20 = pcVar20 + 0x59c;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_10 != 0) {
      (&DAT_00946d49)[param_1 * 0x59c] = 0;
      FUN_00645470(local_20,&DAT_00691504);
      FUN_0064fc88(local_10 + 1,local_90,10);
      FUN_00645470(pcVar26,local_90);
    }
  }
  local_10 = 0;
  if (1 < (int)param_1) {
    local_14 = param_1 - 1;
    pcVar20 = &DAT_00947370;
    local_20 = &DAT_00946dd4 + param_1 * 0x59c;
    do {
      iVar6 = _strcmp(pcVar20,local_20);
      pcVar26 = local_20;
      if (iVar6 == 0) {
        local_10 = local_10 + 1;
      }
      pcVar20 = pcVar20 + 0x59c;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_10 != 0) {
      (&DAT_00946df9)[param_1 * 0x59c] = 0;
      FUN_00645470(local_20,&DAT_00691508);
      FUN_0064fc88(local_10 + 1,local_90,10);
      FUN_00645470(pcVar26,local_90);
    }
  }
  iVar6 = DAT_009a64cc + -1;
  if (-1 < iVar6) {
    pbVar21 = &DAT_0097d044 + iVar6 * 0x134;
    do {
      if (*pbVar21 == param_1) {
        FUN_004e5250(iVar6);
      }
      iVar6 = iVar6 + -1;
      pbVar21 = pbVar21 + -0x134;
    } while (-1 < iVar6);
  }
  iVar6 = DAT_009a64c8 + -1;
  if (-1 < iVar6) {
    psVar23 = &DAT_00952832 + iVar6 * 0x1a;
    do {
      if (((iVar6 < DAT_009a64c8) && (*(byte *)(psVar23 + 2) == param_1)) &&
         ((*psVar23 != 0x13 || (param_1 != 0)))) {
        FUN_005c0b00(iVar6);
      }
      iVar6 = iVar6 + -1;
      psVar23 = psVar23 + -0x1a;
    } while (-1 < iVar6);
  }
  iVar6 = param_1 * 0x20cc;
  *(undefined4 *)(&DAT_0096cdd4 + iVar6) = 0xffffffff;
  *(undefined4 *)(&DAT_0096cdd0 + iVar6) = 0xffffffff;
  (&DAT_0096ce48)[param_1 * 0x833] = 0xffffffff;
  bVar14 = (byte)param_1;
  local_2c = iVar6;
  if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
    FUN_00579e00(param_1);
    FUN_0057df00(param_1);
    iVar24 = DAT_009a64c4;
    *(undefined4 *)(&DAT_0096c9e0 + iVar6) = 0;
    *(undefined4 *)(&DAT_0096cbb0 + iVar6) = 0xdfbe41;
    if (iVar24 == 0) {
      *(undefined4 *)(&DAT_0096cbb0 + iVar6) = 0xc0dfbe41;
    }
    iVar24 = 0;
    *(undefined4 *)(&DAT_0096c9ec + local_2c) = 0;
    *(undefined4 *)(&DAT_0096c9f0 + local_2c) = 0;
    puVar22 = &DAT_0096ce50 + local_2c;
    iVar6 = param_1 * 0x59c;
    uVar7 = *(undefined4 *)(&DAT_00946fd0 + iVar6);
    *(undefined4 *)(&DAT_0096cdbc + local_2c) = *(undefined4 *)(&DAT_00946fc0 + iVar6);
    uVar3 = *(undefined4 *)(&DAT_00946fc8 + iVar6);
    *(undefined4 *)(&DAT_0096cdcc + local_2c) = uVar7;
    uVar7 = *(undefined4 *)(&DAT_00946fcc + iVar6);
    uVar4 = *(undefined4 *)(&DAT_00946fc4 + iVar6);
    *(undefined4 *)(&DAT_0096cdc4 + local_2c) = uVar3;
    *(undefined4 *)(&DAT_0096cdc8 + local_2c) = uVar7;
    *(undefined4 *)(&DAT_0096cdc0 + local_2c) = uVar4;
    *(undefined4 *)((int)&DAT_0096ce4c + local_2c) = 0;
    puVar9 = (undefined4 *)(&DAT_0096cf10 + local_2c);
    do {
      iVar6 = DAT_009b90f8;
      *puVar9 = 0;
      DAT_009b86a0 = 0;
      uVar7 = FUN_006169a0(*(undefined4 *)(iVar6 + 0x984));
      FUN_00645470(&DAT_009b86a0,uVar7);
      FUN_00645470(&DAT_009b86a0,&DAT_00682820);
      iVar24 = iVar24 + 1;
      FUN_0064fc88(iVar24,local_90,10);
      FUN_00645470(&DAT_009b86a0,local_90);
      FUN_00645460(puVar22,&DAT_009b86a0);
      iVar6 = local_2c;
      puVar9 = puVar9 + 1;
      puVar22 = puVar22 + 0x18;
    } while (iVar24 < 8);
    iVar24 = 4;
    puVar9 = (undefined4 *)(&DAT_0096cc08 + local_2c);
    do {
      puVar9[4] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    puVar9 = (undefined4 *)(&DAT_0096cc2c + local_2c);
    for (iVar24 = 0xb; iVar24 != 0; iVar24 = iVar24 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(&DAT_0096cc28 + local_2c) = 0;
    puVar9 = (undefined4 *)((int)&DAT_0096ea3c + local_2c);
    for (iVar24 = 8; iVar24 != 0; iVar24 = iVar24 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar24 = DAT_009a64c4;
    if (((byte)(1 << (bVar14 & 0x1f)) & (byte)DAT_009a64e8) == 0) {
      iVar24 = 3;
    }
    *(int *)((int)&DAT_0096c9e8 + local_2c) = iVar24;
    uVar8 = DAT_009a64c0;
    *(undefined4 *)(&DAT_0096cb04 + local_2c) = 0;
    *(undefined4 *)(&DAT_0096cb08 + local_2c) = 0;
    *(undefined4 *)(&DAT_0096cbac + local_2c) = 0;
    *(undefined4 *)((int)&DAT_0096cc00 + local_2c) = 0;
    *(undefined4 *)(&DAT_0096cbb4 + local_2c) = 0;
    *(undefined4 *)(&DAT_0096cbb8 + local_2c) = 0;
    *(undefined4 *)((int)&DAT_0096ce44 + local_2c) = 0;
    *(undefined4 *)(&DAT_0096caa0 + local_2c) = 0;
    (&DAT_00946138)[param_1] = 0;
    *(undefined4 *)(&DAT_0096cddc + local_2c) = 0xfffffc19;
    if ((uVar8 & 0x800000) != 0) {
      iVar24 = _rand();
      *(int *)(&DAT_0096cdbc + iVar6) = iVar24 % 3 + -1;
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      *(uint *)(&DAT_0096cdcc + iVar6) = uVar8;
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      *(uint *)(&DAT_0096cdc4 + iVar6) = uVar8;
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      *(uint *)(&DAT_0096cdc8 + iVar6) = uVar8;
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      *(uint *)(&DAT_0096cdc0 + iVar6) = uVar8;
    }
    if ((DAT_009a649c & 0x40) != 0) {
      *(undefined4 *)(&DAT_0096cdbc + iVar6) = 1;
    }
    *(undefined4 *)((int)&DAT_0096da38 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096da3c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096da40 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096da44 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096da48 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096da4c + iVar6) = 0;
    *(undefined4 *)(&DAT_0096cbbc + iVar6) = 0;
    puVar9 = (undefined4 *)(&DAT_0096cbe0 + iVar6);
    iVar24 = 8;
    do {
      puVar9[-8] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    *(undefined4 *)(&DAT_0096cdb8 + iVar6) = 0;
    iVar24 = 0;
    puVar16 = (undefined2 *)((int)&DAT_0096dc5c + iVar6);
    do {
      puVar16[-0x100] = 0;
      (&DAT_0096db5c)[iVar24 + iVar6] = 0;
      (&DAT_0096dbdc)[iVar24 + iVar6] = 0;
      *puVar16 = 0;
      puVar16[0x80] = 0;
      iVar24 = iVar24 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar24 < 0x80);
    puVar9 = (undefined4 *)((int)&DAT_0096ce0b + iVar6 + 1);
    iVar24 = 0xb;
    do {
      puVar9[-0xb] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    puVar9 = (undefined4 *)((int)&DAT_0096ea5c + iVar6);
    for (iVar24 = 10; iVar24 != 0; iVar24 = iVar24 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)((int)&DAT_0096ea1c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea20 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea24 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea28 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea2c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea30 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_0096ea34 + iVar6) = 1;
  }
  iVar24 = local_2c;
  iVar6 = DAT_009a64d4;
  iVar19 = 100;
  if (DAT_0093f660 == 0) {
    iVar19 = DAT_009497b4;
  }
  puVar9 = (undefined4 *)(&DAT_0096ca78 + local_2c);
  local_10 = param_1 * 0x59c;
  *(int *)((int)&DAT_0096cc00 + local_2c) =
       *(int *)((int)&DAT_0096cc00 + local_2c) + *(int *)(&DAT_00946f38 + local_10) + iVar19;
  *(undefined4 *)(&DAT_0096cc04 + local_2c) = 0;
  *(undefined4 *)(&DAT_0096cdb0 + local_2c) = 0xffffffff;
  *(int *)(&DAT_0096c9f4 + local_2c) = iVar6;
  local_14 = 0;
  do {
    uVar8 = DAT_009a649c;
    if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
      puVar9[-0x20] = 0;
      *puVar9 = 0;
      iVar6 = 5;
      if ((uVar8 & 0x40) == 0) {
        iVar6 = DAT_009a64c4;
      }
      local_30 = iVar6 * 3 + 8;
      if (local_30 == 1 || iVar6 * 3 + 7 < 0) {
LAB_005b1483:
        iVar6 = 1;
      }
      else {
        iVar6 = _rand();
        iVar6 = iVar6 % local_30;
        if (iVar6 < 1) goto LAB_005b1483;
        if (0x10 < iVar6) {
          iVar6 = 0x10;
        }
      }
      puVar9[-0x10] = iVar6;
      puVar9[0x25] = 0;
      puVar9[0x2d] = 0;
      puVar9[0x35] = 0;
      (&DAT_0096ca98)[local_14 + iVar24] = 0;
      puVar9[-8] = 0xffffffff;
      puVar9[0x45] = 0;
      puVar9[0x3d] = 0;
    }
    else {
      FUN_0055b760(param_1,local_14,0x9000ff48);
    }
    puVar9[0x1b] = 0;
    puVar9[0xb] = 0;
    puVar9[0x13] = 0;
    local_14 = local_14 + 1;
    puVar9 = puVar9 + 1;
  } while ((int)local_14 < 8);
  iVar6 = 0;
  do {
    iVar19 = DAT_009a64d4;
    (&DAT_0096d238)[iVar6 + iVar24] = 0;
    (&DAT_0096d438)[iVar6 + iVar24] = 0;
    if (iVar19 == 0) {
      (&DAT_0096d638)[param_1 * 0x1066 + iVar6] = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x200);
  if ((iVar19 == 0) || (param_2 == (byte *)0xfffffee6)) {
    puVar9 = (undefined4 *)(&DAT_0096cd0c + iVar24);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar9 = (undefined4 *)(&DAT_0096cd4c + iVar24);
    for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)puVar9 = 0;
    *(undefined4 *)(&DAT_0096ce38 + iVar24) = 0;
    *(undefined4 *)(&DAT_0096ce3c + iVar24) = 0;
    *(undefined1 *)((int)&DAT_0096ce3d + iVar24 + 3) = 0;
    *(undefined4 *)((int)&DAT_0096d1e8 + iVar24) = 0;
    *(undefined4 *)((int)&DAT_0096d1ec + iVar24) = 0;
    *(undefined4 *)(&DAT_0096d1f0 + iVar24) = 0;
    *(undefined4 *)((int)&DAT_0096d1f4 + iVar24) = 0;
    *(undefined4 *)(&DAT_0096cd48 + iVar24) = 0;
    *(undefined4 *)(&DAT_0096cd3c + iVar24) = 0;
    *(undefined4 *)((int)&DAT_0096cd44 + iVar24) = 0;
    *(undefined4 *)(&DAT_0096cdac + iVar24) = 0xffffffff;
    *(undefined4 *)(&DAT_0096cda8 + iVar24) = 0;
    *(undefined4 *)((int)&DAT_0096cdb4 + iVar24) = 0;
    *(undefined4 *)(&DAT_0096cd40 + iVar24) = 0;
    *(undefined4 *)((int)&DAT_0096ea68 + iVar24) = 0;
  }
  *(undefined4 *)(&DAT_0096cdd8 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccdc + iVar24) = 0;
  *(undefined4 *)(&DAT_0096cce0 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccf0 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccec + iVar24) = 0;
  *(undefined4 *)(&DAT_0096cce4 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccf4 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccf8 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096ccfc + iVar24) = 0;
  *(undefined4 *)(&DAT_0096cd00 + iVar24) = 0;
  *(undefined4 *)(&DAT_0096cce8 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d1f8 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d204 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d208 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d1fc + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d200 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d20c + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d210 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d214 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d218 + iVar24) = 0;
  *(undefined4 *)((int)&DAT_0096d21c + iVar24) = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_40 = 1 << (bVar14 & 0x1f);
  if ((DAT_009a64e8._1_1_ & (byte)local_40) == 0) {
    return 0;
  }
  if (((int)param_2 < -1) && (param_2 != (byte *)0xfffffee6)) {
    DAT_009a64e8._1_1_ = DAT_009a64e8._1_1_ & ~('\x01' << (bVar14 & 0x1f));
    return 0;
  }
  local_18 = 0;
LAB_005b1688:
  iVar24 = 0x400 - local_18;
  iVar6 = iVar24 * DAT_00949870;
  uVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fffU)) >> 0xd;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  else if (9999 < (int)uVar8) {
    uVar8 = 9999;
  }
  if ((_DAT_0094988c & 1) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = uVar8 * 2;
  }
  iVar6 = DAT_00949870 - iVar6;
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = _rand();
    iVar19 = iVar19 % iVar6;
  }
  iVar24 = iVar24 * DAT_00949874;
  local_8 = (-(uint)((_DAT_0094988c & 1) != 0) & uVar8) + iVar19;
  iVar6 = (int)(iVar24 + (iVar24 >> 0x1f & 0x1fffU)) >> 0xd;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (9999 < iVar6) {
    iVar6 = 9999;
  }
  iVar24 = DAT_00949874 + iVar6 * -2;
  if (iVar24 == 1 || iVar24 + -1 < 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = _rand();
    iVar19 = iVar19 % iVar24;
  }
  local_c = iVar19 + iVar6;
  if ((local_8 & 1) != 0) {
    local_8 = local_8 - 1;
  }
  if ((local_c & 1) != 0) {
    local_8 = local_8 + 1;
  }
  local_34 = 0x20;
  iVar6 = 0;
  do {
    if (iVar6 == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = (&DAT_0066f8c0)[iVar6];
    }
    iVar19 = iVar6;
    if (iVar24 < (int)(&DAT_0066f8c4)[iVar6]) {
      do {
        iVar10 = (&DAT_0066efbc)[iVar24] + local_8;
        if ((_DAT_0094988c & 1) == 0) {
          if (iVar10 < 0) {
            iVar10 = iVar10 + DAT_00949870;
          }
          else if (DAT_00949870 <= iVar10) {
            iVar10 = iVar10 - DAT_00949870;
          }
        }
        iVar17 = (&DAT_0066f440)[iVar24] + local_c;
        if (((((-1 < iVar17) && (iVar17 < DAT_00949874)) && (-1 < iVar10)) &&
            ((iVar10 < DAT_00949870 &&
             (uVar8 = *(uint *)((DAT_0068faf0 * iVar17 + (iVar10 >> 1)) * 0x2c + 0xc + DAT_0094a30c)
             , uVar8 != 0)))) && (0 < (int)(uVar8 & 0xff000000))) {
          iVar19 = 99;
          local_34 = iVar6;
          break;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < (int)(&DAT_0066f8c4)[iVar6]);
    }
    iVar6 = iVar19 + 1;
  } while (iVar6 < 8);
  iVar6 = 0;
  local_24 = _DAT_0094988c & 1;
  local_1c = 0;
  do {
    iVar24 = *(int *)((int)&DAT_0066efbc + iVar6) + local_8;
    if (local_24 == 0) {
      if (iVar24 < 0) {
        iVar24 = iVar24 + DAT_00949870;
      }
      else if (DAT_00949870 <= iVar24) {
        iVar24 = iVar24 - DAT_00949870;
      }
    }
    iVar19 = *(int *)((int)&DAT_0066f440 + iVar6) + local_c;
    if (((-1 < iVar19) && (iVar19 < DAT_00949874)) && ((-1 < iVar24 && (iVar24 < DAT_00949870)))) {
      if (((&DAT_00946f59)[local_10] & 1) == 0) {
        iVar24 = (DAT_0068faf0 * iVar19 + (iVar24 >> 1)) * 0x2c;
        pbVar21 = (byte *)(iVar24 + DAT_0094a30c);
        if (((((*(byte *)(iVar24 + 8 + DAT_0094a30c) & 0x20) == 0) || ((*pbVar21 & 0xe0) < 0x40)) &&
            (0x5f < (*pbVar21 & 0xe0))) &&
           (((pbVar21[5] & 0xc0) < 0x41 && ((*pbVar21 & 0x18) != 0)))) goto LAB_005b1914;
      }
      else {
        iVar24 = (DAT_0068faf0 * iVar19 + (iVar24 >> 1)) * 0x2c;
        pbVar21 = (byte *)(iVar24 + DAT_0094a30c);
        if (((*(byte *)(iVar24 + 8 + DAT_0094a30c) & 0x20) == 0) || ((*pbVar21 & 0xe0) < 0x40)) {
          local_1c = local_1c + (2 - (uint)(*pbVar21 >> 5)) * 2;
LAB_005b1914:
          local_1c = local_1c + 1;
        }
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x54);
  local_14 = *(uint *)(&DAT_00946f58 + local_10) & 0x100;
  if (local_14 != 0) {
    local_1c = local_1c / 3;
  }
  pcVar26 = (char *)((int)local_8 >> 1);
  iVar6 = 1;
  local_28 = (uint)*(byte *)((int)(pcVar26 + DAT_0068faf0 * local_c) * 0x2c + 3 + DAT_0094a30c);
  local_38 = 0;
  pcVar20 = &DAT_0096fc28 + local_28;
  do {
    if (*pcVar20 != '\0') {
      local_38 = local_38 | 1 << ((byte)iVar6 & 0x1f);
    }
    iVar6 = iVar6 + 1;
    pcVar20 = pcVar20 + 0x20cc;
  } while (iVar6 < 8);
  local_20 = pcVar26;
  if ((local_14 == 0) && (param_2 != (byte *)0xfffffee6)) {
    local_30 = FUN_004e3d50(local_8,local_c,0xffffffff,local_28,0xffffffff,0xffffffff);
  }
  else {
    local_30 = FUN_004e3b80(local_8,local_c);
  }
  if (local_30 < 0) {
    DAT_0090ea04 = 0x20;
  }
  if (((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) && (local_24 = 0, 0 < DAT_009a64c8))
  {
    psVar23 = &DAT_0095282a;
    do {
      sVar2 = *psVar23;
      if (*(byte *)((DAT_0068faf0 * sVar2 + ((int)psVar23[-1] >> 1)) * 0x2c + 3 + DAT_0094a30c) ==
          local_28) {
        local_38 = local_38 | 1 << (*(byte *)(psVar23 + 6) & 0x1f);
        iVar6 = FUN_00644f3a(local_8 - (int)psVar23[-1]);
        if (((_DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar6)) {
          iVar6 = DAT_00949870 - iVar6;
        }
        uVar7 = FUN_00644f3a(local_c - (int)sVar2);
        iVar24 = FUN_00644f3a(iVar6);
        iVar19 = FUN_00644f3a(uVar7);
        iVar6 = iVar24;
        if (iVar24 <= iVar19) {
          iVar6 = iVar19;
        }
        iVar10 = iVar24;
        if (iVar19 <= iVar24) {
          iVar10 = iVar19;
        }
        iVar6 = iVar6 - (((iVar24 + iVar19 >> 1) - iVar10) + 1 >> 1);
        if (iVar6 < DAT_0090ea04) {
          DAT_0090ea04 = iVar6;
        }
      }
      local_24 = local_24 + 1;
      psVar23 = psVar23 + 0x1a;
      pcVar26 = local_20;
    } while ((int)local_24 < DAT_009a64c8);
  }
  uVar8 = local_28;
  local_18 = local_18 + 1;
  if (((int)local_18 < 0x401) ||
     ((((byte)DAT_009a64e8 & (byte)local_40) != 0 && (DAT_009a64d4 == 0)))) {
    local_14 = *(uint *)(&DAT_00946f58 + local_10) & 0x100;
    if (local_14 == 0) {
      pbVar21 = (byte *)((int)(pcVar26 + DAT_0068faf0 * local_c) * 0x2c + DAT_0094a30c);
      bVar15 = *pbVar21 & 0xe0;
      bVar27 = bVar15 < 0x60;
    }
    else {
      pbVar21 = (byte *)((int)(pcVar26 + DAT_0068faf0 * local_c) * 0x2c + DAT_0094a30c);
      bVar15 = *pbVar21 & 0xe0;
      bVar27 = 0x40 < bVar15;
    }
    if (((bVar27) || (((pbVar21[8] & 0x20) != 0 && (0x3f < bVar15)))) ||
       ((local_14 == 0 && (0x40 < (pbVar21[5] & 0xc0))))) goto LAB_005b1688;
    if ((DAT_009a64d4 == 0) || (iVar6 = 0xc, param_2 == (byte *)0xfffffee6)) {
      iVar6 = 6;
    }
    if ((((((iVar6 * DAT_00949888) / 0x38 <= DAT_0090ea04) && (bVar15 < 0xa0)) &&
         (((pbVar21[8] & 3) == 0 || (7 < (pbVar21[2] & 0xf))))) &&
        ((((1 < (int)local_c && ((int)local_c < DAT_00949874 + -2)) &&
          (uVar1 = (int)local_18 >> 0x1f, 0xc - (int)local_18 / 0x50 <= local_1c)) &&
         (local_1c = (int)(local_18 + (uVar1 & 0x3f)) >> 6,
         ((0x10 - local_1c) * DAT_00949888) / 0x38 <= DAT_0090ea04)))) &&
       (((DAT_009a64d4 != 0 && (param_2 != (byte *)0xfffffee6)) ||
        ((899 < (int)local_18 || (0x24 - local_1c <= *(int *)(&DAT_009aa730 + local_28 * 0x1c)))))))
    {
      if (local_14 == 0) {
        if (((byte)local_40 & (byte)DAT_009a64e8) == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = (6 - DAT_009a64c4) * 8;
        }
        if (((&DAT_009aa734)[local_28 * 7] * (DAT_0094a2a4 + 1)) / 2 <
            (-((int)(DAT_009a64d4 + (DAT_009a64d4 >> 0x1f & 0xfU)) >> 4) -
            ((int)(local_18 + (uVar1 & 0xf)) >> 4)) + 0x18 + iVar6) goto LAB_005b1688;
      }
      iVar6 = DAT_009a64c4;
      if (((byte)local_40 & (byte)DAT_009a64e8) == 0) {
        iVar6 = 3;
      }
      iVar24 = local_28 * 0x1c;
      if ((((5 - iVar6) * 0x30 - ((int)(DAT_009a64d4 + (DAT_009a64d4 >> 0x1f & 0xfU)) >> 4)) -
           ((int)(local_18 + (uVar1 & 3)) >> 2) <= *(int *)(&DAT_009aa730 + iVar24)) &&
         (((local_38 == 0 || (param_2 == (byte *)0xfffffee6)) ||
          (iVar6 = FUN_0050ba30(local_38),
          0x40 - local_1c <= *(int *)(&DAT_009aa730 + iVar24) / (iVar6 + 1))))) {
        uVar5 = local_8;
        uVar1 = local_c;
        if ((*(uint *)((int)(local_20 + DAT_0068faf0 * local_c) * 0x2c + 8 + DAT_0094a30c) & 0x1000)
            == 0) {
          uVar25 = (uint)(*(byte *)((int)(local_20 + DAT_0068faf0 * local_c) * 0x2c + DAT_0094a30c +
                                   2) >> 4);
          if (uVar25 == 0) {
            uVar25 = FUN_005c4fd0(local_8,local_c,0);
            FUN_00591b50(uVar5,uVar1,uVar25);
            uVar8 = local_28;
          }
        }
        else {
          uVar25 = 0;
        }
        if (((((0xf - local_1c <= (int)uVar25) || (DAT_009a64d4 != 0)) ||
             ((DAT_009a649c & 0x10) != 0)) &&
            (((*(uint *)(&DAT_00946f58 + local_10) & 0x100) != 0 ||
             (((int)((0x400 - local_18) + ((int)(0x400 - local_18) >> 0x1f & 0x7fU)) >> 7 <=
               local_34 && (local_34 != 0)))))) &&
           (((DAT_009a64d4 == 0 ||
             ((param_2 == (byte *)0xfffffee6 ||
              (*(char *)((int)(local_20 + DAT_0068faf0 * uVar1) * 0x2c + 7 + DAT_0094a30c) < '\x01')
              ))) && ((local_30 < 0 ||
                      (((byte *)(uint)(byte)(&DAT_0097d044)[local_30 * 0x134] != param_2 ||
                       (*(byte *)(((short)(&DAT_0097d042)[local_30 * 0x9a] * DAT_0068faf0 +
                                  ((int)(short)(&DAT_0097d040)[local_30 * 0x9a] >> 1)) * 0x2c + 3 +
                                 DAT_0094a30c) != uVar8)))))))) goto LAB_005b1ef1;
      }
    }
    goto LAB_005b1688;
  }
  local_3c = 1;
LAB_005b1ef1:
  iVar6 = DAT_00949870;
  if ((*(uint *)(&DAT_0096c9e0 + local_2c) & 0x1000) == 0) {
    if (local_3c != 0) goto LAB_005b1f16;
LAB_005b1f1e:
    if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
      local_14 = 0;
      local_20 = (char *)0xffffffff;
      local_18 = 0;
      do {
        local_1c = (&DAT_0066efbc)[local_18] + local_8;
        if ((_DAT_0094988c & 1) == 0) {
          if (local_1c < 0) {
            local_1c = local_1c + iVar6;
          }
          else if (iVar6 <= local_1c) {
            local_1c = local_1c - iVar6;
          }
        }
        iVar24 = (&DAT_0066f440)[local_18] + local_c;
        local_30 = iVar24;
        if ((((-1 < iVar24) && (iVar24 < DAT_00949874)) && (-1 < local_1c)) && (local_1c < iVar6)) {
          iVar19 = local_1c >> 1;
          pbVar21 = (byte *)((DAT_0068faf0 * iVar24 + iVar19) * 0x2c + DAT_0094a30c);
          bVar15 = *pbVar21 & 0xe0;
          iVar6 = DAT_00949870;
          local_34 = iVar19;
          if (((((uint)(bVar15 < 0x60) == (*(uint *)(&DAT_00946f58 + local_10) >> 8 & 1)) &&
               (pbVar21[3] == local_28)) &&
              ((bVar15 < 0xa0 && (((pbVar21[8] & 0x20) == 0 || (bVar15 < 0x40)))))) &&
             (((pbVar21[8] & 3) == 0 || (7 < (pbVar21[2] & 0xf))))) {
            FUN_004e3b80(local_1c,iVar24);
            local_24 = 0;
            if (0 < DAT_009a64c8) {
              psVar23 = &DAT_00952828;
              do {
                sVar2 = psVar23[1];
                iVar6 = FUN_00644f3a(local_8 - (int)*psVar23);
                if (((_DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar6)) {
                  iVar6 = DAT_00949870 - iVar6;
                }
                uVar7 = FUN_00644f3a(local_c - (int)sVar2);
                iVar24 = FUN_00644f3a(iVar6);
                iVar19 = FUN_00644f3a(uVar7);
                iVar6 = iVar24;
                if (iVar24 <= iVar19) {
                  iVar6 = iVar19;
                }
                iVar10 = iVar24;
                if (iVar19 <= iVar24) {
                  iVar10 = iVar19;
                }
                iVar6 = iVar6 - (((iVar24 + iVar19 >> 1) - iVar10) + 1 >> 1);
                if (iVar6 < DAT_0090ea04) {
                  DAT_0090ea04 = iVar6;
                }
                local_24 = local_24 + 1;
                psVar23 = psVar23 + 0x1a;
                iVar24 = local_30;
                iVar19 = local_34;
              } while ((int)local_24 < DAT_009a64c8);
            }
            iVar10 = local_1c;
            iVar6 = DAT_00949870;
            if (5 < DAT_0090ea04) {
              iVar6 = (DAT_0068faf0 * iVar24 + iVar19) * 0x2c;
              if ((*(uint *)(iVar6 + 8 + DAT_0094a30c) & 0x1000) == 0) {
                pcVar20 = (char *)(uint)(*(byte *)(iVar6 + DAT_0094a30c + 2) >> 4);
                if (pcVar20 == (char *)0x0) {
                  pcVar20 = (char *)FUN_005c4fd0(local_1c,iVar24,0);
                  FUN_00591b50(iVar10,iVar24,pcVar20);
                }
              }
              else {
                pcVar20 = (char *)0x0;
              }
              local_24 = _DAT_0094988c & 1;
              iVar6 = 0;
              do {
                iVar19 = *(int *)((int)&DAT_0066ef50 + iVar6) + local_1c;
                if (local_24 == 0) {
                  if (iVar19 < 0) {
                    iVar19 = iVar19 + DAT_00949870;
                  }
                  else if (DAT_00949870 <= iVar19) {
                    iVar19 = iVar19 - DAT_00949870;
                  }
                }
                iVar10 = *(int *)((int)&DAT_0066ef74 + iVar6) + iVar24;
                if ((((-1 < iVar10) && (iVar10 < DAT_00949874)) && (-1 < iVar19)) &&
                   (iVar19 < DAT_00949870)) {
                  if (((&DAT_00946f59)[local_10] & 1) == 0) {
                    if ((*(byte *)((DAT_0068faf0 * iVar10 + (iVar19 >> 1)) * 0x2c + DAT_0094a30c) &
                        0xe0) < 0x60) {
                      pcVar20 = pcVar20 + 1;
                      break;
                    }
                  }
                  else {
                    pcVar20 = pcVar20 + (2 - (uint)(*(byte *)((DAT_0068faf0 * iVar10 + (iVar19 >> 1)
                                                              ) * 0x2c + DAT_0094a30c) >> 5));
                  }
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < 0x20);
              iVar6 = DAT_00949870;
              if ((int)local_20 < (int)pcVar20) {
                local_14 = local_18;
                local_20 = pcVar20;
              }
            }
          }
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < 0x15);
      local_8 = (&DAT_0066efbc)[local_14] + local_8;
      if ((_DAT_0094988c & 1) == 0) {
        if ((int)local_8 < 0) {
          local_8 = local_8 + iVar6;
        }
        else if (iVar6 <= (int)local_8) {
          local_8 = local_8 - iVar6;
        }
      }
      local_c = local_c + (&DAT_0066f440)[local_14];
    }
    if (param_3 == 0) goto LAB_005b227e;
    local_3c = 0;
LAB_005b2283:
    if ((((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) || ((DAT_009a649c & 1) == 0)) &&
       (DAT_009a64d4 < 0x65)) goto LAB_005b25e1;
  }
  else {
    local_3c = 1;
LAB_005b1f16:
    if (param_3 != 0) goto LAB_005b1f1e;
LAB_005b227e:
    if (local_3c == 0) goto LAB_005b2283;
  }
  uVar8 = DAT_009a6508;
  if (param_3 == 0) {
    if ((((byte)DAT_009a64e8 & (byte)local_40) != 0) && (DAT_0093f660 == 0)) {
      DAT_009b206c = 7;
      DAT_009a64e8._1_1_ = DAT_009a64e8._1_1_ & ~('\x01' << (bVar14 & 0x1f));
      DAT_009a64c0 = DAT_009a64c0 | 1;
      return 0;
    }
    *(undefined4 *)((int)&DAT_0096ea68 + local_2c) = 0;
    DAT_009a64e8._1_1_ = DAT_009a64e8._1_1_ & ~('\x01' << (bVar14 & 0x1f));
    local_14 = uVar8;
    if (param_1 == uVar8) {
      local_14 = DAT_009a6504;
    }
    iVar6 = 0;
    param_3 = 0;
    uVar18 = 1;
    pbVar21 = (byte *)(&DAT_0096eac4 + local_14);
    puVar13 = &DAT_0096eac4 + DAT_00939284;
    do {
      if (((((((uint)DAT_009a64e8._1_1_ & 1 << ((byte)uVar18 & 0x1f)) != 0) &&
            (((iVar24 = iVar6 + 1, DAT_0093f660 != 0 || ((*puVar13 & 1) == 0)) ||
             ((*puVar13 & 0x2000000) == 0)))) &&
           ((iVar6 = iVar24, uVar18 != local_14 && ((*pbVar21 & 1) != 0)))) &&
          ((DAT_009a649c & 0x1000) != 0)) && (param_3 < 2)) {
        param_3 = param_3 + 1;
      }
      uVar18 = uVar18 + 1;
      puVar13 = puVar13 + 0x833;
      pbVar21 = pbVar21 + 0x20cc;
    } while ((int)uVar18 < 8);
    if (param_1 == DAT_00939284) {
      uVar18 = ((int)param_2 < 0) - 1 & (uint)param_2;
      DAT_009bbfec = (&DAT_00946d4c)[uVar18 * 0x167];
      DAT_009bbff0 = (&DAT_00946d50)[uVar18 * 0x167];
      FUN_00625ec0(0,&DAT_00946d34 + uVar18 * 0x59c,0xffffffff,0xffffffff);
      if (DAT_0093f660 != 0) {
        FUN_0052e050();
        DAT_0093e8c0 = 0;
        _DAT_0093e8c4 = 0;
        DAT_0093e8c8 = 0;
        _DAT_0093e8cc = 0;
        DAT_0093e8f0 = 0;
        DAT_0093e8ec = 0;
        DAT_0093e8fc = 0;
        DAT_0093e8f8 = 0;
        DAT_0093e90c = 0;
        _DAT_0093e938 = 0;
        _DAT_0093e930 = 0;
        _DAT_0093e934 = 0;
        _DAT_0093e95c = 0;
        _DAT_0093e958 = 0;
        DAT_0093e8e0 = 0;
        _DAT_0093e8e4 = 0;
        _DAT_0093e8e8 = 0;
        _DAT_0093e954 = 0;
        _DAT_0093e950 = 0;
        DAT_0093e940 = 0;
        DAT_0093e93c = 0;
        DAT_0093e944 = 0;
        DAT_0093e8d0 = 0;
        DAT_0093e8d4 = 0;
        DAT_0093e968 = 0;
        DAT_0093e964 = 0;
        DAT_0093e8d8 = 0;
        _DAT_0093e8dc = 0;
        DAT_0093e960 = 0xff;
        DAT_0093e908 = 0;
        puVar9 = &DAT_0093e910;
        for (iVar24 = 8; iVar24 != 0; iVar24 = iVar24 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        FUN_005900d0();
        FUN_004e25b0();
        DAT_0093f660 = 0;
        DAT_009b2068 = 1;
      }
      if ((param_2 == (byte *)0x0) && (DAT_009bc054 == 0)) {
        pcVar20 = s_YOULOSE2_0069152c;
      }
      else {
        pcVar20 = s_YOULOSE_00691524;
      }
      FUN_005bf310(pcVar20,0);
      if (param_1 == DAT_00939284) {
        DAT_009a64c0 = DAT_009a64c0 | 1;
        DAT_009b206c = (-(uint)(param_2 != (byte *)0x0) & 0xfffffff8) + 0xf;
        return 0;
      }
    }
    if (iVar6 - param_3 < 2) {
      if (param_3 == 0) {
        if ((local_14 == DAT_00939284) &&
           (FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_CONQSING_0069155c,0,s_conq_sm_pcx_00691550,0),
           DAT_009b206c == 0)) {
          DAT_009b206c = 4;
        }
      }
      else {
        FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_CONQCOOP_00691544,0,s_conq_sm_pcx_00691538,0);
        if (DAT_009b206c == 0) {
          DAT_009b206c = 5;
        }
      }
      DAT_009a64c0 = DAT_009a64c0 | 0x2001;
    }
    return 0;
  }
LAB_005b25e1:
  iVar19 = local_2c;
  iVar24 = DAT_009a64d4;
  *(undefined4 *)(&DAT_0096cd08 + local_2c) = 5;
  *(undefined4 *)(&DAT_0096cd04 + local_2c) = 0;
  if (((iVar24 == 0) || (param_2 == (byte *)0xfffffee6)) && (1 < DAT_009a64c4)) {
    if ((*(int *)(&DAT_0096cdc8 + local_2c) != 0) || (*(int *)(&DAT_0096cdc4 + local_2c) != 0)) {
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000003;
      bVar27 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar27) {
        *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 8;
      }
    }
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,&DAT_00946a54 + local_10);
    CharUpperA(&DAT_009b86a0);
    iVar6 = _strcmp(&DAT_009b86a0,s_ANGELS_00691568);
    if (iVar6 == 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 8;
    }
    uVar8 = *(uint *)(&DAT_00946f58 + local_10);
    if ((uVar8 & 0x100) != 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 4;
      *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x8000000;
    }
    if ((uVar8 & 0x80) != 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 0x10;
      *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x10000000;
    }
    iVar6 = _strcmp(&DAT_009b86a0,s_DRONE_00691570);
    if (iVar6 == 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) & 0xfffffff7 | 2;
    }
    iVar24 = local_28 * 0x1c;
    if ((*(int *)(&DAT_009aa730 + local_28 * 0x1c) < 0xfa) && (iVar6 = _rand(), iVar6 % 3 == 0)) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 4;
    }
    if (-1 < *(int *)(&DAT_0096cdbc + iVar19)) {
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000003;
      bVar27 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar27) {
        *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 0x10;
      }
    }
    iVar6 = _rand();
    if (iVar6 % 6 == 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 2;
    }
    iVar6 = _rand();
    if (iVar6 % 6 == 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 1;
    }
    iVar6 = _rand();
    if (iVar6 % 5 == 0) {
      *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 0x40;
    }
    if ((((DAT_009a649c & 0x40) != 0) || (3 < DAT_009a64c4)) &&
       ((int)-(uint)((DAT_009a649c & 0x40) != 0) < *(int *)(&DAT_0096cdbc + iVar19))) {
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000003;
      bVar27 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar27) {
        *(uint *)(&DAT_0096ea70 + iVar19) = *(uint *)(&DAT_0096ea70 + iVar19) | 0x20;
      }
    }
    if ((((DAT_009a649c & 0x40) != 0) || (3 < DAT_009a64c4)) &&
       ((int)-(uint)((DAT_009a649c & 0x40) != 0) < *(int *)(&DAT_0096cdbc + iVar19))) {
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000003;
      bVar27 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar27) {
        *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x1000000;
        uVar8 = _rand();
        uVar8 = uVar8 & 0x80000001;
        bVar27 = uVar8 == 0;
        if ((int)uVar8 < 0) {
          bVar27 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar27) {
          *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x2000000;
        }
      }
    }
    if ((*(int *)(&DAT_0096cdcc + iVar19) != 0) ||
       (iVar6 = DAT_00949870, 0 < *(int *)(&DAT_0096cdbc + iVar19))) {
      if (399 < *(int *)(&DAT_009aa730 + iVar24)) {
        uVar8 = _rand();
        uVar8 = uVar8 & 0x80000003;
        bVar27 = uVar8 == 0;
        if ((int)uVar8 < 0) {
          bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (bVar27) {
          *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x4000000;
        }
      }
      uVar8 = (0xfa < *(int *)(&DAT_009aa730 + iVar24)) - 1 & 0xfffffffe;
      if ((uVar8 == 0xfffffffb || (int)(uVar8 + 5) < 0) ||
         (iVar6 = _rand(), iVar6 % (int)(uVar8 + 6) == 0)) {
        *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x8000000;
      }
      uVar8 = _rand();
      uVar8 = uVar8 & 0x80000003;
      bVar27 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar27 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      iVar6 = DAT_00949870;
      if (bVar27) {
        *(uint *)(&DAT_0096c9e0 + iVar19) = *(uint *)(&DAT_0096c9e0 + iVar19) | 0x10000000;
        iVar6 = DAT_00949870;
      }
    }
  }
  param_3 = 0;
  do {
    iVar24 = *(int *)((int)&DAT_0066efbc + param_3) + local_8;
    if ((_DAT_0094988c & 1) == 0) {
      if (iVar24 < 0) {
        iVar24 = iVar24 + iVar6;
      }
      else if (iVar6 <= iVar24) {
        iVar24 = iVar24 - iVar6;
      }
    }
    iVar19 = *(int *)((int)&DAT_0066f440 + param_3) + local_c;
    if ((((-1 < iVar19) && (iVar19 < DAT_00949874)) && (-1 < iVar24)) && (iVar24 < iVar6)) {
      pbVar21 = (byte *)((DAT_0068faf0 * iVar19 + (iVar24 >> 1)) * 0x2c + 4 + DAT_0094a30c);
      *pbVar21 = *pbVar21 | '\x01' << (bVar14 & 0x1f);
      FUN_00591e50(iVar24,iVar19,param_1);
      iVar6 = DAT_00949870;
    }
    param_3 = param_3 + 4;
  } while (param_3 < 0x54);
  param_1 = 2;
  if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
    iVar6 = 0;
    if (0 < *(int *)((int)&DAT_00946f5c + local_10)) {
      puVar9 = (undefined4 *)((int)&DAT_00946f80 + local_10);
      do {
        if (puVar9[-8] == 0) {
          FUN_005bb000(uVar18,*puVar9,0,0);
        }
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 < *(int *)((int)&DAT_00946f5c + local_10));
    }
    if ((DAT_009a6488 != 0) && (((&DAT_00946f58)[local_10] & 0x80) != 0)) {
      FUN_005bb000(uVar18,0x4e,0,0);
      FUN_005bb000(uVar18,0x4f,0,0);
    }
    if (DAT_0093f660 != 0) {
      local_18 = 0;
      while( true ) {
        if (*(int *)(&DAT_0096ccd8 + local_2c) < 1) {
          iVar6 = (-1 < *(int *)(&DAT_0096ccd8 + local_2c)) - 1;
        }
        else {
          iVar6 = 1;
        }
        if (*(int *)(&DAT_0096ccc0 + local_2c) < 1) {
          iVar24 = (-1 < *(int *)(&DAT_0096ccc0 + local_2c)) - 1;
        }
        else {
          iVar24 = 1;
        }
        if ((iVar6 - iVar24) + 1 <= (int)local_18) break;
        uVar7 = FUN_005bdc10(uVar18,0,0);
        FUN_005bb000(uVar18,uVar7);
        local_18 = local_18 + 1;
      }
      *(int *)((int)&DAT_0096cc00 + local_2c) =
           *(int *)((int)&DAT_0096cc00 + local_2c) + *(int *)(&DAT_00946f38 + local_10) / 2;
    }
    FUN_00581260(uVar18);
    iVar6 = 0;
    puVar11 = &DAT_009ab898 + uVar18 * 0x680;
    do {
      if (((*puVar11 & 1) != 0) && (*puVar11 = *puVar11 | 4, (char)puVar11[-3] == '\x03')) {
        param_1 = iVar6 + uVar18 * 0x40;
      }
      iVar6 = iVar6 + 1;
      puVar11 = puVar11 + 0x1a;
    } while (iVar6 < 0x40);
  }
  iVar6 = local_10;
  if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
    if (((DAT_0093f660 == 0) && ((DAT_009a649c & 0x10) == 0)) || ((DAT_009a649c & 0x80) != 0)) {
      iVar24 = FUN_004e4b80(uVar18,local_8,local_c);
      iVar6 = local_10;
      DAT_009b86a0 = 0;
      FUN_00645470(&DAT_009b86a0,&DAT_00946a54 + local_10);
      CharUpperA(&DAT_009b86a0);
      iVar19 = _strcmp(&DAT_009b86a0,s_FUNGBOY_00691578);
      if ((iVar19 == 0) && (param_2 == (byte *)0xfffffee6)) {
        (&DAT_0097d046)[iVar24 * 0x134] = 3;
      }
      if ((((&DAT_00946f58)[iVar6] & 0x80) != 0) && (param_2 == (byte *)0xfffffee6)) {
        (&DAT_0097d046)[iVar24 * 0x134] = 3;
      }
    }
    else if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) == 0) {
      FUN_005c03d0(0,uVar18,local_8,local_c);
    }
    else {
      FUN_005c03d0(0x15,uVar18,local_8,local_c);
    }
    if ((*(uint *)(&DAT_00946f58 + iVar6) & 0x100) == 0) {
      iVar24 = FUN_005c03d0(param_1,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar24 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar24);
    }
    if ((DAT_0093f660 != 0) && ((*(uint *)(&DAT_00946f58 + iVar6) & 0x100) == 0)) {
      iVar6 = FUN_005c03d0(0xb,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
      iVar6 = FUN_005c03d0(1,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
    }
    iVar6 = FUN_004e49d0(local_8,local_c,0);
    if ((iVar6 != 0) &&
       (((1 < DAT_009a64c4 || (DAT_0093f660 != 0)) ||
        (*(int *)(&DAT_009aa730 + local_28 * 0x1c) < 0x21)))) {
      uVar8 = (uint)*(byte *)((DAT_0068faf0 * local_c + ((int)local_8 >> 1)) * 0x2c + 3 +
                             DAT_0094a30c);
      local_28 = uVar8;
      if (((DAT_0093f660 != 0) &&
          (iVar24 = FUN_0050ba30(local_38),
          *(int *)(&DAT_009aa730 + uVar8 * 0x1c) / (iVar24 + 1) < 0x4c)) &&
         (((byte)local_40 & (byte)DAT_009a64e8) != 0)) {
        iVar24 = (&DAT_0066efbc)[iVar6] + local_8;
        if ((_DAT_0094988c & 1) == 0) {
          if (iVar24 < 0) {
            iVar24 = DAT_00949870 + iVar24;
          }
          else if (DAT_00949870 <= iVar24) {
            iVar24 = iVar24 - DAT_00949870;
          }
        }
        iVar24 = FUN_005c03d0(0xd,uVar18,iVar24,(&DAT_0066f440)[iVar6] + local_c);
        (&DAT_0095284c)[iVar24 * 0x34] = 2;
        FUN_005c01d0(iVar24);
        (&DAT_00952856)[iVar24 * 0x1a] = 0xffff;
        uVar8 = local_28;
      }
      iVar24 = FUN_0050ba30(local_38);
      if (*(int *)(&DAT_009aa730 + uVar8 * 0x1c) / (iVar24 + 1) < 0x33) {
        iVar24 = (&DAT_0066efbc)[iVar6] + local_8;
        if ((_DAT_0094988c & 1) == 0) {
          if (iVar24 < 0) {
            iVar24 = DAT_00949870 + iVar24;
          }
          else if (DAT_00949870 <= iVar24) {
            iVar24 = iVar24 - DAT_00949870;
          }
        }
        iVar6 = FUN_005c03d0(0xd,uVar18,iVar24,(&DAT_0066f440)[iVar6] + local_c);
        (&DAT_0095284c)[iVar6 * 0x34] = 2;
        FUN_005c01d0(iVar6);
        (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      }
    }
  }
  else {
    if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) == 0) {
      FUN_005c03d0(0,uVar18,local_8,local_c);
      uVar7 = 1;
    }
    else {
      FUN_005c03d0(0x15,uVar18,local_8,local_c);
      uVar7 = 4;
    }
    uVar7 = FUN_005c03d0(uVar7,uVar18,local_8,local_c);
    FUN_005c01d0(uVar7);
  }
  if ((DAT_009a64d4 == 0) || (param_2 == (byte *)0xfffffee6)) {
    puVar9 = (undefined4 *)(&DAT_0096ccb0 + local_2c);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar6 = *(int *)((int)&DAT_00946f5c + local_10);
    if (0 < iVar6) {
      piVar12 = (int *)((int)&DAT_00946f80 + local_10);
      iVar24 = iVar6;
      do {
        if (piVar12[-8] == 3) {
          *(int *)(&DAT_0096ccb0 + uVar18 * 0x20cc + *piVar12 * 4) =
               *(int *)(&DAT_0096ccb0 + uVar18 * 0x20cc + *piVar12 * 4) + piVar12[8];
        }
        piVar12 = piVar12 + 1;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    iVar24 = 0;
    if (0 < iVar6) {
      piVar12 = (int *)((int)&DAT_00946f80 + local_10);
      do {
        if (piVar12[-8] == 1) {
          iVar6 = FUN_005c03d0(*piVar12,uVar18,local_8,local_c);
          (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
          FUN_005c01d0(iVar6);
          if (*piVar12 == 0) {
            *(uint *)(&DAT_0096c9e0 + local_2c) = *(uint *)(&DAT_0096c9e0 + local_2c) | 0x100;
          }
        }
        iVar24 = iVar24 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar24 < *(int *)((int)&DAT_00946f5c + local_10));
    }
    if ((DAT_009a6488 != 0) && (((&DAT_00946f58)[local_10] & 0x80) != 0)) {
      iVar6 = FUN_005c03d0(0x10,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
      iVar6 = FUN_005c03d0(0,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
    }
    if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) != 0) {
      if (((byte)local_40 & (byte)DAT_009a64e8) == 0) {
        iVar6 = 0;
        uVar8 = (uint)param_2;
        do {
          uVar1 = uVar18 * 0x40 + iVar6;
          if ((*(byte *)(&DAT_009ab898 + uVar1 * 0x1a) & 1) == 0) {
            iVar6 = 0x40;
            uVar8 = uVar1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40);
        FUN_005a5d40(uVar8,3,0x11,0,0,1);
        (&DAT_009ab898)[uVar8 * 0x1a] = (&DAT_009ab898)[uVar8 * 0x1a] & 0xff3f | 4;
        FUN_0057e040(local_e0,uVar8,uVar18,3,0x11,0,0,1);
        *(byte *)(&DAT_009ab898 + uVar8 * 0x1a) = *(byte *)(&DAT_009ab898 + uVar8 * 0x1a) & 0xfd;
        local_c1 = 0;
        FUN_00645460(&DAT_009ab868 + uVar8 * 0x34,local_e0);
      }
      iVar6 = FUN_005c03d0(0x15,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
      iVar6 = FUN_005c03d0(0x16,uVar18,local_8,local_c);
      (&DAT_00952856)[iVar6 * 0x1a] = 0xffff;
      FUN_005c01d0(iVar6);
    }
  }
  if (((DAT_009a64d4 != 0) && (local_3c == 0)) && (param_2 != (byte *)0xfffffee6)) {
    local_20 = (char *)0xffffffff;
    local_14 = 2;
    param_3 = -1;
    param_1 = -1;
    local_30 = -1;
    local_34 = -1;
    iVar6 = 0;
    param_2 = &DAT_009ab88c;
    do {
      iVar24 = FUN_005ba910(iVar6,uVar18,0xffffffff);
      if ((iVar24 != 0) && ((&DAT_0094ae68)[(uint)param_2[1] * 0x10] != '\0')) {
        if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) == 0) {
          if ((&DAT_0094a379)[(uint)*param_2 * 0x90] == '\0') goto LAB_005b3146;
        }
        else if ((&DAT_0094a379)[(uint)*param_2 * 0x90] == '\x01') {
LAB_005b3146:
          iVar24 = FUN_0057d480(iVar6,uVar18);
          iVar19 = FUN_0057d360(iVar6,uVar18);
          iVar19 = iVar24 * 8 - iVar19;
          if ((int)local_20 < iVar19) {
            local_20 = (char *)iVar19;
            local_14 = iVar6;
          }
          iVar24 = FUN_0057d360(iVar6,uVar18);
          iVar19 = FUN_0057d480(iVar6,uVar18);
          iVar24 = (uint)(byte)(&DAT_0094a378)[(uint)*param_2 * 0x90] + (iVar19 + iVar24 * 2) * 2;
          if (param_3 < iVar24) {
            param_1 = iVar6;
            param_3 = iVar24;
          }
          iVar24 = FUN_0057d360(iVar6,uVar18);
          bVar14 = (&DAT_0094a378)[(uint)*param_2 * 0x90];
          iVar19 = FUN_0057d480(iVar6,uVar18);
          iVar19 = ((uint)bVar14 * 4 - iVar24) - iVar19;
          if ((local_30 < iVar19) && (1 < (byte)(&DAT_0094a378)[(uint)*param_2 * 0x90])) {
            local_34 = iVar6;
            local_30 = iVar19;
          }
        }
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 0x34;
    } while ((int)param_2 < 0x9b208c);
    if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x15;
    }
    local_24 = FUN_005c03d0(uVar7,uVar18,local_8,local_c);
    uVar8 = local_14;
    FUN_005c03d0(local_14,uVar18,local_8,local_c);
    if ((0x14 < DAT_009a64d4) && (-1 < local_34)) {
      FUN_005c03d0(local_34,uVar18,local_8,local_c);
    }
    if ((0x28 < DAT_009a64d4) && (-1 < (int)param_1)) {
      FUN_005c03d0(param_1,uVar18,local_8,local_c);
    }
    if ((0x3c < DAT_009a64d4) && (-1 < (int)uVar8)) {
      FUN_005c03d0(uVar8,uVar18,local_8,local_c);
    }
    if ((0x50 < DAT_009a64d4) && (-1 < (int)param_1)) {
      FUN_005c03d0(param_1,uVar18,local_8,local_c);
    }
    if (100 < DAT_009a64d4) {
      if ((*(uint *)(&DAT_00946f58 + local_10) & 0x100) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x15;
      }
      FUN_005c03d0(uVar7,uVar18,local_8,local_c);
    }
    FUN_005c0260(local_24);
    *(int *)(&DAT_0096cd40 + local_2c) =
         (int)(*(int *)(&DAT_0096cd3c + local_2c) * 3 +
              (*(int *)(&DAT_0096cd3c + local_2c) * 3 >> 0x1f & 3U)) >> 2;
  }
  if (uVar18 == DAT_00939284) {
    *(uint *)(DAT_007d3c3c + 0x1dd9c) = local_8;
    *(uint *)(DAT_007d3c3c + 0x1dda0) = local_c;
    puVar13 = &DAT_00939340;
    do {
      puVar13[-0x20] = local_8;
      *puVar13 = local_c;
      puVar13 = puVar13 + 1;
    } while ((int)puVar13 < 0x9393c0);
  }
  return 1;
}

