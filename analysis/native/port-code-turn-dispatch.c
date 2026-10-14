// REA Evidence: ev_5e015772ab532fb33788249c323009dcb725bd307f53a9825068428be1c86e95
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005275b0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int ****ppppiVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int ****ppppiVar7;
  int local_325c [4];
  undefined4 local_324c;
  undefined **local_3238;
  undefined4 local_3234;
  undefined **local_3230;
  int local_322c [4];
  undefined4 local_321c;
  undefined **local_3208;
  undefined4 local_3204;
  int aiStack_31e4 [274];
  undefined4 auStack_2d9c [699];
  int local_22b0;
  undefined **local_2180;
  undefined **local_1d3c;
  undefined **local_16d4 [273];
  undefined **local_1290;
  undefined **local_b88 [273];
  undefined **local_744;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined *puStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  char *pcStack_3c;
  undefined4 *puStack_38;
  char *local_34;
  int ***local_30;
  undefined ***local_2c;
  int ***local_28;
  int ****local_24;
  int ***local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0065db5d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00645550();
  local_34 = (char *)0x0;
  local_20 = (int ***)0x5275e5;
  FUN_004048a0();
  local_8 = 0;
  if (((DAT_009a64d4 == 0) && (DAT_009b2070 == 0)) &&
     (((byte)DAT_009a64e8 & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) != 0)) {
    if (DAT_0093a95c != 0) goto LAB_00527633;
    local_20 = (int ***)DAT_00939284;
    local_24 = (int ****)0x52761e;
    FUN_005ae120();
  }
  if (DAT_0093a95c == 0) {
    local_20 = (int ***)0x1;
    local_24 = (int ****)0x527630;
    FUN_0046b190();
  }
