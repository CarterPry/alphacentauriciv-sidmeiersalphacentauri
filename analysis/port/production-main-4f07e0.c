// REA Evidence: ev_8e6d4ee5dd805a0909120dc244a7bd385f2215090029b029e119109b63da9f85
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode, not original source.


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f07e0(void)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  byte *pbVar8;
  uint *******pppppppuVar9;
  int iVar10;
  uint *******pppppppuVar11;
  byte bVar12;
  uint *******pppppppuVar13;
  uint uVar14;
  uint *puVar15;
  uint ******unaff_EBX;
  byte *pbVar16;
  uint *******pppppppuVar17;
  char *pcVar18;
  int *piVar19;
  bool bVar20;
  undefined1 local_331c [44];
  undefined1 *local_32f0;
  undefined **local_32e4;
  int local_32e0;
  int *local_32dc;
  int *local_32d8;
  int local_32d4;
  undefined4 local_32d0;
  undefined **local_32bc;
  undefined4 local_32b8;
  undefined **local_32b4;
  int local_32b0;
  int *local_32ac;
  int *local_32a8;
  int local_32a4;
  undefined4 local_32a0;
  undefined **local_328c;
  undefined4 local_3288;
  int aiStackY_3268 [18];
  undefined1 local_3220 [1024];
  undefined4 auStackY_2e20 [775];
  undefined **local_2204;
  undefined **local_1dc0;
  undefined **local_1758;
  undefined **local_1314;
  undefined **local_c0c;
  undefined **local_7c8;
  uint local_b8 [8];
  undefined1 local_98 [48];
  undefined4 uStackY_68;
  undefined4 uStackY_64;
  undefined *puStackY_60;
  undefined4 uStackY_5c;
  undefined4 uStackY_58;
  uint *******pppppppuStackY_54;
  uint *******pppppppuStackY_50;
  char *pcStackY_4c;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  undefined4 uStackY_3c;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  uint *******local_2c;
  uint *******local_28;
  uint *******local_24;
  uint *******pppppppuVar21;
  uint ******ppppppuVar22;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0065d0cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00645550();
  FUN_004048a0();
  local_8 = 0;
  bVar12 = *(byte *)(DAT_0090ea30 + 2);
  pppppppuVar17 = (uint *******)(uint)bVar12;
  *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xff7fffff;
  psVar2 = DAT_0090ea30;
  ppppppuVar22 = (uint ******)(*(int *)(DAT_0090ea30 + 0x62) + *(int *)(DAT_0090ea30 + 0x6a) * 2);
  local_2c = (uint *******)((int)pppppppuVar17 * 0x20cc);
  if ((int)ppppppuVar22 < (int)local_2c[0x25b376]) {
    ppppppuVar22 = local_2c[0x25b376];
  }
  local_2c[0x25b376] = ppppppuVar22;
  local_24 = pppppppuVar17;
  if (*(int *)(psVar2 + 0x1e) < 0) {
    local_8 = 2;
    FUN_00404900();
    local_2204 = &PTR_FUN_00669d58;
    local_1dc0 = &PTR_LAB_00669d50;
    local_8._0_1_ = 5;
    FUN_00605370();
    local_8._0_1_ = 4;
    FUN_00406880();
    local_8._0_1_ = 3;
    FUN_00406880();
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  else {
    if (((-1 < *(int *)(psVar2 + 0x6a)) && (*(int *)(psVar2 + 0x28) != -0x45)) &&
       ((*(byte *)(psVar2 + 0x18) & 2) == 0)) {
      *(int *)(psVar2 + 0x20) = *(int *)(psVar2 + 0x20) + *(int *)(psVar2 + 0x6a);
      psVar2 = DAT_0090ea30;
    }
    local_34 = (uint *******)(1 << (bVar12 & 0x1f));
    uVar14 = DAT_009a64e8 & 0xff & (uint)local_34;
    if (((uVar14 == 0) ||
        ((((*(uint *)(psVar2 + 0x1c) & 1) != 0 && ((*(uint *)(psVar2 + 0x1c) & 0x80000000) != 0)) &&
         ((*(uint *)(psVar2 + 0x18) & 0x80000000) == 0)))) &&
       (((*(byte *)(psVar2 + 0x18) & 8) != 0 ||
        (((iVar3 = DAT_0094a30c + (psVar2[1] * DAT_0068faf0 + ((int)*psVar2 >> 1)) * 0x2c,
          (*(byte *)(iVar3 + 8) & 2) == 0 || (7 < (*(byte *)(iVar3 + 2) & 0xf))) && (uVar14 == 0))))
       )) {
      local_24 = DAT_00689370;
      local_28 = (uint *******)0x4f0994;
      FUN_004e5fe0();
      psVar2 = DAT_0090ea30;
    }
    ppppppuVar22 = *(uint *******)(psVar2 + 0x28);
    while (ppppppuVar22 != (uint ******)0xffffffbb) {
      if (-1 < (int)ppppppuVar22) {
        pppppppuVar17 = *(uint ********)(psVar2 + 0x28);
        local_28 = (uint *******)(uint)*(byte *)(psVar2 + 2);
        local_24 = (uint *******)0x1;
        local_2c = (uint *******)0x4f0b52;
        iVar3 = FUN_004e4430();
        local_2c = (uint *******)0x0;
        local_30 = DAT_00689370;
        local_38 = (uint *******)0x4f0b63;
        local_34 = pppppppuVar17;
        iVar4 = FUN_005c1850();
        if (*(int *)(DAT_0090ea30 + 0x20) < iVar3 * iVar4) {
          local_8 = 0xc;
          FUN_00404900();
          local_2204 = &PTR_FUN_00669d58;
          local_1dc0 = &PTR_LAB_00669d50;
          local_8._0_1_ = 0xf;
          FUN_00605370();
          local_8._0_1_ = 0xe;
          FUN_00406880();
          local_8._0_1_ = 0xd;
          FUN_00406880();
          local_8 = CONCAT31(local_8._1_3_,0xb);
          goto LAB_004f1efe;
        }
        iVar10 = (int)pppppppuVar17 * 0x34;
        if ((((&DAT_009ab892)[iVar10] == '\b') && ((char)DAT_0090ea30[3] == '\x01')) &&
           (1 < (int)local_2c[0x25b27a])) {
          if (((byte)local_34 & (byte)DAT_009a64e8) == 0) {
            if (3 < DAT_009a64c4) {
              *(int *)(DAT_0090ea30 + 0x1e) = *(int *)(DAT_0090ea30 + 0x1e) + DAT_009a64c4 + -2;
            }
            local_8 = 0x11;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x14;
            FUN_00605370();
            local_8._0_1_ = 0x13;
            FUN_00406880();
            local_8._0_1_ = 0x12;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x10);
            goto LAB_004f1efe;
          }
          if (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0) &&
             ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
            local_8 = 0x16;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x19;
            FUN_00605370();
            local_8._0_1_ = 0x18;
            FUN_00406880();
            local_8._0_1_ = 0x17;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x15);
            goto LAB_004f1efe;
          }
          if (((DAT_009a64c0 & 1) != 0) && ((DAT_009a64c0 & 8) == 0)) {
            local_8 = 0x1b;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x1e;
            FUN_00605370();
            local_8._0_1_ = 0x1d;
            FUN_00406880();
            local_8._0_1_ = 0x1c;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x1a);
            goto LAB_004f1efe;
          }
          local_28 = (uint *******)((int)DAT_0090ea30 + 0x13);
          local_24 = (uint *******)0xffffffff;
          local_2c = (uint *******)0x0;
          local_30 = (uint *******)0x4f0ddc;
          FUN_00625ec0();
          local_30 = (uint *******)0xffffffff;
          local_38 = (uint *******)(&DAT_009ab868 + iVar10);
          local_34 = (uint *******)0xffffffff;
          uStackY_3c = (uint *******)0x1;
          local_40 = (uint *******)0x4f0dee;
          FUN_00625ec0();
          local_40 = (uint *******)s_ABANDONBASE_006897a4;
          local_44 = (uint *******)&DAT_009b86a0;
          DAT_009b86a0 = 0;
          local_48 = (uint *******)0x4f0e04;
          FUN_00645470();
          local_48 = DAT_00689370;
          pppppppuStackY_50 = (uint *******)(uint)*(byte *)(DAT_0090ea30 + 2);
          pcStackY_4c = (char *)0x0;
          pppppppuStackY_54 = (uint *******)0x4f0e1e;
          FUN_004e4430();
          if (0 < *(int *)(DAT_0090ea30 + 0x68)) {
            local_24 = (uint *******)&DAT_009b86a0;
            local_28 = (uint *******)0x4f0e4a;
            FUN_00645470();
            local_24 = (uint *******)0x0;
            local_28 = (uint *******)0x4f0e7b;
            FUN_00625e30();
          }
          if (((&DAT_00946f58)[(uint)*(byte *)(DAT_0090ea30 + 2) * 0x59c] & 0x80) == 0) {
            if (DAT_0093f660 == 0) {
              local_24 = (uint *******)s_talent_sm_pcx_006897cc;
              local_2c = (uint *******)s_ABANDONBASE_006897dc;
              goto LAB_004f0ede;
            }
            iVar5 = 0;
          }
          else if (DAT_0093f660 == 0) {
            local_24 = (uint *******)s_Alopdir_pcx_006897b4;
            local_2c = (uint *******)s_ABANDONBASE_006897c0;
LAB_004f0ede:
            local_28 = (uint *******)0x0;
            local_30 = (uint *******)PTR_s_SCRIPT_00691b0c;
            local_34 = (uint *******)0x4f0ee3;
            iVar5 = FUN_0048c0a0();
          }
          else {
            iVar5 = 0;
          }
          if ((DAT_0093f660 != 0) || (iVar5 < 2)) {
            if (iVar5 != 0) {
              DAT_0090e934 = 1;
            }
            local_8 = 0x20;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x23;
            FUN_00605370();
            local_8._0_1_ = 0x22;
            FUN_00406880();
            local_8._0_1_ = 0x21;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x1f);
            goto LAB_004f1efe;
          }
        }
        psVar2 = DAT_0090ea30;
        if ((int)pppppppuVar17 < 0x40) {
          local_28 = (uint *******)0x0;
        }
        else {
          uVar1 = (&DAT_009ab898)[(int)pppppppuVar17 * 0x1a];
          (&DAT_009ab898)[(int)pppppppuVar17 * 0x1a] = uVar1 | 4;
          pppppppuVar13 = DAT_00689370;
          local_28 = (uint *******)(((byte)~(byte)uVar1 & 4) >> 2);
          DAT_00689370 = pppppppuVar13;
          if (local_28 != (uint *******)0x0) {
            local_28 = local_24;
            local_2c = (uint *******)0x4f0fc6;
            local_24 = pppppppuVar17;
            FUN_0057f4b0();
            DAT_0090ea30 = &DAT_0097d040 + (int)pppppppuVar13 * 0x9a;
            psVar2 = DAT_0090ea30;
            DAT_00689370 = pppppppuVar13;
            if (DAT_00689374 != pppppppuVar13) {
              DAT_00689374 = pppppppuVar13;
              FUN_004e9550();
              FUN_004e80b0();
              FUN_004e9b70();
              FUN_004e9cb0();
              FUN_004eb560();
              psVar2 = DAT_0090ea30;
            }
          }
        }
        *(int *)(psVar2 + 0x20) = *(int *)(psVar2 + 0x20) - iVar3 * iVar4;
        iVar3 = *(int *)(DAT_0090ea30 + 0x6a);
        iVar4 = DAT_00949830;
        if (iVar3 <= DAT_00949830) {
          iVar4 = iVar3;
        }
        if (iVar4 < *(int *)(DAT_0090ea30 + 0x20)) {
          if (((byte)local_34 & (byte)DAT_009a64e8) != 0) {
            iVar4 = DAT_00949830;
            if (iVar3 <= DAT_00949830) {
              iVar4 = iVar3;
            }
            if (iVar4 < 0) {
              iVar3 = 0;
            }
            else if (DAT_00949830 < iVar3) {
              iVar3 = DAT_00949830;
            }
            *(int *)(DAT_0090ea30 + 0x20) = iVar3;
          }
        }
        *(undefined4 *)(DAT_0090ea30 + 0x4e) = *(undefined4 *)(DAT_0090ea30 + 0x20);
        if (DAT_0090ea40 == 0) {
          local_28 = local_24;
          local_30 = (uint *******)0x4f109c;
          local_2c = pppppppuVar17;
          local_24 = (uint *******)(int)*DAT_0090ea30;
          iVar3 = FUN_005c03d0();
          if (-1 < iVar3) {
            if ((&DAT_009ab892)[iVar10] == '\b') {
              if ((((*(uint *)(DAT_0090ea30 + 0x18) & 0x2000000) != 0) ||
                  (local_2c[0x25b373] == (uint ******)0x0)) || (8 < (int)local_2c[0x25b68f])) {
                *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) | 0x1000000;
              }
              *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) | 0x2000000;
            }
            psVar2 = DAT_0090ea30;
            if (((((byte)local_34 & (byte)DAT_009a64e8) != 0) &&
                ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80) != 0)) &&
               ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
              (&DAT_0095282c)[iVar3 * 0xd] = (&DAT_0095282c)[iVar3 * 0xd] | 0x200;
              (&DAT_0095284e)[iVar3 * 0x34] = 0;
            }
            if (pppppppuVar17 == (uint *******)0x8) {
              if ((local_24 == DAT_00939284) && ((DAT_009a64a4 & 0x10) == 0)) {
                local_28 = (uint *******)((int)psVar2 + 0x13);
                local_24 = (uint *******)0x1;
                local_2c = (uint *******)0x4;
                local_30 = (uint *******)0x4f11cd;
                FUN_005230e0();
                (&DAT_0095282c)[iVar3 * 0xd] = (&DAT_0095282c)[iVar3 * 0xd] | 0x800000;
              }
LAB_004f11f4:
              pppppppuVar13 = DAT_00689370;
              if (-1 < (char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar10] * 0x10])
              goto LAB_004f12ea;
              iVar4 = 0;
              if ((-1 < DAT_009a6534) &&
                 ((uint *******)(uint)(byte)(&DAT_0097d044)[DAT_009a6534 * 0x134] == local_24)) {
                iVar4 = 1;
              }
              if ((-1 < DAT_009a6554) &&
                 ((uint *******)(uint)(byte)(&DAT_0097d044)[DAT_009a6554 * 0x134] == local_24)) {
                iVar4 = iVar4 + 1;
              }
              local_24 = (uint *******)0x1f;
              local_28 = (uint *******)0x4f127c;
              iVar5 = FUN_004f80d0();
              if (iVar5 != 0) {
                iVar4 = iVar4 + 1;
              }
              local_24 = pppppppuVar13;
              local_28 = (uint *******)0x1f;
              local_2c = (uint *******)0x4f128e;
              iVar5 = FUN_00421670();
              if (iVar5 != 0) {
                iVar4 = iVar4 + 1;
              }
              local_24 = pppppppuVar13;
              local_28 = (uint *******)0x20;
              local_2c = (uint *******)0x4f12a0;
              iVar5 = FUN_00421670();
              if (iVar5 != 0) {
                iVar4 = iVar4 + 1;
              }
              local_24 = pppppppuVar13;
              local_28 = (uint *******)0x9;
              local_2c = (uint *******)0x4f12b2;
              iVar5 = FUN_00421670();
              if (iVar5 != 0) {
                iVar4 = iVar4 + 1;
              }
              local_24 = pppppppuVar13;
              local_28 = (uint *******)0x1e;
              local_2c = (uint *******)0x4f12c4;
              iVar5 = FUN_00421670();
              if (iVar5 == 0) {
                local_24 = (uint *******)0x11;
                local_28 = (uint *******)0x4f12da;
                pppppppuVar13 = (uint *******)FUN_004f80d0();
                goto joined_r0x004f13a3;
              }
