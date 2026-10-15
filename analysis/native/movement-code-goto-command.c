// ev_a55003869d218de4c329c1ed4a4d0821f1d09aa99b21fec630b6e368679bad79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d61a0(byte *param_1,undefined ***param_2,undefined ***param_3)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  short *psVar11;
  byte *pbVar12;
  int unaff_ESI;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  byte *unaff_EDI;
  int iVar16;
  undefined ***pppuVar17;
  byte local_648c [4];
  byte local_6488 [2044];
  byte local_5c8c [4];
  byte local_5c88 [2044];
  undefined **local_548c;
  undefined **local_5048;
  byte *local_4a48;
  undefined **local_4a30 [273];
  undefined **local_45ec;
  undefined **local_3ee4 [273];
  undefined **local_3aa0;
  undefined **local_333c;
  int local_3338;
  int *local_3334;
  int *local_3330;
  int local_332c;
  undefined4 local_3328;
  undefined **local_3314;
  undefined4 local_3310;
  undefined **local_330c;
  int local_3308;
  int *local_3304;
  int *local_3300;
  int local_32fc;
  undefined4 local_32f8;
  undefined **local_32e4;
  undefined4 local_32e0;
  int aiStack_32c0 [16];
  code *local_3280;
  undefined1 local_3278 [324];
  undefined1 local_3134 [700];
  undefined4 auStack_2e78 [699];
  int local_238c;
  undefined **local_225c [273];
  undefined **local_1e18;
  undefined **local_17b0 [273];
  undefined **local_136c;
  undefined **local_c64 [273];
  undefined **local_820;
  undefined1 local_110 [80];
  byte local_c0 [80];
  int local_70;
  byte local_6c [8];
  uint local_64;
  byte local_60 [4];
  uint local_5c;
  int local_58;
  byte *local_54;
  uint local_50;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_3c;
  undefined *local_38;
  undefined1 *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  undefined ***local_24;
  byte *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0065afc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00645550();
  local_44 = (undefined1 *)0x0;
  local_20 = (byte *)0x4d61d8;
  FUN_004048a0();
  local_20 = (byte *)0x0;
  local_24 = (undefined ***)0x0;
  local_28 = (byte *)s_Base_Sort_00688d50;
  uVar10 = *(uint *)(DAT_007d3c3c + 0x1dd70);
  local_8 = 0;
  local_2c = (byte *)0x4d61f5;
  local_5c = uVar10;
  local_38 = (undefined *)FUN_0059db40();
  pbVar9 = param_1;
  DAT_00688348 = 1;
  if (param_2 != (undefined ***)0xffffffff) {
    if (param_2 == (undefined ***)0xfffffffe) {
      local_2c = DAT_00939284;
      local_34 = (undefined1 *)0xffffffff;
      pppuVar17 = (undefined ***)(&DAT_009392c0)[DAT_009392b8];
      pbVar12 = (byte *)(&DAT_00939340)[DAT_009392b8];
      DAT_00688348 = 0;
LAB_004d6da2:
      iVar6 = DAT_0068faf0 * (int)pbVar12 + ((int)pppuVar17 >> 1);
      local_54 = (byte *)(uint)*(byte *)(DAT_0094a30c + 3 + iVar6 * 0x2c);
      local_20 = *(byte **)(DAT_009b90f8 + 0x868);
      local_64 = (uint)((*(byte *)(DAT_0094a30c + iVar6 * 0x2c) & 0xe0) < 0x60);
      local_24 = (undefined ***)0x4d6df0;
      local_20 = (byte *)FUN_006169a0();
      local_24 = (undefined ***)0x4d6dfb;
      FUN_0048bc60();
      local_20 = (byte *)0x0;
      local_24 = (undefined ***)0x4d6e29;
      _DAT_00852b0c = (int)pppuVar17;
      _DAT_00852b10 = (int)pbVar12;
      DAT_00915650 = (int)pbVar12;
      DAT_00915680 = (int)pppuVar17;
      FUN_005ed9d0();
      local_50 = (int)param_2 + 3;
      do {
        pppuVar17 = param_2;
        DAT_009b86a0 = 0;
        switch(local_50) {
        case 0:
          local_20 = (byte *)s_GATETO_00688dc4;
          break;
        case 1:
          local_20 = (byte *)s_FINDTO_00688dbc;
          break;
        case 2:
          local_20 = (byte *)s_DESTTO_00688db4;
          break;
        default:
          goto switchD_004d6e48_caseD_3;
        case 0x1b:
          local_20 = (byte *)s_GROUPTO_00688d8c;
          if (param_3 == (undefined ***)0x0) {
            local_20 = &DAT_00688d94;
          }
          break;
        case 0x1e:
          local_20 = (byte *)s_ROADTO_00688d9c;
          break;
        case 0x1f:
          local_20 = (byte *)s_TUBETO_00688da4;
          break;
        case 0x83:
          local_20 = (byte *)s_BOMBTO_00688dac;
        }
        local_24 = (undefined ***)&DAT_009b86a0;
        local_28 = (byte *)0x4d6e95;
        FUN_00645470();
switchD_004d6e48_caseD_3:
        local_20 = (byte *)0x0;
        local_24 = (undefined ***)0x42;
        local_28 = (byte *)0x0;
        local_2c = (byte *)0xffffffff;
        local_30 = &DAT_009b86a0;
        local_34 = &DAT_009b8aa8;
        local_38 = (undefined *)0x4d6eb5;
        FUN_00406380();
        local_20 = *(byte **)(DAT_009b90f8 + 0x70c);
        local_24 = (undefined ***)0x4d6ecc;
        local_20 = (byte *)FUN_006169a0();
        local_24 = (undefined ***)0x4d6ed8;
        FUN_006019f0();
        local_20 = *(byte **)(DAT_009b90f8 + 0x710);
        local_24 = (undefined ***)0x4d6eef;
        local_20 = (byte *)FUN_006169a0();
        local_24 = (undefined ***)0x4d6efb;
        FUN_006019f0();
        local_20 = *(byte **)(DAT_009b90f8 + 0x714);
        local_24 = (undefined ***)0x4d6f11;
        local_20 = (byte *)FUN_006169a0();
        local_24 = (undefined ***)0x4d6f1d;
        FUN_006019f0();
        local_20 = (byte *)0xfffffff6;
        local_24 = (undefined ***)0xfffffff6;
        local_28 = (byte *)0x4d6f2c;
        FUN_00601b80();
        if (pppuVar17 == (undefined ***)0xfffffffe) {
          local_20 = *(byte **)(DAT_009b90f8 + 0x718);
          local_24 = (undefined ***)0x4d6f48;
          local_20 = (byte *)FUN_006169a0();
          local_24 = (undefined ***)0x4d6f54;
          FUN_006019f0();
        }
        local_3c = (undefined1 *)0x0;
        if (pppuVar17 == (undefined ***)0xffffffff) {
          local_20 = &DAT_00682e9c;
          local_24 = (undefined ***)&DAT_009b86a0;
          DAT_009b86a0 = 0;
          local_28 = (byte *)0x4d6f76;
          FUN_00645470();
          local_20 = *(byte **)(DAT_009b90f8 + 0x3ec);
          local_24 = (undefined ***)0x4d6f90;
          local_20 = (byte *)FUN_006169a0();
          local_24 = (undefined ***)&DAT_009b86a0;
          local_28 = (byte *)0x4d6f9b;
          FUN_00645470();
          local_28 = &DAT_00682e98;
          local_2c = &DAT_009b86a0;
          local_30 = (byte *)0x4d6faa;
          FUN_00645470();
          local_20 = (byte *)0x270f;
          local_24 = (undefined ***)&DAT_009b86a0;
          local_28 = (byte *)0x4d6fc2;
          FUN_00612a70();
        }
        local_3c = (undefined1 *)(uint)(pppuVar17 == (undefined ***)0xffffffff);
        iVar6 = 0;
        if (0 < DAT_009a64cc) {
          psVar11 = &DAT_0097d040;
          do {
            *(int *)(local_5c8c + iVar6 * 4) = iVar6;
            if (local_38 == (undefined *)0x1) {
              iVar16 = (int)(char)psVar11[3];
LAB_004d7041:
              *(int *)(local_648c + iVar6 * 4) = iVar16;
            }
            else if (local_38 == (undefined *)0x2) {
              sVar3 = psVar11[1];
              local_20 = (byte *)((int)local_24 - (int)*psVar11);
              local_24 = (undefined ***)0x4d7002;
              iVar16 = FUN_00644f3a();
              if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar16)) {
                iVar16 = DAT_00949870 - iVar16;
              }
              local_20 = (byte *)((int)local_20 - (int)sVar3);
              local_24 = (undefined ***)0x4d7032;
              iVar7 = FUN_00644f3a();
              iVar16 = -(iVar7 + iVar16 >> 1);
              goto LAB_004d7041;
            }
            iVar6 = iVar6 + 1;
            psVar11 = psVar11 + 0x9a;
          } while (iVar6 < DAT_009a64cc);
        }
        if (local_38 == (undefined *)0x0) {
          do {
            iVar6 = 0;
            local_28 = (byte *)0x0;
            if (DAT_009a64cc == 1 || DAT_009a64cc + -1 < 0) break;
            pbVar9 = local_5c8c;
            do {
              local_20 = &DAT_0097d053 + *(int *)(pbVar9 + 4) * 0x134;
              local_24 = (undefined ***)(&DAT_0097d053 + *(int *)pbVar9 * 0x134);
              local_28 = (byte *)0x4d70f8;
              iVar16 = FUN_0064fd20();
              if (0 < iVar16) {
                local_28 = (byte *)0x4d710d;
                local_24 = (undefined ***)pbVar9;
                local_20 = pbVar9 + 4;
                FUN_00628a50();
              }
              iVar6 = iVar6 + 1;
              pbVar9 = pbVar9 + 4;
            } while (iVar6 < DAT_009a64cc + -1);
          } while (local_28 != (byte *)0x0);
        }
        else {
          iVar6 = DAT_009a64cc + -1;
          do {
            bVar4 = false;
            iVar16 = 0;
            if (iVar6 < 1) break;
            do {
              iVar7 = iVar16 * 4;
              if (*(int *)(local_648c + iVar16 * 4) < *(int *)(local_648c + iVar7 + 4)) {
                bVar4 = true;
                local_28 = (byte *)0x4d7090;
                local_24 = (undefined ***)(local_648c + iVar7);
                local_20 = local_648c + iVar7 + 4;
                FUN_00628a50();
                local_28 = local_5c8c + iVar16 * 4 + 4;
                local_2c = local_5c8c + iVar16 * 4;
                local_30 = (byte *)0x4d70a5;
                FUN_00628a50();
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar6);
          } while (bVar4);
        }
        iVar6 = 0;
        if (0 < DAT_009a64cc) {
          local_28 = local_5c8c;
          do {
            pbVar9 = *(byte **)local_28;
            iVar16 = (int)pbVar9 * 0x134;
            pbVar12 = (byte *)(uint)(byte)(&DAT_0097d044)[iVar16];
            if (pbVar12 == local_2c) {
              if (param_2 != (undefined ***)0x80) {
LAB_004d723a:
                if (param_2 != (undefined ***)0xfffffffd) goto LAB_004d7199;
                local_20 = local_60;
                local_24 = (undefined ***)&local_58;
                local_28 = (byte *)0x21;
                local_2c = (byte *)0x4d7253;
                FUN_0050ba00();
                local_30 = (byte *)(uint)(((&DAT_0097d0cc)[iVar16 + local_58] & local_60[0]) != 0);
                if (local_30 != (byte *)0x0) goto LAB_004d742b;
              }
            }
            else if (param_2 == (undefined ***)0x80) {
              if (((&DAT_0096c9f8)[(int)pbVar12 * 4 + (int)local_2c * 0x20cc] & 0x10) != 0) {
LAB_004d7199:
                pbVar12 = (byte *)(int)(short)(&DAT_0097d042)[(int)pbVar9 * 0x9a];
                iVar7 = (int)(short)(&DAT_0097d040)[(int)pbVar9 * 0x9a];
                local_30 = pbVar12;
                if (local_34 == (undefined1 *)0x1) {
                  if (local_64 == 0) {
                    local_28 = (byte *)0x4d7286;
                    pbVar12 = (byte *)FUN_004e3a50();
                    if ((int)pbVar9 < 0) goto LAB_004d742b;
                    local_28 = (byte *)0x4d729b;
                    local_24 = (undefined ***)pbVar12;
                    local_20 = pbVar9;
                    iVar7 = FUN_0050e160();
                  }
                  else {
                    local_20 = local_54;
                    local_28 = (byte *)0x4d71f0;
                    local_24 = (undefined ***)pbVar9;
                    iVar7 = FUN_0050de50();
                  }
                  if (iVar7 == 0) goto LAB_004d77db;
                }
                else if (local_34 == (undefined1 *)0x0) {
                  if ((byte *)(uint)*(byte *)(DAT_0094a30c + 3 +
                                             (DAT_0068faf0 * (int)pbVar12 + (iVar7 >> 1)) * 0x2c) !=
                      local_54) goto LAB_004d77db;
                }
                else if (local_34 == (undefined1 *)0x2) {
                  if (param_2 == (undefined ***)0x80) {
                    local_20 = (byte *)(local_48 - iVar7);
                    local_24 = (undefined ***)0x4d72db;
                    iVar7 = FUN_00644f3a();
                    if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
                      iVar7 = DAT_00949870 - iVar7;
                    }
                    local_20 = (byte *)(local_4c - (int)pbVar12);
                    local_24 = (undefined ***)0x4d7308;
                    iVar8 = FUN_00644f3a();
                    if ((int)unaff_EDI < iVar8 + iVar7 >> 1) goto LAB_004d77db;
                  }
                  else if ((-1 < (int)param_2) &&
                          ((&DAT_0094a37a)
                           [(uint)(byte)(&DAT_009ab88c)
                                        [(short)(&DAT_00952832)[(int)param_1 * 0x1a] * 0x34] * 0x90]
                           != '\0')) {
                    local_20 = (byte *)((int)local_24 - iVar7);
                    local_24 = (undefined ***)0x4d7360;
                    iVar7 = FUN_00644f3a();
                    pbVar12 = param_1;
                    if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
                      iVar7 = DAT_00949870 - iVar7;
                    }
                    local_20 = (byte *)0x0;
                    local_24 = (undefined ***)param_1;
                    local_28 = (byte *)0x4d738d;
                    iVar8 = FUN_005c1540();
                    pbVar5 = param_1;
                    local_40 = (undefined *)
                               (iVar8 - (uint)(byte)(&DAT_00952850)[(int)pbVar12 * 0x34]);
                    if ((int)local_40 < 0) {
                      local_40 = (undefined *)0x0;
                    }
                    else if (999 < (int)local_40) {
                      local_40 = (undefined *)0x3e7;
                    }
                    local_20 = (byte *)((int)local_20 - (int)local_30);
                    iVar15 = (int)param_1 * 0x34;
                    local_24 = (undefined ***)0x4d73cf;
                    iVar8 = FUN_00644f3a();
                    local_24 = (undefined ***)0x0;
                    local_30 = (byte *)(iVar8 + iVar7 >> 1);
                    local_28 = param_1;
                    local_2c = (byte *)0x4d73e3;
                    iVar7 = FUN_005c1540();
                    if ((int)(local_40 +
                             iVar7 * (((uint)(byte)(&DAT_0094a37a)
                                                   [(uint)(byte)(&DAT_009ab88c)
                                                                [(short)(&DAT_00952832)
                                                                        [(int)pbVar5 * 0x1a] * 0x34]
                                                    * 0x90] - (uint)(byte)(&DAT_0095284d)[iVar15]) +
                                     -1)) / DAT_00949738 < (int)local_30) goto LAB_004d77db;
                  }
                }
LAB_004d742b:
                if (((local_2c == (byte *)(uint)(byte)(&DAT_0097d044)[iVar16]) ||
                    (((byte)(1 << ((byte)local_2c & 0x1f)) & (&DAT_0097d04a)[iVar16]) != 0)) ||
                   (((byte)DAT_009a64c0 & 0x80) != 0)) {
                  local_20 = &DAT_0097d053 + iVar16;
                  DAT_009b86a0 = 0;
                  local_24 = (undefined ***)&DAT_009b86a0;
                  local_28 = (byte *)0x4d7470;
                  FUN_00645470();
                  local_28 = &DAT_00688dcc;
                  local_2c = &DAT_009b86a0;
                  local_30 = (byte *)0x4d747f;
                  FUN_00645470();
                  pbVar12 = local_2c;
                  if ((byte *)(uint)(byte)(&DAT_0097d044)[iVar16] != local_2c) {
                    local_20 = &DAT_00682820;
                    local_24 = (undefined ***)&DAT_009b86a0;
                    local_28 = (byte *)0x4d74a0;
                    FUN_00645470();
                    local_28 = &DAT_00682e9c;
                    local_2c = &DAT_009b86a0;
                    local_30 = (byte *)0x4d74af;
                    FUN_00645470();
                    uVar10 = (uint)(byte)(&DAT_0097d044)[iVar16];
                    DAT_009bbfec = (&DAT_00946d4c)[uVar10 * 0x167];
                    DAT_009bbff0 = (&DAT_00946d50)[uVar10 * 0x167];
                    local_30 = &DAT_00946d34 + uVar10 * 0x59c;
                    local_34 = &DAT_009b86a0;
                    local_38 = (undefined *)0x4d74ee;
                    FUN_00645470();
                    local_38 = &DAT_00682e98;
                    local_3c = &DAT_009b86a0;
                    local_40 = (undefined *)0x4d74fd;
                    FUN_00645470();
                  }
                  if ((local_44 != (undefined1 *)0x0) &&
                     ((byte *)(uint)(byte)(&DAT_0097d044)[iVar16] == pbVar12)) {
                    if (DAT_009a6564 == pbVar9) {
                      local_20 = &DAT_00682820;
                      local_24 = (undefined ***)&DAT_009b86a0;
                      local_28 = (byte *)0x4d7536;
                      FUN_00645470();
                      local_28 = &DAT_00682e9c;
                      local_2c = &DAT_009b86a0;
                      local_30 = (byte *)0x4d7545;
                      FUN_00645470();
                      local_20 = (byte *)DAT_009a5c48;
                    }
                    else {
                      local_20 = local_6c;
                      local_24 = (undefined ***)&local_70;
                      local_28 = (byte *)0x8;
                      local_2c = (byte *)0x4d755e;
                      FUN_0050ba00();
                      local_30 = (byte *)(uint)(((&DAT_0097d0cc)[iVar16 + local_70] & local_6c[0])
                                               != 0);
                      if ((local_30 == (byte *)0x0) ||
                         (((&DAT_0097d070)[(int)pbVar9 * 0x4d] & 0x400) != 0)) goto LAB_004d75da;
                      local_20 = &DAT_00682820;
                      local_24 = (undefined ***)&DAT_009b86a0;
                      local_28 = (byte *)0x4d7595;
                      FUN_00645470();
                      local_28 = &DAT_00682e9c;
                      local_2c = &DAT_009b86a0;
                      local_30 = (byte *)0x4d75a4;
                      FUN_00645470();
                      local_20 = *(byte **)(DAT_009b90f8 + 0x4c4);
                    }
                    local_24 = (undefined ***)0x4d75bd;
                    local_20 = (byte *)FUN_006169a0();
                    local_24 = (undefined ***)&DAT_009b86a0;
                    local_28 = (byte *)0x4d75c8;
                    FUN_00645470();
                    local_28 = &DAT_00682e98;
                    local_2c = &DAT_009b86a0;
                    local_30 = (byte *)0x4d75d7;
                    FUN_00645470();
                  }
LAB_004d75da:
                  local_20 = &DAT_00682820;
                  local_24 = (undefined ***)&DAT_009b86a0;
                  if (param_2 == (undefined ***)0xfffffffd) {
                    local_28 = (byte *)0x4d75f1;
                    FUN_00645470();
                    if (((&DAT_0097d070)[(int)pbVar9 * 0x4d] & 0x20000000) == 0) {
                      local_20 = *(byte **)(DAT_009b90f8 + 0x844);
                    }
                    else {
                      local_20 = *(byte **)(DAT_009b90f8 + 0x848);
                    }
                    local_24 = (undefined ***)0x4d7626;
                    local_20 = (byte *)FUN_006169a0();
                    local_24 = (undefined ***)&DAT_009b86a0;
                    local_28 = (byte *)0x4d7631;
                    FUN_00645470();
                  }
                  else {
                    local_28 = (byte *)0x4d763e;
                    FUN_00645470();
                    local_20 = *(byte **)(DAT_009b90f8 + 1000);
                    local_24 = (undefined ***)0x4d7657;
                    local_20 = (byte *)FUN_006169a0();
                    local_24 = (undefined ***)&DAT_009b86a0;
                    local_28 = (byte *)0x4d7662;
                    FUN_00645470();
                    local_28 = &DAT_00682e94;
                    local_2c = &DAT_009b86a0;
                    local_30 = (byte *)0x4d7671;
                    FUN_00645470();
                    sVar3 = (&DAT_0097d042)[(int)pbVar9 * 0x9a];
                    local_30 = (byte *)((int)local_24 -
                                       (int)(short)(&DAT_0097d040)[(int)pbVar9 * 0x9a]);
                    local_34 = (undefined1 *)0x4d768a;
                    iVar7 = FUN_00644f3a();
                    if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
                      iVar7 = DAT_00949870 - iVar7;
                    }
                    local_20 = (byte *)((int)local_20 - (int)sVar3);
                    local_24 = (undefined ***)0x4d76b7;
                    iVar8 = FUN_00644f3a();
                    local_28 = local_c0;
                    local_2c = (byte *)(iVar8 + iVar7 >> 1);
                    local_24 = (undefined ***)0xa;
                    local_30 = (byte *)0x4d76ca;
                    FUN_0064fc88();
                    local_30 = local_c0;
                    local_34 = &DAT_009b86a0;
                    local_38 = (undefined *)0x4d76db;
                    FUN_00645470();
                    if (local_38 == (undefined *)0x1) {
                      local_20 = &DAT_00682e90;
                      local_24 = (undefined ***)&DAT_009b86a0;
                      local_28 = (byte *)0x4d76f5;
                      FUN_00645470();
                      local_20 = *(byte **)(DAT_009b90f8 + 0x90c);
                      local_24 = (undefined ***)0x4d770e;
                      local_20 = (byte *)FUN_006169a0();
                      local_24 = (undefined ***)&DAT_009b86a0;
                      local_28 = (byte *)0x4d7719;
                      FUN_00645470();
                      local_28 = &DAT_00682e94;
                      local_2c = &DAT_009b86a0;
                      local_30 = (byte *)0x4d7728;
                      FUN_00645470();
                      local_38 = (undefined *)(int)(char)(&DAT_0097d046)[iVar16];
                      local_34 = local_110;
                      local_30 = (byte *)0xa;
                      local_3c = (undefined1 *)0x4d773e;
                      FUN_0064fc88();
                      local_3c = local_110;
                      local_40 = &DAT_009b86a0;
                      local_44 = (undefined1 *)0x4d774f;
                      FUN_00645470();
                    }
                  }
                  local_24 = (undefined ***)&DAT_009b86a0;
                  local_28 = (byte *)0x4d7766;
                  local_20 = pbVar9;
                  FUN_00612a70();
                  local_3c = local_3c + 1;
                  if (param_2 == (undefined ***)0xfffffffe) {
                    if (pbVar9 == DAT_0068834c) {
                      local_4a48 = pbVar9;
                    }
                  }
                  else {
                    if (param_2 == (undefined ***)0xffffffff) {
                      pbVar12 = (byte *)(int)(short)(&DAT_0097d150)
                                                    [(int)(local_34 + (int)unaff_EDI * 0x9a)];
                    }
                    else {
                      pbVar12 = DAT_0068834c;
                      if ((int)DAT_0068834c < 0) {
                        if (pbVar9 == (byte *)(int)(short)(&DAT_00952856)[(int)param_1 * 0x1a]) {
                          local_4a48 = pbVar9;
                        }
                        goto LAB_004d77db;
                      }
                    }
                    if (pbVar9 == pbVar12) {
                      local_4a48 = pbVar9;
                    }
                  }
                }
              }
            }
            else if ((-1 < (int)param_2) &&
                    (((&DAT_0096c9f8)[(int)pbVar12 * 4 + (int)local_2c * 0x20cc] & 1) != 0))
            goto LAB_004d723a;
LAB_004d77db:
            iVar6 = iVar6 + 1;
            local_28 = local_28 + 4;
          } while (iVar6 < DAT_009a64cc);
        }
        if (local_3c == (undefined1 *)0x0) {
          if (param_2 == (undefined ***)0xfffffffd) {
            local_20 = (byte *)0x0;
            local_24 = (undefined ***)0x0;
            local_28 = (byte *)0x1388;
            local_2c = (byte *)s_GATENODEST_00688dd0;
            local_30 = (byte *)0x4d789d;
            FUN_0047a890();
          }
          local_20 = (byte *)0x4d78a7;
          FUN_0048bc50();
          goto LAB_004d7b12;
        }
        local_3280 = FUN_004d6070;
        local_20 = (byte *)0x4d781f;
        local_20 = (byte *)FUN_00609a50();
        local_24 = (undefined ***)0x4d7825;
        FUN_004d6070();
        local_20 = (byte *)0x0;
        local_24 = (undefined ***)0x0;
        local_28 = (byte *)0x4d7837;
        pbVar9 = (byte *)FUN_00602600();
        local_20 = (byte *)0x4d7843;
        FUN_0048bc50();
        pppuVar17 = param_2;
        if ((int)pbVar9 < 0) goto LAB_004d7b12;
        DAT_0068834c = pbVar9;
        if ((local_238c < 1) || (3 < local_238c)) goto LAB_004d78ac;
        local_38 = (undefined *)(local_238c + -1);
        local_20 = (byte *)0x0;
        local_28 = (byte *)s_Base_Sort_00688ddc;
        local_2c = (byte *)0x4d7871;
        local_24 = (undefined ***)local_38;
        FUN_0059e530();
      } while( true );
    }
    if ((int)param_1 < 0) {
      if (param_2 == (undefined ***)0xfffffffd) {
        local_548c = &PTR_FUN_006695c8;
        local_5048 = &PTR_LAB_006695c0;
        local_8 = 4;
        local_20 = (byte *)0x4d6445;
        FUN_00404900();
        local_8 = CONCAT31(local_8._1_3_,3);
        goto LAB_004d64ce;
      }
      local_20 = DAT_00939284;
      local_24 = (undefined ***)0x0;
      local_28 = (byte *)0x4d645b;
      param_1 = (byte *)FUN_005c1d50();
      uVar1 = *(undefined2 *)(&DAT_00939340 + DAT_009392b8);
      (&DAT_00952828)[(int)param_1 * 0x1a] = *(undefined2 *)(&DAT_009392c0 + DAT_009392b8);
      (&DAT_0095282a)[(int)param_1 * 0x1a] = uVar1;
      (&DAT_0095282c)[(int)param_1 * 0xd] = 0;
    }
    local_20 = (byte *)0x0;
    local_24 = (undefined ***)0xffffffff;
    local_28 = (byte *)0xffffffff;
    local_30 = (byte *)&param_1;
    local_2c = (byte *)0x0;
    local_34 = (undefined1 *)0x4d64a0;
    iVar6 = FUN_00531020();
    if (iVar6 != 0) {
      local_548c = &PTR_FUN_006695c8;
      local_5048 = &PTR_LAB_006695c0;
      local_8 = 6;
      local_20 = (byte *)0x4d64ca;
      FUN_00404900();
      local_8 = CONCAT31(local_8._1_3_,5);
LAB_004d64ce:
      local_20 = (byte *)0x4d64d9;
      FUN_00406e60();
      local_8 = 0xffffffff;
      local_20 = (byte *)0x4d64e7;
      FUN_004064d0();
      ExceptionList = local_10;
      return;
    }
    pppuVar17 = (undefined ***)(int)(short)(&DAT_00952828)[(int)param_1 * 0x1a];
    pbVar12 = (byte *)(int)(short)(&DAT_0095282a)[(int)param_1 * 0x1a];
    local_34 = (undefined1 *)
               (uint)(byte)(&DAT_0094a379)
                           [(uint)(byte)(&DAT_009ab88c)
                                        [(short)(&DAT_00952832)[(int)param_1 * 0x1a] * 0x34] * 0x90]
    ;
    local_28 = &DAT_009ab868 + (short)(&DAT_00952832)[(int)param_1 * 0x1a] * 0x34;
    local_2c = (byte *)0x0;
    local_30 = (byte *)0x4d6553;
    local_24 = pppuVar17;
    local_20 = pbVar12;
    FUN_00625ec0();
    if ((&DAT_009ab892)[(short)(&DAT_00952832)[(int)param_1 * 0x1a] * 0x34] == '\f') {
      local_44 = (undefined1 *)0x1;
    }
    local_20 = param_1;
    local_24 = (undefined ***)0x4d657e;
    iVar6 = FUN_005c1760();
    if (iVar6 != 0) {
      local_20 = (byte *)0xffffffff;
      local_24 = (undefined ***)0xffffffff;
      local_28 = (byte *)0xc;
      local_2c = (byte *)0x2;
      local_30 = param_1;
      local_34 = (undefined1 *)0x4d6596;
      iVar6 = FUN_005b9580();
      if (iVar6 != 0) {
        local_44 = (undefined1 *)0x1;
      }
    }
    if (param_2 != (undefined ***)0xfffffffd) {
      if (param_2 == (undefined ***)0x80) {
        local_20 = (byte *)0x0;
        local_24 = (undefined ***)param_1;
        if ((&DAT_0094a37a)
            [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[(int)param_1 * 0x1a] * 0x34] * 0x90]
            == '\x01') {
          local_28 = (byte *)0x4d6c70;
          iVar6 = FUN_005c1540();
          unaff_EDI = (byte *)(iVar6 / 2);
        }
        else {
          local_28 = (byte *)0x4d6c66;
          unaff_EDI = (byte *)FUN_005c1540();
        }
        iVar6 = DAT_0094a30c + (DAT_0068faf0 * (int)pbVar12 + ((int)pppuVar17 >> 1)) * 0x2c;
        if (((*(byte *)(iVar6 + 8) & 1) == 0) ||
           (local_4c = (int)pbVar12, local_48 = (int)pppuVar17, 7 < (*(byte *)(iVar6 + 2) & 0xf))) {
          local_20 = (byte *)0x0;
          local_24 = (undefined ***)param_1;
          local_28 = (byte *)0x4d6cc3;
          FUN_004cbaa0();
          if ((&DAT_00952839)[(int)param_1 * 0x34] != '\x18') {
            local_20 = (byte *)0x4d6ce3;
            FUN_005310f0();
            local_548c = &PTR_FUN_006695c8;
            local_5048 = &PTR_LAB_006695c0;
            local_8 = 8;
            local_20 = (byte *)0x4d6d09;
            FUN_00404900();
            param_2 = local_225c;
            local_225c[0] = &PTR_FUN_00669d58;
            local_1e18 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0xb;
            local_20 = (byte *)0x4d6d35;
            FUN_00605370();
            local_8._0_1_ = 10;
            local_20 = (byte *)0x4d6d44;
            FUN_00406880();
            local_8._0_1_ = 9;
            local_20 = (byte *)0x4d6d53;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,7);
            local_20 = (byte *)0x4d6d62;
            FUN_005d4dd0();
            goto LAB_004d6d62;
          }
          sVar3 = (&DAT_0095283c)[(int)param_1 * 0x1a];
          sVar2 = (&DAT_00952844)[(int)param_1 * 0x1a];
          (&DAT_00952839)[(int)param_1 * 0x34] = 0;
          local_4c = (int)sVar2;
          local_48 = (int)sVar3;
        }
      }
      goto LAB_004d6da2;
    }
    local_28 = (byte *)0x4d65b7;
    local_24 = pppuVar17;
    local_20 = pbVar12;
    iVar6 = FUN_004e3a50();
    if (iVar6 < 0) {
      local_2c = (byte *)s_GATENOBASE_00688d68;
    }
    else {
      local_20 = &stack0xffffffe4;
      local_24 = (undefined ***)&stack0xffffffe8;
      local_28 = (byte *)0x21;
      local_2c = (byte *)0x4d6bb2;
      FUN_0050ba00();
      local_50 = (uint)(((&DAT_0097d0cc)[iVar6 * 0x134 + unaff_ESI] & (byte)unaff_EDI) != 0);
      if (local_50 == 0) {
        local_2c = (byte *)s_GATENOGATE_00688d74;
      }
      else {
        if (((&DAT_0097d070)[iVar6 * 0x4d] & 0x20000000) == 0) goto LAB_004d6da2;
        local_20 = (byte *)0xffffffff;
        local_28 = &DAT_0097d053 + iVar6 * 0x134;
        local_24 = (undefined ***)0xffffffff;
        local_2c = (byte *)0x0;
        local_30 = (byte *)0x4d6c10;
        FUN_00625ec0();
        local_2c = (byte *)s_GATEUSED_00688d80;
      }
    }
    local_20 = (byte *)0x0;
    local_24 = (undefined ***)0x0;
    local_28 = (byte *)0x1388;
    local_30 = (byte *)0x4d65dc;
    FUN_0047a890();
    goto LAB_004d65dc;
  }
  iVar16 = (int)param_1 * 0x134;
  local_2c = (byte *)(uint)(byte)(&DAT_0097d044)[iVar16];
  local_20 = (byte *)(int)(short)(&DAT_0097d042)[(int)param_1 * 0x9a];
  local_24 = (undefined ***)0x4d624c;
  FUN_004e39d0();
  local_20 = (byte *)0xffffffff;
  local_24 = (undefined ***)0xffffffff;
  local_28 = (byte *)0x0;
  local_2c = pbVar9;
  local_30 = (byte *)0x4d6260;
  iVar6 = FUN_00530d50();
  if (iVar6 != 0) {
    local_548c = &PTR_FUN_006695c8;
    local_5048 = &PTR_LAB_006695c0;
    local_8 = 2;
    local_20 = (byte *)0x4d628a;
    FUN_00404900();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_20 = (byte *)0x4d6299;
    FUN_00406e60();
LAB_004d6d62:
    local_8 = 0xffffffff;
    local_20 = (byte *)0x4d6d74;
    FUN_004064d0();
    ExceptionList = local_10;
    return;
  }
  if ((uVar10 & 0x40000) == 0) {
    local_20 = (byte *)0x1;
    *(uint *)(DAT_007d3c3c + 0x1dd70) = *(uint *)(DAT_007d3c3c + 0x1dd70) & 0xffffffbf;
    *(uint *)(DAT_007d3c3c + 0x1dd70) = *(uint *)(DAT_007d3c3c + 0x1dd70) | 0x40000;
    local_24 = (undefined ***)0x4d62d0;
    FUN_0046b190();
  }
  local_20 = (byte *)0xffffffff;
  local_24 = (undefined ***)0xffffffff;
  local_2c = (byte *)0x0;
  local_30 = (byte *)0x4d62e8;
  local_28 = &DAT_0097d053 + iVar16;
  FUN_00625ec0();
  local_20 = (byte *)0x0;
  local_24 = (undefined ***)0x40;
  local_28 = (byte *)0x0;
  local_2c = (byte *)0xffffffff;
  local_30 = (byte *)s_DESTTRIAD_00688d5c;
  local_34 = &DAT_009b8aa8;
  local_38 = (undefined *)0x4d6308;
  FUN_00406380();
  iVar6 = 0;
  puVar13 = &DAT_0094f1a8;
  psVar11 = &DAT_0097d150 + (int)pbVar9 * 0x9a;
  do {
    local_20 = (byte *)*puVar13;
    DAT_009b86a0 = 0;
    local_24 = (undefined ***)0x4d6329;
    local_20 = (byte *)FUN_006169a0();
    local_24 = (undefined ***)&DAT_009b86a0;
    local_28 = (byte *)0x4d6334;
    FUN_00645470();
    local_28 = &DAT_00682820;
    local_2c = &DAT_009b86a0;
    local_30 = (byte *)0x4d6343;
    FUN_00645470();
    local_30 = &DAT_00682e9c;
    local_34 = &DAT_009b86a0;
    local_38 = (undefined *)0x4d6352;
    FUN_00645470();
    local_38 = (undefined *)(int)*psVar11;
    local_3c = &DAT_009b86a0;
    local_40 = (undefined *)0x4d6360;
    FUN_004e3a00();
    local_40 = &DAT_00682e98;
    local_44 = &DAT_009b86a0;
    local_48 = 0x4d636f;
    FUN_00645470();
    local_24 = (undefined ***)&DAT_009b86a0;
    local_28 = (byte *)0x4d6383;
    local_20 = (byte *)iVar6;
    FUN_00612a70();
    puVar13 = puVar13 + 1;
    iVar6 = iVar6 + 1;
    psVar11 = psVar11 + 1;
  } while ((int)puVar13 < 0x94f1b4);
  local_20 = (byte *)0x0;
  local_24 = (undefined ***)0x0;
  local_28 = (byte *)0x4d63a1;
  local_34 = (undefined1 *)FUN_00602600();
  if (-1 < (int)local_34) {
    local_28 = (byte *)(&DAT_0094f1a8)[(int)local_34];
    local_20 = (byte *)0xffffffff;
    local_24 = (undefined ***)0xffffffff;
    local_2c = (byte *)0x0;
    local_30 = (byte *)0x4d63bf;
    FUN_00625e50();
    local_30 = (byte *)0xffffffff;
    local_34 = (undefined1 *)0xffffffff;
    local_3c = (undefined1 *)0x1;
    local_40 = (undefined *)0x4d63ce;
    local_38 = &DAT_0097d053 + iVar16;
    FUN_00625ec0();
    pbVar12 = local_20;
    pppuVar17 = local_24;
    unaff_EDI = pbVar9;
    goto LAB_004d6da2;
  }
  goto LAB_004d7b27;