LAB_00527633:
  DAT_0093a940 = 1;
  if ((DAT_009b2070 != 0) && (((byte)DAT_009a64e8 & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) == 0))
  {
    local_20 = (int ***)0x527666;
    FUN_00514050();
  }
  do {
    if (DAT_0093a95c == 0) {
      local_20 = (int ***)0x527678;
      FUN_004717a0();
    }
    if (DAT_009b2070 == 0) {
      DAT_0093a938 = 1;
      local_20 = (int ***)0x52768f;
      FUN_005258c0();
      local_20 = (int ***)0x1;
      local_24 = (int ****)0x527696;
      iVar2 = FUN_00524870();
      if (iVar2 != 0) {
        local_8 = 2;
        local_20 = (int ***)0x528305;
        FUN_00404900();
        local_2180 = &PTR_FUN_00669d58;
        local_1d3c = &PTR_LAB_00669d50;
        local_8._0_1_ = 5;
        local_20 = (int ***)0x528331;
        FUN_00605370();
        local_8._0_1_ = 4;
        local_20 = (int ***)0x528340;
        FUN_00406880();
        local_8._0_1_ = 3;
        local_20 = (int ***)0x52834f;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,1);
LAB_00528576:
        local_20 = (int ***)0x528581;
        FUN_005d4dd0();
        local_8 = 0xffffffff;
        local_20 = (int ***)0x528593;
        FUN_004064d0();
        ExceptionList = local_10;
        return;
      }
    }
    else {
      local_20 = (int ***)0x1;
      local_24 = (int ****)0x5276aa;
      FUN_005ac690();
    }
    local_2c = (undefined ***)0x0;
    ppppiVar7 = (int ****)0x0;
    do {
      uVar3 = 1 << ((byte)ppppiVar7 & 0x1f);
      bVar1 = (byte)uVar3;
      if (((bVar1 & (byte)(DAT_009a64e8 >> 8)) != 0) && (DAT_009b2070 <= (int)ppppiVar7)) {
        ppppiVar4 = DAT_00939284;
        DAT_009a6820 = ppppiVar7;
        if (((bVar1 & (byte)DAT_009a64e8) == 0) ||
           (((ppppiVar7 == DAT_00939284 && ((DAT_009a681c & 0x20) == 0)) && (DAT_0093a95c == 0))))
        goto LAB_005281e4;
        local_20 = (int ***)0xffffffff;
        local_24 = (int ****)0xffffffff;
        local_28 = (int ***)&DAT_0093aa04;
        local_2c = (undefined ***)0x0;
        local_30 = (int ***)0x527713;
        FUN_00625ec0();
        local_30 = (int ***)0xffffffff;
        local_34 = (char *)0xffffffff;
        DAT_009bbff0 = 0;
        iVar2 = (int)ppppiVar7 * 0x59c;
        DAT_009bbfec = (&DAT_00946a50)[(int)ppppiVar7 * 0x167];
        puStack_38 = (undefined4 *)(&DAT_00946a9c + iVar2);
        pcStack_3c = (char *)0x1;
        puStack_40 = (undefined *)0x527744;
        FUN_00625ec0();
        DAT_009bbfec = (&DAT_00946a50)[(int)ppppiVar7 * 0x167];
        puStack_40 = (undefined *)0xffffffff;
        puStack_48 = (undefined4 *)(&DAT_00946a84 + iVar2);
        uStack_44 = 0xffffffff;
        uStack_4c = 2;
        DAT_009bbff0 = 0;
        uStack_50 = 0x527767;
        FUN_00625ec0();
        DAT_009bbff0 = (&DAT_00946d50)[(int)ppppiVar7 * 0x167];
        DAT_009bbfec = (&DAT_00946d4c)[(int)ppppiVar7 * 0x167];
        uStack_50 = 0xffffffff;
        puStack_58 = &DAT_00946d34 + iVar2;
        pcStack_54 = (char *)0xffffffff;
        pcStack_5c = (char *)0x3;
        uStack_60 = 0x527790;
        FUN_00625ec0();
        local_20 = (int ***)DAT_009a64d8;
        local_24 = (int ****)0x0;
        local_28 = (int ***)0x5277a0;
        FUN_00625e30();
        DAT_00939284 = ppppiVar7;
        if ((&DAT_007ae778)[DAT_007d392c] == 10) {
          local_20 = (int ***)0x5277c3;
          FUN_00421b40();
          local_20 = (int ***)0x5277cd;
          FUN_0045d380();
        }
        local_20 = (int ***)0x5277d2;
        FUN_0050f440();
        local_20 = (int ***)0x5277dc;
        FUN_0041a4c0();
        local_20 = (int ***)0x5277e6;
        FUN_00403830();
        local_20 = (int ***)0x5277f0;
        FUN_00479c00();
        local_20 = (int ***)0x527803;
        FUN_005edcd0();
        local_20 = (int ***)0x52780d;
        FUN_005edcd0();
        local_20 = (int ***)0x527817;
        FUN_004c3a40();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d870;
        local_28 = (int ***)0x52784d;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d7f8;
        local_28 = (int ***)0x527885;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d870;
        local_28 = (int ***)0x5278bb;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d7f8;
        local_28 = (int ***)0x5278ee;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d870;
        local_28 = (int ***)0x527924;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d7f8;
        local_28 = (int ***)0x527957;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d870;
        local_28 = (int ***)0x52798d;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d7f8;
        local_28 = (int ***)0x5279c0;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d870;
        local_28 = (int ***)0x5279f6;
        FUN_005e2dd3();
        local_20 = (int ***)&DAT_0078d7f8;
        local_24 = (int ****)&local_24;
        local_28 = (int ***)0x527a29;
        FUN_005e2dd3();
        local_24 = (int ****)&local_24;
        local_20 = (int ***)&DAT_0078d7f8;
        local_28 = (int ***)0x527a5f;
        FUN_005e2dd3();
        local_20 = (int ***)0x0;
        local_24 = (int ****)0x527a6a;
        FUN_005d56b0();
        local_20 = (int ***)0x0;
        _DAT_007ad34c = 1;
        local_24 = (int ****)0x527a7f;
        FUN_005d5250();
        local_20 = (int ***)0x0;
        local_24 = (int ****)0x527a8a;
        FUN_005ed9d0();
        local_20 = (int ***)0x527a8f;
        FUN_005fcbb0();
        local_20 = (int ***)0x527a99;
        FUN_00629780();
LAB_00527aa9:
        local_30 = (int ***)s_SWITCHING2_0068ba64;
        if ((&DAT_0096ea68)[(int)ppppiVar7 * 0x833] == 0) {
          local_30 = (int ***)s_SWITCHING_0068ba70;
        }
        local_20 = (int ***)0x0;
        local_24 = (int ****)&DAT_00800004;
        local_28 = (int ***)0x0;
        local_2c = (undefined ***)0xffffffff;
        local_34 = &DAT_009b8aa8;
        puStack_38 = (undefined4 *)0x527ad8;
        FUN_00406380();
        local_20 = (int ***)0x0;
        local_24 = (int ****)0x0;
        local_28 = (int ***)0x527ae5;
        iVar2 = FUN_00602600();
        if (iVar2 < 0) {
LAB_00527b99:
          if (DAT_009b2068 != 0) goto LAB_00528811;
          goto LAB_00527aa9;
        }
        if (local_22b0 != 0) {
          local_20 = (int ***)0x0;
          DAT_009a681c = DAT_009a681c | 0x40;
          local_24 = (int ****)0x527b0a;
          iVar2 = FUN_005a9eb0();
          if (iVar2 == 0) {
            DAT_009b2068 = 1;
            DAT_0093a948 = 0;
            local_20 = (int ***)0x5283f5;
            FUN_005edcd0();
            local_8 = 0xc;
            local_20 = (int ***)0x52841b;
            FUN_00404900();
            local_2180 = &PTR_FUN_00669d58;
            local_1d3c = &PTR_LAB_00669d50;
            local_8._0_1_ = 0xf;
            local_20 = (int ***)0x528447;
            FUN_00605370();
            local_2c = local_b88;
            local_b88[0] = &PTR_FUN_00669754;
            local_744 = &PTR_LAB_0066974c;
            local_8._0_1_ = 0x10;
            local_20 = (int ***)0x528473;
            FUN_00607da0();
            local_8._0_1_ = 0xe;
            local_20 = (int ***)0x528482;
            FUN_00607040();
            local_8._0_1_ = 0xd;
            local_20 = (int ***)0x528491;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            goto LAB_00528576;
          }
          DAT_009a681c = DAT_009a681c & 0xffffffbf;
          if (DAT_009b2068 != 0) {
            local_8 = 7;
            local_20 = (int ***)0x52837e;
            FUN_00404900();
            local_2180 = &PTR_FUN_00669d58;
            local_1d3c = &PTR_LAB_00669d50;
            local_8._0_1_ = 10;
            local_20 = (int ***)0x5283aa;
            FUN_00605370();
            local_8._0_1_ = 9;
            local_20 = (int ***)0x5283b9;
            FUN_00406880();
            local_8._0_1_ = 8;
            local_20 = (int ***)0x5283c8;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,6);
            goto LAB_00528576;
          }
          goto LAB_00527aa9;
        }
        local_20 = (int ***)&DAT_009bb5e8;
        local_24 = (int ****)0x527b40;
        local_28 = (int ***)FUN_005390c0();
        if ((int ****)local_28 == (int ****)(&DAT_0096ea68)[(int)ppppiVar7 * 0x833])
        goto LAB_00527bb4;
        if ((int ****)(&DAT_0096ea68)[(int)ppppiVar7 * 0x833] != (int ****)0x0) {
          local_34 = local_34 + 1;
          if (2 < (int)local_34) {
            local_20 = (int ***)0x0;
            DAT_009a681c = DAT_009a681c | 0x40;
            local_24 = (int ****)0x5284af;
            FUN_005a9eb0();
            local_20 = (int ***)0x5284c6;
            FUN_005edcd0();
            DAT_009b2068 = 1;
            DAT_0093a948 = 0;
            local_8 = 0x12;
            local_20 = (int ***)0x5284fc;
            FUN_00404900();
            local_2180 = &PTR_FUN_00669d58;
            local_1d3c = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x15;
            local_20 = (int ***)0x528528;
            FUN_00605370();
            local_2c = local_b88;
            local_b88[0] = &PTR_FUN_00669754;
            local_744 = &PTR_LAB_0066974c;
            local_8._0_1_ = 0x16;
            local_20 = (int ***)0x528554;
            FUN_00607da0();
            local_8._0_1_ = 0x14;
            local_20 = (int ***)0x528563;
            FUN_00607040();
            local_8._0_1_ = 0x13;
            local_20 = (int ***)0x528572;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x11);
            goto LAB_00528576;
          }
          goto LAB_00527b99;
        }
        local_20 = (int ***)0x800000;
        local_24 = (int ****)0x0;
        local_28 = (int ***)&DAT_0093aa08;
        local_2c = (undefined ***)0x50;
        local_30 = (int ***)s_VERIFYPASSWORD_0068ba7c;
        local_34 = (char *)0x527b6c;
        iVar2 = FUN_005bfab0();
        if (iVar2 != 0) goto LAB_00527b99;
        local_20 = (int ***)&DAT_009bb5e8;
        local_24 = (int ****)0x527b7d;
        ppppiVar4 = (int ****)FUN_005390c0();
        if (ppppiVar4 != (int ****)local_28) goto LAB_00527b99;
        (&DAT_0096ea68)[(int)ppppiVar7 * 0x833] = local_28;