LAB_004f13a5:
              iVar4 = iVar4 + 1;
            }
            else {
              if ((int)pppppppuVar17 < 0x40) goto LAB_004f11f4;
LAB_004f12ea:
              local_28 = DAT_00689370;
              local_2c = (uint *******)0x4f1311;
              iVar4 = FUN_004e6400();
              pppppppuVar13 = DAT_00689370;
              if ((&DAT_009ab88d)[iVar10] == '\x15') {
                bVar12 = (byte)&stack0xffffffe0;
                local_24 = (uint *******)&stack0xffffffec;
                local_28 = (uint *******)0x22;
                local_2c = (uint *******)0x4f1335;
                FUN_0050ba00();
                if (((&DAT_0097d0cc)[(int)(unaff_EBX + (int)pppppppuVar13 * 0x4d)] & bVar12) != 0) {
                  iVar4 = iVar4 + 2;
                }
                if ((-1 < DAT_009a659c) &&
                   ((uint *******)(uint)(byte)(&DAT_0097d044)[DAT_009a659c * 0x134] == local_24)) {
                  iVar4 = iVar4 + 1;
                }
              }
              local_28 = (uint *******)0x4f1396;
              local_24 = pppppppuVar17;
              iVar5 = FUN_005bf1f0();
              pppppppuVar13 = local_28;
              if (iVar5 != 0) {
                iVar4 = iVar4 + 1;
              }
joined_r0x004f13a3:
              if (pppppppuVar13 != (uint *******)0x0) goto LAB_004f13a5;
            }
            pppppppuVar13 = local_24;
            iVar4 = iVar4 + 1;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (6 < iVar4) {
              iVar4 = 6;
            }
            (&DAT_0095284c)[iVar3 * 0x34] = (char)iVar4;
            bVar20 = local_24 == DAT_00939284;
            (&DAT_0095282c)[iVar3 * 0xd] = (&DAT_0095282c)[iVar3 * 0xd] | 0x2000;
            if (bVar20) {
              (&DAT_00952831)[iVar3 * 0x34] = (&DAT_00952831)[iVar3 * 0x34] | 0x10;
            }
            if ((&DAT_009ab892)[iVar10] == '\b') {
              if (*(int *)(DAT_0090ea30 + 0x1e) < 0) {
                psVar2 = DAT_0090ea30;
                psVar2[0x1e] = 0;
                psVar2[0x1f] = 0;
              }
              if ((char)DAT_0090ea30[3] < '\x02') {
                if (1 < (int)local_2c[0x25b27a]) {
                  local_24 = (uint *******)0x4f1432;
                  iVar4 = FUN_005ac060();
                  if (iVar4 == 0) goto LAB_004f143e;
                }
              }
              else {
LAB_004f143e:
                *(char *)(DAT_0090ea30 + 3) = (char)DAT_0090ea30[3] + -1;
              }
              if ((char)DAT_0090ea30[3] < '\x01') {
                (&DAT_00952856)[iVar3 * 0x1a] = 0xffff;
                local_24 = (uint *******)0x4f146b;
                FUN_004e5250();
                local_24 = (uint *******)0x1;
                local_28 = (uint *******)0x4f1472;
                FUN_0046b190();
                local_28 = (uint *******)0x0;
                local_2c = pppppppuVar13;
                local_30 = (uint *******)0x4f147a;
                FUN_005b3380();
                local_8 = 0x2a;
                FUN_00404900();
                local_2204 = &PTR_FUN_00669d58;
                local_1dc0 = &PTR_LAB_00669d50;
                local_8._0_1_ = 0x2d;
                FUN_00605370();
                local_8._0_1_ = 0x2c;
                FUN_00406880();
                local_8._0_1_ = 0x2b;
                FUN_00406880();
                local_8 = CONCAT31(local_8._1_3_,0x29);
                FUN_005d4dd0();
                local_8 = 0xffffffff;
                FUN_004064d0();
                ExceptionList = local_10;
                return;
              }
            }
            *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) | 0x800000;
            *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0x7fffffff;
            if (((byte)local_34 & (byte)DAT_009a64e8) == 0) {
              local_24 = DAT_00689370;
              local_28 = (uint *******)0x4f1551;
              FUN_004e5fe0();
            }
            else {
              local_24 = (uint *******)0x4f1568;
              iVar3 = FUN_004f06e0();
              local_24 = (uint *******)0xffffffff;
              local_28 = (uint *******)0xffffffff;
              local_2c = (uint *******)(&DAT_009ab868 + iVar10);
              local_30 = (uint *******)0x1;
              local_34 = (uint *******)0x4f157f;
              FUN_00625ec0();
              if (((iVar3 == 0) &&
                  (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) == 0 ||
                   ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) == 0)))) ||
                 (((local_28 != (uint *******)0x0 && ((DAT_009a6498 & 4) != 0)) ||
                  ((DAT_009a6498 & 0x2000) != 0)))) {
                if ((local_28 == (uint *******)0x0) || ((DAT_009a6498 & 4) == 0)) {
                  DAT_009b86a0 = 0;
                  if ((byte)(&DAT_009ab892)[iVar10] < 8) {
                    local_24 = (uint *******)&DAT_009b86a0;
                    local_28 = (uint *******)0x4f162f;
                    FUN_00645470();
                    pppppppuVar13 = (uint *******)0x400;
                  }
                  else {
                    local_24 = (uint *******)&DAT_009b86a0;
                    local_28 = (uint *******)0x4f1648;
                    FUN_00645470();
                    pppppppuVar13 = (uint *******)0x2;
                  }
                }
                else {
                  local_28 = (uint *******)(uint)*(byte *)(DAT_0090ea30 + 2);
                  local_24 = (uint *******)0x1;
                  local_2c = (uint *******)0x4f15d0;
                  iVar4 = FUN_004e4430();
                  local_2c = (uint *******)0x0;
                  local_30 = DAT_00689370;
                  local_38 = (uint *******)0x4f15e4;
                  local_34 = pppppppuVar17;
                  iVar5 = FUN_005c1850();
                  local_38 = (uint *******)(iVar4 * iVar5);
                  uStackY_3c = (uint *******)0x0;
                  local_40 = (uint *******)0x4f15ef;
                  FUN_00625e30();
                  local_40 = (uint *******)s_PRODUCEPROTO_006897e8;
                  local_44 = (uint *******)&DAT_009b86a0;
                  DAT_009b86a0 = 0;
                  local_48 = (uint *******)0x4f1605;
                  FUN_00645470();
                  pppppppuVar13 = (uint *******)0x4;
                }
              }
              else {
                local_24 = (uint *******)&DAT_009b86a0;
                DAT_009b86a0 = 0;
                local_28 = (uint *******)0x4f1668;
                FUN_00645470();
                pppppppuVar13 = (uint *******)0x0;
              }
              if (iVar3 == 0) {
                if (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0) &&
                   ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
                  local_24 = (uint *******)&DAT_009b86a0;
                  local_28 = (uint *******)0x4f16bd;
                  FUN_00645470();
                }
              }
              else {
                local_24 = (uint *******)0x1;
                local_28 = (uint *******)0x4f1686;
                FUN_00625e30();
                local_28 = (uint *******)&DAT_00689810;
                local_2c = (uint *******)&DAT_009b86a0;
                local_30 = (uint *******)0x4f1695;
                FUN_00645470();
              }
              if (((&DAT_00946f58)[(int)local_24 * 0x59c] & 0x80) == 0) {
                if (((int)pppppppuVar17 < 0x40) &&
                   (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar10] * 0x10] < '\0' ||
                    (pppppppuVar17 == (uint *******)0xf)))) {
                  if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x02') {
                    local_24 = (uint *******)s_chiron_sm_pcx_00689884;
                  }
                  else if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x01') {
                    if (pppppppuVar17 == (uint *******)0xe) {
                      local_24 = (uint *******)s_sealrk_sm_pcx_00689894;
                    }
                    else {
                      local_24 = (uint *******)s_isle_sm_pcx_006898a4;
                    }
                  }
                  else {
                    local_24 = (uint *******)s_native_sm_pcx_006898b0;
                  }
                }
                else if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x02') {
                  local_24 = (uint *******)s_air_sm_pcx_006898c0;
                }
                else {
                  local_24 = (uint *******)s_navun_sm_pcx_006898cc;
                  if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] != '\x01') {
                    local_24 = (uint *******)s_unit_sm_pcx_006898dc;
                  }
                }
              }
              else if (((int)pppppppuVar17 < 0x40) &&
                      (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar10] * 0x10] < '\0' ||
                       (pppppppuVar17 == (uint *******)0xf)))) {
                if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x02') {
                  local_24 = (uint *******)s_chiron_sm_pcx_00689818;
                }
                else if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x01') {
                  if (pppppppuVar17 == (uint *******)0xe) {
                    local_24 = (uint *******)s_sealrk_sm_pcx_00689828;
                  }
                  else {
                    local_24 = (uint *******)s_isle_sm_pcx_00689838;
                  }
                }
                else {
                  local_24 = (uint *******)s_native_sm_pcx_00689844;
                }
              }
              else if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x02') {
                local_24 = (uint *******)s_alair_sm_pcx_00689854;
              }
              else {
                local_24 = (uint *******)s_navun_sm_pcx_00689864;
                if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] != '\x01') {
                  local_24 = (uint *******)s_alunit_sm_pcx_00689874;
                }
              }
              local_28 = (uint *******)0xffffffff;
              local_30 = (uint *******)&DAT_009b86a0;
              local_34 = (uint *******)0x4f182a;
              local_2c = pppppppuVar13;
              FUN_0048c650();
              if (((iVar3 == 0) && ((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0)) &&
                 ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
                local_24 = DAT_00689370;
                local_28 = (uint *******)0x4f1851;
                FUN_004e5fe0();
              }
            }
            if (local_28 != (uint *******)0x0) {
              local_24 = (uint *******)0x4f1868;
              FUN_00476ee0();
              if ((DAT_0093f660 == 0) || (((byte)local_34 & (byte)DAT_009a64e8) == 0)) {
                DAT_0090ea3c = 0;
                if ((((byte)local_34 & (byte)DAT_009a64e8) == 0) ||
                   ((_DAT_009a6494 & 0x100000) != 0)) {
                  uVar14 = 0;
                  do {
                    uVar6 = uVar14;
                    if (0x3f < (int)uVar14) {
                      uVar6 = uVar14 & 0x8000003f;
                      if ((int)uVar6 < 0) {
                        uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
                      }
                      uVar6 = uVar6 + (int)local_24 * 0x40;
                    }
                    uVar1 = (&DAT_009ab898)[uVar6 * 0x1a];
                    if ((((uVar1 & 1) != 0) && ((uVar1 & 4) != 0)) && ((uVar1 & 0x100) != 0)) {
                      local_28 = (uint *******)0x4f18ef;
                      FUN_004f0460();
                    }
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < 0x80);
                }
              }
              else {
                pbVar16 = (byte *)((int)&DAT_009ab898 + iVar10 + 1);
                *pbVar16 = *pbVar16 | 1;
              }
            }
            if (((int)pppppppuVar17 < 0x40) &&
               (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar10] * 0x10] < '\0' ||
                (pppppppuVar17 == (uint *******)0xf)))) {
              local_24 = (uint *******)0x4f1926;
              FUN_00477640();
            }
            else {
              if (((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x01') &&
                 ((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar10] * 0x10] != '\0')) {
                local_24 = (uint *******)0x4f1960;
                FUN_00477440();
              }
              if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] == '\x02') {
                local_24 = (uint *******)0x4f1983;
                FUN_00477540();
              }
            }
            local_8 = 0x2f;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x32;
            FUN_00605370();
            local_8._0_1_ = 0x31;
            FUN_00406880();
            local_8._0_1_ = 0x30;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x2e);
            goto LAB_004f1efe;
          }
        }
        local_8 = 0x25;
        FUN_00404900();
        local_2204 = &PTR_FUN_00669d58;
        local_1dc0 = &PTR_LAB_00669d50;
        local_8._0_1_ = 0x28;
        FUN_00605370();
        local_8._0_1_ = 0x27;
        FUN_00406880();
        local_8._0_1_ = 0x26;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,0x24);
        goto LAB_004f1efe;
      }
      pppppppuVar13 = (uint *******)-(int)ppppppuVar22;
      if ((int)pppppppuVar13 < 0x46) {
        pppppppuVar21 = (uint *******)0xffffffff;
      }
      else {
        pppppppuVar21 = (uint *******)((int)pppppppuVar13 + -0x46);
      }
      local_28 = (uint *******)(uint)*(byte *)(psVar2 + 2);
      local_24 = (uint *******)0x1;
      local_2c = (uint *******)0x4f09f0;
      iVar3 = FUN_004e4430();
      iVar3 = iVar3 * (&DAT_009a4b74)[(int)ppppppuVar22 * -0xc];
      if ((iVar3 <= *(int *)(DAT_0090ea30 + 0x20)) && (pppppppuVar21 == (uint *******)0x20)) {
        local_24 = (uint *******)0x4f0a1c;
        iVar4 = FUN_005ac680();
        if (iVar4 == 0) {
          local_24 = (uint *******)s_asctran_sm_pcx_006898e8;
          local_28 = (uint *******)0xffffffff;
          local_2c = (uint *******)0x1000;
          local_30 = (uint *******)s_ASCENTNOTYET_006898f8;
          local_34 = (uint *******)0x4f1a17;
          FUN_0048c650();
          local_8 = 0x34;
          FUN_00404900();
          local_2204 = &PTR_FUN_00669d58;
          local_1dc0 = &PTR_LAB_00669d50;
          local_8._0_1_ = 0x37;
          FUN_00605370();
          local_8._0_1_ = 0x36;
          FUN_00406880();
          local_8._0_1_ = 0x35;
          FUN_00406880();
          local_8 = CONCAT31(local_8._1_3_,0x33);
          goto LAB_004f1efe;
        }
LAB_004f0a36:
        if ((&DAT_009a6514)[(int)pppppppuVar21] == -1) {
          if ((int)pppppppuVar21 < 0) goto LAB_004f0a4f;
LAB_004f1d42:
          if (*(int *)(DAT_0090ea30 + 0x20) < iVar3) {
            local_8 = 0x43;
            FUN_00404900();
            local_2204 = &PTR_FUN_00669d58;
            local_1dc0 = &PTR_LAB_00669d50;
            local_8._0_1_ = 0x46;
            FUN_00605370();
            local_8._0_1_ = 0x45;
            FUN_00406880();
            local_8._0_1_ = 0x44;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x42);
            goto LAB_004f1efe;
          }
          psVar2 = DAT_0090ea30;
          if ((int)pppppppuVar21 < 0) goto LAB_004f1e7f;
          if ((((byte)local_34 & (byte)DAT_009a64e8) != 0) ||
             (local_38 = (uint *******)0x0, DAT_009a64cc < 1)) goto LAB_004f1e7f;
          pbVar16 = &DAT_0097d044;
          goto LAB_004f1df4;
        }
        if ((((byte)local_34 & (byte)DAT_009a64e8) == 0) ||
           (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0 &&
            ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)))) {
          local_24 = DAT_00689370;
          local_28 = (uint *******)0x4f1bac;
          FUN_004e5fe0();
        }
        else {
          local_24 = (uint *******)0xffffffff;
          local_28 = (uint *******)(&DAT_009a4b68)[(int)ppppppuVar22 * -0xc];
          local_2c = (uint *******)0x1;
          local_30 = (uint *******)0x4f1ace;
          FUN_00625e50();
          local_30 = (uint *******)s_ALREADYPROJECT_00689908;
          local_34 = (uint *******)&DAT_009b86a0;
          DAT_009b86a0 = 0;
          local_38 = (uint *******)0x4f1ae4;
          FUN_00645470();
          if (-1 < (int)(&DAT_009a6514)[(int)pppppppuVar21]) {
            local_24 = (uint *******)0xffffffff;
            iVar3 = (&DAT_009a6514)[(int)pppppppuVar21] * 0x134;
            local_28 = (uint *******)(&DAT_0097d053 + iVar3);
            local_2c = (uint *******)0x2;
            local_30 = (uint *******)0x4f1b13;
            FUN_00625ec0();
            local_30 = (uint *******)0xffffffff;
            uVar14 = (uint)(byte)(&DAT_0097d044)[iVar3];
            local_34 = (uint *******)0xffffffff;
            DAT_009bbff0 = (&DAT_00946d50)[uVar14 * 0x167];
            DAT_009bbfec = (&DAT_00946d4c)[uVar14 * 0x167];
            local_38 = (uint *******)(&DAT_00946d34 + uVar14 * 0x59c);
            uStackY_3c = (uint *******)0x3;
            local_40 = (uint *******)0x4f1b53;
            FUN_00625ec0();
          }
          local_24 = (uint *******)&DAT_009b86a0;
          local_28 = (uint *******)0x4f1b7f;
          FUN_00645470();
          local_24 = (uint *******)s_secproj_sm_pcx_00689924;
          local_28 = (uint *******)0xffffffff;
          local_2c = (uint *******)0x200;
          local_30 = (uint *******)&DAT_009b86a0;
          local_34 = (uint *******)0x4f1b9a;
          FUN_0048c650();
        }
        local_8 = 0x39;
        FUN_00404900();
        local_2204 = &PTR_FUN_00669d58;
        local_1dc0 = &PTR_LAB_00669d50;
        local_8._0_1_ = 0x3c;
        FUN_00605370();
        local_8._0_1_ = 0x3b;
        FUN_00406880();
        local_8._0_1_ = 0x3a;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,0x38);
        goto LAB_004f1efe;
      }
      if (-1 < (int)pppppppuVar21) goto LAB_004f0a36;