LAB_004d78ac:
  if (param_2 == (undefined ***)0xfffffffe) {
    local_20 = (byte *)(int)(short)(&DAT_0097d042)[(int)pbVar9 * 0x9a];
    local_24 = (undefined ***)(int)(short)(&DAT_0097d040)[(int)pbVar9 * 0x9a];
    local_28 = (byte *)0x4d78da;
    FUN_005109b0();
    local_24 = (undefined ***)(int)(short)(&DAT_0097d042)[(int)pbVar9 * 0x9a];
    local_28 = (byte *)(int)(short)(&DAT_0097d040)[(int)pbVar9 * 0x9a];
    local_20 = (byte *)0x1;
    local_2c = (byte *)0x4d78f7;
    FUN_0046b1f0();
    if ((local_238c == 4) &&
       ((byte *)(uint)(byte)(&DAT_0097d044)[(int)pbVar9 * 0x134] == DAT_00939284)) {
      local_20 = (byte *)0x0;
      local_28 = (byte *)0x4d7926;
      local_24 = (undefined ***)pbVar9;
      FUN_0041a920();
    }
    goto LAB_004d65e6;
  }
  if (param_2 != (undefined ***)0xffffffff) {
    if (param_2 == (undefined ***)0xfffffffd) {
      if (((&DAT_0097d040)[(int)pbVar9 * 0x9a] != (&DAT_00952828)[(int)param_1 * 0x1a]) ||
         ((&DAT_0097d042)[(int)pbVar9 * 0x9a] != (&DAT_0095282a)[(int)param_1 * 0x1a])) {
        local_20 = (byte *)0x0;
        local_28 = param_1;
        local_2c = (byte *)s_Psi_Gate_teleport_00688de8;
        local_30 = (byte *)0x4d79b2;
        local_24 = (undefined ***)pbVar9;
        FUN_006262f0();
        local_20 = (byte *)(int)(short)(&DAT_0097d042)[(int)pbVar9 * 0x9a];
        local_24 = (undefined ***)(int)(short)(&DAT_0097d040)[(int)pbVar9 * 0x9a];
        local_28 = (byte *)0x0;
        local_2c = (byte *)0x4d79d1;
        iVar6 = FUN_00530920();
        if (iVar6 == 0) {
          if (DAT_0093f660 == 0) {
            local_24 = (undefined ***)param_1;
            local_28 = (byte *)0x4d7a11;
            local_20 = pbVar9;
            FUN_004cf380();
          }
          else {
            local_20 = (byte *)0x0;
            local_28 = param_1;
            local_2c = (byte *)0x2410;
            local_30 = (byte *)0x4d79f3;
            local_24 = (undefined ***)pbVar9;
            FUN_00592e10();
            local_20 = (byte *)0x1;
            local_24 = (undefined ***)0x4d7a02;
            FUN_00531300();
          }
        }
      }
    }
    else {
      local_20 = (byte *)0x0;
      local_24 = param_2;
      local_28 = param_1;
      local_2c = (byte *)s_Setting_special_veh_orders_00688dfc;
      local_30 = (byte *)0x4d7a2a;
      FUN_006262f0();
      if (pppuVar17 == (undefined ***)0x80) {
        (&DAT_0095282c)[(int)param_1 * 0xd] =
             (&DAT_0095282c)[(int)param_1 * 0xd] & 0xfcffffff | 0x200;
        (&DAT_0095284e)[(int)param_1 * 0x34] = 10;
        (&DAT_0095283e)[(int)param_1 * 0x1a] = (&DAT_0097d040)[(int)pbVar9 * 0x9a];
        (&DAT_00952846)[(int)param_1 * 0x1a] = (&DAT_0097d042)[(int)pbVar9 * 0x9a];
      }
      else {
        (&DAT_00952839)[(int)param_1 * 0x34] = (char)pppuVar17;
        if (pppuVar17 == (undefined ***)0x18) {
          (&DAT_0095283c)[(int)param_1 * 0x1a] = (&DAT_0097d040)[(int)pbVar9 * 0x9a];
          (&DAT_00952844)[(int)param_1 * 0x1a] = (&DAT_0097d042)[(int)pbVar9 * 0x9a];
          (&DAT_0095282c)[(int)param_1 * 0xd] = (&DAT_0095282c)[(int)param_1 * 0xd] & 0xfffeffff;
          if (param_3 != (undefined ***)0x0) {
            local_20 = param_1;
            local_24 = (undefined ***)0x4d7adb;
            FUN_004d92d0();
          }
        }
        else {
          (&DAT_0095283c)[(int)param_1 * 0x1a] = (&DAT_0097d040)[(int)pbVar9 * 0x9a];
          (&DAT_00952844)[(int)param_1 * 0x1a] = (&DAT_0097d042)[(int)pbVar9 * 0x9a];
        }
      }
      local_24 = (undefined ***)0x4d7b05;
      local_20 = param_1;
      FUN_00593220();
      local_20 = (byte *)0x4d7b12;
      FUN_00531480();
LAB_004d7b12:
      if (param_2 == (undefined ***)0xfffffffe) goto LAB_004d65e6;
      if (param_2 == (undefined ***)0xffffffff) goto LAB_004d7b27;
    }
LAB_004d65dc:
    local_20 = (byte *)0x4d65e6;
    FUN_005310f0();
    goto LAB_004d65e6;
  }
  if (pbVar9 == (byte *)0x270f) {
    pbVar9 = (byte *)0xffffffff;
  }
  local_20 = (byte *)0x1;
  (&DAT_0097d150)[(int)(local_34 + (int)unaff_EDI * 0x9a)] = (short)pbVar9;
  local_24 = (undefined ***)0x4d795b;
  FUN_0046b190();