LAB_00527bb4:
        if (DAT_009b2068 == 0) {
          iVar2 = 0;
          if (0 < DAT_009a64cc) {
            pbVar5 = &DAT_0097d044;
            do {
              if ((int ****)(uint)*pbVar5 == DAT_00939284) {
                local_20 = (int ***)0x1;
                local_24 = (int ****)(int)(short)(&DAT_0097d042)[iVar2 * 0x9a];
                local_28 = (int ***)(int)(short)(&DAT_0097d040)[iVar2 * 0x9a];
                local_2c = (undefined ***)0x527c14;
                FUN_0046b1f0();
                local_20 = (int ***)(int)*(short *)((int)&DAT_0097d042 + (int)local_28);
                local_24 = (int ****)(int)*(short *)((int)&DAT_0097d040 + (int)local_28);
                local_28 = (int ***)0x527c31;
                FUN_005147e0();
                if (iVar2 < DAT_009a64cc) goto LAB_00527c99;
                break;
              }
              iVar2 = iVar2 + 1;
              pbVar5 = pbVar5 + 0x134;
            } while (iVar2 < DAT_009a64cc);
          }
          iVar2 = 0;
          if (0 < DAT_009a64c8) {
            pbVar5 = &DAT_00952836;
            do {
              if ((int ****)(uint)*pbVar5 == DAT_00939284) {
                local_20 = (int ***)0x1;
                local_24 = (int ****)(int)(short)(&DAT_0095282a)[iVar2 * 0x1a];
                local_28 = (int ***)(int)(short)(&DAT_00952828)[iVar2 * 0x1a];
                local_2c = (undefined ***)0x527c7f;
                FUN_0046b1f0();
                local_20 = (int ***)(int)(short)(&DAT_0095282a)[iVar2 * 0x1a];
                local_24 = (int ****)(int)(short)(&DAT_00952828)[iVar2 * 0x1a];
                local_28 = (int ***)0x527c99;
                FUN_005147e0();
                break;
              }
              iVar2 = iVar2 + 1;
              pbVar5 = pbVar5 + 0x34;
            } while (iVar2 < DAT_009a64c8);
          }
LAB_00527c99:
          _DAT_007ad34c = 0;
          local_20 = (int ***)0x527ca9;
          FUN_005edcd0();
          local_20 = (int ***)0x527cb3;
          FUN_004b8890();
          DAT_0090d91c = DAT_0090d91c | 4;
          local_20 = (int ***)0x527cc9;
          FUN_004c39d0();
          local_20 = (int ***)0x527cd3;
          FUN_005d5a70();
          local_20 = (int ***)0x0;
          local_24 = (int ****)0x527cde;
          FUN_005ed9d0();
          local_20 = (int ***)0x527ce8;
          FUN_004717a0();
          local_20 = (int ***)(&DAT_0093a96c)[(int)DAT_00939284];
          if ((local_20 != (int ***)0x0) || ((&DAT_0093a98c)[(int)DAT_00939284] != 0)) {
            local_24 = (int ****)0x0;
            local_28 = (int ***)0x527d09;
            FUN_00625e30();
            local_28 = (int ***)(&DAT_0093a98c)[(int)DAT_00939284];
            local_2c = (undefined ***)0x1;
            local_30 = (int ***)0x527d1e;
            FUN_00625e30();
            local_30 = (int ***)0x0;
            local_34 = s_bad_sm_pcx_0068ba8c;
            puStack_38 = (undefined4 *)0x0;
            pcStack_3c = s_WONLOST_0068ba98;
            puStack_40 = PTR_s_SCRIPT_00691b0c;
            uStack_44 = 0x527d35;
            FUN_0048c0a0();
          }
          local_20 = (int ***)DAT_00939284;
          local_24 = (int ****)0x527d44;
          iVar2 = FUN_0051e530();
          if (iVar2 != 0) {
            local_20 = (int ***)0x1;
            local_24 = (int ****)0x3e8;
            local_28 = (int ***)0x527d5c;
            FUN_0062b870();
          }
          if (DAT_007cd11c == 1000) {
            local_20 = (int ***)0x0;
            local_24 = (int ****)0x527d7d;
            FUN_005ed9d0();
          }
          local_20 = (int ***)0x0;
          local_24 = (int ****)0x527d88;
          FUN_00514880();
          local_20 = (int ***)0x527d8d;
          FUN_0050f3d0();
          local_20 = (int ***)0x527d92;
          FUN_005fcbb0();
          iVar2 = (&DAT_0093a9b8)[(int)DAT_00939284];
          ppppiVar4 = DAT_00939284;
          if (iVar2 != 0) {
            local_20 = (int ***)0xffffffff;
            local_24 = (int ****)0xffffffff;
            DAT_009bbff0 = 0;
            DAT_009bbfec = (&DAT_00946a50)[iVar2 * 0x167];
            local_28 = (int ***)(&DAT_00946a9c + iVar2 * 0x59c);
            local_2c = (undefined ***)0x0;
            local_30 = (int ***)0x527dd7;
            FUN_00625ec0();
            local_30 = (int ***)0xffffffff;
            local_34 = (char *)0xffffffff;
            DAT_009bbff0 = 0;
            DAT_009bbfec = (&DAT_00946a50)[(&DAT_0093a9b8)[(int)DAT_00939284] * 0x167];
            puStack_38 = (undefined4 *)(&DAT_00946a84 + (&DAT_0093a9b8)[(int)DAT_00939284] * 0x59c);
            pcStack_3c = (char *)0x1;
            puStack_40 = (undefined *)0x527e15;
            FUN_00625ec0();
            puStack_40 = (undefined *)0xffffffff;
            uStack_44 = 0xffffffff;
            iVar2 = (&DAT_0093a9b8)[(int)DAT_00939284];
            DAT_009bbff0 = (&DAT_00946d50)[iVar2 * 0x167];
            DAT_009bbfec = (&DAT_00946d4c)[iVar2 * 0x167];
            puStack_48 = (undefined4 *)(&DAT_00946d34 + iVar2 * 0x59c);
            uStack_4c = 2;
            uStack_50 = 0x527e5a;
            FUN_00625ec0();
            uStack_50 = (&DAT_0093a9d8)[(int)DAT_00939284];
            pcStack_54 = (char *)0x0;
            puStack_58 = (undefined *)0x527e6e;
            FUN_00625e30();
            puStack_58 = (undefined *)0x0;
            pcStack_5c = s_HOTTAMPER2_0068baa0;
            uStack_60 = 0x527e79;
            FUN_005bf310();
            ppppiVar4 = DAT_00939284;
            (&DAT_0093a9b8)[(int)DAT_00939284] = 0;
            (&DAT_0093a9d8)[(int)ppppiVar4] = 0;
          }
          iVar2 = (&DAT_0096cdb4)[(int)ppppiVar4 * 0x833];
          while (0 < iVar2) {
            (&DAT_0096cdb4)[(int)ppppiVar4 * 0x833] = iVar2 + -1;
            local_24 = (int ****)0x527eba;
            local_20 = (int ***)ppppiVar4;
            FUN_005be530();
            ppppiVar4 = DAT_00939284;
            iVar2 = (&DAT_0096cdb4)[(int)DAT_00939284 * 0x833];
          }
          local_28 = (int ***)&DAT_0093f67c;
          local_30 = (int ***)0x1;
          puVar6 = &DAT_00946fec;
          do {
            *local_28 = (int **)(&DAT_0093f698)[(int)(local_30 + (int)ppppiVar4 * 2)];
            (&DAT_0093f698)[(int)(local_30 + (int)ppppiVar4 * 2)] = 0;
            if ((int ****)local_30 != ppppiVar4) {
              if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_30 & 0x1f))) == 0) {
                if ((int ***)*local_28 != (int ***)0x0) {
                  local_20 = (int ***)0x0;
                  local_24 = (int ****)local_30;
                  local_2c = (undefined ***)0x527fe9;
                  local_28 = (int ***)ppppiVar4;
                  FUN_0054ffd0();
                  ppppiVar4 = DAT_00939284;
                }
              }
              else if ((int ***)*local_28 != (int ***)0x0) {
                if ((&DAT_007388e0)[(int)(local_30 + (int)ppppiVar4 * 2) * 0x24] == 3) {
                  DAT_009bbfec = *puVar6;
                  local_20 = (int ***)0xffffffff;
                  local_28 = (int ***)(puVar6 + 0x13);
                  local_24 = (int ****)0xffffffff;
                  local_2c = (undefined ***)0x0;
                  (&DAT_007388e0)[(int)(local_30 + (int)ppppiVar4 * 2) * 0x24] = 0;
                  DAT_009bbff0 = 0;
                  local_30 = (int ***)0x527f76;
                  FUN_00625ec0();
                  DAT_009bbfec = *puVar6;
                  local_30 = (int ***)0xffffffff;
                  puStack_38 = puVar6 + 0xd;
                  local_34 = (char *)0xffffffff;
                  pcStack_3c = (char *)0x1;
                  DAT_009bbff0 = 0;
                  puStack_40 = (undefined *)0x527f92;
                  FUN_00625ec0();
                  DAT_009bbfec = puVar6[0xbf];
                  DAT_009bbff0 = puVar6[0xc0];
                  puStack_40 = (undefined *)0xffffffff;
                  puStack_48 = puVar6 + 0xb9;
                  uStack_44 = 0xffffffff;
                  uStack_4c = 2;
                  uStack_50 = 0x527fbb;
                  FUN_00625ec0();
                  uStack_50 = 0;
                  pcStack_54 = s_COMMCOMPLETE_0068baac;
                  puStack_58 = (undefined *)0x527fc6;
                  FUN_005bf310();
                  ppppiVar4 = DAT_00939284;
                }
                else {
                  local_20 = local_30;
                  local_28 = (int ***)0x527fd5;
                  local_24 = ppppiVar4;
                  FUN_00444d90();
                  ppppiVar4 = DAT_00939284;
                }
              }
              *local_28 = (int **)0x0;
            }
            puVar6 = puVar6 + 0x167;
            local_30 = (int ***)((int)local_30 + 1);
            local_28 = local_28 + 1;
          } while ((int)puVar6 < 0x949730);
          if (DAT_00703de8 == 0) {
            if ((&DAT_00703e0c)[(int)ppppiVar4] != 0) {
              local_20 = (int ***)0xffffffff;
              local_24 = (int ****)0xffffffff;
              local_28 = (int ***)(&DAT_009a6828)[(&DAT_00703dec)[(int)ppppiVar4] * 3];
              local_2c = (undefined ***)0x0;
              local_30 = (int ***)0x528059;
              FUN_00625e50();
              if ((&DAT_00703dec)[(int)DAT_00939284] == 0) {
                if (0 < DAT_009a6614) {
                  local_20 = (int ***)0xffffffff;
                  local_24 = (int ****)0xffffffff;
                  DAT_009bbff0 = 0;
                  DAT_009bbfec = (&DAT_00946a50)[DAT_009a6614 * 0x167];
                  local_28 = (int ***)(&DAT_00946a9c + DAT_009a6614 * 0x59c);
                  local_2c = (undefined ***)0x1;
                  local_30 = (int ***)0x5280fb;
                  FUN_00625ec0();
                  local_30 = (int ***)0xffffffff;
                  local_34 = (char *)0xffffffff;
                  DAT_009bbff0 = 0;
                  DAT_009bbfec = (&DAT_00946a50)[DAT_009a6614 * 0x167];
                  puStack_38 = (undefined4 *)(&DAT_00946a84 + DAT_009a6614 * 0x59c);
                  pcStack_3c = (char *)0x2;
                  puStack_40 = (undefined *)0x528133;
                  FUN_00625ec0();
                  puStack_40 = (undefined *)0xffffffff;
                  uStack_44 = 0xffffffff;
                  DAT_009bbff0 = (&DAT_00946d50)[DAT_009a6614 * 0x167];
                  DAT_009bbfec = (&DAT_00946d4c)[DAT_009a6614 * 0x167];
                  puStack_48 = (undefined4 *)(&DAT_00946d34 + DAT_009a6614 * 0x59c);
                  uStack_4c = 3;
                  uStack_50 = 0x528171;
                  FUN_00625ec0();
                }
                if ((&DAT_00703e0c)[(int)DAT_00939284] == 1) {
                  local_24 = (int ****)s_council_sm_pcx_0068bb1c;
                  local_2c = (undefined ***)s_COUNCILHOTGOVWIN_0068bb2c;
                  local_30 = (int ***)PTR_s_SCRIPT_00691b0c;
                }
                else {
                  if (DAT_009a6614 < 1) {
                    local_24 = (int ****)s_council_sm_pcx_0068bb64;
                    local_2c = (undefined ***)s_COUNCILHOTGOVNONE_0068bb74;
                    goto LAB_005281c2;
                  }
                  local_24 = (int ****)s_council_sm_pcx_0068bb40;
                  local_2c = (undefined ***)s_COUNCILHOTGOVLOSE_0068bb50;
                  local_30 = (int ***)PTR_s_SCRIPT_00691b0c;
                }
              }
              else if ((&DAT_00703e0c)[(int)DAT_00939284] == 1) {
                local_24 = (int ****)s_council_sm_pcx_0068babc;
                local_2c = (undefined ***)s_COUNCILHOTPASS_0068bacc;
                local_30 = (int ***)PTR_s_SCRIPT_00691b0c;
              }
              else if ((&DAT_00703e0c)[(int)DAT_00939284] == -2) {
                local_24 = (int ****)s_council_sm_pcx_0068badc;
                local_2c = (undefined ***)s_COUNCILHOTVETO_0068baec;
                local_30 = (int ***)PTR_s_SCRIPT_00691b0c;
              }
              else {
                local_24 = (int ****)s_council_sm_pcx_0068bafc;
                local_2c = (undefined ***)s_COUNCILHOTFAIL_0068bb0c;
LAB_005281c2:
                local_30 = (int ***)PTR_s_SCRIPT_00691b0c;
              }
              local_20 = (int ***)0x0;
              local_28 = (int ***)0x0;
              local_34 = (char *)0x5281cd;
              PTR_s_SCRIPT_00691b0c = (undefined *)local_30;
              FUN_0048c0a0();
              local_20 = (int ***)DAT_00939284;
              local_24 = (int ****)0x5281dc;
              FUN_004243d0();
              ppppiVar4 = DAT_00939284;
            }
          }
          else {
            local_20 = (int ***)0x0;
            local_24 = (int ****)0x0;
            local_2c = (undefined ***)0x528028;
            local_28 = (int ***)ppppiVar4;
            FUN_00428350();
            ppppiVar4 = DAT_00939284;
          }