LAB_004f0a4f:
      pppppppuVar9 = DAT_00689370;
      if (0x40 < (int)pppppppuVar13) goto LAB_004f1d42;
      bVar12 = (byte)&stack0xffffffe0;
      local_24 = (uint *******)&stack0xffffffec;
      local_2c = (uint *******)0x4f0a72;
      local_28 = pppppppuVar13;
      FUN_0050ba00();
      local_30 = (uint *******)
                 (uint)(((&DAT_0097d0cc)[(int)(unaff_EBX + (int)pppppppuVar9 * 0x4d)] & bVar12) != 0
                       );
      if (local_30 == (uint *******)0x0) goto LAB_004f1d42;
      local_24 = (uint *******)0x4f0aa8;
      iVar3 = FUN_004f06e0();
      if (iVar3 == 0) {
        if ((((byte)local_34 & (byte)DAT_009a64e8) == 0) ||
           (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0 &&
            ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)))) {
          local_24 = DAT_00689370;
          local_28 = (uint *******)0x4f1cc0;
          FUN_004e5fe0();
        }
        else {
          local_24 = (uint *******)0xffffffff;
          local_28 = (uint *******)(&DAT_009a4b68)[(int)ppppppuVar22 * -0xc];
          local_2c = (uint *******)0x1;
          local_30 = (uint *******)0x4f1c62;
          FUN_00625e50();
          if (((&DAT_00946f58)[(int)pppppppuVar17 * 0x59c] & 0x80) == 0) {
            local_24 = (uint *******)s_facblt_sm_pcx_00689954;
            local_28 = (uint *******)0xffffffff;
            local_2c = (uint *******)0x200;
            local_30 = (uint *******)s_ALREADYFACILITY_00689964;
            local_34 = (uint *******)0x4f1cad;
            FUN_0048c650();
          }
          else {
            local_24 = (uint *******)s_alfacblt_sm_pcx_00689934;
            local_28 = (uint *******)0xffffffff;
            local_2c = (uint *******)0x200;
            local_30 = (uint *******)s_ALREADYFACILITY_00689944;
            local_34 = (uint *******)0x4f1c92;
            FUN_0048c650();
          }
        }
        local_8 = 0x3e;
        FUN_00404900();
        local_2204 = &PTR_FUN_00669d58;
        local_1dc0 = &PTR_LAB_00669d50;
        local_8._0_1_ = 0x41;
        FUN_00605370();
        local_8._0_1_ = 0x40;
        FUN_00406880();
        local_8._0_1_ = 0x3f;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,0x3d);
        goto LAB_004f1efe;
      }
      psVar2 = DAT_0090ea30;
      ppppppuVar22 = *(uint *******)(DAT_0090ea30 + 0x28);
    }
    local_8 = 7;
    FUN_00404900();
    local_2204 = &PTR_FUN_00669d58;
    local_1dc0 = &PTR_LAB_00669d50;
    local_8._0_1_ = 10;
    FUN_00605370();
    local_8._0_1_ = 9;
    FUN_00406880();
    local_8._0_1_ = 8;
    FUN_00406880();
    local_8 = CONCAT31(local_8._1_3_,6);
  }
LAB_004f1efe:
  FUN_005d4dd0();
  local_8 = 0xffffffff;
  FUN_004064d0();
  ExceptionList = local_10;
  return;