LAB_004d7b27:
  local_20 = (byte *)DAT_00689370;
  local_24 = (undefined ***)0x4d7b37;
  FUN_00530e50();
LAB_004d65e6:
  if (*(uint *)(DAT_007d3c3c + 0x1dd70) != local_5c) {
    local_20 = (byte *)0x1;
    *(uint *)(DAT_007d3c3c + 0x1dd70) = local_5c;
    local_24 = (undefined ***)0x4d6603;
    FUN_0046b190();
  }
  local_548c = &PTR_FUN_006695c8;
  local_5048 = &PTR_LAB_006695c0;
  local_8 = 0xd;
  local_20 = (byte *)0x4d662c;
  FUN_00404900();
  param_2 = local_225c;
  local_225c[0] = &PTR_FUN_00669d58;
  local_1e18 = &PTR_LAB_00669d50;
  local_8._0_1_ = 0x10;
  local_20 = (byte *)0x4d6658;
  FUN_00605370();
  param_3 = local_c64;
  local_c64[0] = &PTR_FUN_00669754;
  local_820 = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x11;
  local_20 = (byte *)0x4d6686;
  FUN_00607da0();
  local_8._0_1_ = 0xf;
  local_20 = (byte *)0x4d6695;
  FUN_00607040();
  param_3 = local_17b0;
  local_17b0[0] = &PTR_FUN_00669754;
  local_136c = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x12;
  local_20 = (byte *)0x4d66b9;
  FUN_00607da0();
  local_8._0_1_ = 0xe;
  local_20 = (byte *)0x4d66c8;
  FUN_00607040();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_20 = (byte *)0x4d66d7;
  FUN_005d4dd0();
  local_548c = &PTR_FUN_006698d4;
  local_5048 = &PTR_LAB_006698cc;
  local_8 = 0x1b;
  local_20 = (byte *)0x4d66fd;
  FUN_00600f00();
  local_8._0_1_ = 0x1a;
  local_20 = (byte *)0x4d670c;
  FUN_005fa870();
  param_2 = (undefined ***)local_3134;
  *(undefined ***)((int)aiStack_32c0 + *(int *)(aiStack_32c0[1] + 4) + 4) = &PTR_LAB_00669be8;
  *(undefined ***)((int)auStack_2e78 + *(int *)(aiStack_32c0[1] + 4)) = &PTR_LAB_00669be0;
  *(undefined ***)((int)aiStack_32c0 + *(int *)(aiStack_32c0[1] + 8) + 4) = &PTR_LAB_00669bd4;
  *(int *)((int)aiStack_32c0 + *(int *)(aiStack_32c0[1] + 4)) =
       *(int *)(aiStack_32c0[1] + 4) + -0x188;
  *(int *)((int)aiStack_32c0 + *(int *)(aiStack_32c0[1] + 8)) =
       *(int *)(aiStack_32c0[1] + 8) + -0xba0;
  local_8._0_1_ = 0x20;
  local_20 = (byte *)0x4d678c;
  FUN_00612960();
  local_8._0_1_ = 0x1f;
  local_20 = (byte *)0x4d67af;
  FUN_00611a20();
  local_8._0_1_ = 0x1e;
  local_20 = (byte *)0x4d67cc;
  FUN_00610120();
  local_8._0_1_ = 0x1d;
  local_20 = (byte *)0x4d67e6;
  FUN_0060e740();
  piVar14 = (int *)(-(uint)(&stack0x00000000 != (undefined1 *)0x32bc) & (uint)local_3278);
  local_8._0_1_ = 0x1c;
  *(undefined ***)(*(int *)(*piVar14 + 4) + (int)piVar14) = &PTR_LAB_00669a6c;
  *(undefined ***)(*(int *)(*piVar14 + 4) + 0x444 + (int)piVar14) = &PTR_LAB_00669a64;
  *(undefined ***)(*(int *)(*piVar14 + 8) + (int)piVar14) = &PTR_LAB_00669a58;
  *(int *)((int)piVar14 + *(int *)(*piVar14 + 4) + -4) = *(int *)(*piVar14 + 4) + -0x18;
  *(int *)((int)piVar14 + *(int *)(*piVar14 + 8) + -4) = *(int *)(*piVar14 + 8) + -0xa30;
  local_20 = (byte *)0x4d6840;
  FUN_0060d1b0();
  local_8._0_1_ = 0x19;
  local_20 = (byte *)0x4d684f;
  FUN_00609ec0();
  local_20 = (byte *)0x4d685a;
  FUN_00608e10();
  local_20 = (byte *)0x4d6865;
  FUN_005d4dd0();
  local_330c = &PTR_FUN_006698c4;
  param_2 = &local_32e4;
  *(undefined ***)((int)&local_3308 + *(int *)(local_3308 + 4)) = &PTR_FUN_006698c0;
  local_8._0_1_ = 0x21;
  local_20 = (byte *)0x4d689c;
  FUN_00402970();
  local_32f8 = 0;
  local_330c = &PTR_LAB_006693a4;
  local_8._0_1_ = 0x18;
  *(undefined ***)((int)&local_3308 + *(int *)(local_3308 + 4)) = &PTR_FUN_006693a0;
  if (local_3304 != (int *)0x0) {
    param_2 = (undefined ***)0x0;
    if (0 < local_32fc) {
      do {
        local_3300 = (int *)local_3304[3];
        piVar14 = (int *)local_3304[2];
        local_24 = (undefined ***)0x4d68fd;
        local_20 = (byte *)piVar14;
        (*(code *)local_330c[1])();
        if (piVar14 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d6910;
          (*(code *)**(undefined4 **)(*(int *)(*piVar14 + 4) + (int)piVar14))();
        }
        local_3304[2] = 0;
        if (local_3304 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d6931;
          (*(code *)**(undefined4 **)(*(int *)(*local_3304 + 4) + (int)local_3304))();
        }
        local_3304 = local_3300;
        param_2 = (undefined ***)((int)param_2 + 1);
      } while ((int)param_2 < local_32fc);
    }
    local_3304 = (int *)0x0;
    local_32fc = 0;
  }
  local_32f8 = 0;
  local_32e4 = &PTR_FUN_006693ac;
  DAT_009b3374 = local_32e0;
  local_333c = &PTR_FUN_006698c4;
  param_2 = &local_3314;
  *(undefined ***)((int)&local_3338 + *(int *)(local_3338 + 4)) = &PTR_FUN_006698c0;
  local_8._0_1_ = 0x22;
  if (local_3334 != (int *)0x0) {
    iVar6 = 0;
    if (0 < local_332c) {
      do {
        local_3330 = (int *)local_3334[3];
        piVar14 = (int *)local_3334[2];
        local_24 = (undefined ***)0x4d69ce;
        local_20 = (byte *)piVar14;
        (*(code *)local_333c[1])();
        if (piVar14 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d69df;
          (*(code *)**(undefined4 **)(*(int *)(*piVar14 + 4) + (int)piVar14))();
        }
        local_3334[2] = 0;
        if (local_3334 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d6a01;
          (*(code *)**(undefined4 **)(*(int *)(*local_3334 + 4) + (int)local_3334))();
        }
        local_3334 = local_3330;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_332c);
    }
    local_3334 = (int *)0x0;
    local_332c = 0;
  }
  local_3328 = 0;
  local_333c = &PTR_LAB_006693a4;
  local_8._0_1_ = 0x17;
  *(undefined ***)((int)&local_3338 + *(int *)(local_3338 + 4)) = &PTR_FUN_006693a0;
  if (local_3334 != (int *)0x0) {
    iVar6 = 0;
    if (0 < local_332c) {
      do {
        local_3330 = (int *)local_3334[3];
        piVar14 = (int *)local_3334[2];
        local_24 = (undefined ***)0x4d6a7e;
        local_20 = (byte *)piVar14;
        (*(code *)local_333c[1])();
        if (piVar14 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d6a8f;
          (*(code *)**(undefined4 **)(*(int *)(*piVar14 + 4) + (int)piVar14))();
        }
        local_3334[2] = 0;
        if (local_3334 != (int *)0x0) {
          local_20 = (byte *)0x1;
          local_24 = (undefined ***)0x4d6ab1;
          (*(code *)**(undefined4 **)(*(int *)(*local_3334 + 4) + (int)local_3334))();
        }
        local_3334 = local_3330;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_332c);
    }
    local_3334 = (int *)0x0;
    local_332c = 0;
  }
  local_3328 = 0;
  DAT_009b3374 = local_3310;
  local_3314 = &PTR_FUN_006693ac;
  local_8._0_1_ = 0x16;
  local_20 = (byte *)0x4d6aff;
  FUN_005e3820();
  param_2 = local_3ee4;
  local_3ee4[0] = &PTR_FUN_00669754;
  local_3aa0 = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x23;
  local_20 = (byte *)0x4d6b2d;
  FUN_00607da0();
  local_8._0_1_ = 0x15;
  local_20 = (byte *)0x4d6b3c;
  FUN_00607040();
  param_2 = local_4a30;
  local_4a30[0] = &PTR_FUN_00669754;
  local_45ec = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x24;
  local_20 = (byte *)0x4d6b60;
  FUN_00607da0();
  local_8._0_1_ = 0x14;
  local_20 = (byte *)0x4d6b6f;
  FUN_00607040();
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_20 = (byte *)0x4d6b7e;
  FUN_005d45b0();
  local_8 = 0xffffffff;
  local_20 = (byte *)0x4d6b90;
  FUN_005d4dd0();
  ExceptionList = local_10;
  return;
}