LAB_005281e4:
          if (DAT_009b2068 == 0) {
            if ((DAT_009b2070 == 0) || ((DAT_0093a95c != 0 && ((DAT_009a681c & 0x40) != 0)))) {
              DAT_0093a938 = 1;
              local_24 = (int ****)0x528219;
              local_20 = (int ***)ppppiVar7;
              FUN_00527290();
              local_24 = (int ****)0x0;
              local_28 = (int ***)0x52821f;
              iVar2 = FUN_00524870();
              ppppiVar4 = DAT_00939284;
              if (iVar2 != 0) {
                local_8 = 0x18;
                local_20 = (int ***)0x5285ca;
                FUN_00404900();
                local_2180 = &PTR_FUN_00669d58;
                local_1d3c = &PTR_LAB_00669d50;
                local_8._0_1_ = 0x1b;
                local_20 = (int ***)0x5285f6;
                FUN_00605370();
                local_2c = local_b88;
                local_b88[0] = &PTR_FUN_00669754;
                local_744 = &PTR_LAB_0066974c;
                local_8._0_1_ = 0x1c;
                local_20 = (int ***)0x528624;
                FUN_00607da0();
                local_8._0_1_ = 0x1a;
                local_20 = (int ***)0x528633;
                FUN_00607040();
                local_2c = local_16d4;
                local_16d4[0] = &PTR_FUN_00669754;
                local_1290 = &PTR_LAB_0066974c;
                local_8._0_1_ = 0x1d;
                local_20 = (int ***)0x528657;
                FUN_00607da0();
                local_8._0_1_ = 0x19;
                local_20 = (int ***)0x528666;
                FUN_00607040();
                local_8 = CONCAT31(local_8._1_3_,0x17);
                local_20 = (int ***)0x528675;
                FUN_005d4dd0();
                local_8 = 0x26;
                local_20 = (int ***)0x52869b;
                FUN_00600f00();
                local_8._0_1_ = 0x25;
                local_20 = (int ***)0x5286aa;
                FUN_005fa870();
                local_8._0_1_ = 0x24;
                local_20 = (int ***)0x5286b9;
                FUN_00406910();
                local_20 = (int ***)0x5286c4;
                FUN_00608e10();
                local_20 = (int ***)0x5286cf;
                FUN_005d4dd0();
                local_3230 = &PTR_FUN_006698c4;
                *(undefined ***)((int)local_322c + *(int *)(local_322c[0] + 4)) = &PTR_FUN_006698c0;
                local_8._0_1_ = 0x27;
                local_20 = (int ***)0x528705;
                FUN_00402970();
                local_321c = 0;
                local_8._0_1_ = 0x23;
                local_20 = (int ***)0x52871a;
                FUN_00401060();
                DAT_009b3374 = local_3204;
                local_3208 = &PTR_FUN_006693ac;
                *(undefined ***)((int)local_325c + *(int *)(local_325c[0] + 4)) = &PTR_FUN_006698c0;
                local_8._0_1_ = 0x28;
                local_20 = (int ***)0x528767;
                FUN_00402970();
                local_324c = 0;
                local_8._0_1_ = 0x22;
                local_20 = (int ***)0x52877c;
                FUN_00401060();
                local_3238 = &PTR_FUN_006693ac;
                DAT_009b3374 = local_3234;
                local_8._0_1_ = 0x21;
                local_20 = (int ***)0x52879d;
                FUN_005e3820();
                local_8._0_1_ = 0x29;
                local_20 = (int ***)0x5287c6;
                FUN_00607da0();
                local_8._0_1_ = 0x20;
                local_20 = (int ***)0x5287d5;
                FUN_00607040();
                local_8._0_1_ = 0x2a;
                local_20 = (int ***)0x5287f9;
                FUN_00607da0();
                local_8._0_1_ = 0x1f;
                local_20 = (int ***)0x528808;
                FUN_00607040();
                local_8 = CONCAT31(local_8._1_3_,0x1e);
                goto LAB_00528e66;
              }
            }
            DAT_009a681c = DAT_009a681c & 0xffffffbf;
            DAT_0093a938 = 0;
            local_20 = (int ***)(DAT_009a64e8 & 0xff);
            if (((uint)local_20 & uVar3) == 0) {
              local_24 = (int ****)0x52828e;
              local_20 = (int ***)ppppiVar7;
              FUN_00579510();
            }
            else {
              if (ppppiVar7 != ppppiVar4) {
                local_24 = (int ****)0x528261;
                iVar2 = FUN_0050ba30();
                if (iVar2 < 2) goto LAB_00528291;
              }
              local_20 = (int ***)0x528273;
              FUN_00514050();
              if (DAT_009b2070 != 0) {
                ppppiVar7 = (int ****)0x0;
                goto LAB_005282b5;
              }
              local_2c = (undefined ***)0x1;
            }
LAB_00528291:
            DAT_009b2070 = 0;
            if (DAT_009b2068 == 0) {
              local_20 = (int ***)0x0;
              local_24 = (int ****)0x5282aa;
              iVar2 = FUN_00524870();
              if (iVar2 == 0) goto LAB_005282b5;
            }
          }
        }