LAB_004f1df4:
  do {
    if ((((byte)DAT_009a64e8 & (byte)(1 << (*pbVar16 & 0x1f))) != 0) &&
       (*(int *)(pbVar16 + 0x4c) == *(int *)(psVar2 + 0x28))) {
      if (*(int *)(pbVar16 + 0x4c) == -0x66) {
        local_24 = (uint *******)0x4f1e1e;
        iVar4 = FUN_005ac680();
        psVar2 = DAT_0090ea30;
        if (iVar4 == 0) goto LAB_004f1e61;
      }
      local_28 = (uint *******)(uint)*pbVar16;
      local_24 = (uint *******)0x1;
      local_2c = (uint *******)0x4f1e33;
      iVar4 = FUN_004e4430();
      psVar2 = DAT_0090ea30;
      if (iVar4 * (&DAT_009a4b74)[(int)ppppppuVar22 * -0xc] <=
          *(int *)(pbVar16 + 0xd0) + *(int *)(pbVar16 + 0x3c)) {
        local_8 = 0x48;
        FUN_00404900();
        local_2204 = &PTR_FUN_00669d58;
        local_1dc0 = &PTR_LAB_00669d50;
        local_8._0_1_ = 0x4b;
        FUN_00605370();
        local_8._0_1_ = 0x4a;
        FUN_00406880();
        local_8._0_1_ = 0x49;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,0x47);
        goto LAB_004f1efe;
      }
    }
LAB_004f1e61:
    local_38 = (uint *******)((int)local_38 + 1);
    pbVar16 = pbVar16 + 0x134;
    pppppppuVar17 = local_24;
  } while ((int)local_38 < DAT_009a64cc);
