// REA Evidence: ev_9ad159e9acb1d65b3ce360cb8b458ccb1e1e862e5e8b8050e23c6ff0db0d8fc3
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_005a6ac0(uint *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  int iVar18;
  undefined1 *puVar19;
  int *piVar20;
  short *psVar21;
  uint *puVar22;
  undefined4 *puVar23;
  byte bVar24;
  uint uVar25;
  undefined1 local_378 [132];
  undefined4 local_2f4 [33];
  undefined4 local_270;
  undefined4 auStack_26c [11];
  undefined4 auStack_240 [11];
  undefined4 local_214 [22];
  undefined4 local_1bb [64];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4 [8];
  undefined4 local_84 [4];
  int local_74;
  undefined4 local_5c [6];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  int local_28;
  undefined2 *local_24;
  undefined4 *local_20;
  undefined2 *local_1c;
  size_t local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  uVar4 = param_1;
  DAT_00945d6c = param_2;
  DAT_00945d74 = 0;
  DAT_00945d7c = 0;
  if (param_2 == 0) {
    iVar5 = FUN_00646178(local_378,0x31c,1,param_1);
  }
  else {
    iVar5 = FUN_0064603f(local_378);
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (local_74 < 0xb) {
    FUN_00645930(&DAT_009a6490,local_378,0x31c);
    puVar23 = local_2f4;
    puVar6 = &DAT_009a6514;
    for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar23 = &DAT_009a6598;
    for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar23 = 0xffffffff;
      puVar23 = puVar23 + 1;
    }
    DAT_009a6614 = local_270;
    iVar5 = 0;
    do {
      uVar13 = *(undefined4 *)((int)auStack_240 + iVar5);
      *(undefined4 *)((int)&DAT_009a6618 + iVar5) = *(undefined4 *)((int)auStack_26c + iVar5);
      *(undefined4 *)((int)&DAT_009a6644 + iVar5) = uVar13;
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x2c);
    puVar23 = local_214;
    puVar6 = (undefined4 *)&DAT_009a6670;
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)puVar6 = *(undefined1 *)puVar23;
    puVar23 = local_1bb;
    puVar6 = &DAT_009a66c9;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar6 = puVar6 + 1;
    }
    DAT_009a67cc = local_b8;
    DAT_009a67d0 = local_b4;
    DAT_009a67dc = local_a8;
    DAT_009a67d4 = local_b0;
    DAT_009a67d8 = local_ac;
    puVar23 = local_a4;
    puVar6 = &DAT_009a67e0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar23 = local_84;
    puVar6 = &DAT_009a6800;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_009a6490,0x398,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_009a6490,0x398,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 4) {
    DAT_00945d74 = 0;
LAB_005a6e13:
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_00939284,4,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else {
    DAT_00945d74 = DAT_009a64c0 & 0x10000000;
    if (DAT_00945d74 == 0) goto LAB_005a6e13;
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_009a6490,0x398,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093e978,0xce0,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093e978,0xce0,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093f798,4,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093f798,4,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (param_2 == 0) {
      puVar23 = local_5c;
      puVar6 = &DAT_0094f1b8;
      do {
        uVar13 = *puVar6;
        puVar6 = puVar6 + 8;
        *puVar23 = uVar13;
        puVar23 = puVar23 + 1;
      } while ((int)puVar6 < 0x94f278);
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0094f1b8,0xc0,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0094f1b8,0xc0,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (param_2 == 0) {
      puVar6 = &DAT_0094f1b8;
      puVar23 = local_5c;
      do {
        uVar13 = *puVar23;
        puVar23 = puVar23 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 8;
      } while ((int)puVar6 < 0x94f278);
    }
    if (DAT_00945d74 == 0) goto LAB_005a6e13;
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00939284,4,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
  }
  if (iVar5 == 0) {
    return 1;
  }
  local_28 = FUN_005d4510(0x105e0);
  if (DAT_009a6810 < 3) {
    puVar7 = (undefined1 *)FUN_005d4510(0xe5e0);
    local_2c = puVar7;
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(puVar7,0xe5e0,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(puVar7,0xe5e0,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    puVar7 = puVar7 + 0x954;
    local_8 = 8;
    puVar19 = (undefined1 *)(local_28 + 0xa54);
    iVar5 = local_38;
    puVar23 = local_10;
    do {
      local_10 = puVar23;
      local_38 = iVar5;
      FUN_00645930(puVar19 + -0xa54,puVar7 + -0x954,0x1cbc);
      local_c = (int *)(puVar19 + 0x200);
      iVar5 = 0;
      puVar11 = (undefined2 *)local_c;
      do {
        puVar19[iVar5 + -0x200] = 0;
        puVar19[iVar5] = 0;
        *puVar11 = 0;
        iVar5 = iVar5 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar5 < 0x200);
      local_24 = (undefined2 *)(puVar7 + 0x100);
      local_10 = (undefined4 *)0x8;
      puVar8 = puVar7;
      local_20 = (undefined4 *)puVar19;
      do {
        local_1c = (undefined2 *)local_c;
        local_44 = 0xffffff00;
        local_34 = (undefined4 *)0xfffffe00;
        local_38 = 0x20;
        puVar14 = (undefined1 *)local_20;
        do {
          puVar14[-0x200] = puVar8[-0x100];
          *puVar14 = *puVar8;
          *local_1c = *local_24;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          puVar14 = puVar14 + 1;
          puVar8 = puVar8 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
        local_c = (int *)((int)local_c + 0x80);
        local_20 = (undefined4 *)((int)local_20 + 0x40);
        local_10 = (undefined4 *)((int)local_10 + -1);
      } while (local_10 != (undefined4 *)0x0);
      *(undefined4 *)(puVar19 + 0x600) = *(undefined4 *)(puVar7 + 0x300);
      *(undefined4 *)(puVar19 + 0x604) = *(undefined4 *)(puVar7 + 0x304);
      *(undefined4 *)(puVar19 + 0x608) = *(undefined4 *)(puVar7 + 0x308);
      *(undefined4 *)(puVar19 + 0x60c) = *(undefined4 *)(puVar7 + 0x30c);
      *(undefined4 *)(puVar19 + 0x610) = *(undefined4 *)(puVar7 + 0x310);
      *(undefined4 *)(puVar19 + 0x614) = *(undefined4 *)(puVar7 + 0x314);
      *(undefined4 *)(puVar19 + 0x618) = *(undefined4 *)(puVar7 + 0x318);
      *(undefined4 *)(puVar19 + 0x61c) = *(undefined4 *)(puVar7 + 0x31c);
      *(undefined4 *)(puVar19 + 0x620) = *(undefined4 *)(puVar7 + 800);
      puVar11 = (undefined2 *)(puVar19 + 0x824);
      puVar15 = (undefined2 *)(puVar7 + 0x524);
      iVar5 = 0;
      do {
        iVar9 = iVar5 + 1;
        puVar11[-0x100] = puVar15[-0x100];
        puVar19[iVar5 + 0x724] = puVar7[iVar5 + 0x424];
        puVar19[iVar5 + 0x7a4] = puVar7[iVar5 + 0x4a4];
        *puVar11 = *puVar15;
        puVar11[0x80] = puVar15[0x80];
        puVar11[0x100] = puVar15[0x100];
        puVar11[0x180] = puVar15[0x180];
        puVar11[0x200] = puVar15[0x200];
        puVar11[0x280] = puVar15[0x280];
        puVar19[iVar5 + 0xe24] = puVar7[iVar5 + 0xb24];
        puVar19[iVar5 + 0xea4] = puVar7[iVar5 + 0xba4];
        puVar19[iVar5 + 0xf24] = puVar7[iVar5 + 0xc24];
        puVar15 = puVar15 + 1;
        puVar11 = puVar11 + 1;
        iVar5 = iVar9;
      } while (iVar9 < 0x80);
      local_c = (int *)(puVar19 + 0xfa4);
      local_10 = (undefined4 *)0x4b;
      puVar23 = (undefined4 *)(puVar7 + 0xca4);
      do {
        *local_c = *puVar23;
        local_c[1] = puVar23[1];
        local_c[2] = puVar23[2];
        local_c[3] = puVar23[3];
        local_c = local_c + 4;
        local_10 = (undefined4 *)((int)local_10 + -1);
        puVar23 = puVar23 + 4;
      } while (local_10 != (undefined4 *)0x0);
      local_c = (int *)(puVar19 + 0x1454);
      local_10 = (undefined4 *)0x19;
      piVar20 = (int *)(puVar7 + 0x1154);
      do {
        *local_c = *piVar20;
        local_c[1] = piVar20[1];
        local_c[2] = piVar20[2];
        local_c[3] = piVar20[3];
        local_c = local_c + 4;
        local_10 = (undefined4 *)((int)local_10 + -1);
        piVar20 = piVar20 + 4;
      } while (local_10 != (undefined4 *)0x0);
      *(undefined4 *)(puVar19 + 0x15e4) = *(undefined4 *)(puVar7 + 0x12e4);
      *(undefined4 *)(puVar19 + 0x15e8) = *(undefined4 *)(puVar7 + 0x12e8);
      *(undefined4 *)(puVar19 + 0x15ec) = *(undefined4 *)(puVar7 + 0x12ec);
      *(undefined4 *)(puVar19 + 0x15f0) = *(undefined4 *)(puVar7 + 0x12f0);
      *(undefined4 *)(puVar19 + 0x15f4) = *(undefined4 *)(puVar7 + 0x12f4);
      *(undefined4 *)(puVar19 + 0x15f8) = *(undefined4 *)(puVar7 + 0x12f8);
      *(undefined4 *)(puVar19 + 0x15fc) = *(undefined4 *)(puVar7 + 0x12fc);
      *(undefined4 *)(puVar19 + 0x1600) = *(undefined4 *)(puVar7 + 0x1300);
      puVar23 = (undefined4 *)(puVar19 + 0x1604);
      puVar6 = (undefined4 *)(puVar7 + 0x1304);
      iVar5 = 8;
      do {
        uVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar23 = uVar13;
        puVar23 = puVar23 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar23 = (undefined4 *)(puVar19 + 0x1618);
      puVar6 = (undefined4 *)(puVar7 + 0x1318);
      iVar5 = 10;
      do {
        uVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar23 = uVar13;
        puVar23 = puVar23 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar23 = (undefined4 *)(puVar7 + 0x1344);
      *(undefined4 *)(puVar19 + 0x1640) = *(undefined4 *)(puVar7 + 0x1340);
      puVar6 = (undefined4 *)(puVar19 + 0x1644);
      iVar5 = 9;
      do {
        uVar13 = *puVar23;
        puVar23 = puVar23 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar19 = puVar19 + 0x20bc;
      puVar7 = puVar7 + 0x1cbc;
      local_8 = local_8 + -1;
      iVar5 = 0;
      puVar23 = (undefined4 *)0x0;
    } while (local_8 != 0);
    if (local_2c != (undefined1 *)0x0) {
      FUN_00644ef2(local_2c);
    }
  }
  if (DAT_009a6810 < 0xb) {
    if (2 < DAT_009a6810) {
      if (DAT_00945d74 == 0) {
        if (DAT_00945d6c == 0) {
          iVar5 = FUN_00646178(local_28,0x105e0,1,param_1);
        }
        else {
          iVar5 = FUN_0064603f(local_28);
        }
      }
      else if (DAT_00945d6c == 0) {
        iVar5 = FUN_005a67b0(local_28,0x105e0,1,param_1);
      }
      else {
        iVar5 = FUN_005a66e0(local_28);
      }
      if (iVar5 == 0) {
        return 1;
      }
    }
    local_1c = (undefined2 *)0x0;
    local_24 = (undefined2 *)0x14b;
    puVar7 = &DAT_0096ce38;
    puVar23 = (undefined4 *)(local_28 + 0x460);
    do {
      FUN_00645930(puVar7 + -0x458,puVar23 + -0x118,0x20bc);
      iVar5 = 0;
      do {
        puVar7[iVar5] = *(undefined1 *)((int)puVar23 + iVar5 + -8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      local_34 = puVar23 + 3;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(undefined4 *)(puVar7 + 0xc) = *puVar23;
      *(undefined4 *)(puVar7 + 0x10) = puVar23[1];
      local_10 = (undefined4 *)(puVar7 + 0xf8);
      local_20 = puVar23 + 0x3b;
      *(undefined4 *)(puVar7 + 0x14) = puVar23[2];
      iVar5 = 0;
      local_2c = puVar7 + 0x18;
      do {
        local_8 = 0x18;
        do {
          uVar1 = *(undefined1 *)local_34;
          local_34 = (undefined4 *)((int)local_34 + 1);
          *local_2c = uVar1;
          local_2c = local_2c + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_8 = 10;
        *(undefined4 *)(&DAT_0096cf10 + ((int)local_1c + iVar5) * 4) =
             *(undefined4 *)(local_28 + (int)((int)local_24 + iVar5) * 4);
        do {
          uVar13 = *local_20;
          local_20 = local_20 + 1;
          *local_10 = uVar13;
          local_10 = local_10 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
      puVar6 = (undefined4 *)(puVar7 + 0x238);
      puVar12 = puVar23 + 0x8b;
      iVar5 = 8;
      do {
        uVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar6 = (undefined4 *)(puVar7 + 600);
      local_10 = puVar23 + 0x93;
      local_20 = (undefined4 *)0x9;
      do {
        iVar5 = 8;
        puVar12 = local_10;
        puVar16 = puVar6;
        do {
          uVar13 = *puVar12;
          puVar12 = puVar12 + 9;
          *puVar16 = uVar13;
          puVar16 = puVar16 + 9;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar6 = puVar6 + 1;
        local_10 = local_10 + 1;
        local_20 = (undefined4 *)((int)local_20 + -1);
      } while (local_20 != (undefined4 *)0x0);
      puVar6 = (undefined4 *)(puVar7 + 0x378);
      puVar12 = puVar23 + 0xdb;
      iVar5 = 9;
      do {
        uVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(undefined4 *)(puVar7 + 0x39c) = puVar23[0xe4];
      *(undefined4 *)(puVar7 + 0x3a0) = puVar23[0xe5];
      *(undefined4 *)(puVar7 + 0x3a4) = puVar23[0xe6];
      *(undefined4 *)(puVar7 + 0x3a8) = puVar23[0xe7];
      *(undefined4 *)(puVar7 + 0x3ac) = puVar23[0xe8];
      puVar6 = (undefined4 *)(puVar7 + 0x3b0);
      puVar12 = puVar23 + 0xe9;
      iVar5 = 4;
      do {
        uVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(undefined4 *)(puVar7 + 0x3c0) = puVar23[0xed];
      *(undefined4 *)(puVar7 + 0x3c4) = puVar23[0xee];
      *(undefined4 *)(puVar7 + 0x3c8) = puVar23[0xef];
      *(undefined4 *)(puVar7 + 0x3cc) = puVar23[0xf0];
      *(undefined4 *)(puVar7 + 0x3d0) = puVar23[0xf1];
      *(undefined4 *)(puVar7 + 0x3d4) = puVar23[0xf2];
      *(undefined4 *)(puVar7 + 0x3d8) = puVar23[0xf3];
      *(undefined4 *)(puVar7 + 0x3dc) = puVar23[0xf4];
      *(undefined4 *)(puVar7 + 0x3e0) = puVar23[0xf5];
      *(undefined4 *)(puVar7 + 0x3e4) = puVar23[0xf6];
      *(undefined4 *)(puVar7 + 1000) = puVar23[0xf7];
      *(undefined4 *)(puVar7 + 0x3ec) = puVar23[0xf8];
      *(undefined4 *)(puVar7 + 0x3f0) = puVar23[0xf9];
      *(undefined4 *)(puVar7 + 0x3f4) = puVar23[0xfa];
      *(undefined4 *)(puVar7 + 0x3f8) = puVar23[0xfb];
      *(undefined4 *)(puVar7 + 0x3fc) = puVar23[0xfc];
      iVar5 = 0;
      puVar11 = (undefined2 *)(puVar7 + 0x800);
      puVar6 = puVar23 + 0x1fd;
      do {
        puVar7[iVar5 + 0x400] = *(undefined1 *)((int)puVar23 + iVar5 + 0x3f4);
        puVar7[iVar5 + 0x600] = *(undefined1 *)((int)puVar23 + iVar5 + 0x5f4);
        *puVar11 = *(undefined2 *)puVar6;
        iVar5 = iVar5 + 1;
        puVar11 = puVar11 + 1;
        puVar6 = (undefined4 *)((int)puVar6 + 2);
      } while (iVar5 < 0x200);
      *(undefined4 *)(puVar7 + 0xc00) = puVar23[0x2fd];
      *(undefined4 *)(puVar7 + 0xc04) = puVar23[0x2fe];
      *(undefined4 *)(puVar7 + 0xc08) = puVar23[0x2ff];
      *(undefined4 *)(puVar7 + 0xc0c) = puVar23[0x300];
      *(undefined4 *)(puVar7 + 0xc10) = puVar23[0x301];
      *(undefined4 *)(puVar7 + 0xc14) = puVar23[0x302];
      *(undefined4 *)(puVar7 + 0xc18) = puVar23[0x303];
      *(undefined4 *)(puVar7 + 0xc1c) = puVar23[0x304];
      *(undefined4 *)(puVar7 + 0xc20) = puVar23[0x305];
      puVar11 = (undefined2 *)(puVar7 + 0xe24);
      puVar6 = puVar23 + 0x386;
      iVar5 = 0;
      do {
        iVar9 = iVar5 + 1;
        puVar11[-0x100] = *(undefined2 *)(puVar6 + -0x80);
        puVar7[iVar5 + 0xd24] = *(undefined1 *)((int)puVar23 + iVar5 + 0xd18);
        puVar7[iVar5 + 0xda4] = *(undefined1 *)((int)puVar23 + iVar5 + 0xd98);
        *puVar11 = *(undefined2 *)puVar6;
        puVar11[0x80] = *(undefined2 *)(puVar6 + 0x40);
        puVar11[0x100] = *(undefined2 *)(puVar6 + 0x80);
        puVar11[0x180] = *(undefined2 *)(puVar6 + 0xc0);
        puVar11[0x200] = *(undefined2 *)(puVar6 + 0x100);
        puVar11[0x280] = *(undefined2 *)(puVar6 + 0x140);
        puVar7[iVar5 + 0x1424] = *(undefined1 *)((int)puVar23 + iVar5 + 0x1418);
        puVar7[iVar5 + 0x14a4] = *(undefined1 *)((int)puVar23 + iVar5 + 0x1498);
        puVar7[iVar5 + 0x1524] = *(undefined1 *)((int)puVar23 + iVar5 + 0x1518);
        puVar6 = (undefined4 *)((int)puVar6 + 2);
        puVar11 = puVar11 + 1;
        iVar5 = iVar9;
      } while (iVar9 < 0x80);
      local_c = (int *)(puVar7 + 0x15a4);
      local_8 = 0x4b;
      puVar6 = puVar23 + 0x566;
      do {
        *local_c = *puVar6;
        local_c[1] = puVar6[1];
        local_c[2] = puVar6[2];
        local_c[3] = puVar6[3];
        local_c = local_c + 4;
        local_8 = local_8 + -1;
        puVar6 = puVar6 + 4;
      } while (local_8 != 0);
      local_c = (int *)(puVar7 + 0x1a54);
      local_8 = 0x19;
      piVar20 = puVar23 + 0x692;
      do {
        *local_c = *piVar20;
        local_c[1] = piVar20[1];
        local_c[2] = piVar20[2];
        local_c[3] = piVar20[3];
        local_c = local_c + 4;
        local_8 = local_8 + -1;
        piVar20 = piVar20 + 4;
      } while (local_8 != 0);
      *(undefined4 *)(puVar7 + 0x1be4) = puVar23[0x6f6];
      *(undefined4 *)(puVar7 + 0x1be8) = puVar23[0x6f7];
      *(undefined4 *)(puVar7 + 0x1bec) = puVar23[0x6f8];
      *(undefined4 *)(puVar7 + 0x1bf0) = puVar23[0x6f9];
      *(undefined4 *)(puVar7 + 0x1bf4) = puVar23[0x6fa];
      *(undefined4 *)(puVar7 + 0x1bf8) = puVar23[0x6fb];
      *(undefined4 *)(puVar7 + 0x1bfc) = puVar23[0x6fc];
      *(undefined4 *)(puVar7 + 0x1c00) = puVar23[0x6fd];
      puVar6 = (undefined4 *)(puVar7 + 0x1c04);
      puVar12 = puVar23 + 0x6fe;
      iVar5 = 5;
      do {
        uVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar6 = puVar23 + 0x703;
      *(undefined4 *)(puVar7 + 0x1c18) = 0;
      *(undefined4 *)(puVar7 + 0x1c1c) = 0;
      *(undefined4 *)(puVar7 + 0x1c20) = 0;
      puVar12 = (undefined4 *)(puVar7 + 0x1c24);
      iVar5 = 10;
      do {
        uVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar12 = uVar13;
        puVar12 = puVar12 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar6 = (undefined4 *)(puVar7 + 0x1c50);
      *(undefined4 *)(puVar7 + 0x1c4c) = puVar23[0x70d];
      puVar12 = puVar23 + 0x70e;
      iVar5 = 9;
      do {
        uVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = uVar13;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_24 = (undefined2 *)((int)local_24 + 0x82f);
      local_1c = (undefined2 *)((int)local_1c + 0x833);
      puVar7 = puVar7 + 0x20cc;
      puVar23 = puVar23 + 0x82f;
      local_20 = (undefined4 *)0x0;
      local_8 = 0;
    } while ((int)local_24 < 0x42c3);
    local_20 = (undefined4 *)0x0;
    local_8 = 0;
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0096c9e0,0x10660,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0096c9e0,0x10660,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (local_28 != 0) {
    FUN_00644ef2(local_28);
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_00946a50,0x2ce0,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_00946a50,0x2ce0,1,param_1);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_00945dd8,0x20,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_00945dd8,0x20,1,param_1);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d6c == 0) {
    if ((DAT_00945d78 == 0) && ((DAT_009a64c0 & 1) == 0)) {
      iVar5 = FUN_0050ba30(DAT_009a64e8 >> 8 & 0xff & DAT_009a64e8 & 0xff);
      if (1 < iVar5) {
        bVar24 = 1;
        piVar20 = &DAT_00970b34;
        do {
          uVar10 = 1 << (bVar24 & 0x1f);
          if ((((DAT_009a64e8 >> 8 & 0xff & uVar10) != 0) &&
              (((byte)DAT_009a64e8 & (byte)uVar10) != 0)) && (*piVar20 != 0)) {
            DAT_00945d7c = 1;
            return 1;
          }
          piVar20 = piVar20 + 0x833;
          bVar24 = bVar24 + 1;
        } while ((int)piVar20 < 0x97f0c8);
      }
      if (DAT_00945d6c != 0) goto LAB_005a79c9;
    }
    iVar5 = FUN_00591130(param_1);
  }
  else {
LAB_005a79c9:
    iVar5 = FUN_005910b0(param_1);
  }
  if (iVar5 != 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_009a68ac,16000,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_009a68ac,16000,1,param_1);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_009469f8,4,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_009469f8,4,1,param_1);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_009469f8 != 0) {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_00950324,DAT_009469f8,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00950324,DAT_009469f8,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_009aa730,0xe00,1,param_1);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_009aa730,0xe00,1,param_1);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_009a6810 < 3) {
    puVar7 = &DAT_009ab868;
    do {
      if (DAT_00945d74 == 0) {
        if (DAT_00945d6c == 0) {
          iVar5 = FUN_00646178(puVar7,0x680,1,param_1);
        }
        else {
          iVar5 = FUN_0064603f();
        }
      }
      else if (DAT_00945d6c == 0) {
        iVar5 = FUN_005a67b0(puVar7,0x680,1,param_1);
      }
      else {
        iVar5 = FUN_005a66e0();
      }
      if (iVar5 == 0) {
        return 1;
      }
      puVar11 = (undefined2 *)(puVar7 + 0x6b0);
      iVar5 = 0x20;
      do {
        *(undefined1 *)(puVar11 + -0x18) = 0;
        *puVar11 = 0;
        *(undefined1 *)((int)puVar11 + -5) = 0;
        puVar11 = puVar11 + 0x1a;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar7 = puVar7 + 0xd00;
    } while ((int)puVar7 < 0x9b2068);
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_009ab868,0x6800,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_009ab868,0x6800,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 6) {
    iVar5 = 0;
    do {
      FUN_0057df00(iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0094b558,0x1000,1,param_1);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0094b558,0x1000,1,param_1);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  iVar5 = DAT_009a6810;
  if (DAT_009a6810 < 0xb) {
    pbVar17 = &DAT_009ab88d;
    do {
      if (0xb < *pbVar17) {
        *pbVar17 = *pbVar17 + 3;
      }
      pbVar17 = pbVar17 + 0x34;
    } while ((int)pbVar17 < 0x9b208d);
  }
  if (DAT_009a64c8 != 0) {
    if (iVar5 < 3) {
      puVar7 = (undefined1 *)FUN_005d4510(DAT_009a64c8 * 0x30);
      local_2c = puVar7;
      if (DAT_00945d74 == 0) {
        if (DAT_00945d6c == 0) {
          iVar5 = FUN_00646178(puVar7,DAT_009a64c8 * 0x30,1,param_1);
        }
        else {
          iVar5 = FUN_0064603f();
        }
      }
      else if (DAT_00945d6c == 0) {
        iVar5 = FUN_005a67b0(puVar7,DAT_009a64c8 * 0x30,1,param_1);
      }
      else {
        iVar5 = FUN_005a66e0();
      }
      if (iVar5 == 0) {
        return 1;
      }
      if (0 < DAT_009a64c8) {
        puVar11 = &DAT_0095282a;
        local_8 = DAT_009a64c8;
        puVar23 = (undefined4 *)(puVar7 + 4);
        do {
          puVar15 = puVar11 + 0xd;
          puVar11[-1] = *(undefined2 *)(puVar23 + -1);
          *puVar11 = *(undefined2 *)((int)puVar23 + -2);
          *(undefined4 *)(puVar11 + 1) = *puVar23;
          puVar11[3] = *(undefined2 *)(puVar23 + 1);
          param_1 = (uint *)0x4;
          puVar11[4] = (ushort)*(byte *)((int)puVar23 + 6);
          *(undefined1 *)(puVar11 + 6) = *(undefined1 *)((int)puVar23 + 7);
          *(undefined1 *)(puVar11 + 7) = *(undefined1 *)(puVar23 + 2);
          *(undefined1 *)((int)puVar11 + 0xf) = *(undefined1 *)((int)puVar23 + 9);
          *(undefined1 *)(puVar11 + 8) = *(undefined1 *)((int)puVar23 + 10);
          *(undefined1 *)((int)puVar11 + 0x11) = *(undefined1 *)((int)puVar23 + 0xb);
          *(undefined1 *)((int)puVar11 + 0xd) = 0;
          puVar11[5] = 0;
          puVar6 = puVar23 + 5;
          do {
            puVar15[-4] = *(undefined2 *)(puVar6 + -2);
            *puVar15 = *(undefined2 *)puVar6;
            puVar15 = puVar15 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            puVar6 = (undefined4 *)((int)puVar6 + 2);
          } while (param_1 != (uint *)0x0);
          *(undefined1 *)(puVar11 + 0x11) = *(undefined1 *)(puVar23 + 7);
          *(undefined1 *)((int)puVar11 + 0x23) = *(undefined1 *)((int)puVar23 + 0x1d);
          *(undefined1 *)(puVar11 + 0x12) = *(undefined1 *)((int)puVar23 + 0x1e);
          *(undefined1 *)((int)puVar11 + 0x25) = *(undefined1 *)((int)puVar23 + 0x1f);
          *(undefined1 *)(puVar11 + 0x13) = *(undefined1 *)(puVar23 + 8);
          *(undefined1 *)((int)puVar11 + 0x27) = *(undefined1 *)((int)puVar23 + 0x21);
          *(undefined1 *)(puVar11 + 0x14) = *(undefined1 *)((int)puVar23 + 0x22);
          *(undefined1 *)((int)puVar11 + 0x29) = *(undefined1 *)((int)puVar23 + 0x23);
          *(undefined1 *)(puVar11 + 0x15) = *(undefined1 *)(puVar23 + 9);
          *(undefined1 *)((int)puVar11 + 0x2b) = *(undefined1 *)((int)puVar23 + 0x25);
          puVar11[0x16] = *(undefined2 *)((int)puVar23 + 0x26);
          puVar11[0x17] = *(undefined2 *)(puVar23 + 10);
          puVar11[0x18] = *(undefined2 *)((int)puVar23 + 0x2a);
          puVar11 = puVar11 + 0x1a;
          local_8 = local_8 + -1;
          puVar23 = puVar23 + 0xc;
        } while (local_8 != 0);
        local_8 = 0;
        puVar7 = local_2c;
      }
      if (puVar7 != (undefined1 *)0x0) {
        FUN_00644ef2(puVar7);
      }
    }
    else {
      if (DAT_00945d74 == 0) {
        if (DAT_00945d6c == 0) {
          iVar5 = FUN_00646178(&DAT_00952828,DAT_009a64c8 * 0x34,1,param_1);
        }
        else {
          iVar5 = FUN_0064603f();
        }
      }
      else if (DAT_00945d6c == 0) {
        iVar5 = FUN_005a67b0(&DAT_00952828,DAT_009a64c8 * 0x34,1,param_1);
      }
      else {
        iVar5 = FUN_005a66e0();
      }
      if (iVar5 == 0) {
        return 1;
      }
    }
  }
  if (DAT_009a6810 < 8) {
    DAT_009aba36 = 3;
    DAT_009aba02 = 2;
  }
  if (DAT_009a6810 < 0xb) {
    if (DAT_009a64cc != 0) {
      puVar23 = (undefined4 *)FUN_005d4510(DAT_009a64cc * 0x130);
      local_10 = puVar23;
      if (DAT_00945d74 == 0) {
        if (DAT_00945d6c == 0) {
          iVar5 = FUN_00646178(puVar23,DAT_009a64cc * 0x130,1,uVar4);
        }
        else {
          iVar5 = FUN_0064603f();
        }
      }
      else if (DAT_00945d6c == 0) {
        iVar5 = FUN_005a67b0(puVar23,DAT_009a64cc * 0x130,1,uVar4);
      }
      else {
        iVar5 = FUN_005a66e0();
      }
      if (iVar5 == 0) {
        return 1;
      }
      local_8 = 0;
      if (0 < DAT_009a64cc) {
        puVar7 = &DAT_0097d0cc;
        puVar6 = local_10 + 0x25;
        do {
          FUN_00645930(puVar7 + -0x8c,puVar6 + -0x25,0x130);
          iVar5 = 0;
          do {
            puVar7[iVar5] = *(undefined1 *)((int)puVar6 + iVar5 + -8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 5);
          param_1 = (uint *)0x4;
          *(undefined4 *)(puVar7 + 5) = 0;
          *(undefined4 *)(puVar7 + 0xc) = *puVar6;
          *(undefined4 *)(puVar7 + 0x10) = puVar6[1];
          puVar23 = (undefined4 *)(puVar7 + 0x24);
          puVar12 = puVar6 + 6;
          do {
            puVar23[-4] = puVar12[-4];
            *puVar23 = *puVar12;
            puVar23[4] = puVar12[4];
            puVar23[8] = puVar12[8];
            puVar23[0xc] = puVar12[0xc];
            puVar23[0x10] = puVar12[0x10];
            puVar23 = puVar23 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            puVar12 = puVar12 + 1;
          } while (param_1 != (uint *)0x0);
          puVar23 = (undefined4 *)(puVar7 + 0x74);
          puVar12 = puVar6 + 0x1a;
          param_1 = (uint *)0x4;
          do {
            uVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar23 = uVar13;
            puVar23 = puVar23 + 1;
            param_1 = (uint *)((int)param_1 + -1);
          } while (param_1 != (uint *)0x0);
          puVar11 = (undefined2 *)(puVar7 + 0x84);
          puVar23 = puVar6 + 0x1e;
          param_1 = (uint *)0x3;
          do {
            uVar2 = *(undefined2 *)puVar23;
            puVar23 = (undefined4 *)((int)puVar23 + 2);
            *puVar11 = uVar2;
            puVar11 = puVar11 + 1;
            param_1 = (uint *)((int)param_1 + -1);
          } while (param_1 != (uint *)0x0);
          param_1 = (uint *)0x4;
          *(undefined4 *)(puVar7 + 0x8c) = puVar6[0x20];
          *(undefined4 *)(puVar7 + 0x90) = puVar6[0x21];
          *(undefined4 *)(puVar7 + 0x94) = puVar6[0x22];
          puVar23 = (undefined4 *)(puVar7 + 0x98);
          puVar12 = puVar6 + 0x23;
          do {
            uVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar23 = uVar13;
            puVar23 = puVar23 + 1;
            param_1 = (uint *)((int)param_1 + -1);
          } while (param_1 != (uint *)0x0);
          piVar20 = (int *)(puVar7 + -0x3c);
          iVar5 = 10;
          do {
            if (*piVar20 < -0x21) {
              *piVar20 = *piVar20 + -0x1f;
            }
            piVar20 = piVar20 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          local_8 = local_8 + 1;
          puVar6 = puVar6 + 0x4c;
          puVar7 = puVar7 + 0x134;
          puVar23 = local_10;
        } while (local_8 < DAT_009a64cc);
      }
      if (puVar23 != (undefined4 *)0x0) {
        FUN_00644ef2(puVar23);
      }
    }
  }
  else if (DAT_009a64cc != 0) {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0097d040,DAT_009a64cc * 0x134,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0097d040,DAT_009a64cc * 0x134,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  iVar5 = DAT_009a64cc;
  if (DAT_009a6810 < 3) {
    if (0 < DAT_009a64c8) {
      psVar21 = &DAT_00952832;
      param_1 = (uint *)DAT_009a64c8;
      do {
        uVar10 = (uint)*psVar21;
        uVar25 = uVar10 & 0x8000001f;
        if ((int)uVar25 < 0) {
          uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
        }
        *psVar21 = (short)(((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) << 6) +
                   (short)uVar25;
        psVar21 = psVar21 + 0x1a;
        param_1 = (uint *)((int)param_1 + -1);
      } while (param_1 != (uint *)0x0);
    }
    if (0 < iVar5) {
      param_1 = &DAT_0097d08c;
      local_8 = iVar5;
      do {
        iVar5 = 0;
        puVar22 = param_1;
        if (-1 < (int)*param_1) {
          do {
            puVar22 = puVar22 + 1;
            uVar10 = *puVar22;
            if (-1 < (int)uVar10) {
              uVar25 = uVar10 & 0x8000001f;
              if ((int)uVar25 < 0) {
                uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
              }
              *puVar22 = ((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 0x40 + uVar25;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 <= (int)*param_1);
        }
        param_1 = param_1 + 0x4d;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  if ((DAT_009a64c0 & 0x10) != 0) {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_009b2178,0x100,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_009b2178,0x100,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 1) {
    FUN_00645460(&DAT_009b2078,&DAT_00945d80);
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_009b2078,0x100,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_009b2078,0x100,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 2) {
    FUN_005b38d0();
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0094b4c0,0x98,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0094b4c0,0x98,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 7) {
    FUN_00476b30();
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0094ca08,0x27a0,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0094ca08,0x27a0,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_009a6810 < 0xc) {
    puVar23 = &DAT_00946138;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + 1;
    }
  }
  else {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_00946138,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00946138,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_00939288,4,1,uVar4);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_00939288,4,1,uVar4);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_0093928c,4,1,uVar4);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_0093928c,4,1,uVar4);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_009392c0 + DAT_009392b8,4,1,uVar4);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_009392c0 + DAT_009392b8,4,1,uVar4);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_00939340 + DAT_009392b8,4,1,uVar4);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_00939340 + DAT_009392b8,4,1,uVar4);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  if (DAT_00945d6c != 0) {
    DAT_009393d0 = 0;
  }
  if (DAT_00945d74 == 0) {
    if (DAT_00945d6c == 0) {
      iVar5 = FUN_00646178(&DAT_009393d0,4,1,uVar4);
    }
    else {
      iVar5 = FUN_0064603f();
    }
  }
  else if (DAT_00945d6c == 0) {
    iVar5 = FUN_005a67b0(&DAT_009393d0,4,1,uVar4);
  }
  else {
    iVar5 = FUN_005a66e0();
  }
  if (iVar5 == 0) {
    return 1;
  }
  puVar23 = &DAT_007d3c3c;
  do {
    iVar5 = FUN_005a6890(*puVar23,uVar4);
    if (iVar5 != 0) {
      return 1;
    }
    puVar23 = puVar23 + 1;
  } while ((int)puVar23 < 0x7d3c5c);
  iVar5 = FUN_005a6890(&DAT_008eb48c,uVar4);
  if (iVar5 != 0) {
    return 1;
  }
  if (((byte)DAT_009a681c & 0x20) != 0) {
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_007388d8,0x2400,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_007388d8,0x2400,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093f698,0x100,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093f698,0x100,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a96c,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a96c,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a98c,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a98c,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    piVar20 = &DAT_0093a7e8;
    do {
      if (param_2 == 0) {
        if (*piVar20 != 0) {
          param_1 = (uint *)0x0;
          if (0 < piVar20[2]) {
            do {
              piVar20[1] = *(int *)(*piVar20 + 0xc);
              piVar3 = *(int **)(*piVar20 + 8);
              (**(code **)(piVar20[-2] + 4))(piVar3);
              if (piVar3 != (int *)0x0) {
                (*(code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
              }
              *(undefined4 *)(*piVar20 + 8) = 0;
              piVar3 = (int *)*piVar20;
              if (piVar3 != (int *)0x0) {
                (*(code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
              }
              *piVar20 = piVar20[1];
              param_1 = (uint *)((int)param_1 + 1);
            } while ((int)param_1 < piVar20[2]);
          }
          *piVar20 = 0;
          piVar20[3] = 0;
          piVar20[2] = 0;
        }
        piVar20[3] = 0;
        piVar20[4] = 0;
        iVar5 = FUN_00646178(&local_14,4,1,uVar4);
        if (iVar5 == 0) {
          return 1;
        }
        param_1 = (uint *)0x0;
        if (0 < local_14) {
          do {
            iVar5 = FUN_00646178(&local_30,4,1,uVar4);
            if (iVar5 == 0) {
              return 1;
            }
            iVar5 = FUN_00646178(&local_18,4,1,uVar4);
            if (iVar5 == 0) {
              return 1;
            }
            iVar5 = FUN_00646178(&DAT_009b86a0,local_18,1,uVar4);
            if (iVar5 == 0) {
              return 1;
            }
            (&DAT_009b86a0)[local_18] = 0;
            piVar20[6] = 0;
            piVar20[7] = 0;
            piVar20[5] = (int)&DAT_009b86a0;
            FUN_00401100(local_30);
            param_1 = (uint *)((int)param_1 + 1);
          } while ((int)param_1 < local_14);
        }
      }
      else {
        local_14 = piVar20[2];
        iVar5 = FUN_0064603f(&local_14,4,1,uVar4);
        if (iVar5 == 0) {
          return 1;
        }
        iVar5 = 0;
        if (0 < local_14) {
          do {
            if (iVar5 <= piVar20[2] + -1) {
              piVar20[1] = *piVar20;
              if (iVar5 < 0) {
                iVar9 = FUN_00644f3a(iVar5);
                if (piVar20[2] < iVar9) goto LAB_005a8858;
                iVar9 = FUN_00644f3a(iVar5);
                if (0 < iVar9) {
                  do {
                    iVar9 = iVar9 + -1;
                    piVar20[1] = *(int *)(piVar20[1] + 0x10);
                  } while (iVar9 != 0);
                }
                iVar9 = piVar20[2] + iVar5;
              }
              else {
                iVar9 = iVar5;
                iVar18 = iVar5;
                if (0 < iVar5) {
                  do {
                    iVar18 = iVar18 + -1;
                    piVar20[1] = *(int *)(piVar20[1] + 0xc);
                  } while (iVar18 != 0);
                }
              }
              piVar20[3] = iVar9;
            }
LAB_005a8858:
            if (*piVar20 == 0) {
              local_30 = 0;
            }
            else {
              local_30 = *(undefined4 *)(piVar20[1] + 4);
            }
            iVar9 = FUN_0064603f(&local_30,4,1,uVar4);
            if (iVar9 == 0) {
              return 1;
            }
            if (*piVar20 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined4 *)(*(int *)(piVar20[1] + 8) + 4);
            }
            FUN_00645460(&DAT_009b86a0,uVar13);
            local_18 = _strlen(&DAT_009b86a0);
            iVar9 = FUN_0064603f(&local_18,4,1,uVar4);
            if (iVar9 == 0) {
              return 1;
            }
            if ((local_18 != 0) &&
               (iVar9 = FUN_0064603f(&DAT_009b86a0,local_18,1,uVar4), iVar9 == 0)) {
              return 1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_14);
        }
      }
      piVar20 = piVar20 + 0xc;
    } while ((int)piVar20 < 0x93a938);
    local_c = (int *)&DAT_00737e90;
    local_1c = (undefined2 *)0x1;
    do {
      local_8 = 1;
      piVar20 = local_c;
      if (0x737e90 < (int)local_c) {
        do {
          if (param_2 == 0) {
            if (*piVar20 != 0) {
              param_1 = (uint *)0x0;
              if (0 < piVar20[2]) {
                do {
                  piVar20[1] = *(int *)(*piVar20 + 0xc);
                  piVar3 = *(int **)(*piVar20 + 8);
                  (**(code **)(piVar20[-2] + 4))(piVar3);
                  if (piVar3 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
                  }
                  *(undefined4 *)(*piVar20 + 8) = 0;
                  piVar3 = (int *)*piVar20;
                  if (piVar3 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
                  }
                  *piVar20 = piVar20[1];
                  param_1 = (uint *)((int)param_1 + 1);
                } while ((int)param_1 < piVar20[2]);
              }
              *piVar20 = 0;
              piVar20[3] = 0;
              piVar20[2] = 0;
            }
            piVar20[3] = 0;
            piVar20[4] = 0;
            iVar5 = FUN_00646178(&local_14,4,1,uVar4);
            if (iVar5 == 0) {
              return 1;
            }
            param_1 = (uint *)0x0;
            if (0 < local_14) {
              do {
                iVar5 = FUN_00646178(&local_30,4,1,uVar4);
                if (iVar5 == 0) {
                  return 1;
                }
                iVar5 = FUN_00646178(&local_18,4,1,uVar4);
                if (iVar5 == 0) {
                  return 1;
                }
                iVar5 = FUN_00646178(&DAT_009b86a0,local_18,1,uVar4);
                if (iVar5 == 0) {
                  return 1;
                }
                (&DAT_009b86a0)[local_18] = 0;
                piVar20[6] = 0;
                piVar20[7] = 0;
                piVar20[5] = (int)&DAT_009b86a0;
                FUN_00401100(local_30);
                param_1 = (uint *)((int)param_1 + 1);
              } while ((int)param_1 < local_14);
            }
          }
          else {
            local_14 = piVar20[2];
            iVar5 = FUN_0064603f(&local_14,4,1,uVar4);
            if (iVar5 == 0) {
              return 1;
            }
            iVar5 = 0;
            if (0 < local_14) {
              do {
                if (iVar5 <= piVar20[2] + -1) {
                  piVar20[1] = *piVar20;
                  if (iVar5 < 0) {
                    iVar9 = FUN_00644f3a(iVar5);
                    if (piVar20[2] < iVar9) goto LAB_005a8aea;
                    iVar9 = FUN_00644f3a(iVar5);
                    if (0 < iVar9) {
                      do {
                        iVar9 = iVar9 + -1;
                        piVar20[1] = *(int *)(piVar20[1] + 0x10);
                      } while (iVar9 != 0);
                    }
                    iVar9 = piVar20[2] + iVar5;
                  }
                  else {
                    iVar9 = iVar5;
                    iVar18 = iVar5;
                    if (0 < iVar5) {
                      do {
                        iVar18 = iVar18 + -1;
                        piVar20[1] = *(int *)(piVar20[1] + 0xc);
                      } while (iVar18 != 0);
                    }
                  }
                  piVar20[3] = iVar9;
                }
LAB_005a8aea:
                if (*piVar20 == 0) {
                  local_30 = 0;
                }
                else {
                  local_30 = *(undefined4 *)(piVar20[1] + 4);
                }
                iVar9 = FUN_0064603f(&local_30,4,1,uVar4);
                if (iVar9 == 0) {
                  return 1;
                }
                if (*piVar20 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = *(undefined4 *)(*(int *)(piVar20[1] + 8) + 4);
                }
                FUN_00645460(&DAT_009b86a0,uVar13);
                local_18 = _strlen(&DAT_009b86a0);
                iVar9 = FUN_0064603f(&local_18,4,1,uVar4);
                if (iVar9 == 0) {
                  return 1;
                }
                if ((local_18 != 0) &&
                   (iVar9 = FUN_0064603f(&DAT_009b86a0,local_18,1,uVar4), iVar9 == 0)) {
                  return 1;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_14);
            }
          }
          local_8 = local_8 + 1;
          piVar20 = piVar20 + 0x60;
        } while (local_8 < (int)local_1c);
      }
      local_c = local_c + 0xc;
      local_1c = (undefined2 *)((int)local_1c + 1);
    } while ((int)local_c < 0x737fe0);
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff69c,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff69c,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff6a0,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff6a0,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff6a4,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff6a4,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff6a8,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff6a8,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff6d4,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff6d4,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_006ff6f4,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_006ff6f4,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_00703de8,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00703de8,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_00703dec,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00703dec,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_00703e0c,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_00703e0c,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a9ac,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a9ac,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a9b0,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a9b0,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a9b4,4,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a9b4,4,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a9b8,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a9b8,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      if (DAT_00945d6c == 0) {
        iVar5 = FUN_00646178(&DAT_0093a9d8,0x20,1,uVar4);
      }
      else {
        iVar5 = FUN_0064603f();
      }
    }
    else if (DAT_00945d6c == 0) {
      iVar5 = FUN_005a67b0(&DAT_0093a9d8,0x20,1,uVar4);
    }
    else {
      iVar5 = FUN_005a66e0();
    }
    if (iVar5 == 0) {
      return 1;
    }
  }
  if (param_2 == 0) {
    iVar5 = FUN_00646178(&local_3c,4,1,uVar4);
    if (iVar5 == 0) {
      return 1;
    }
    iVar5 = FUN_00646178(&local_40,4,1,uVar4);
    if (iVar5 == 0) {
      return 1;
    }
    if ((local_3c != DAT_00939e5c) || (local_40 != DAT_00939e58)) {
      piVar20 = &DAT_007d3c40;
      do {
        if (*piVar20 != 0) {
          *(undefined4 *)(*piVar20 + 0x1dd74) = 0;
        }
        piVar20 = piVar20 + 1;
      } while ((int)piVar20 < 0x7d3c5c);
    }
  }
  else {
    iVar5 = FUN_0064603f(&DAT_00939e5c);
    if (iVar5 == 0) {
      return 1;
    }
    iVar5 = FUN_0064603f(&DAT_00939e58,4,1,uVar4);
    if (iVar5 == 0) {
      return 1;
    }
  }
  return 0;
}