LAB_00528811:
        local_8 = 0x2c;
        local_20 = (int ***)0x528837;
        FUN_00404900();
        local_2180 = &PTR_FUN_00669d58;
        local_1d3c = &PTR_LAB_00669d50;
        local_8._0_1_ = 0x2f;
        local_20 = (int ***)0x528863;
        FUN_00605370();
        local_2c = local_b88;
        local_b88[0] = &PTR_FUN_00669754;
        local_744 = &PTR_LAB_0066974c;
        local_8._0_1_ = 0x30;
        local_20 = (int ***)0x528891;
        FUN_00607da0();
        local_8._0_1_ = 0x2e;
        local_20 = (int ***)0x5288a0;
        FUN_00607040();
        local_2c = local_16d4;
        local_16d4[0] = &PTR_FUN_00669754;
        local_1290 = &PTR_LAB_0066974c;
        local_8._0_1_ = 0x31;
        local_20 = (int ***)0x5288c4;
        FUN_00607da0();
        local_8._0_1_ = 0x2d;
        local_20 = (int ***)0x5288d3;
        FUN_00607040();
        local_8 = CONCAT31(local_8._1_3_,0x2b);
        local_20 = (int ***)0x5288e2;
        FUN_005d4dd0();
        local_8 = 0x3a;
        local_20 = (int ***)0x528908;
        FUN_00600f00();
        local_8._0_1_ = 0x39;
        local_20 = (int ***)0x528917;
        FUN_005fa870();
        local_8._0_1_ = 0x38;
        local_20 = (int ***)0x528926;
        FUN_00406910();
        local_20 = (int ***)0x528931;
        FUN_00608e10();
        local_20 = (int ***)0x52893c;
        FUN_005d4dd0();
        local_3230 = &PTR_FUN_006698c4;
        *(undefined ***)((int)local_322c + *(int *)(local_322c[0] + 4)) = &PTR_FUN_006698c0;
        local_8._0_1_ = 0x3b;
        local_20 = (int ***)0x528972;
        FUN_00402970();
        local_321c = 0;
        local_8._0_1_ = 0x37;
        local_3230 = &PTR_LAB_006693a4;
        *(undefined ***)((int)local_322c + *(int *)(local_322c[0] + 4)) = &PTR_FUN_006693a0;
        local_20 = (int ***)0x5289a5;
        FUN_00402970();
        local_321c = 0;
        local_3208 = &PTR_FUN_006693ac;
        DAT_009b3374 = local_3204;
        *(undefined ***)((int)local_325c + *(int *)(local_325c[0] + 4)) = &PTR_FUN_006698c0;
        local_8._0_1_ = 0x3c;
        local_20 = (int ***)0x5289f8;
        FUN_00402970();
        local_324c = 0;
        local_8._0_1_ = 0x36;
        *(undefined ***)((int)local_325c + *(int *)(local_325c[0] + 4)) = &PTR_FUN_006693a0;
        local_20 = (int ***)0x528a2b;
        FUN_00402970();
        local_324c = 0;
        DAT_009b3374 = local_3234;
        local_3238 = &PTR_FUN_006693ac;
        local_8._0_1_ = 0x35;
        local_20 = (int ***)0x528a52;
        FUN_005e3820();
        local_8._0_1_ = 0x3d;
        local_20 = (int ***)0x528a7b;
        FUN_00607da0();
        local_8._0_1_ = 0x34;
        local_20 = (int ***)0x528a8a;
        FUN_00607040();
        local_8._0_1_ = 0x3e;
        local_20 = (int ***)0x528aae;
        FUN_00607da0();
        local_8._0_1_ = 0x33;
        local_20 = (int ***)0x528abd;
        FUN_00607040();
        local_8 = CONCAT31(local_8._1_3_,0x32);
        goto LAB_00528e66;
      }