LAB_004f1e7f:
  if ((int)pppppppuVar13 < 1) {
    local_8 = 0x4d;
    FUN_00404900();
    local_2204 = &PTR_FUN_00669d58;
    local_1dc0 = &PTR_LAB_00669d50;
    local_8._0_1_ = 0x50;
    FUN_00605370();
    local_8._0_1_ = 0x4f;
    FUN_00406880();
    local_8._0_1_ = 0x4e;
    FUN_00406880();
    local_8 = CONCAT31(local_8._1_3_,0x4c);
    goto LAB_004f1efe;
  }
  *(int *)(psVar2 + 0x20) = *(int *)(psVar2 + 0x20) - iVar3;
  iVar3 = *(int *)(DAT_0090ea30 + 0x6a);
  iVar4 = DAT_00949830;
  if (iVar3 <= DAT_00949830) {
    iVar4 = iVar3;
  }
  if (iVar4 < *(int *)(DAT_0090ea30 + 0x20)) {
    if (((byte)DAT_009a64e8 & (byte)local_34) != 0) {
      iVar4 = DAT_00949830;
      if (iVar3 <= DAT_00949830) {
        iVar4 = iVar3;
      }
      if (iVar4 < 0) {
        iVar3 = 0;
      }
      else if (DAT_00949830 < iVar3) {
        iVar3 = DAT_00949830;
      }
      *(int *)(DAT_0090ea30 + 0x20) = iVar3;
    }
  }
  *(undefined4 *)(DAT_0090ea30 + 0x4e) = *(undefined4 *)(DAT_0090ea30 + 0x20);
  *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) | 0x800000;
  *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0x7fffffff;
  if ((pppppppuVar13 == (uint *******)0x1) && (iVar3 = 0, 0 < DAT_009a64cc)) {
    iVar4 = 0;
    do {
      if ((uint *******)(uint)(byte)(&DAT_0097d044)[iVar4] == pppppppuVar17) {
        bVar12 = (byte)&stack0xffffffe0;
        local_24 = (uint *******)&stack0xffffffec;
        local_28 = (uint *******)0x1;
        local_2c = (uint *******)0x4f2051;
        FUN_0050ba00();
        (&DAT_0097d0cc)[(int)unaff_EBX + iVar4] = (&DAT_0097d0cc)[(int)unaff_EBX + iVar4] & ~bVar12;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x134;
    } while (iVar3 < DAT_009a64cc);
  }
  pppppppuVar9 = DAT_00689370;
  if ((int)pppppppuVar21 < 0) {
    if (local_28 == (uint *******)0x0) {
      bVar12 = (byte)&stack0xffffffe0;
      local_24 = (uint *******)&stack0xffffffec;
      local_2c = (uint *******)0x4f21a7;
      local_28 = pppppppuVar13;
      FUN_0050ba00();
      (&DAT_0097d0cc)[(int)(unaff_EBX + (int)pppppppuVar9 * 0x4d)] =
           (&DAT_0097d0cc)[(int)(unaff_EBX + (int)pppppppuVar9 * 0x4d)] | bVar12;
    }
    else {
      puVar7 = (undefined *)((int)pppppppuVar13 + (int)pppppppuVar17 * 0x833);
      *(int *)(&DAT_0096d0e4 + (int)puVar7 * 4) = *(int *)(&DAT_0096d0e4 + (int)puVar7 * 4) + 1;
      if (((uint)local_2c[0x25b278] & 0x200) == 0) {
        iVar4 = 0;
        iVar3 = DAT_0094a30c;
        if (0 < DAT_00949884) {
          do {
            *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | (byte)local_34;
            if (pppppppuVar17 != (uint *******)0x0) {
              *(undefined4 *)(iVar3 + 0xc + (int)pppppppuVar17 * 4) = *(undefined4 *)(iVar3 + 8);
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x2c;
          } while (iVar4 < DAT_00949884);
        }
        if (0 < DAT_009a64cc) {
          pbVar8 = &DAT_0097d04a;
          pbVar16 = (byte *)((int)pppppppuVar17 + 0x97d04b);
          iVar3 = DAT_009a64cc;
          do {
            *pbVar8 = *pbVar8 | (byte)local_34;
            *pbVar16 = pbVar8[-4];
            pbVar8 = pbVar8 + 0x134;
            iVar3 = iVar3 + -1;
            pbVar16 = pbVar16 + 0x134;
          } while (iVar3 != 0);
        }
        local_2c[0x25b278] = (uint ******)((uint)local_2c[0x25b278] | 0x200);
        if ((pppppppuVar17 == DAT_00939284) && ((DAT_009a64c0 & 1) == 0)) {
          local_24 = (uint *******)s_space_sm_pcx_00689974;
          local_28 = (uint *******)0x0;
          local_2c = (uint *******)s_SEEMAP_00689984;
          local_30 = (uint *******)PTR_s_SCRIPT_00691b0c;
          local_34 = (uint *******)0x4f2175;
          FUN_0048c0a0();
          local_34 = (uint *******)0x4f217a;
          FUN_00592a80();
          local_34 = (uint *******)0x1;
          local_38 = (uint *******)0x4f2181;
          FUN_0046b190();
          FUN_005d5a70();
        }
      }
    }
  }
  else {
    (&DAT_009a6514)[(int)pppppppuVar21] = DAT_00689370;
  }
  if (pppppppuVar13 == (uint *******)0x8) {
    *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xfffff3ff;
    local_24 = (uint *******)(int)*DAT_0090ea30;
    local_28 = (uint *******)0x4f21ee;
    local_28 = (uint *******)FUN_005bfe90();
    local_2c = (uint *******)0x4f21f4;
    for (iVar3 = FUN_005b8e10(); -1 < iVar3; iVar3 = (int)(short)(&DAT_00952858)[iVar3 * 0x1a]) {
      if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] == '\f') {
        (&DAT_00952839)[iVar3 * 0x34] = 0;
      }
      if (iVar3 < 0) break;
    }
  }
  local_24 = (uint *******)(int)DAT_0090ea30[1];
  local_28 = (uint *******)(int)*DAT_0090ea30;
  local_2c = (uint *******)0x4f223e;
  FUN_0046af40();
  local_2c = DAT_00689370;
  local_30 = (uint *******)0x4f2249;
  pppppppuVar9 = (uint *******)FUN_004f06e0();
  if ((pppppppuVar17 == DAT_00939284) || (0x27 < (int)pppppppuVar13)) {
    pppppppuVar9 = (uint *******)0xffffffff;
    local_24 = (uint *******)0xffffffff;
    local_28 = (uint *******)(&DAT_009a4b68)[(int)ppppppuVar22 * -0xc];
    local_2c = (uint *******)0x1;
    local_30 = (uint *******)0x4f227c;
    FUN_00625e50();
    local_30 = (uint *******)0xffffffff;
    local_34 = (uint *******)0xffffffff;
    iVar3 = (int)pppppppuVar17 * 0x59c;
    local_38 = (uint *******)(&DAT_00946d54 + iVar3);
    uStackY_3c = (uint *******)0x2;
    local_40 = (uint *******)0x4f229c;
    FUN_00625ec0();
    if (pppppppuVar17 == DAT_00939284) {
      if (pppppppuVar13 == (uint *******)0x28) {
        local_24 = (uint *******)0x1;
        local_28 = (uint *******)0x0;
        local_2c = (uint *******)0x26;
        local_30 = (uint *******)0x4f22bf;
        FUN_005230e0();
        local_30 = (uint *******)&local_40;
        local_38 = (uint *******)0x4f22c9;
        local_34 = pppppppuVar17;
        local_38 = (uint *******)FUN_005247b0();
        uStackY_3c = (uint *******)0x0;
        local_40 = (uint *******)0x4f22d1;
        FUN_00625e30();
        local_44 = (uint *******)0x1;
        local_48 = (uint *******)0x4f22dc;
        FUN_00625e30();
        local_48 = DAT_00949868;
        pcStackY_4c = (char *)0x2;
        pppppppuStackY_50 = (uint *******)0x4f22e9;
        FUN_00625e30();
        pppppppuStackY_50 = DAT_00949864;
        pppppppuStackY_54 = (uint *******)0x3;
        uStackY_58 = 0x4f22f7;
        FUN_00625e30();
        uStackY_58 = 0xffffffff;
        puStackY_60 = (undefined *)((int)DAT_0090ea30 + 0x13);
        uStackY_5c = 0xffffffff;
        uStackY_64 = 0;
        uStackY_68 = 0x4f230c;
        FUN_00625ec0();
        pppppppuVar9 = (uint *******)0x0;
        local_24 = (uint *******)s_subgen_sm_pcx_0068998c;
        local_28 = (uint *******)0x0;
        local_2c = (uint *******)s_GENERATORME_0068999c;
        local_30 = (uint *******)PTR_s_SCRIPT_00691b0c;
        local_34 = (uint *******)0x4f2328;
        FUN_0048c0a0();
      }
      else {
        if ((int)pppppppuVar13 < 0x46) {
          local_24 = (uint *******)&stack0xffffffec;
          local_2c = (uint *******)0x4f2347;
          local_28 = pppppppuVar13;
          FUN_0050ba00();
          unaff_EBX = (uint ******)
                      (uint)((*(byte *)((int)local_2c + (int)(unaff_EBX + 0x25b38e)) &
                             (byte)local_30) != 0);
          if (((unaff_EBX == (uint ******)0x0) && ((DAT_009a64c0 & 1) == 0)) &&
             ((DAT_009a6498 & 1) != 0)) {
            local_28 = (uint *******)((int)DAT_0090ea30 + 0x13);
            local_24 = (uint *******)0xffffffff;
            local_2c = (uint *******)0x0;
            local_30 = (uint *******)0x4f2399;
            FUN_00625ec0();
            local_24 = (uint *******)0x0;
            local_28 = (uint *******)0x4f23ab;
            FUN_006015b0();
            local_24 = (uint *******)0x4f23bb;
            FUN_00601b20();
            if ((DAT_009a6498 & 1) != 0) {
              DAT_009b86a0 = 0;
              if ((int)pppppppuVar21 < 0) {
                local_24 = (uint *******)&DAT_009b86a0;
                local_28 = (uint *******)0x4f241c;
                FUN_00645470();
                local_2c = (uint *******)local_98;
                local_28 = (uint *******)0xa;
                local_34 = (uint *******)0x4f242b;
                local_30 = pppppppuVar13;
                FUN_0064fc88();
                local_34 = (uint *******)local_98;
                local_38 = (uint *******)&DAT_009b86a0;
                uStackY_3c = (uint *******)0x4f243c;
                FUN_00645470();
                uStackY_3c = (uint *******)&local_30;
                local_40 = (uint *******)&stack0xffffffec;
                local_48 = (uint *******)0x4f244a;
                local_44 = pppppppuVar13;
                FUN_0050ba00();
                *(byte *)((int)local_2c + 0x96ce38) =
                     *(byte *)((int)local_2c + 0x96ce38) | (byte)local_30;
              }
              else {
                local_24 = (uint *******)&DAT_009b86a0;
                local_28 = (uint *******)0x4f23e5;
                FUN_00645470();
                local_2c = (uint *******)local_98;
                local_28 = (uint *******)0xa;
                local_34 = (uint *******)0x4f23f7;
                local_30 = pppppppuVar21;
                FUN_0064fc88();
                local_34 = (uint *******)local_98;
                local_38 = (uint *******)&DAT_009b86a0;
                uStackY_3c = (uint *******)0x4f2408;
                FUN_00645470();
              }
              local_24 = (uint *******)0x80;
              local_28 = (uint *******)0x0;
              local_2c = (uint *******)0xffffffff;
              local_30 = (uint *******)&DAT_009b86a0;
              local_34 = (uint *******)s_BLURBS_006899b4;
              local_38 = (uint *******)0x4f247d;
              FUN_00406380();
              local_24 = (uint *******)0x4f248d;
              FUN_00601980();
              local_24 = (uint *******)0x4f249d;
              FUN_00601980();
              local_24 = (uint *******)0x4f24ad;
              FUN_00601980();
            }
            local_24 = (uint *******)&DAT_009b86a0;
            DAT_009b86a0 = 0;
            local_28 = (uint *******)0x4f24c3;
            FUN_00645470();
            if (((int)pppppppuVar13 < 0x41) || (0x45 < (int)pppppppuVar13)) {
              local_24 = (uint *******)local_98;
              local_2c = (uint *******)0x4f24fa;
              local_28 = pppppppuVar13;
              FUN_0064fc88();
            }
            else {
              local_24 = (uint *******)local_98;
              local_28 = (uint *******)((int)pppppppuVar13 + -0x1f);
              local_2c = (uint *******)0x4f24e2;
              FUN_0064fc88();
            }
            local_2c = (uint *******)local_98;
            local_30 = (uint *******)&DAT_009b86a0;
            local_34 = (uint *******)0x4f250b;
            FUN_00645470();
            if ((0x21 < (int)pppppppuVar13) && ((int)pppppppuVar13 < 0x2a)) {
              local_24 = (uint *******)local_98;
              local_28 = (uint *******)0x0;
              local_2c = (uint *******)0x4f2528;
              FUN_0064fc88();
              local_2c = (uint *******)local_98;
              local_30 = (uint *******)&DAT_009b86a0;
              local_34 = (uint *******)0x4f2539;
              FUN_00645470();
            }
            local_24 = (uint *******)&DAT_009b86a0;
            local_28 = (uint *******)0x4f254b;
            FUN_00645470();
            if (((_DAT_009a6494 & 0x4000) != 0) && (pppppppuVar17 == DAT_00939284)) {
              if (((byte)local_34 & (byte)DAT_009a64e8) != 0) {
                FUN_004c6ea0();
                local_24 = (uint *******)0x4f2585;
                FUN_004c6c20();
                FUN_004c6920();
              }
            }
            pcVar18 = s_PRODUCEX_006899e0;
            local_24 = (uint *******)&DAT_009b86a0;
            DAT_009b86a0 = 0;
            local_28 = (uint *******)0x4f25a5;
            FUN_00645470();
            if (pcVar18 == (char *)0x0) {
              if (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0) &&
                 ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
                local_24 = (uint *******)&DAT_009b86a0;
                local_28 = (uint *******)0x4f25f8;
                FUN_00645470();
              }
            }
            else {
              local_24 = (uint *******)0x1;
              local_28 = (uint *******)0x4f25c1;
              FUN_00625e30();
              local_28 = (uint *******)&DAT_006899ec;
              local_2c = (uint *******)&DAT_009b86a0;
              local_30 = (uint *******)0x4f25d0;
              FUN_00645470();
            }
            pppppppuVar9 = (uint *******)0x0;
            if (((&DAT_00946f58)[iVar3] & 0x80) == 0) {
              local_24 = (uint *******)s_facblt_sm_pcx_00689a04;
            }
            else {
              local_24 = (uint *******)s_alfacblt_sm_pcx_006899f4;
            }
            local_28 = (uint *******)0xffffffff;
            local_2c = (uint *******)0x1;
            local_30 = (uint *******)&DAT_009b86a0;
            local_34 = (uint *******)0x4f2621;
            FUN_0048c650();
            if (((_DAT_009a6494 & 0x4000) != 0) && ((_DAT_009a6494 & 0x20000) != 0)) {
              pppppppuVar9 = (uint *******)0x7d0;
              local_24 = (uint *******)0x4f264c;
              FUN_004c6600();
            }
            goto LAB_004f2752;
          }
        }
        pcVar18 = s_PRODUCE_00689a14;
        local_24 = (uint *******)&DAT_009b86a0;
        DAT_009b86a0 = 0;
        local_28 = (uint *******)0x4f2667;
        FUN_00645470();
        if (pcVar18 == (char *)0x0) {
          if (((*(uint *)(DAT_0090ea30 + 0x1c) & 1) != 0) &&
             ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) != 0)) {
            local_24 = (uint *******)&DAT_009b86a0;
            local_28 = (uint *******)0x4f26ba;
            FUN_00645470();
          }
        }
        else {
          local_24 = (uint *******)0x1;
          local_28 = (uint *******)0x4f2683;
          FUN_00625e30();
          local_28 = (uint *******)&DAT_00689a1c;
          local_2c = (uint *******)&DAT_009b86a0;
          local_30 = (uint *******)0x4f2692;
          FUN_00645470();
        }
        if (((&DAT_00946f58)[iVar3] & 0x80) == 0) {
          if (local_28 == (uint *******)0x0) {
            local_24 = (uint *******)s_secproj_sm_pcx_00689a64;
            if ((int)pppppppuVar13 < 0x46) {
              local_24 = (uint *******)s_facblt_sm_pcx_00689a74;
            }
          }
          else {
            local_24 = (uint *******)s_space_sm_pcx_00689a54;
          }
          if (pcVar18 == (char *)0x0) {
            uVar14 = *(uint *)(DAT_0090ea30 + 0x1c);
            goto LAB_004f271e;
          }
LAB_004f2729:
          if ((DAT_009a6498 & 0x2000) != 0) goto LAB_004f2737;
          local_2c = (uint *******)0x0;
        }
        else {
          if (local_28 == (uint *******)0x0) {
            local_24 = (uint *******)s_secproj_sm_pcx_00689a34;
            if ((int)pppppppuVar13 < 0x46) {
              local_24 = (uint *******)s_alfacblt_sm_pcx_00689a44;
            }
          }
          else {
            local_24 = (uint *******)s_space_sm_pcx_00689a24;
          }
          if (pcVar18 != (char *)0x0) goto LAB_004f2729;
          uVar14 = *(uint *)(DAT_0090ea30 + 0x1c);
LAB_004f271e:
          if (((uVar14 & 1) != 0) && ((uVar14 & 0x80000000) != 0)) goto LAB_004f2729;
LAB_004f2737:
          local_2c = (uint *******)0x1;
        }
        pppppppuVar9 = (uint *******)0x0;
        local_28 = (uint *******)0xffffffff;
        local_30 = (uint *******)&DAT_009b86a0;
        local_34 = (uint *******)0x4f274c;
        FUN_0048c650();
      }
    }
    else if ((int)pppppppuVar21 < 0) {
      if (pppppppuVar13 == (uint *******)0x28) {
        if (((DAT_009a64c0 & 1) == 0) || ((DAT_009a64c0 & 8) != 0)) {
          if (((&DAT_00946f58)[(int)DAT_00939284 * 0x59c] & 0x80) == 0) {
            local_28 = (uint *******)((int)DAT_0090ea30 + 0x13);
            local_24 = (uint *******)0x1;
            local_2c = (uint *******)0x1a;
            local_30 = (uint *******)0x4f290e;
            FUN_005230e0();
          }
          local_28 = (uint *******)0x4f291b;
          local_24 = pppppppuVar17;
          local_28 = (uint *******)FUN_005247b0();
          local_2c = (uint *******)0x0;
          local_30 = (uint *******)0x4f2923;
          FUN_00625e30();
          local_30 = local_40;
          local_34 = (uint *******)0x1;
          local_38 = (uint *******)0x4f292e;
          FUN_00625e30();
          local_38 = DAT_00949868;
          uStackY_3c = (uint *******)0x2;
          local_40 = (uint *******)0x4f293b;
          FUN_00625e30();
          local_40 = DAT_00949864;
          local_44 = (uint *******)0x3;
          local_48 = (uint *******)0x4f2949;
          FUN_00625e30();
          local_48 = (uint *******)0xffffffff;
          pppppppuStackY_50 = (uint *******)((int)DAT_0090ea30 + 0x13);
          pcStackY_4c = (char *)0xffffffff;
          pppppppuStackY_54 = (uint *******)0x0;
          uStackY_58 = 0x4f295e;
          FUN_00625ec0();
          DAT_009bbfec = (&DAT_00946a50)[(int)pppppppuVar17 * 0x167];
          uStackY_58 = 0xffffffff;
          puStackY_60 = &DAT_00946a9c + iVar3;
          uStackY_5c = 0xffffffff;
          uStackY_64 = 1;
          DAT_009bbff0 = 0;
          uStackY_68 = 0x4f2985;
          FUN_00625ec0();
          DAT_009bbfec = (&DAT_00946a50)[(int)pppppppuVar17 * 0x167];
          local_28 = (uint *******)(&DAT_00946a84 + iVar3);
          pppppppuVar9 = (uint *******)0xffffffff;
          local_24 = (uint *******)0xffffffff;
          local_2c = (uint *******)0x2;
          DAT_009bbff0 = 0;
          local_30 = (uint *******)0x4f29af;
          FUN_00625ec0();
          DAT_009bbff0 = (&DAT_00946d50)[(int)pppppppuVar17 * 0x167];
          DAT_009bbfec = (&DAT_00946d4c)[(int)pppppppuVar17 * 0x167];
          local_30 = (uint *******)0xffffffff;
          local_38 = (uint *******)(&DAT_00946d34 + iVar3);
          local_34 = (uint *******)0xffffffff;
          uStackY_3c = (uint *******)0x3;
          local_40 = (uint *******)0x4f29d8;
          FUN_00625ec0();
          local_40 = (uint *******)0x0;
          local_44 = (uint *******)s_subgen_sm_pcx_00689ad0;
          local_48 = (uint *******)0x0;
          pcStackY_4c = s_GENERATOR_00689ae0;
          pppppppuStackY_50 = (uint *******)PTR_s_SCRIPT_00691b0c;
          pppppppuStackY_54 = (uint *******)0x4f29f1;
          FUN_0048c0a0();
        }
      }
      else {
        pppppppuVar9 = (uint *******)0xffffffff;
        local_28 = (uint *******)((int)DAT_0090ea30 + 0x13);
        local_24 = (uint *******)0xffffffff;
        local_2c = (uint *******)0x0;
        local_30 = (uint *******)0x4f2a0e;
        FUN_00625ec0();
        if (((DAT_009a64c0 & 1) == 0) || ((DAT_009a64c0 & 8) != 0)) {
          if (local_28 == (uint *******)0x0) {
            local_24 = (uint *******)s_secproj_sm_pcx_00689afc;
            local_2c = (uint *******)s_PRODUCE2_00689b18;
          }
          else {
            local_24 = (uint *******)s_space_sm_pcx_00689aec;
            local_2c = (uint *******)s_PRODUCE3_00689b0c;
          }
          pppppppuVar9 = (uint *******)0x0;
          local_28 = (uint *******)0x0;
          local_30 = (uint *******)PTR_s_SCRIPT_00691b0c;
          local_34 = (uint *******)0x4f2a51;
          FUN_0048c0a0();
        }
      }
    }
    else {
      local_28 = (uint *******)((int)DAT_0090ea30 + 0x13);
      local_24 = (uint *******)0xffffffff;
      local_2c = (uint *******)0x0;
      local_30 = (uint *******)0x4f278b;
      FUN_00625ec0();
      local_24 = (uint *******)0x0;
      local_28 = (uint *******)0x4f279d;
      FUN_006015b0();
      local_24 = (uint *******)0x4f27ad;
      FUN_00601b20();
      local_24 = (uint *******)&DAT_009b86a0;
      DAT_009b86a0 = 0;
      local_28 = (uint *******)0x4f27c3;
      FUN_00645470();
      local_2c = (uint *******)local_98;
      local_28 = (uint *******)0xa;
      local_34 = (uint *******)0x4f27d5;
      local_30 = pppppppuVar21;
      FUN_0064fc88();
      local_34 = (uint *******)local_98;
      local_38 = (uint *******)&DAT_009b86a0;
      uStackY_3c = (uint *******)0x4f27e6;
      FUN_00645470();
      local_24 = (uint *******)0x80;
      local_28 = (uint *******)0x0;
      local_2c = (uint *******)0xffffffff;
      local_30 = (uint *******)&DAT_009b86a0;
      local_34 = (uint *******)s_BLURBS_00689a8c;
      local_38 = (uint *******)0x4f2809;
      FUN_00406380();
      if (DAT_009b7b1c != 800) {
        local_24 = (uint *******)0x4f2825;
        FUN_00601980();
      }
      local_24 = (uint *******)0x4f2835;
      FUN_00601980();
      local_24 = (uint *******)0x4f2845;
      FUN_00601980();
      pppppppuVar9 = (uint *******)0x0;
      local_24 = (uint *******)0x80;
      local_28 = (uint *******)0x0;
      local_2c = (uint *******)0xffffffff;
      local_30 = (uint *******)s_PRODUCE2_00689aa4;
      local_34 = (uint *******)&DAT_009b8aa8;
      local_38 = (uint *******)0x4f2865;
      FUN_00406380();
      if (((DAT_009a64c0 & 1) == 0) || ((DAT_009a64c0 & 8) != 0)) {
        local_24 = (uint *******)&local_48;
        local_28 = (uint *******)s_secproj_sm_pcx_00689ab0;
        local_2c = (uint *******)0x4f2888;
        iVar3 = FUN_005e2480();
        if (iVar3 == 0) {
          local_24 = local_48;
          local_28 = (uint *******)s_secproj_sm_pcx_00689ac0;
          local_2c = (uint *******)0x4f28a7;
          iVar3 = FUN_005e3890();
          if (iVar3 == 0) {
            local_32f0 = local_331c;
          }
        }
        pppppppuVar9 = (uint *******)0x0;
        local_24 = (uint *******)0x0;
        local_28 = (uint *******)0x4f28c6;
        FUN_00602600();
      }
    }
  }
LAB_004f2752:
  if (local_28 == (uint *******)0x0) {
    if ((int)pppppppuVar13 < 0x46) {
      pppppppuVar9 = (uint *******)((int)DAT_0090ea30 + 0x13);
      local_28 = (uint *******)0x4f2a6d;
      local_24 = pppppppuVar17;
      FUN_00476fe0();
    }
  }
  else {
    local_24 = (uint *******)0x4f2763;
    pppppppuVar9 = pppppppuVar17;
    FUN_00477740();
  }
  if (pppppppuVar13 == (uint *******)0x1f) {
    local_24 = (uint *******)0x4f2a7b;
    pppppppuVar9 = pppppppuVar17;
    FUN_00477840();
    if (pppppppuVar17 == DAT_00939284) {
      pppppppuVar9 = (uint *******)0x0;
      local_24 = (uint *******)0x1;
      local_28 = (uint *******)0x0;
      if ((DAT_009a64a4 & 0x20) == 0) {
        local_2c = (uint *******)0x5;
        local_30 = (uint *******)0x4f2a9d;
        FUN_005230e0();
      }
      else {
        local_2c = (uint *******)0x9;
        local_30 = (uint *******)0x4f2aa9;
        FUN_005230e0();
      }
    }
LAB_004f2abd:
    if (local_2c[0x25b391] != (uint ******)0x0) {
      local_2c[0x25b391] = (uint ******)((int)local_2c[0x25b391] + 1);
    }
    local_2c[0x25b278] = (uint ******)((uint)local_2c[0x25b278] & 0xffffbfff);
  }
  else if (((pppppppuVar13 == (uint *******)0x20) || (pppppppuVar13 == (uint *******)0xd)) ||
          (pppppppuVar13 == (uint *******)0xe)) goto LAB_004f2abd;
  if (-1 < (int)pppppppuVar21) {
    if (pppppppuVar21 == (uint *******)0x1f) {
      local_24 = (uint *******)0x1;
      local_28 = (uint *******)0x0;
      local_2c = (uint *******)0xc;
      local_30 = (uint *******)0x4f2afd;
      FUN_005230e0();
    }
    if ((DAT_009a6490 & 0x10000000) == 0) {
LAB_004f2b53:
      if (pppppppuVar17 == DAT_00939284) goto LAB_004f2b5b;
    }
    else {
      if ((DAT_0093f660 == 0) && (pppppppuVar17 == DAT_00939284)) {
        local_24 = (uint *******)0x4f2b25;
        FUN_00403ba0();
      }
      if (((DAT_009a6490 & 0x10000000) == 0) || (DAT_0093f660 != 0)) goto LAB_004f2b53;
      if (pppppppuVar17 != DAT_00939284) {
        if (pppppppuVar21 == (uint *******)0x20) {
          local_24 = (uint *******)0x4f2b50;
          FUN_00403be0();
        }
        goto LAB_004f2b53;
      }
LAB_004f2b5b:
      local_24 = (uint *******)0x4f2b61;
      FUN_0044c9e0();
    }
    if (pppppppuVar21 == (uint *******)0x1f) {
      iVar3 = 0;
      puVar15 = local_b8;
      do {
        bVar12 = (byte)iVar3;
        iVar3 = iVar3 + 1;
        *puVar15 = (uint)((1 << (bVar12 & 0x1f) & DAT_009a64e8 >> 8 & 0xff) == 0);
        puVar15 = puVar15 + 1;
      } while (iVar3 < 8);
      local_38 = (uint *******)0x0;
      iVar3 = DAT_00949870;
      if (0 < DAT_009a64cc) {
        local_28 = (uint *******)&DAT_0097d040;
        do {
          pppppppuVar17 = (uint *******)(uint)*(byte *)(local_28 + 1);
          if ((local_b8[(int)pppppppuVar17] == 0) &&
             (0x5f < (*(byte *)(DAT_0094a30c +
                               (*(short *)((int)local_28 + 2) * DAT_0068faf0 +
                               ((int)*(short *)local_28 >> 1)) * 0x2c) & 0xe0))) {
            local_b8[(int)pppppppuVar17] = 1;
            do {
              do {
                iVar3 = _rand();
                local_2c = (uint *******)((&DAT_0066efc0)[iVar3 % 0x120] + (int)*(short *)local_28);
                if ((DAT_0094988c & 1) == 0) {
                  if ((int)local_2c < 0) {
                    local_2c = (uint *******)((int)local_2c + DAT_00949870);
                  }
                  else if (DAT_00949870 <= (int)local_2c) {
                    local_2c = (uint *******)((int)local_2c - DAT_00949870);
                  }
                }
                pppppppuVar13 =
                     (uint *******)
                     ((&DAT_0066f444)[iVar3 % 0x120] + (int)*(short *)((int)local_28 + 2));
                unaff_EBX = (uint ******)((int)unaff_EBX + 1);
                iVar3 = DAT_00949870;
                if (999 < (int)unaff_EBX) goto LAB_004f2dd1;
              } while ((((((int)pppppppuVar13 < 0) || (DAT_00949874 <= (int)pppppppuVar13)) ||
                        ((int)local_2c < 0)) || (DAT_00949870 <= (int)local_2c)) ||
                      ((iVar3 = DAT_0094a30c +
                                (DAT_0068faf0 * (int)pppppppuVar13 + ((int)local_2c >> 1)) * 0x2c,
                       (*(byte *)(iVar3 + 8) & 1) != 0 && ((*(byte *)(iVar3 + 2) & 0xf) < 8))));
              local_24 = (uint *******)0x0;
              local_34 = (uint *******)0x4f2ccb;
              local_30 = pppppppuVar17;
              local_28 = pppppppuVar13;
              pppppppuVar9 = (uint *******)FUN_004e3ef0();
            } while (pppppppuVar9 != pppppppuVar17);
            iVar3 = DAT_00949870;
            if ((int)unaff_EBX < 1000) {
              if (pppppppuVar17 == DAT_00939284) {
                local_28 = local_2c;
                local_2c = (uint *******)0x4f2cfc;
                local_24 = pppppppuVar13;
                FUN_005108a0();
              }
              local_30 = (uint *******)0x0;
              iVar3 = DAT_00949870;
              do {
                pppppppuVar17 = (uint *******)((int)local_30[0x19bbef] + (int)local_2c);
                if ((DAT_0094988c & 1) == 0) {
                  if ((int)pppppppuVar17 < 0) {
                    pppppppuVar17 = (uint *******)((int)pppppppuVar17 + iVar3);
                  }
                  else if (iVar3 <= (int)pppppppuVar17) {
                    pppppppuVar17 = (uint *******)((int)pppppppuVar17 - iVar3);
                  }
                }
                pppppppuVar9 = (uint *******)((int)local_30[0x19bd10] + (int)pppppppuVar13);
                if ((((-1 < (int)pppppppuVar9) && ((int)pppppppuVar9 < DAT_00949874)) &&
                    ((-1 < (int)pppppppuVar17 && ((int)pppppppuVar17 < iVar3)))) &&
                   ((iVar4 = DAT_0094a30c +
                             (DAT_0068faf0 * (int)pppppppuVar9 + ((int)pppppppuVar17 >> 1)) * 0x2c,
                    (*(byte *)(iVar4 + 8) & 1) == 0 || (7 < (*(byte *)(iVar4 + 2) & 0xf))))) {
                  local_24 = (uint *******)0x20;
                  local_30 = (uint *******)0x4f2d88;
                  local_2c = pppppppuVar17;
                  local_28 = pppppppuVar9;
                  FUN_00591d60();
                  local_30 = (uint *******)0x0;
                  local_34 = DAT_006919ec;
                  local_40 = (uint *******)0x4f2d97;
                  uStackY_3c = pppppppuVar17;
                  local_38 = pppppppuVar9;
                  FUN_00591d60();
                  local_40 = DAT_00939284;
                  pcStackY_4c = (char *)0x4f2da5;
                  local_48 = pppppppuVar17;
                  local_44 = pppppppuVar9;
                  FUN_00591e50();
                  pcStackY_4c = (char *)0x2;
                  uStackY_58 = 0x4f2dae;
                  pppppppuStackY_54 = pppppppuVar17;
                  pppppppuStackY_50 = pppppppuVar9;
                  FUN_0046af40();
                  iVar3 = DAT_00949870;
                }
                local_30 = local_30 + 1;
              } while ((int)local_30 < 0x24);
            }
          }
LAB_004f2dd1:
          local_38 = (uint *******)((int)local_38 + 1);
          local_28 = local_28 + 0x4d;
        } while ((int)local_38 < DAT_009a64cc);
      }
      iVar4 = DAT_00949884 / 10;
      if (0 < iVar4) {
        do {
          if (iVar3 == 1 || iVar3 + -1 < 0) {
            local_30 = (uint *******)0x0;
          }
          else {
            iVar10 = _rand();
            local_30 = (uint *******)(iVar10 % iVar3);
            iVar3 = DAT_00949870;
          }
          pppppppuVar17 = local_30;
          iVar10 = DAT_00949874;
          if (DAT_00949874 == 1 || DAT_00949874 + -1 < 0) {
            pppppppuVar13 = (uint *******)0x0;
          }
          else {
            iVar3 = _rand();
            pppppppuVar13 = (uint *******)(iVar3 % iVar10);
            iVar3 = DAT_00949870;
          }
          if (((uint)local_30 & 1) != 0) {
            pppppppuVar17 = (uint *******)((int)local_30 + -1);
          }
          if (((uint)pppppppuVar13 & 1) != 0) {
            pppppppuVar17 = (uint *******)((int)pppppppuVar17 + 1);
          }
          if ((((-1 < (int)pppppppuVar13) && ((int)pppppppuVar13 < DAT_00949874)) &&
              (-1 < (int)pppppppuVar17)) &&
             (((int)pppppppuVar17 < iVar3 &&
              ((iVar10 = DAT_0094a30c +
                         (DAT_0068faf0 * (int)pppppppuVar13 + ((int)pppppppuVar17 >> 1)) * 0x2c,
               (*(byte *)(iVar10 + 8) & 1) == 0 || (7 < (*(byte *)(iVar10 + 2) & 0xf))))))) {
            local_24 = (uint *******)0x20;
            local_30 = (uint *******)0x4f2ec2;
            local_2c = pppppppuVar17;
            local_28 = pppppppuVar13;
            FUN_00591d60();
            local_30 = (uint *******)0x0;
            local_34 = DAT_006919ec;
            local_40 = (uint *******)0x4f2ed1;
            uStackY_3c = pppppppuVar17;
            local_38 = pppppppuVar13;
            FUN_00591d60();
            local_40 = DAT_00939284;
            pcStackY_4c = (char *)0x4f2edf;
            local_48 = pppppppuVar17;
            local_44 = pppppppuVar13;
            FUN_00591e50();
            pcStackY_4c = (char *)0x2;
            uStackY_58 = 0x4f2ee8;
            pppppppuStackY_54 = pppppppuVar17;
            pppppppuStackY_50 = pppppppuVar13;
            FUN_0046af40();
            iVar3 = DAT_00949870;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      pppppppuVar17 = local_24;
      local_24 = (uint *******)0x1;
      local_28 = (uint *******)0x0;
      local_2c = (uint *******)0xd;
      local_30 = (uint *******)0x4f2f08;
      FUN_005230e0();
      local_30 = (uint *******)0xffffffff;
      local_34 = (uint *******)0xffffffff;
      DAT_009bbff0 = 0;
      DAT_009bbfec = (&DAT_00946a50)[(int)pppppppuVar17 * 0x167];
      local_38 = (uint *******)(&DAT_00946a84 + (int)pppppppuVar17 * 0x59c);
      uStackY_3c = (uint *******)0x5;
      local_40 = (uint *******)0x4f2f3e;
      FUN_00625ec0();
      local_24 = (uint *******)0x4f2f4c;
      CharUpperA(&DAT_009bbae8);
      local_24 = (uint *******)0x0;
      local_28 = (uint *******)0x0;
      local_2c = (uint *******)0xe;
      local_30 = (uint *******)0x4f2f59;
      FUN_005230e0();
    }
    local_28 = (uint *******)0x4f2f68;
    local_24 = pppppppuVar17;
    pppppppuVar9 = pppppppuVar21;
    FUN_00477100();
    if (pppppppuVar21 == (uint *******)0x20) {
      local_28 = (uint *******)0x4f2f7c;
      local_24 = pppppppuVar17;
      FUN_004779d0();
      if ((DAT_009a649c & 0x1000) != 0) {
        pppppppuVar13 = (uint *******)0x1;
        puVar15 = &DAT_0096eac4 + (int)pppppppuVar17;
        do {
          if (((pppppppuVar13 != pppppppuVar17) &&
              (((&DAT_0096c9f8)[(int)pppppppuVar13 * 4 + (int)pppppppuVar17 * 0x20cc] & 1) != 0)) &&
             (((*puVar15 & 0x2000000) == 0 ||
              (((byte)(1 << ((byte)pppppppuVar13 & 0x1f)) & (byte)DAT_009a64e8) != 0)))) {
            local_28 = (uint *******)0x4f2fd7;
            local_24 = pppppppuVar13;
            FUN_004779d0();
          }
          pppppppuVar13 = (uint *******)((int)pppppppuVar13 + 1);
          puVar15 = puVar15 + 0x833;
        } while ((int)pppppppuVar13 < 8);
      }
      if (pppppppuVar17 == DAT_00939284) {
        local_24 = (uint *******)0x2;
        local_28 = (uint *******)0x0;
        local_2c = (uint *******)0x11;
        local_30 = (uint *******)0x4f2ffb;
        FUN_005230e0();
        DAT_009b206c = 1;
      }
      else {
        local_24 = (uint *******)0xffffffff;
        DAT_009b206c = 3;
        DAT_009bbff0 = 0;
        DAT_009bbfec = (&DAT_00946a50)[(int)pppppppuVar17 * 0x167];
        local_28 = (uint *******)(&DAT_00946a84 + (int)pppppppuVar17 * 0x59c);
        local_2c = (uint *******)0x5;
        local_30 = (uint *******)0x4f304c;
        FUN_00625ec0();
        local_30 = (uint *******)(DAT_009a64d4 + 100);
        local_34 = (uint *******)0x4f305b;
        local_34 = (uint *******)FUN_005c89a0();
        local_38 = (uint *******)0x2;
        uStackY_3c = (uint *******)0x4f3063;
        FUN_00625e30();
        uStackY_3c = (uint *******)((DAT_009a64d4 + 100) / 100);
        local_40 = (uint *******)0x3;
        local_44 = (uint *******)0x4f3085;
        FUN_00625e30();
        if (((&DAT_00946f58)[(int)pppppppuVar17 * 0x59c] & 0x80) == 0) {
          local_24 = (uint *******)0x3;
          local_2c = (uint *******)0x12;
        }
        else {
          local_24 = (uint *******)0x4;
          local_2c = (uint *******)0x1b;
        }
        local_28 = (uint *******)0x0;
        local_30 = (uint *******)0x4f30a7;
        FUN_005230e0();
      }
      DAT_009a64c0 = DAT_009a64c0 | 1;
      local_8 = 0x52;
      FUN_00404900();
      local_2204 = &PTR_FUN_00669d58;
      local_1dc0 = &PTR_LAB_00669d50;
      local_8._0_1_ = 0x55;
      FUN_00605370();
      local_c0c = &PTR_FUN_00669754;
      local_7c8 = &PTR_LAB_0066974c;
      local_8._0_1_ = 0x56;
      FUN_00607da0();
      local_8._0_1_ = 0x54;
      FUN_00607040();
      local_1758 = &PTR_FUN_00669754;
      local_1314 = &PTR_LAB_0066974c;
      local_8._0_1_ = 0x57;
      FUN_00607da0();
      local_8._0_1_ = 0x53;
      FUN_00607040();
      local_8 = CONCAT31(local_8._1_3_,0x51);
      FUN_005d4dd0();
      local_8 = 0x60;
      FUN_00600f00();
      local_8._0_1_ = 0x5f;
      FUN_005fa870();
      local_8._0_1_ = 0x5e;
      FUN_00406910();
      FUN_00608e10();
      FUN_005d4dd0();
      local_32b4 = &PTR_FUN_006698c4;
      *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006698c0;
      local_8._0_1_ = 0x61;
      FUN_00402970();
      local_32a0 = 0;
      local_32b4 = &PTR_LAB_006693a4;
      local_8._0_1_ = 0x5d;
      *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006693a0;
      FUN_00402970();
      local_32a0 = 0;
      local_328c = &PTR_FUN_006693ac;
      DAT_009b3374 = local_3288;
      local_32e4 = &PTR_FUN_006698c4;
      *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006698c0;
      local_8._0_1_ = 0x62;
      FUN_00402970();
      local_32d0 = 0;
      local_32e4 = &PTR_LAB_006693a4;
      local_8._0_1_ = 0x5c;
      *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006693a0;
      FUN_00402970();
      local_32d0 = 0;
      local_32bc = &PTR_FUN_006693ac;
      DAT_009b3374 = local_32b8;
      local_8._0_1_ = 0x5b;
      FUN_005e3820();
      local_8._0_1_ = 99;
      FUN_00607da0();
      local_8._0_1_ = 0x5a;
      FUN_00607040();
      local_8._0_1_ = 100;
      FUN_00607da0();
      local_8._0_1_ = 0x59;
      FUN_00607040();
      local_8 = CONCAT31(local_8._1_3_,0x58);
      goto LAB_004f3faa;
    }
    if (pppppppuVar21 == (uint *******)0x14) {
      local_24 = (uint *******)0x4f3374;
      pppppppuVar9 = pppppppuVar17;
      FUN_005be530();
      local_28 = (uint *******)0x4f337a;
      local_24 = pppppppuVar17;
      FUN_005be530();
    }
    else if ((pppppppuVar21 == (uint *******)0x7) && (iVar3 = 0, 0 < DAT_009a64cc)) {
      pcVar18 = &DAT_0097d046;
      do {
        pppppppuVar13 = DAT_00939284;
        if ((((uint *******)(uint)(byte)pcVar18[-2] == pppppppuVar17) && (*pcVar18 < '\x03')) &&
           (*pcVar18 = '\x03', pppppppuVar17 == pppppppuVar13)) {
          local_24 = (uint *******)(int)*(short *)(pcVar18 + -4);
          local_28 = (uint *******)(int)*(short *)(pcVar18 + -6);
          pppppppuVar9 = (uint *******)0x2;
          local_2c = (uint *******)0x4f33bf;
          FUN_0046af40();
        }
        iVar3 = iVar3 + 1;
        pcVar18 = pcVar18 + 0x134;
      } while (iVar3 < DAT_009a64cc);
    }
  }
  if ((((*(uint *)(DAT_0090ea30 + 0x1c) & 1) == 0) ||
      ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000000) == 0)) || (pppppppuVar9 != (uint *******)0x0))
  {
    if (((byte)local_34 & (byte)DAT_009a64e8) == 0) goto LAB_004f33fb;
  }
  else {
LAB_004f33fb:
    local_24 = DAT_00689370;
    local_28 = (uint *******)0x4f3409;
    FUN_004e5fe0();
  }
  if (((((byte)local_34 & (byte)DAT_009a64e8) != 0) &&
      ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000001) != 0x80000001)) &&
     ((*(uint *******)(DAT_0090ea30 + 0x28) == ppppppuVar22 && (*(int *)(DAT_0090ea30 + 0x26) == 0))
     )) {
    psVar2 = DAT_0090ea30;
    psVar2[0x28] = -0x45;
    psVar2[0x29] = -1;
    local_24 = (uint *******)0x2;
    local_28 = (uint *******)(int)DAT_0090ea30[1];
    local_2c = (uint *******)(int)*DAT_0090ea30;
    local_30 = (uint *******)0x4f3460;
    FUN_0046aef0();
  }
  if ((int)pppppppuVar21 < 0) {
    local_8 = 0x66;
    FUN_00404900();
    local_2204 = &PTR_FUN_00669d58;
    local_1dc0 = &PTR_LAB_00669d50;
    local_8._0_1_ = 0x69;
    FUN_00605370();
    local_c0c = &PTR_FUN_00669754;
    local_7c8 = &PTR_LAB_0066974c;
    local_8._0_1_ = 0x6a;
    FUN_00607da0();
    local_8._0_1_ = 0x68;
    FUN_00607040();
    local_1758 = &PTR_FUN_00669754;
    local_1314 = &PTR_LAB_0066974c;
    local_8._0_1_ = 0x6b;
    FUN_00607da0();
    local_8._0_1_ = 0x67;
    FUN_00607040();
    local_8 = CONCAT31(local_8._1_3_,0x65);
    FUN_005d4dd0();
    local_8 = 0x74;
    FUN_00600f00();
    local_8._0_1_ = 0x73;
    FUN_005fa870();
    *(undefined ***)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 4) + 4) = &PTR_LAB_00669be8;
    *(undefined ***)((int)auStackY_2e20 + *(int *)(aiStackY_3268[1] + 4)) = &PTR_LAB_00669be0;
    *(undefined ***)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 8) + 4) = &PTR_LAB_00669bd4;
    *(int *)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 4)) =
         *(int *)(aiStackY_3268[1] + 4) + -0x188;
    *(int *)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 8)) =
         *(int *)(aiStackY_3268[1] + 8) + -0xba0;
    local_8._0_1_ = 0x79;
    FUN_00612960();
    local_8._0_1_ = 0x78;
    FUN_00611a20();
    local_8._0_1_ = 0x77;
    FUN_00610120();
    local_8._0_1_ = 0x76;
    FUN_0060e740();
    local_8._0_1_ = 0x75;
    FUN_00406a90();
    local_8._0_1_ = 0x72;
    FUN_00609ec0();
    FUN_00608e10();
    FUN_005d4dd0();
    local_32b4 = &PTR_FUN_006698c4;
    *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006698c0;
    local_8._0_1_ = 0x7a;
    FUN_00402970();
    local_32a0 = 0;
    local_32b4 = &PTR_LAB_006693a4;
    local_8._0_1_ = 0x71;
    *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006693a0;
    FUN_00402970();
    local_32a0 = 0;
    local_328c = &PTR_FUN_006693ac;
    DAT_009b3374 = local_3288;
    local_32e4 = &PTR_FUN_006698c4;
    *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006698c0;
    local_8._0_1_ = 0x7b;
    FUN_00402970();
    local_32d0 = 0;
    local_8._0_1_ = 0x70;
    local_32e4 = &PTR_LAB_006693a4;
    *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006693a0;
    FUN_00402970();
    local_32d0 = 0;
    local_32bc = &PTR_FUN_006693ac;
    DAT_009b3374 = local_32b8;
    local_8._0_1_ = 0x6f;
    FUN_005e3820();
    local_8._0_1_ = 0x7c;
    FUN_00607da0();
    local_8._0_1_ = 0x6e;
    FUN_00607040();
    local_8._0_1_ = 0x7d;
    FUN_00607da0();
    local_8._0_1_ = 0x6d;
    FUN_00607040();
    local_8 = CONCAT31(local_8._1_3_,0x6c);
  }
  else {
    local_38 = (uint *******)0x0;
    pppppppuVar17 = DAT_00689370;
    if (0 < DAT_009a64cc) {
      local_30 = (uint *******)&DAT_0097d078;
      pppppppuVar13 = DAT_00689370;
      do {
        pppppppuVar9 = local_30;
        pppppppuVar21 = local_38;
        if (local_38 != pppppppuVar17) {
          bVar12 = *(byte *)(local_30 + -0xd);
          uStackY_3c = (uint *******)CONCAT13(bVar12,(undefined3)uStackY_3c);
          if (((((byte)DAT_009a64e8 & (byte)(1 << (bVar12 & 0x1f))) == 0) ||
              ((((uint)*local_30 & 1) != 0 && (((uint)*local_30 & 0x80000000) != 0)))) &&
             (local_30[6] == ppppppuVar22)) {
            pppppppuVar17 = (uint *******)0xffffffff;
            iVar3 = (int)local_30[2] + (int)local_30[0x27] * 10;
            pppppppuVar11 = (uint *******)0x0;
            if (0 < DAT_009a64cc) {
              puVar15 = &DAT_0097d090;
              do {
                if (((((pppppppuVar11 != local_38) && (pppppppuVar11 != pppppppuVar13)) &&
                     ((byte)puVar15[-0x13] == bVar12)) &&
                    (((uint ******)*puVar15 != ppppppuVar22 && ((int)*puVar15 < -0x45)))) &&
                   (iVar4 = puVar15[-4] + puVar15[0x21] * 10, iVar4 < iVar3)) {
                  iVar3 = iVar4;
                  pppppppuVar17 = pppppppuVar11;
                }
                pppppppuVar11 = (uint *******)((int)pppppppuVar11 + 1);
                puVar15 = puVar15 + 0x4d;
              } while ((int)pppppppuVar11 < DAT_009a64cc);
              if (-1 < (int)pppppppuVar17) {
                local_30[6] = (uint ******)(&DAT_0097d090)[(int)pppppppuVar17 * 0x4d];
                (&DAT_0097d090)[(int)pppppppuVar17 * 0x4d] = ppppppuVar22;
                pppppppuVar17 = pppppppuVar13;
                goto LAB_004f392d;
              }
            }
            pppppppuVar17 = (uint *******)0x0;
            local_28 = (uint *******)0x4f3927;
            local_24 = local_38;
            FUN_004e5fe0();
            pppppppuVar13 = pppppppuVar17;
          }
        }
LAB_004f392d:
        local_38 = (uint *******)((int)pppppppuVar21 + 1);
        local_30 = pppppppuVar9 + 0x4d;
      } while ((int)local_38 < DAT_009a64cc);
    }
    DAT_0090ea30 = &DAT_0097d040 + (int)pppppppuVar17 * 0x9a;
    DAT_00689370 = pppppppuVar17;
    if (DAT_00689374 != pppppppuVar17) {
      DAT_00689374 = pppppppuVar17;
      FUN_004e9550();
      FUN_004e80b0();
      FUN_004e9b70();
      FUN_004e9cb0();
      FUN_004eb560();
    }
    local_8 = 0x7f;
    FUN_00404900();
    local_2204 = &PTR_FUN_00669d58;
    local_1dc0 = &PTR_LAB_00669d50;
    local_8._0_1_ = 0x82;
    FUN_00605370();
    local_c0c = &PTR_FUN_00669754;
    local_7c8 = &PTR_LAB_0066974c;
    local_8._0_1_ = 0x83;
    FUN_00607da0();
    local_8._0_1_ = 0x81;
    FUN_00607040();
    local_1758 = &PTR_FUN_00669754;
    local_1314 = &PTR_LAB_0066974c;
    local_8._0_1_ = 0x84;
    FUN_00607da0();
    local_8._0_1_ = 0x80;
    FUN_00607040();
    local_8 = CONCAT31(local_8._1_3_,0x7e);
    FUN_005d4dd0();
    local_8 = 0x8d;
    FUN_00600f00();
    local_8._0_1_ = 0x8c;
    FUN_005fa870();
    *(undefined ***)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 4) + 4) = &PTR_LAB_00669be8;
    *(undefined ***)((int)auStackY_2e20 + *(int *)(aiStackY_3268[1] + 4)) = &PTR_LAB_00669be0;
    *(undefined ***)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 8) + 4) = &PTR_LAB_00669bd4;
    *(int *)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 4)) =
         *(int *)(aiStackY_3268[1] + 4) + -0x188;
    *(int *)((int)aiStackY_3268 + *(int *)(aiStackY_3268[1] + 8)) =
         *(int *)(aiStackY_3268[1] + 8) + -0xba0;
    local_8._0_1_ = 0x92;
    FUN_00612960();
    local_8._0_1_ = 0x91;
    FUN_00611a20();
    local_8._0_1_ = 0x90;
    FUN_00610120();
    local_8._0_1_ = 0x8f;
    FUN_0060e740();
    piVar19 = (int *)(-(uint)(&stack0x00000000 != (undefined1 *)0x3264) & (uint)local_3220);
    local_8._0_1_ = 0x8e;
    *(undefined ***)(*(int *)(*piVar19 + 4) + (int)piVar19) = &PTR_LAB_00669a6c;
    *(undefined ***)(*(int *)(*piVar19 + 4) + 0x444 + (int)piVar19) = &PTR_LAB_00669a64;
    *(undefined ***)(*(int *)(*piVar19 + 8) + (int)piVar19) = &PTR_LAB_00669a58;
    *(int *)((int)piVar19 + *(int *)(*piVar19 + 4) + -4) = *(int *)(*piVar19 + 4) + -0x18;
    *(int *)((int)piVar19 + *(int *)(*piVar19 + 8) + -4) = *(int *)(*piVar19 + 8) + -0xa30;
    FUN_0060d1b0();
    local_8._0_1_ = 0x8b;
    FUN_00609ec0();
    FUN_00608e10();
    FUN_005d4dd0();
    local_32b4 = &PTR_FUN_006698c4;
    *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006698c0;
    local_8._0_1_ = 0x93;
    if (local_32ac != (int *)0x0) {
      ppppppuVar22 = (uint ******)0x0;
      if (0 < local_32a4) {
        do {
          local_32a8 = (int *)local_32ac[3];
          piVar19 = (int *)local_32ac[2];
          local_24 = (uint *******)0x4f3c4d;
          (*(code *)local_32b4[1])();
          if (piVar19 != (int *)0x0) {
            local_24 = (uint *******)0x4f3c5e;
            (*(code *)**(undefined4 **)(*(int *)(*piVar19 + 4) + (int)piVar19))();
          }
          local_32ac[2] = 0;
          if (local_32ac != (int *)0x0) {
            local_24 = (uint *******)0x4f3c84;
            (*(code *)**(undefined4 **)(*(int *)(*local_32ac + 4) + (int)local_32ac))();
          }
          local_32ac = local_32a8;
          ppppppuVar22 = (uint ******)((int)ppppppuVar22 + 1);
        } while ((int)ppppppuVar22 < local_32a4);
      }
      local_32ac = (int *)0x0;
      local_32a4 = 0;
    }
    local_32a0 = 0;
    local_32b4 = &PTR_LAB_006693a4;
    local_8._0_1_ = 0x8a;
    *(undefined ***)((int)&local_32b0 + *(int *)(local_32b0 + 4)) = &PTR_FUN_006693a0;
    if (local_32ac != (int *)0x0) {
      ppppppuVar22 = (uint ******)0x0;
      if (0 < local_32a4) {
        do {
          local_32a8 = (int *)local_32ac[3];
          piVar19 = (int *)local_32ac[2];
          local_24 = (uint *******)0x4f3d12;
          (*(code *)local_32b4[1])();
          if (piVar19 != (int *)0x0) {
            local_24 = (uint *******)0x4f3d23;
            (*(code *)**(undefined4 **)(*(int *)(*piVar19 + 4) + (int)piVar19))();
          }
          local_32ac[2] = 0;
          if (local_32ac != (int *)0x0) {
            local_24 = (uint *******)0x4f3d49;
            (*(code *)**(undefined4 **)(*(int *)(*local_32ac + 4) + (int)local_32ac))();
          }
          local_32ac = local_32a8;
          ppppppuVar22 = (uint ******)((int)ppppppuVar22 + 1);
        } while ((int)ppppppuVar22 < local_32a4);
      }
      local_32ac = (int *)0x0;
      local_32a4 = 0;
    }
    DAT_009b3374 = local_3288;
    local_32a0 = 0;
    local_328c = &PTR_FUN_006693ac;
    local_32e4 = &PTR_FUN_006698c4;
    *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006698c0;
    local_8._0_1_ = 0x94;
    if (local_32dc != (int *)0x0) {
      ppppppuVar22 = (uint ******)0x0;
      if (0 < local_32d4) {
        do {
          local_32d8 = (int *)local_32dc[3];
          piVar19 = (int *)local_32dc[2];
          local_24 = (uint *******)0x4f3df2;
          (*(code *)local_32e4[1])();
          if (piVar19 != (int *)0x0) {
            local_24 = (uint *******)0x4f3e03;
            (*(code *)**(undefined4 **)(*(int *)(*piVar19 + 4) + (int)piVar19))();
          }
          local_32dc[2] = 0;
          if (local_32dc != (int *)0x0) {
            local_24 = (uint *******)0x4f3e29;
            (*(code *)**(undefined4 **)(*(int *)(*local_32dc + 4) + (int)local_32dc))();
          }
          local_32dc = local_32d8;
          ppppppuVar22 = (uint ******)((int)ppppppuVar22 + 1);
        } while ((int)ppppppuVar22 < local_32d4);
      }
      local_32dc = (int *)0x0;
      local_32d4 = 0;
    }
    local_32d0 = 0;
    local_32e4 = &PTR_LAB_006693a4;
    local_8._0_1_ = 0x89;
    *(undefined ***)((int)&local_32e0 + *(int *)(local_32e0 + 4)) = &PTR_FUN_006693a0;
    if (local_32dc != (int *)0x0) {
      ppppppuVar22 = (uint ******)0x0;
      if (0 < local_32d4) {
        do {
          local_32d8 = (int *)local_32dc[3];
          piVar19 = (int *)local_32dc[2];
          local_24 = (uint *******)0x4f3eb3;
          (*(code *)local_32e4[1])();
          if (piVar19 != (int *)0x0) {
            local_24 = (uint *******)0x4f3ec4;
            (*(code *)**(undefined4 **)(*(int *)(*piVar19 + 4) + (int)piVar19))();
          }
          local_32dc[2] = 0;
          if (local_32dc != (int *)0x0) {
            local_24 = (uint *******)0x4f3eea;
            (*(code *)**(undefined4 **)(*(int *)(*local_32dc + 4) + (int)local_32dc))();
          }
          local_32dc = local_32d8;
          ppppppuVar22 = (uint ******)((int)ppppppuVar22 + 1);
        } while ((int)ppppppuVar22 < local_32d4);
      }
      local_32dc = (int *)0x0;
      local_32d4 = 0;
    }
    local_32d0 = 0;
    DAT_009b3374 = local_32b8;
    local_32bc = &PTR_FUN_006693ac;
    local_8._0_1_ = 0x88;
    FUN_005e3820();
    local_8._0_1_ = 0x95;
    FUN_00607da0();
    local_8._0_1_ = 0x87;
    FUN_00607040();
    local_8._0_1_ = 0x96;
    FUN_00607da0();
    local_8._0_1_ = 0x86;
    FUN_00607040();
    local_8 = CONCAT31(local_8._1_3_,0x85);
  }
LAB_004f3faa:
  FUN_005d45b0();
  local_8 = 0xffffffff;
  FUN_005d4dd0();
  ExceptionList = local_10;
  return;
}