LAB_005282b5:
      ppppiVar7 = (int ****)((int)ppppiVar7 + 1);
    } while ((int)ppppiVar7 < 8);
    if (local_2c == (undefined ***)0x0) {
      local_20 = (int ***)0x5282ce;
      FUN_00514050();
    }
  } while (DAT_009b2068 == 0);
  local_8 = 0x40;
  local_20 = (int ***)0x528aec;
  FUN_00404900();
  local_2180 = &PTR_FUN_00669d58;
  local_1d3c = &PTR_LAB_00669d50;
  local_8._0_1_ = 0x43;
  local_20 = (int ***)0x528b18;
  FUN_00605370();
  local_2c = local_b88;
  local_b88[0] = &PTR_FUN_00669754;
  local_744 = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x44;
  local_20 = (int ***)0x528b46;
  FUN_00607da0();
  local_8._0_1_ = 0x42;
  local_20 = (int ***)0x528b55;
  FUN_00607040();
  local_2c = local_16d4;
  local_16d4[0] = &PTR_FUN_00669754;
  local_1290 = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x45;
  local_20 = (int ***)0x528b79;
  FUN_00607da0();
  local_8._0_1_ = 0x41;
  local_20 = (int ***)0x528b88;
  FUN_00607040();
  local_8 = CONCAT31(local_8._1_3_,0x3f);
  local_20 = (int ***)0x528b97;
  FUN_005d4dd0();
  local_8 = 0x4e;
  local_20 = (int ***)0x528bbd;
  FUN_00600f00();
  local_8._0_1_ = 0x4d;
  local_20 = (int ***)0x528bcc;
  FUN_005fa870();
  *(undefined ***)((int)aiStack_31e4 + *(int *)(aiStack_31e4[1] + 4) + 4) = &PTR_LAB_00669be8;
  *(undefined ***)((int)auStack_2d9c + *(int *)(aiStack_31e4[1] + 4)) = &PTR_LAB_00669be0;
  *(undefined ***)((int)aiStack_31e4 + *(int *)(aiStack_31e4[1] + 8) + 4) = &PTR_LAB_00669bd4;
  *(int *)((int)aiStack_31e4 + *(int *)(aiStack_31e4[1] + 4)) =
       *(int *)(aiStack_31e4[1] + 4) + -0x188;
  *(int *)((int)aiStack_31e4 + *(int *)(aiStack_31e4[1] + 8)) =
       *(int *)(aiStack_31e4[1] + 8) + -0xba0;
  local_8._0_1_ = 0x53;
  local_20 = (int ***)0x528c4c;
  FUN_00612960();
  local_8._0_1_ = 0x52;
  local_20 = (int ***)0x528c6f;
  FUN_00611a20();
  local_8._0_1_ = 0x51;
  local_20 = (int ***)0x528c8c;
  FUN_00610120();
  local_8._0_1_ = 0x50;
  local_20 = (int ***)0x528ca6;
  FUN_0060e740();
  local_8._0_1_ = 0x4f;
  local_20 = (int ***)0x528cbe;
  FUN_00406a90();
  local_8._0_1_ = 0x4c;
  local_20 = (int ***)0x528ccd;
  FUN_00609ec0();
  local_20 = (int ***)0x528cd8;
  FUN_00608e10();
  local_20 = (int ***)0x528ce3;
  FUN_005d4dd0();
  local_3230 = &PTR_FUN_006698c4;
  *(undefined ***)((int)local_322c + *(int *)(local_322c[0] + 4)) = &PTR_FUN_006698c0;
  local_8._0_1_ = 0x54;
  local_20 = (int ***)0x528d19;
  FUN_00402970();
  local_321c = 0;
  local_3230 = &PTR_LAB_006693a4;
  local_8._0_1_ = 0x4b;
  *(undefined ***)((int)local_322c + *(int *)(local_322c[0] + 4)) = &PTR_FUN_006693a0;
  local_20 = (int ***)0x528d4c;
  FUN_00402970();
  local_321c = 0;
  local_3208 = &PTR_FUN_006693ac;
  DAT_009b3374 = local_3204;
  *(undefined ***)((int)local_325c + *(int *)(local_325c[0] + 4)) = &PTR_FUN_006698c0;
  local_8._0_1_ = 0x55;
  local_20 = (int ***)0x528d9e;
  FUN_00402970();
  local_324c = 0;
  local_8._0_1_ = 0x4a;
  *(undefined ***)((int)local_325c + *(int *)(local_325c[0] + 4)) = &PTR_FUN_006693a0;
  local_20 = (int ***)0x528dd1;
  FUN_00402970();
  local_324c = 0;
  local_3238 = &PTR_FUN_006693ac;
  DAT_009b3374 = local_3234;
  local_8._0_1_ = 0x49;
  local_20 = (int ***)0x528df7;
  FUN_005e3820();
  local_8._0_1_ = 0x56;
  local_20 = (int ***)0x528e20;
  FUN_00607da0();
  local_8._0_1_ = 0x48;
  local_20 = (int ***)0x528e2f;
  FUN_00607040();
  local_8._0_1_ = 0x57;
  local_20 = (int ***)0x528e53;
  FUN_00607da0();
  local_8._0_1_ = 0x47;
  local_20 = (int ***)0x528e62;
  FUN_00607040();
  local_8 = CONCAT31(local_8._1_3_,0x46);
LAB_00528e66:
  local_20 = (int ***)0x528e71;
  FUN_005d45b0();
  local_8 = 0xffffffff;
  local_20 = (int ***)0x528e83;
  FUN_005d4dd0();
  ExceptionList = local_10;
  return;
}

