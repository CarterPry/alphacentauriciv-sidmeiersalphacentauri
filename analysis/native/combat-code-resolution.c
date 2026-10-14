// REA evidence ev_bd764bd4a141f85454a8e46c0009a55b7720ff8a501f32396ce304a27a323c16

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00506af0(int param_1,uint param_2,int *param_3,int param_4,uint param_5,uint param_6,
                 int *param_7)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  SHORT SVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  undefined2 uVar16;
  int iVar17;
  uint uVar18;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar19;
  char cVar20;
  uint *puVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  char *pcVar25;
  char local_13c [80];
  undefined1 local_ec [80];
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_48 = 0;
  local_68 = 0;
  local_88 = 0;
  local_38 = 0;
  local_54 = 0;
  if ((param_5 == 0) &&
     ((iVar7 = FUN_005c0db0((int)(short)(&DAT_00952832)[param_1 * 0x1a],1), iVar7 == 0 ||
      ((&DAT_0094a379)
       [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] != '\0'))
     )) {
    param_5 = 0;
  }
  else {
    param_5 = 1;
  }
  local_8 = param_1 * 0x34;
  local_30 = (int *)(int)(short)(&DAT_00952828)[param_1 * 0x1a];
  local_2c = (int)(short)(&DAT_0095282a)[param_1 * 0x1a];
  local_14 = (uint)(byte)(&DAT_00952836)[local_8];
  uVar8 = FUN_005bfe90(param_3,param_4);
  iVar7 = FUN_005c0db0((int)(short)(&DAT_00952832)[param_1 * 0x1a],1);
  iVar17 = (int)param_3 >> 1;
  if (((iVar7 != 0) &&
      ((&DAT_0094a379)
       [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] == '\x01'
      )) && (0x5f < (*(byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0xe0))) {
    iVar7 = FUN_005b9580(uVar8,3,2,0xffffffff,0xffffffff);
    iVar9 = FUN_005b9580(uVar8,1,0xffffffff,0xffffffff,0xffffffff);
    if ((iVar7 < iVar9) ||
       ((iVar7 = DAT_0094a30c + (DAT_0068faf0 * param_4 + iVar17) * 0x2c,
        (*(byte *)(iVar7 + 8) & 1) != 0 && ((*(byte *)(iVar7 + 2) & 0xf) < 8)))) {
      param_5 = 1;
    }
  }
  iVar9 = FUN_005b8e10(uVar8);
  iVar7 = local_8;
  if ((((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] ==
        '\x02') &&
      ((&DAT_0094a37d)
       [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] == '\0'
      )) && ((iVar10 = FUN_005b9580(iVar9,6,0x20,0xffffffff,0xffffffff), iVar10 == 0 &&
             ((param_6 != 0 && ((DAT_0093e904 & 2) != 0)))))) {
    local_38 = FUN_00506650((&DAT_00952836)[iVar9 * 0x34],local_14,param_3,param_4);
  }
  local_44 = FUN_005044d0(iVar9,param_1,param_5);
  local_c = local_44 * 0x34;
  local_10 = (uint)(byte)(&DAT_00952836)[local_c];
  local_1c = local_44;
  local_24 = FUN_004e3a50(param_3,param_4);
  iVar10 = FUN_005c0db0((int)*(short *)((int)&DAT_00952832 + iVar7),1);
  iVar9 = local_c;
  if ((iVar10 != 0) &&
     (iVar10 = FUN_005c0db0((int)*(short *)((int)&DAT_00952832 + local_c),1), iVar10 != 0)) {
    if ((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] * 0x90] == '\0')
    {
      param_5 = param_5 | 2;
    }
    else if ((param_5 != 0) ||
            (0x5f < (*(byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0xe0))) {
      param_5 = param_5 | 2;
    }
  }
  iVar10 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar9),0x20);
  if ((((iVar10 != 0) &&
       ((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] * 0x90] ==
        '\x02')) &&
      ((&DAT_0094a37d)
       [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] * 0x90] == '\0'))
     && (((&DAT_0094a37d)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar9) * 0x34] * 0x90] ==
          '\0' && ((&DAT_0094a379)
                   [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar9) * 0x34] *
                    0x90] == '\x02')))) {
    param_5 = param_5 | 0x1a;
  }
  if (((param_5 & 3) == 0) || (3 < param_5)) {
    local_28 = DAT_00949738;
  }
  else {
    local_28 = FUN_005c1540(param_1,0);
    local_28 = local_28 - (uint)(byte)(&DAT_00952850)[iVar7];
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (999 < local_28) {
      local_28 = 999;
    }
  }
  FUN_00501da0(param_1,local_1c,&local_18,&local_20,param_5);
  iVar10 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
  if ((&DAT_009ab892)[iVar10] == '\f') {
    local_64 = 1;
  }
  else {
    local_64 = FUN_00422f00((&DAT_009ab88f)[iVar10],1,100);
    local_64 = local_64 * 10;
  }
  local_64 = local_64 - (uint)(byte)(&DAT_00952838)[iVar7];
  if (local_64 < 0) {
    local_64 = 0;
  }
  else if (9999 < local_64) {
    local_64 = 9999;
  }
  iVar10 = *(short *)((int)&DAT_00952832 + iVar9) * 0x34;
  if ((&DAT_009ab892)[iVar10] == '\f') {
    local_60 = 1;
  }
  else {
    local_60 = FUN_00422f00((&DAT_009ab88f)[iVar10],1,100);
    local_60 = local_60 * 10;
  }
  uVar18 = local_10;
  local_60 = local_60 - (uint)(byte)(&DAT_00952838)[iVar9];
  if (local_60 < 0) {
    local_60 = 0;
  }
  else if (9999 < local_60) {
    local_60 = 9999;
  }
  iVar9 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
  if (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar9] * 0x10] < '\0') ||
     (iVar10 = *(short *)((int)&DAT_00952832 + local_c) * 0x34,
     (char)(&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[iVar10] * 0x10] < '\0')) {
    iVar10 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
    local_6c = (uint)(byte)(&DAT_009ab88f)[iVar10];
  }
  else {
    local_6c = 1;
  }
  if (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar9] * 0x10] < '\0') ||
     ((char)(&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[iVar10] * 0x10] < '\0')) {
    local_74 = (uint)(byte)(&DAT_009ab88f)[iVar9];
  }
  else {
    local_74 = 1;
  }
  if (param_6 == 0) {
    if ((&DAT_009ab892)[iVar9] == '\f') {
      iVar7 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar9];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      iVar7 = uVar18 * 10;
    }
    if ((&DAT_009ab892)[iVar10] == '\f') {
      iVar17 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar10];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      iVar17 = uVar18 * 10;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = local_1c;
    }
    return (int)(((-(uint)((param_5 & 1) != 0) & 0xfffffffc) + 8) *
                ((int)(local_64 * local_6c * local_18) / iVar7)) /
           ((int)(local_60 * local_74 * local_20) / iVar17 + 1);
  }
  local_50 = 1 << ((byte)local_14 & 0x1f);
  if (((((((byte)DAT_009a64e8 & (byte)local_50) != 0) && ((&DAT_009ab892)[iVar9] != '\v')) &&
       (((&DAT_009ab892)[iVar10] != '\f' || (-1 < local_24)))) && ((DAT_0093e904 & 1) != 0)) &&
     (((DAT_0093f660 == 0 || (local_38 == 0)) &&
      (iVar9 = FUN_0055f770(local_14,local_10,0xb), iVar9 != 0)))) {
    return 2;
  }
  local_40 = 0;
  iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar7),0x100000);
  uVar13 = DAT_009a64e8;
  if (((iVar9 != 0) &&
      (-1 < (char)(&DAT_0094ae68)
                  [(uint)(byte)(&DAT_009ab88d)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] * 0x10
                  ])) &&
     (-1 < (char)(&DAT_0094f280)
                 [(uint)(byte)(&DAT_009ab88e)[*(short *)((int)&DAT_00952832 + local_c) * 0x34] *
                  0x10])) {
    if ((DAT_0093f660 == 0) || ((DAT_0093e904 & 1) != 0)) {
      param_6 = *(uint *)((int)&DAT_0095282c + iVar7) & 0xfff7ffff;
      bVar24 = local_14 == DAT_00939284;
      *(uint *)((int)&DAT_0095282c + iVar7) = param_6;
      if ((bVar24) && (((byte)local_50 & (byte)uVar13) != 0)) {
        FUN_00625ec0(0,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + iVar7) * 0x34,0xffffffff,
                     0xffffffff);
        iVar9 = FUN_00581170(0x100000,0xffffffff,0xffffffff);
        FUN_00625e50(1,(&DAT_009ab538)[iVar9 * 7]);
        FUN_00421b40();
        iVar9 = FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_USENERVE_0068a0e4,0,s_biohazd_sm_pcx_0068a0d4,0
                            );
        if (iVar9 != 0) {
          *(uint *)((int)&DAT_0095282c + iVar7) = *(uint *)((int)&DAT_0095282c + iVar7) | 0x80000;
        }
        FUN_00421b20();
      }
      else {
        uVar13 = uVar13 & 0xff;
        if ((local_50 & uVar13) == 0) {
          iVar9 = (uVar18 + local_14 * 0x833) * 4;
          if ((((*(uint *)(&DAT_0096c9f8 + iVar9) & 0x40000) == 0) &&
              (local_80 = local_14 * 0x20cc, (*(uint *)(&DAT_0096c9e0 + local_80) & 0x1000000) == 0)
              ) && ((uVar13 = 1 << ((byte)uVar18 & 0x1f) & uVar13, uVar13 == 0 ||
                    (DAT_009a6638 <= DAT_009a663c)))) {
            if ((uVar13 != 0) && (((&DAT_0096c9f8)[iVar9] & 0x20) != 0)) {
              if ((((byte)DAT_009a649c & 0x40) == 0) ||
                 (((int)(&DAT_0096c9e4)[uVar18 * 0x833] <= (int)(&DAT_0096c9e4)[local_14 * 0x833] &&
                  (*(int *)(&DAT_0096cb8c + local_14 * 4 + uVar18 * 0x20cc) <=
                   *(int *)(&DAT_0096cb8c + iVar9))))) {
                iVar9 = 0;
              }
              else {
                iVar9 = (*(int *)(&DAT_0096cdbc + local_80) + 1) * 3;
              }
              if (5 < *(int *)(&DAT_0096cb04 + uVar18 * 0x20cc) + iVar9) goto LAB_00507399;
            }
          }
          else {
LAB_00507399:
            *(uint *)((int)&DAT_0095282c + iVar7) = param_6 | 0x80000;
          }
        }
      }
      if (DAT_0093f660 != 0) {
        FUN_00593220(param_1);
      }
    }
    if (((DAT_0093e904 & 2) != 0) && ((*(uint *)((int)&DAT_0095282c + iVar7) & 0x80000) != 0)) {
      local_40 = 1;
    }
  }
  if (-1 < local_24) {
    *(uint *)((int)&DAT_0095282c + iVar7) = *(uint *)((int)&DAT_0095282c + iVar7) & 0xfffbffff;
  }
  if (((*(uint *)((int)&DAT_0095282c + iVar7) & 0x1000) == 0) && ((DAT_0093e904 & 2) != 0)) {
    if ((local_14 != 0) &&
       ((*(short *)((int)&DAT_00952832 + iVar7) != 0xf &&
        (*(short *)((int)&DAT_00952832 + iVar7) != 8)))) {
      iVar9 = FUN_005c1540(param_1,0);
      iVar9 = iVar9 - (uint)(byte)(&DAT_00952850)[iVar7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (999 < iVar9) {
        iVar9 = 999;
      }
      if (DAT_00949738 < 0) {
        iVar9 = 0;
      }
      else if (DAT_00949738 < iVar9) {
        iVar9 = DAT_00949738;
      }
      local_18 = (int)(iVar9 * local_18) / DAT_00949738;
      uVar8 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x54c));
      iVar10 = DAT_00915614;
      iVar9 = ((iVar9 - DAT_00949738) * 100) / DAT_00949738;
      iVar7 = local_8;
      if ((iVar9 != 0) && (DAT_00915614 < 4)) {
        piVar23 = &DAT_009155f0 + DAT_00915614;
        DAT_00915614 = DAT_00915614 + 1;
        *piVar23 = iVar9;
        FUN_00645460(&DAT_0090f554 + iVar10 * 0x50,uVar8);
        iVar7 = local_8;
      }
    }
    if (param_5 != 1) {
      (&DAT_00952850)[iVar7] = (&DAT_00952850)[iVar7] + (char)local_28;
    }
  }
  uVar13 = local_10;
  uVar18 = local_14;
  *(uint *)((int)&DAT_0095282c + iVar7) = *(uint *)((int)&DAT_0095282c + iVar7) & 0xffffefff | 4;
  *(uint *)((int)&DAT_0095282c + local_c) = *(uint *)((int)&DAT_0095282c + local_c) | 4;
  if ((DAT_0093e904 & 2) == 0) {
    return 0;
  }
  *(uint *)((int)&DAT_0095282c + iVar7) = *(uint *)((int)&DAT_0095282c + iVar7) | 0x40;
  if (((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] != '\v') &&
     ((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_c) * 0x34] != '\f')) {
    if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_10 & 0x1f))) == 0) {
LAB_00507744:
      if ((((((&DAT_0096c9f8)[local_10 * 4 + local_14 * 0x20cc] & 2) != 0) ||
           (((&DAT_0096c9f8)[local_14 * 4 + local_10 * 0x20cc] & 2) != 0)) &&
          (local_14 != DAT_00939284)) && (local_10 != DAT_00939284)) {
        if (((&DAT_0096c9f8)[(DAT_00939284 * 0x833 + local_10) * 4] & 1) == 0) {
          if (((&DAT_0096c9f8)[(DAT_00939284 * 0x833 + local_14) * 4] & 1) == 0) {
            if (((byte)DAT_009a64c0 & 0x80) != 0) {
              local_48 = 1;
            }
          }
          else {
            local_48 = 3;
          }
        }
        else {
          local_48 = 2;
        }
      }
    }
    else {
      iVar7 = (local_14 + local_10 * 0x833) * 4;
      uVar22 = *(uint *)(&DAT_0096c9f8 + iVar7);
      if (((uVar22 & 6) == 0) &&
         ((((uVar22 & 8) == 0 &&
           ((*(uint *)(&DAT_0096c9f8 + local_10 * 4 + local_14 * 0x20cc) & 0x800) == 0)) ||
          ((uVar22 & 0x10) != 0)))) goto LAB_00507744;
      if (local_10 == DAT_00939284) {
        DAT_009bbff0 = 0;
        iVar9 = local_14 * 0x59c;
        DAT_009bbfec = (&DAT_00946a50)[local_14 * 0x167];
        FUN_00625ec0(0,&DAT_00946a9c + iVar9,0xffffffff,0xffffffff);
        DAT_009bbfec = (&DAT_00946a50)[uVar18 * 0x167];
        DAT_009bbff0 = 0;
        FUN_00625ec0(1,&DAT_00946a84 + iVar9,0xffffffff,0xffffffff);
        DAT_009bbfec = (&DAT_00946d4c)[uVar18 * 0x167];
        DAT_009bbff0 = (&DAT_00946d50)[uVar18 * 0x167];
        FUN_00625ec0(2,&DAT_00946d34 + iVar9,0xffffffff,0xffffffff);
        FUN_0047a890(s_SURPRISE_0068a0f0,0xffffec78,0,0);
        *(int *)(&DAT_0096ca58 + iVar7) = DAT_009a64d4;
      }
      else {
        if (DAT_0093a95c != 0) {
          DAT_009bbff0 = 0;
          iVar9 = local_14 * 0x59c;
          DAT_009bbfec = (&DAT_00946a50)[local_14 * 0x167];
          FUN_00625ec0(0,&DAT_00946a9c + iVar9,0xffffffff,0xffffffff);
          DAT_009bbfec = (&DAT_00946a50)[uVar18 * 0x167];
          DAT_009bbff0 = 0;
          FUN_00625ec0(1,&DAT_00946a84 + iVar9,0xffffffff,0xffffffff);
          DAT_009bbfec = (&DAT_00946d4c)[uVar18 * 0x167];
          DAT_009bbff0 = (&DAT_00946d50)[uVar18 * 0x167];
          FUN_00625ec0(2,&DAT_00946d34 + iVar9,0xffffffff,0xffffffff);
          FUN_00405140(s_SURPRISE_0068a0fc,0,-1 - uVar13);
        }
        *(int *)(&DAT_0096ca58 + iVar7) = DAT_009a64d4;
      }
    }
    uVar18 = local_10;
    FUN_0050c2e0(local_14,local_10);
    uVar22 = 1;
    piVar23 = &DAT_0096fb0c;
    puVar21 = &DAT_0096eac4 + uVar18;
    param_6 = DAT_0094a30c + (DAT_0068faf0 * local_2c + ((int)local_30 >> 1)) * 0x2c;
    uVar18 = local_14;
    uVar13 = local_10;
    do {
      if (((uVar22 != uVar18) && (uVar22 != uVar13)) &&
         (((int)*(char *)(param_6 + 7) == uVar22 &&
          ((((iVar7 = uVar18 * 0x20cc, uVar18 = local_14,
             ((&DAT_0096c9f8)[iVar7 + uVar22 * 4] & 1) != 0 &&
             ((*(uint *)(&DAT_0096c9f8 + uVar22 * 4 + uVar13 * 0x20cc) & 0x10) == 0)) &&
            ((*(uint *)(&DAT_0096c9f8 + uVar22 * 4 + uVar13 * 0x20cc) & 8) != 0)) &&
           ((*piVar23 < (int)(&DAT_0096da40)[uVar13 * 0x833] &&
            (FUN_0055b870(uVar22,local_10,0x2000), uVar18 = local_14, uVar13 = local_10,
            (*puVar21 & 0x800000) != 0)))))))) {
        FUN_0053a030(local_10,uVar22,3);
        uVar18 = local_14;
        uVar13 = local_10;
      }
      piVar23 = piVar23 + 0x833;
      uVar22 = uVar22 + 1;
      puVar21 = puVar21 + 0x833;
    } while ((int)piVar23 < 0x97e0a0);
  }
  if (local_40 != 0) {
    local_18 = local_18 + (int)local_18 / 2;
    uVar8 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x554));
    iVar7 = DAT_00915614;
    if (DAT_00915614 < 4) {
      puVar2 = &DAT_009155f0 + DAT_00915614;
      DAT_00915614 = DAT_00915614 + 1;
      *puVar2 = 0x32;
      FUN_00645460(&DAT_0090f554 + iVar7 * 0x50,uVar8);
    }
  }
  if (DAT_0093f660 != 0) {
    FUN_006262f0(s_Battle_Resolution__0068a108,param_1,local_1c,0);
  }
  uVar13 = local_10;
  uVar18 = local_14;
  local_94 = (int)*(short *)((int)&DAT_00952832 + local_8);
  local_98 = (int)*(short *)((int)&DAT_00952832 + local_c);
  if (((local_14 == DAT_00939284) || (local_10 == DAT_00939284)) &&
     ((DAT_0093f660 == 0 &&
      ((((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[local_94 * 0x34] * 0x10] < '\0' ||
        ((char)(&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[local_98 * 0x34] * 0x10] < '\0')) &&
       (iVar7 = FUN_004ba650(2), iVar7 != 0)))))) {
    iVar7 = param_1;
    if (uVar18 != DAT_00939284) {
      iVar7 = local_1c;
    }
    FUN_004be650(s_PSICOMBAT_0068a11c,param_3,param_4,iVar7,0,1,0xffffffff,0xffffffff);
  }
  iVar7 = 3 - (uint)(uVar18 != 0);
  local_9c = uVar13 * 0x20cc;
  if ((int)(&DAT_0096c9e8)[uVar13 * 0x833] < iVar7) {
    param_6 = 1;
    if (((DAT_009a64e8 & 0xff & 1 << ((byte)uVar13 & 0x1f)) != 0) &&
       ((local_50 & DAT_009a64e8 & 0xff) == 0)) {
      iVar9 = ((&DAT_0096c9e8)[uVar13 * 0x833] + 1) * local_18;
      local_18 = (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2;
    }
  }
  local_80 = local_14 * 0x20cc;
  if ((((int)(&DAT_0096c9e8)[local_14 * 0x833] < iVar7) && ((local_50 & DAT_009a64e8 & 0xff) != 0))
     && ((DAT_009a64e8 & 0xff & 1 << ((byte)local_10 & 0x1f)) == 0)) {
    local_18 = (int)((4 - (&DAT_0096c9e8)[local_14 * 0x833]) * local_18) / 2;
  }
  if (local_14 == 0) {
    if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_10 & 0x1f))) == 0) {
      if ((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_c) * 0x34] == '\t') {
        local_18 = (int)local_18 / 2;
        if (((((byte)DAT_009a64c0 & 0x80) == 0) && (DAT_0093f660 == 0)) &&
           ((((byte)(&DAT_00952836)[local_c] != DAT_00939284 ||
             ((*(ushort *)(&DAT_00952830 + local_c) & 0x440) == 0x440)) &&
            (((&DAT_0095284f)[local_c] & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) == 0)))) {
          local_18 = (int)local_18 / 2;
        }
      }
      else {
        iVar7 = ((&DAT_0096c9e4)[uVar13 * 0x833] + 8) * local_18;
        local_18 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
      }
    }
    if (-1 < local_24) {
      if (local_10 == DAT_00939284) {
        local_88 = 1;
      }
      if ((int)(&DAT_0096da3c)[uVar13 * 0x833] < 2) {
        local_18 = (int)local_18 / 2;
      }
      if (DAT_009a64d4 < 0x32) {
        local_18 = (int)local_18 / 2;
      }
      FUN_0050ba00(1,&param_6,&param_7);
      param_6 = (uint)(((&DAT_0097d0cc)[local_24 * 0x134 + param_6] & (byte)param_7) != 0);
      if ((param_6 != 0) && ((int)(&DAT_0096da3c)[uVar13 * 0x833] < 4)) {
        local_18 = (int)local_18 / 2;
      }
    }
  }
  if (DAT_009a64d4 < 0xf) {
    if (local_14 == 0) {
      local_18 = (int)local_18 / 3;
    }
    if (local_10 == 0) {
      local_20 = (int)local_20 / 2;
    }
  }
  if ((-1 < local_24) &&
     ((&DAT_0094a379)
      [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] ==
      '\x02')) {
    (&DAT_0097d070)[local_24 * 0x4d] = (&DAT_0097d070)[local_24 * 0x4d] | 0x100000;
  }
  if (((DAT_0093e904 & 1) != 0) && (local_38 == 0)) {
    if (((((byte)local_50 & (byte)DAT_009a64e8) != 0) &&
        (((local_14 == DAT_00939284 && (param_5 == 0)) &&
         ((&DAT_0094a37d)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] ==
          '\0')))) && ((*(uint *)((int)&DAT_0095282c + local_8) & 0x4200) == 0)) {
      if ((int)(local_64 * local_6c * local_18 * 2) < (int)(local_60 * local_74 * local_20)) {
        FUN_0045d310();
        FUN_00422c50();
        FUN_004b8830(param_1,local_1c,local_18,local_20,0);
        _DAT_008c6b3c = 1;
        DAT_009bbff0 = 0;
        DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
        FUN_00625ec0(0,&DAT_00946a9c + DAT_00939284 * 0x59c,0xffffffff,0xffffffff);
        DAT_009bbff0 = 0;
        DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
        FUN_00625ec0(1,&DAT_00946a84 + DAT_00939284 * 0x59c,0xffffffff,0xffffffff);
        FUN_00421b40();
        iVar7 = FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_BADIDEA_0068a138,0,s_hasty_sm_pcx_0068a128,0);
        if (iVar7 == 0) {
          FUN_00421b20();
          if ((DAT_0093e904 & 2) != 0) {
            (&DAT_00952850)[local_8] = (&DAT_00952850)[local_8] - (char)local_28;
          }
          (&DAT_00952839)[local_8] = 0;
          *(uint *)((int)&DAT_0095282c + local_8) =
               *(uint *)((int)&DAT_0095282c + local_8) & 0xfcffbdff;
          FUN_004b8970();
          FUN_004b9ea0();
          return 1;
        }
      }
      else {
        if ((_DAT_009a6494 & 0x8000) == 0) goto LAB_0050835d;
        FUN_0045d310();
        FUN_00422c50();
        FUN_004b8830(param_1,local_1c,local_18,local_20,0);
        _DAT_008c6b3c = 1;
        DAT_009bbff0 = 0;
        DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
        FUN_00625ec0(0,&DAT_00946a9c + DAT_00939284 * 0x59c,0xffffffff,0xffffffff);
        DAT_009bbff0 = 0;
        DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
        FUN_00625ec0(1,&DAT_00946a84 + DAT_00939284 * 0x59c,0xffffffff,0xffffffff);
        DAT_009b86a0 = 0;
        FUN_0064fc88((int)local_18 >> 8,local_ec,10);
        FUN_00645470(&DAT_009b86a0,local_ec);
        FUN_00645470(&DAT_009b86a0,&DAT_0068a140);
        FUN_0064fc88((int)((local_18 & 0xff) * 10) >> 8,local_ec,10);
        FUN_00645470(&DAT_009b86a0,local_ec);
        FUN_00625ec0(2,&DAT_009b86a0,0xffffffff,0xffffffff);
        DAT_009b86a0 = 0;
        FUN_0064fc88((int)local_20 >> 8,local_ec,10);
        FUN_00645470(&DAT_009b86a0,local_ec);
        FUN_00645470(&DAT_009b86a0,&DAT_0068a144);
        FUN_0064fc88((int)((local_20 & 0xff) * 10) >> 8,local_ec,10);
        FUN_00645470(&DAT_009b86a0,local_ec);
        FUN_00625ec0(3,&DAT_009b86a0,0xffffffff,0xffffffff);
        iVar7 = local_8;
        iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
        if ((&DAT_009ab892)[iVar9] == '\f') {
          iVar9 = 1;
        }
        else {
          iVar9 = FUN_00422f00((&DAT_009ab88f)[iVar9],1,100);
          iVar9 = iVar9 * 10;
        }
        iVar12 = local_c;
        iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
        iVar10 = 0;
        if ((-1 < iVar9) && (iVar10 = 9999, iVar9 < 10000)) {
          iVar10 = iVar9;
        }
        iVar10 = iVar10 * local_18;
        iVar9 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
        if ((&DAT_009ab892)[iVar9] == '\f') {
          iVar9 = 1;
        }
        else {
          iVar9 = FUN_00422f00((&DAT_009ab88f)[iVar9],1,100);
          iVar9 = iVar9 * 10;
        }
        iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar12];
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        else if (9999 < iVar9) {
          iVar9 = 9999;
        }
        iVar9 = iVar9 * local_20;
        iVar12 = 2;
        while( true ) {
          iVar14 = iVar10;
          if (iVar9 <= iVar10) {
            iVar14 = iVar9;
          }
          if (iVar14 <= iVar12) break;
          for (; (((iVar10 != 0 && (iVar9 != 0)) && (iVar10 % iVar12 == 0)) && (iVar9 % iVar12 == 0)
                 ); iVar9 = iVar9 / iVar12) {
            iVar10 = iVar10 / iVar12;
          }
          iVar12 = iVar12 + 1;
        }
        for (; (19999 < iVar10 && (19999 < iVar9)); iVar9 = iVar9 / 10000) {
          iVar10 = iVar10 / 10000;
        }
        for (; (9999 < iVar10 && (9999 < iVar9)); iVar9 = iVar9 / 5000) {
          iVar10 = iVar10 / 5000;
        }
        for (; (1999 < iVar10 && (1999 < iVar9)); iVar9 = iVar9 / 1000) {
          iVar10 = iVar10 / 1000;
        }
        for (; (999 < iVar10 && (999 < iVar9)); iVar9 = iVar9 / 500) {
          iVar10 = iVar10 / 500;
        }
        for (; (199 < iVar10 && (199 < iVar9)); iVar9 = iVar9 / 100) {
          iVar10 = iVar10 / 100;
        }
        for (; (99 < iVar10 && (99 < iVar9)); iVar9 = iVar9 / 0x32) {
          iVar10 = iVar10 / 0x32;
        }
        FUN_00421b40();
        FUN_00625e30(0,iVar10);
        FUN_00625e30(1,iVar9);
        if (((&DAT_00952838)[iVar7] != '\0') ||
           (pcVar25 = s_GOODIDEA_0068a164, (&DAT_00952838)[local_c] != '\0')) {
          pcVar25 = s_GOODIDEA2_0068a158;
        }
        iVar9 = FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,pcVar25,0,s_hasty_sm_pcx_0068a148,0);
        if (iVar9 == 0) {
          FUN_00421b20();
          if ((DAT_0093e904 & 2) != 0) {
            (&DAT_00952850)[iVar7] = (&DAT_00952850)[iVar7] - (char)local_28;
          }
          (&DAT_00952839)[iVar7] = 0;
          *(uint *)((int)&DAT_0095282c + iVar7) = *(uint *)((int)&DAT_0095282c + iVar7) & 0xfcffbdff
          ;
          FUN_004b8970();
          FUN_004b9ea0();
          return 1;
        }
      }
      FUN_00421b20();
    }
  }
LAB_0050835d:
  iVar7 = local_24;
  if (local_40 != 0) {
    FUN_0055eee0(local_14,local_10,-1 < local_24,0);
    local_13c[0] = '\0';
    if (-1 < iVar7) {
      FUN_00645460(local_13c,&DAT_0097d053 + iVar7 * 0x134);
    }
  }
  iVar7 = local_c;
  uVar22 = local_10;
  uVar13 = local_14;
  uVar18 = DAT_00939284;
  if ((&DAT_00952839)[local_8] == '\x18') {
    (&DAT_00952839)[local_8] = 0;
    *(uint *)((int)&DAT_0095282c + local_8) = *(uint *)((int)&DAT_0095282c + local_8) & 0xfcffbdff;
  }
  local_8c = 0;
  if (((local_14 == uVar18) || (local_10 == uVar18)) ||
     (param_6 = 0, ((byte)DAT_009a64c0 & 0x80) != 0)) {
    param_6 = 1;
  }
  if ((((byte)(&DAT_00952836)[local_8] == uVar18) &&
      ((*(ushort *)(&DAT_00952830 + local_8) & 0x440) != 0x440)) ||
     ((bVar19 = (byte)(1 << ((byte)uVar18 & 0x1f)), (bVar19 & (&DAT_0095284f)[local_8]) != 0 ||
      ((((byte)(&DAT_00952836)[local_c] == uVar18 &&
        ((*(ushort *)(&DAT_00952830 + local_c) & 0x440) != 0x440)) ||
       (((&DAT_0095284f)[local_c] & bVar19) != 0)))))) {
    local_7c = 1;
  }
  else {
    local_7c = 0;
  }
  if (((&DAT_0096c9f8)[uVar18 * 0x20cc + local_14 * 4] & 1) == 0) {
    uVar18 = DAT_009a6490 & 4;
  }
  else {
    uVar18 = DAT_009a6490 & 0x8000;
  }
  if (uVar18 != 0) {
    param_6 = param_6 | local_7c;
  }
  if (param_5 == 1) {
    FUN_00579a30(local_10,0x10,4,param_3,param_4,0xffffffff);
    FUN_00579a30(uVar22,0,4,local_30,local_2c,0xffffffff);
    if (-1 < local_24) {
      (&DAT_0097d070)[local_24 * 0x4d] = (&DAT_0097d070)[local_24 * 0x4d] | 0x200000;
      (&DAT_0097d074)[local_24 * 0x4d] = (&DAT_0097d074)[local_24 * 0x4d] | 0x100;
    }
    if (-1 < local_1c) {
      sVar6 = *(short *)((int)&DAT_0095285a + local_c);
      while (-1 < sVar6) {
        local_1c = (int)sVar6;
        sVar6 = (&DAT_0095285a)[local_1c * 0x1a];
      }
      bVar24 = true;
      iVar7 = local_1c;
      while (local_1c = iVar7, -1 < iVar7) {
        local_c = iVar7 * 0x34;
        if ((((&DAT_0094a379)
              [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90] !=
              '\x02') ||
            (iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_8),0x20), iVar9 != 0))
           || ((-1 < local_24 ||
               ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0x40000)
                != 0)))) {
          FUN_005c1d20(param_1);
          FUN_00501da0(param_1,iVar7,&local_18,&local_20,1);
          puVar11 = (undefined *)(DAT_0094974c * local_20);
          if ((int)puVar11 < 1) {
            puVar11 = (undefined *)0x1;
          }
          else if (9999999 < (int)puVar11) {
            puVar11 = &DAT_0098967f;
          }
          iVar9 = (int)(DAT_00949748 * local_18) / (int)puVar11 + 1;
          if (iVar9 < 1) {
            iVar9 = 1;
          }
          else if (999 < iVar9) {
            iVar9 = 999;
          }
          if (iVar9 == 1 || iVar9 + -1 < 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = _rand();
            iVar10 = iVar10 % iVar9;
          }
          if ((local_24 < 0) &&
             ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0x800) == 0)
             ) {
            iVar9 = (short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34;
            iVar7 = DAT_00949844;
            if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar9] * 0x90] != '\0') {
              iVar7 = DAT_00949848;
            }
            iVar12 = -iVar7 + 100;
            if ((&DAT_009ab892)[iVar9] == '\f') {
              iVar7 = -iVar7 + 199;
            }
            else {
              bVar19 = (&DAT_009ab88f)[iVar9];
              uVar18 = (uint)bVar19;
              if (bVar19 == 0) {
                uVar18 = 1;
              }
              else if (100 < bVar19) {
                iVar7 = iVar12 * 1000 + 99;
                goto LAB_0050876a;
              }
              iVar7 = iVar12 * uVar18 * 10 + 99;
            }
          }
          else {
            if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] == '\f') {
              iVar7 = 1;
            }
            else {
              bVar19 = (&DAT_009ab88f)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34];
              uVar18 = (uint)bVar19;
              if (bVar19 == 0) {
                uVar18 = 1;
              }
              else if (100 < bVar19) {
                uVar18 = 100;
              }
              iVar7 = uVar18 * 10;
            }
            iVar7 = (100 - DAT_00949840) * iVar7 + 99;
          }
LAB_0050876a:
          uVar18 = iVar7 / 100;
          iVar7 = local_c;
          for (; 0 < iVar10; iVar10 = iVar10 + -1) {
            iVar9 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
            if ((&DAT_009ab892)[iVar9] == '\f') {
              iVar9 = 1;
            }
            else {
              iVar9 = FUN_00422f00((&DAT_009ab88f)[iVar9],1,100);
              iVar9 = iVar9 * 10;
              iVar7 = local_c;
            }
            iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (9999 < iVar9) {
              iVar9 = 9999;
            }
            if ((int)uVar18 <= iVar9 - iVar10) break;
          }
          iVar7 = local_1c;
          iVar9 = local_c;
          if (param_6 != 0) {
            bVar24 = false;
            DAT_00689f2c = local_1c;
            (&DAT_0095284f)[local_8] = (&DAT_0095284f)[local_8] | '\x01' << ((byte)local_10 & 0x1f);
            DAT_00689f28 = param_1;
            iVar9 = FUN_005108a0(param_3,param_4,local_14);
            if (iVar9 == 0) {
              FUN_0046af40(local_30,local_2c,2);
              FUN_0046af40(param_3,param_4,2);
            }
            FUN_0045d310();
            FUN_00422c50();
            FUN_004b8830(param_1,iVar7,local_18,local_20,1);
            _DAT_008c6b3c = 1;
            FUN_005fd120();
            iVar9 = local_c;
            if ((((uVar18 == 0) || ((byte)(&DAT_00952838)[local_c] != uVar18)) || (local_1c < 0)) ||
               (*(short *)((int)&DAT_00952858 + local_c) < 0)) {
              FUN_00504aa0(param_3,param_4,0);
              bVar24 = true;
            }
          }
          (&DAT_00952838)[iVar9] = (&DAT_00952838)[iVar9] + (char)iVar10;
          *(uint *)((int)&DAT_0095282c + iVar9) = *(uint *)((int)&DAT_0095282c + iVar9) | 4;
          if ((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + iVar9) * 0x34] == '\t') {
            (&DAT_0095284d)[iVar9] = 0;
          }
          if (local_24 < 0) {
            *(uint *)((int)&DAT_0095282c + iVar9) = *(uint *)((int)&DAT_0095282c + iVar9) | 8;
          }
          if (param_6 != 0) {
            FUN_004b8830(param_1,local_1c,local_18,local_20,1);
            FUN_0046af40(param_3,param_4,2);
            DAT_00689f28 = -1;
            DAT_00689f2c = -1;
            if ((_DAT_009a6494 & 0x10) == 0) {
              SVar5 = GetAsyncKeyState(0x10);
              if ((((char)((ushort)SVar5 >> 8) == '\0') && ((DAT_009a6490 & 8) == 0)) &&
                 ((DAT_0093f660 == 0 && (bVar24)))) {
                FUN_0050dd90(200);
              }
            }
            else {
              FUN_00421b40();
              FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_BATTLEPAUSE_0068a190,0,s_batwon_sm_pcx_0068a180,0
                          );
              FUN_00421b20();
              if (DAT_009bc070 != 0) {
                _DAT_009a6494 = _DAT_009a6494 & 0xffffffef;
                FUN_0059e5d0(0);
              }
            }
          }
        }
        if (local_1c < 0) break;
        iVar7 = (int)*(short *)((int)&DAT_00952858 + local_c);
      }
    }
    uVar8 = FUN_005bfe90(param_3,param_4);
    iVar7 = FUN_005b8e10(uVar8);
    while (-1 < iVar7) {
      if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] == '\f') {
        iVar17 = 1;
      }
      else {
        iVar17 = FUN_00422f00((&DAT_009ab88f)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34],1,100);
        iVar17 = iVar17 * 10;
      }
      iVar17 = iVar17 - (uint)(byte)(&DAT_00952838)[iVar7 * 0x34];
      if ((iVar17 < 0) || ((iVar17 < 10000 && (iVar17 < 1)))) {
        FUN_005b8ee0(iVar7,2);
        FUN_005b9510(iVar7);
        uVar8 = FUN_005bfe90(param_3,param_4);
        iVar7 = FUN_005b8e10(uVar8);
        iVar17 = (local_10 + local_14 * 0x833) * 4;
        *(int *)(&DAT_0096cb6c + iVar17) = *(int *)(&DAT_0096cb6c + iVar17) + 1;
        *(int *)(&DAT_0096cb8c + iVar17) = *(int *)(&DAT_0096cb8c + iVar17) + 1;
      }
      else {
        if (iVar7 < 0) break;
        iVar7 = (int)(short)(&DAT_00952858)[iVar7 * 0x1a];
      }
    }
    FUN_0046af90(param_3,param_4,1,2);
    if ((-1 < local_24) && (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_10 & 0x1f))) == 0)) {
      FUN_004e5fe0(local_24,0);
    }
    return 0;
  }
  if (param_5 != 0) {
    FUN_00579a30(local_10,0x10,2,param_3,param_4,0xffffffff);
  }
  if (param_6 != 0) {
    if ((DAT_0093f660 != 0) && (DAT_006e8150 != 0)) {
      local_8c = 1;
    }
    (&DAT_0095284f)[local_8] = (&DAT_0095284f)[local_8] | '\x01' << ((byte)uVar22 & 0x1f);
    DAT_00689f28 = param_1;
    DAT_00689f2c = local_1c;
    iVar9 = FUN_005108a0(param_3,param_4,uVar13);
    if (iVar9 == 0) {
      FUN_0046af40(local_30,local_2c,2);
      FUN_0046af40(param_3,param_4,2);
    }
    piVar23 = local_30;
    FUN_005b8ee0(param_1,1);
    FUN_0045d310();
    FUN_00422c50();
    FUN_004b8830(param_1,local_1c,local_18,local_20,param_5);
    _DAT_008c6b3c = 1;
    FUN_005fd120();
    SVar5 = GetAsyncKeyState(0x10);
    if (((char)((ushort)SVar5 >> 8) == '\0') && ((param_5 & 1) == 0)) {
      FUN_0055a150(param_1,piVar23,local_2c,param_2,1);
    }
    FUN_005b8af0(param_1,piVar23,local_2c);
    FUN_0046af40(piVar23,local_2c,2);
    FUN_0046af40(param_3,param_4,2);
  }
  local_28 = 0;
  iVar9 = FUN_005c1540(local_1c,1);
  iVar10 = FUN_005c1540(param_1,1);
  if ((((((iVar10 < iVar9) && (param_5 == 0)) &&
        (iVar9 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34,
        (&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar9] * 0x10] != '\0')) &&
       (((*(byte *)((int)&DAT_0095282c + iVar7) & 0x40) == 0 &&
        ((&DAT_0094a379)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] !=
         '\x02')))) && ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar9] * 0x90] != '\x02')) &&
     (((iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_8),0x200), iVar9 == 0 ||
       (iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar7),0x2000000), iVar9 != 0)) &&
      (((&DAT_00952839)[iVar7] != '\x02' &&
       (((local_24 < 0 &&
         ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0x40800) == 0))
        && (iVar9 = FUN_005b9580(local_1c,1,0xffffffff,0xffffffff,0xffffffff), iVar9 == 1)))))))) {
    iVar9 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
    if ((&DAT_009ab892)[iVar9] == '\f') {
      iVar9 = 1;
    }
    else {
      iVar9 = FUN_00422f00((&DAT_009ab88f)[iVar9],1,100);
      iVar9 = iVar9 * 10;
    }
    iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (9999 < iVar9) {
      iVar9 = 9999;
    }
    local_28 = (iVar9 + 1) / 2;
  }
  iVar9 = local_8;
  local_84 = 0;
  iVar10 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_8),0x4000000);
  if (((iVar10 != 0) &&
      ((&DAT_0094a379)
       [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar9) * 0x34] * 0x90] == '\x01'
      )) && ((*(byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + iVar17) * 0x2c) & 0xe0) < 0x60)) {
    sVar6 = *(short *)((int)&DAT_00952832 + iVar7);
    iVar9 = sVar6 * 0x34;
    if (((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar9] * 0x90] == '\x01') &&
       (((0x3f < sVar6 ||
         ((-1 < (char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar9] * 0x10] && (sVar6 != 0xf)))
         ) && (local_24 < 0)))) {
      if ((&DAT_009ab892)[iVar9] == '\f') {
        iVar9 = 1;
      }
      else {
        iVar9 = FUN_00422f00((&DAT_009ab88f)[iVar9],1,100);
        iVar9 = iVar9 * 10;
      }
      iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (9999 < iVar9) {
        iVar9 = 9999;
      }
      local_84 = (iVar9 * 2) / 3;
    }
  }
  iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
  if (((&DAT_009ab892)[iVar9] == '\x05') && ((&DAT_009ab88f)[iVar9] != '\0')) {
    FUN_00500b60(param_1,param_3,param_4);
    DAT_0090d91c = DAT_0090d91c | 4;
    return 0;
  }
  if (((&DAT_0094a37d)
       [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] != '\0'
      ) || (local_70 = 3, DAT_0093f660 != 0)) {
    local_70 = 0;
  }
  local_58 = 0;
  if (((&DAT_0094a37d)
       [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] != '\0'
      ) || (DAT_0093f660 != 0)) {
    iVar9 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
    if ((&DAT_009ab892)[iVar9] == '\f') {
      iVar9 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar9];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      iVar9 = uVar18 * 10;
    }
    iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (9999 < iVar9) {
      iVar9 = 9999;
    }
    FUN_00504aa0(param_3,param_4,2 - (uint)(iVar9 != 0));
  }
  if (((param_5 & 2) == 0) ||
     (local_4c = 1,
     ((&DAT_0094a379)
      [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] * 0x90] ==
     '\x01') ==
     ((&DAT_0094a379)
      [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar7) * 0x34] * 0x90] == '\x01')
     )) {
    local_4c = 0;
  }
LAB_005090d7:
  uVar18 = local_18;
  iVar7 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
  if ((&DAT_009ab892)[iVar7] == '\f') {
    uVar13 = 1;
  }
  else {
    bVar19 = (&DAT_009ab88f)[iVar7];
    uVar13 = (uint)bVar19;
    if (bVar19 == 0) {
      uVar13 = 1;
    }
    else if (100 < bVar19) {
      uVar13 = 100;
    }
    uVar13 = uVar13 * 10;
  }
  iVar7 = uVar13 - (byte)(&DAT_00952838)[local_8];
  if ((iVar7 < 0) || ((iVar7 < 10000 && (uVar13 == (byte)(&DAT_00952838)[local_8]))))
  goto LAB_00509983;
  iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
  if ((&DAT_009ab892)[iVar7] == '\f') {
    uVar13 = 1;
  }
  else {
    bVar19 = (&DAT_009ab88f)[iVar7];
    uVar13 = (uint)bVar19;
    if (bVar19 == 0) {
      uVar13 = 1;
    }
    else if (100 < bVar19) {
      uVar13 = 100;
    }
    uVar13 = uVar13 * 10;
  }
  iVar7 = uVar13 - (byte)(&DAT_00952838)[local_c];
  if ((iVar7 < 0) || ((iVar7 < 10000 && (uVar13 == (byte)(&DAT_00952838)[local_c]))))
  goto LAB_00509983;
  if (local_18 == 1 || (int)(local_18 - 1) < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = _rand();
    iVar7 = iVar7 % (int)uVar18;
  }
  uVar18 = local_20;
  if (local_20 == 1 || (int)(local_20 - 1) < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = _rand();
    iVar9 = iVar9 % (int)uVar18;
  }
  iVar10 = local_c;
  if (iVar7 <= iVar9) {
    bVar19 = (&DAT_00952838)[local_8] + (char)local_74;
    (&DAT_00952838)[local_8] = bVar19;
    if (((param_6 == 0) || (local_70 == 0)) ||
       ((int)((longlong)(ulonglong)(uint)bVar19 / (longlong)(int)(local_70 * local_74)) ==
        (int)(bVar19 - local_74) / (int)(local_70 * local_74))) goto LAB_005090d7;
    local_58 = 1;
    FUN_004b8830(param_1,local_1c,local_18,local_20,param_5);
    iVar7 = local_2c;
    piVar23 = local_30;
    FUN_00504aa0(local_30,local_2c,9);
    iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
    if ((&DAT_009ab892)[iVar9] == '\f') {
      uVar18 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar9];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      uVar18 = uVar18 * 10;
    }
    iVar9 = uVar18 - (byte)(&DAT_00952838)[local_8];
    if ((-1 < iVar9) && ((9999 < iVar9 || (uVar18 != (byte)(&DAT_00952838)[local_8])))) {
      FUN_0046af40(piVar23,iVar7,2);
      FUN_0046af40(param_3,param_4,2);
    }
    if (local_4c == 0) goto LAB_005090d7;
    goto LAB_00509983;
  }
  bVar19 = (&DAT_00952838)[local_c] + (char)local_6c;
  (&DAT_00952838)[local_c] = bVar19;
  if (((param_6 != 0) && (local_70 != 0)) &&
     (local_78 = (int)(bVar19 - local_6c) / (int)(local_70 * local_6c),
     (int)((longlong)(ulonglong)(uint)bVar19 / (longlong)(int)(local_70 * local_6c)) != local_78)) {
    local_58 = 2;
    FUN_004b8830(param_1,local_1c,local_18,local_20,param_5);
    FUN_00504aa0(param_3,param_4,1);
    iVar7 = *(short *)((int)&DAT_00952832 + iVar10) * 0x34;
    if ((&DAT_009ab892)[iVar7] == '\f') {
      uVar18 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar7];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      uVar18 = uVar18 * 10;
    }
    iVar7 = uVar18 - (byte)(&DAT_00952838)[iVar10];
    if ((-1 < iVar7) && ((9999 < iVar7 || (uVar18 != (byte)(&DAT_00952838)[iVar10])))) {
      FUN_0046af40(local_30,local_2c,2);
      FUN_0046af40(param_3,param_4,2);
    }
    if (local_4c != 0) goto LAB_00509983;
  }
  if (local_84 != 0) {
    iVar7 = *(short *)((int)&DAT_00952832 + iVar10) * 0x34;
    if ((&DAT_009ab892)[iVar7] == '\f') {
      uVar18 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar7];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      uVar18 = uVar18 * 10;
    }
    iVar7 = uVar18 - (byte)(&DAT_00952838)[iVar10];
    if ((-1 < iVar7) &&
       ((((9999 < iVar7 || (uVar18 != (byte)(&DAT_00952838)[iVar10])) &&
         (local_84 = local_84 - local_6c, local_84 < 1)) &&
        (iVar9 = _rand(), iVar7 = local_8, iVar9 % 100 < 0x32)))) {
      bVar19 = (&DAT_00952836)[local_c];
      local_54 = (uint)(byte)(&DAT_00952836)[local_8];
      if (local_1c < 0) goto LAB_00509827;
      sVar6 = *(short *)((int)&DAT_0095285a + local_c);
      iVar9 = local_1c;
      while (-1 < sVar6) {
        iVar9 = (int)sVar6;
        sVar6 = (&DAT_0095285a)[iVar9 * 0x1a];
      }
      for (; -1 < iVar9; iVar9 = (int)(short)(&DAT_00952858)[iVar9 * 0x1a]) {
        (&DAT_00952836)[iVar9 * 0x34] = (&DAT_00952836)[iVar7];
        FUN_00625ec0(0,&DAT_009ab868 + (short)(&DAT_00952832)[iVar9 * 0x1a] * 0x34,0xffffffff,
                     0xffffffff);
        iVar10 = FUN_004e3b80(param_3,param_4);
        if (((&DAT_0097d044)[iVar10 * 0x134] == (&DAT_00952836)[iVar7]) &&
           ('\x02' < (char)(&DAT_0097d046)[iVar10 * 0x134])) {
          (&DAT_00952856)[iVar9 * 0x1a] = (short)iVar10;
        }
        else {
          (&DAT_00952856)[iVar9 * 0x1a] = 0xffff;
        }
        FUN_005c1d20(iVar9);
        if (iVar9 < 0) break;
      }
LAB_00509827:
      FUN_00591d60(param_3,param_4,0x100000,1);
      FUN_00591b10(param_3,param_4,(&DAT_00952836)[local_8]);
      if ((byte)(&DAT_00952836)[local_8] == DAT_00939284) {
        FUN_0046af90(param_3,param_4,1);
      }
      else {
        FUN_0046af40(param_3,param_4,2);
      }
      uVar18 = local_54;
      if (local_54 == DAT_00939284) {
        FUN_00625ec0(1,&DAT_00946d54 + (uint)bVar19 * 0x59c,0xffffffff,0xffffffff);
        FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_WEMARINEDETACH_0068a1c8,0,s_navun_sm_pcx_0068a1b8,0);
      }
      if (bVar19 == DAT_00939284) {
        FUN_00625ec0(1,&DAT_00946d54 + uVar18 * 0x59c,0xffffffff,0xffffffff);
        FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_THEYMARINEDETACH_0068a1e8,0,s_navun_sm_pcx_0068a1d8,0);
      }
      FUN_006262f0(s_Detachment_0068a1fc,0,0,0);
      local_54 = 1;
LAB_00509983:
      iVar7 = local_2c;
      piVar23 = local_30;
      uVar18 = param_6;
      iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
      if ((&DAT_009ab892)[iVar9] == '\f') {
        iVar9 = 1;
      }
      else {
        bVar19 = (&DAT_009ab88f)[iVar9];
        uVar13 = (uint)bVar19;
        if (bVar19 == 0) {
          uVar13 = 1;
        }
        else if (100 < bVar19) {
          uVar13 = 100;
        }
        iVar9 = uVar13 * 10;
      }
      param_2 = iVar9 - (uint)(byte)(&DAT_00952838)[local_8];
      if ((int)param_2 < 0) {
        param_2 = 0;
      }
      else if (9999 < (int)param_2) {
        param_2 = 9999;
      }
      if ((param_6 != 0) || (local_7c != 0)) {
        FUN_0046b040(local_30,local_2c,param_3,param_4,2,2);
        if (((local_68 != 0) && ((piVar23 != param_7 || (iVar7 != local_38)))) &&
           ((param_3 != param_7 || (param_4 != local_38)))) {
          FUN_0046af90(param_7,local_38,2,2);
        }
        if (uVar18 != 0) {
          FUN_004b8830(param_1,local_1c,local_18,local_20,param_5);
          if (local_68 == 0) {
            if (param_2 == 0) {
              if (local_4c == 0) {
                if ((local_58 == 1) || (DAT_0093f660 != 0)) {
                  iVar7 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
                  if ((&DAT_009ab892)[iVar7] == '\f') {
                    uVar18 = 1;
                  }
                  else {
                    bVar19 = (&DAT_009ab88f)[iVar7];
                    uVar18 = (uint)bVar19;
                    if (bVar19 == 0) {
                      uVar18 = 1;
                    }
                    else if (100 < bVar19) {
                      uVar18 = 100;
                    }
                    uVar18 = uVar18 * 10;
                  }
                  uVar13 = (uint)(byte)(&DAT_00952838)[local_8];
                  if ((-1 < (int)(uVar18 - uVar13)) &&
                     (((9999 < (int)(uVar18 - uVar13) || (uVar18 != uVar13)) && (DAT_0093f660 == 0))
                     )) goto LAB_00509f10;
                  if ((&DAT_009ab892)[iVar7] == '\f') {
                    iVar7 = 1;
                  }
                  else {
                    bVar19 = (&DAT_009ab88f)[iVar7];
                    uVar18 = (uint)bVar19;
                    if (bVar19 == 0) {
                      uVar18 = 1;
                    }
                    else if (100 < bVar19) {
                      uVar18 = 100;
                    }
                    iVar7 = uVar18 * 10;
                  }
                  iVar7 = iVar7 - uVar13;
                  if (iVar7 < 0) {
                    iVar7 = 0;
                  }
                  else if (9999 < iVar7) {
                    iVar7 = 9999;
                  }
                  uVar18 = (-(uint)(iVar7 != 0) & 0xfffffffe) + 2;
                  piVar23 = local_30;
                  iVar7 = local_2c;
                  goto LAB_00509f08;
                }
                iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
                if ((&DAT_009ab892)[iVar9] == '\f') {
                  iVar9 = 1;
                }
                else {
                  bVar19 = (&DAT_009ab88f)[iVar9];
                  uVar18 = (uint)bVar19;
                  if (bVar19 == 0) {
                    uVar18 = 1;
                  }
                  else if (100 < bVar19) {
                    uVar18 = 100;
                  }
                  iVar9 = uVar18 * 10;
                }
                iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[local_8];
                bVar24 = iVar9 < 0;
              }
              else {
                if ((local_58 != 2) && (DAT_0093f660 == 0)) {
                  iVar9 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
                  if ((&DAT_009ab892)[iVar9] == '\f') {
                    iVar9 = 1;
                  }
                  else {
                    bVar19 = (&DAT_009ab88f)[iVar9];
                    uVar18 = (uint)bVar19;
                    if (bVar19 == 0) {
                      uVar18 = 1;
                    }
                    else if (100 < bVar19) {
                      uVar18 = 100;
                    }
                    iVar9 = uVar18 * 10;
                  }
                  iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[local_c];
                  if (iVar9 < 0) {
                    iVar9 = 0;
                  }
                  else if (9999 < iVar9) {
                    iVar9 = 9999;
                  }
                  FUN_00504aa0(param_3,param_4,iVar9 != 0);
                }
                iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
                if ((&DAT_009ab892)[iVar9] == '\f') {
                  iVar9 = 1 - (uint)(byte)(&DAT_00952838)[local_8];
                  bVar24 = iVar9 < 0;
                }
                else {
                  bVar19 = (&DAT_009ab88f)[iVar9];
                  uVar18 = (uint)bVar19;
                  if (bVar19 == 0) {
                    uVar18 = 1;
                  }
                  else if (100 < bVar19) {
                    iVar9 = 1000 - (uint)(byte)(&DAT_00952838)[local_8];
                    bVar24 = iVar9 < 0;
                    goto LAB_00509e1a;
                  }
                  iVar9 = uVar18 * 10 - (uint)(byte)(&DAT_00952838)[local_8];
                  bVar24 = iVar9 < 0;
                }
              }
LAB_00509e1a:
              if (bVar24) {
                iVar9 = 0;
              }
              else if (9999 < iVar9) {
                uVar18 = 1;
                goto LAB_00509f08;
              }
              uVar18 = 2 - (iVar9 != 0);
            }
            else if (local_4c == 0) {
              if (local_58 == 2) {
                if (DAT_0093f660 == 0) {
                  iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
                  if ((&DAT_009ab892)[iVar7] == '\f') {
                    uVar18 = 1;
                  }
                  else {
                    bVar19 = (&DAT_009ab88f)[iVar7];
                    uVar18 = (uint)bVar19;
                    if (bVar19 == 0) {
                      uVar18 = 1;
                    }
                    else if (100 < bVar19) {
                      uVar18 = 100;
                    }
                    uVar18 = uVar18 * 10;
                  }
                  iVar7 = uVar18 - (byte)(&DAT_00952838)[local_c];
                  if ((-1 < iVar7) && ((9999 < iVar7 || (uVar18 != (byte)(&DAT_00952838)[local_c])))
                     ) goto LAB_00509f10;
                }
              }
              else if (DAT_0093f660 == 0) goto LAB_00509b44;
              iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
              if ((&DAT_009ab892)[iVar7] == '\f') {
                iVar7 = 1;
              }
              else {
                bVar19 = (&DAT_009ab88f)[iVar7];
                uVar18 = (uint)bVar19;
                if (bVar19 == 0) {
                  uVar18 = 1;
                }
                else if (100 < bVar19) {
                  uVar18 = 100;
                }
                iVar7 = uVar18 * 10;
              }
              iVar7 = iVar7 - (uint)(byte)(&DAT_00952838)[local_c];
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              else if (9999 < iVar7) {
                iVar7 = 9999;
              }
              uVar18 = (-(uint)(iVar7 != 0) & 0xfffffffe) + 2 | 8;
              piVar23 = param_3;
              iVar7 = param_4;
            }
            else {
              if ((local_58 != 1) && (DAT_0093f660 == 0)) {
                iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
                if ((&DAT_009ab892)[iVar9] == '\f') {
                  iVar9 = 1;
                }
                else {
                  bVar19 = (&DAT_009ab88f)[iVar9];
                  uVar18 = (uint)bVar19;
                  if (bVar19 == 0) {
                    uVar18 = 1;
                  }
                  else if (100 < bVar19) {
                    uVar18 = 100;
                  }
                  iVar9 = uVar18 * 10;
                }
                iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[local_8];
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
                else if (9999 < iVar9) {
                  iVar9 = 9999;
                }
                FUN_00504aa0(piVar23,iVar7,2 - (iVar9 != 0) | 8);
              }
LAB_00509b44:
              iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
              if ((&DAT_009ab892)[iVar7] == '\f') {
                iVar7 = 1;
              }
              else {
                bVar19 = (&DAT_009ab88f)[iVar7];
                uVar18 = (uint)bVar19;
                if (bVar19 == 0) {
                  uVar18 = 1;
                }
                else if (100 < bVar19) {
                  uVar18 = 100;
                }
                iVar7 = uVar18 * 10;
              }
              iVar7 = iVar7 - (uint)(byte)(&DAT_00952838)[local_c];
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              else if (9999 < iVar7) {
                iVar7 = 9999;
              }
              uVar18 = 2 - (iVar7 != 0) | 8;
              piVar23 = param_3;
              iVar7 = param_4;
            }
LAB_00509f08:
            FUN_00504aa0(piVar23,iVar7,uVar18);
          }
LAB_00509f10:
          DAT_00689f28 = -1;
          DAT_00689f2c = -1;
        }
      }
      iVar7 = local_8;
      uVar18 = local_14;
      if (local_4c != 0) {
        iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
        if ((&DAT_009ab892)[iVar9] == '\f') {
          uVar13 = 1;
        }
        else {
          bVar19 = (&DAT_009ab88f)[iVar9];
          uVar13 = (uint)bVar19;
          if (bVar19 == 0) {
            uVar13 = 1;
          }
          else if (100 < bVar19) {
            uVar13 = 100;
          }
          uVar13 = uVar13 * 10;
        }
        iVar9 = uVar13 - (byte)(&DAT_00952838)[local_8];
        if ((-1 < iVar9) && ((9999 < iVar9 || (uVar13 != (byte)(&DAT_00952838)[local_8])))) {
          iVar9 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
          if ((&DAT_009ab892)[iVar9] == '\f') {
            uVar13 = 1;
          }
          else {
            bVar19 = (&DAT_009ab88f)[iVar9];
            uVar13 = (uint)bVar19;
            if (bVar19 == 0) {
              uVar13 = 1;
            }
            else if (100 < bVar19) {
              uVar13 = 100;
            }
            uVar13 = uVar13 * 10;
          }
          iVar10 = uVar13 - (byte)(&DAT_00952838)[local_c];
          if ((-1 < iVar10) && ((9999 < iVar10 || (uVar13 != (byte)(&DAT_00952838)[local_c])))) {
            if ((DAT_0093f660 != 0) && (local_10 == DAT_00939284)) {
              FUN_00625ec0(0,&DAT_009ab868 + iVar9,0xffffffff,0xffffffff);
              DAT_009b86a0 = 0;
              FUN_0057d7d0(&DAT_009b86a0,local_1c);
              FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
              FUN_00625ec0(2,&DAT_00946d54 + uVar18 * 0x59c,0xffffffff,0xffffffff);
              FUN_00625ec0(3,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + iVar7) * 0x34,
                           0xffffffff,0xffffffff);
              DAT_009b86a0 = 0;
              FUN_0057d7d0(&DAT_009b86a0,(int)*(short *)((int)&DAT_00952832 + iVar7));
              FUN_00625ec0(4,&DAT_009b86a0,0xffffffff,0xffffffff);
              iVar7 = FUN_004e3d50(param_3,param_4,0xffffffff,0xffffffff,0xffffffff,DAT_00939284);
              if (-1 < iVar7) {
                FUN_00625ec0(5,&DAT_0097d053 + iVar7 * 0x134,0xffffffff,0xffffffff);
              }
              FUN_0047a890(s_COMBATSURVIVE_0068a208,5000,0,0);
            }
            return 0;
          }
        }
      }
      iVar9 = DAT_0068faf0 * param_4 + iVar17;
      param_7 = (int *)iVar17;
      if ((((0x5f < (*(byte *)(DAT_0094a30c + iVar9 * 0x2c) & 0xe0)) &&
           (uVar13 = (uint)*(char *)(DAT_0094a30c + iVar9 * 0x2c + 7), uVar13 != local_14)) &&
          (uVar13 != local_10)) &&
         ((((&DAT_0096c9f8)[(local_10 + uVar13 * 0x833) * 4] & 0x10) != 0 &&
          (((&DAT_0096c9f8)[(uVar13 * 0x833 + local_14) * 4] & 7) != 0)))) {
        iVar17 = uVar13 + local_14 * 0x833;
        if (*(int *)(&DAT_0096cb0c + iVar17 * 4) == 0) {
          *(undefined4 *)(&DAT_0096cb0c + iVar17 * 4) = 1;
        }
        FUN_0053a030(uVar13,local_14,0xffffffff);
      }
      iVar17 = local_1c;
      if (param_2 == 0) {
        iVar7 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
        if ((&DAT_009ab892)[iVar7] == '\f') {
          iVar9 = 1;
        }
        else {
          bVar19 = (&DAT_009ab88f)[iVar7];
          uVar18 = (uint)bVar19;
          if (bVar19 == 0) {
            uVar18 = 1;
          }
          else if (100 < bVar19) {
            uVar18 = 100;
          }
          iVar9 = uVar18 * 10;
        }
        local_18 = (int)((uint)(byte)(&DAT_009ab88f)[iVar7] * local_64 * local_18) / iVar9;
        iVar9 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
        if ((&DAT_009ab892)[iVar9] == '\f') {
          iVar10 = 1;
        }
        else {
          bVar19 = (&DAT_009ab88f)[iVar9];
          uVar18 = (uint)bVar19;
          if (bVar19 == 0) {
            uVar18 = 1;
          }
          else if (100 < bVar19) {
            uVar18 = 100;
          }
          iVar10 = uVar18 * 10;
        }
        iVar10 = iVar10 - (uint)(byte)(&DAT_00952838)[local_c];
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (9999 < iVar10) {
          iVar10 = 9999;
        }
        local_20 = (int)((uint)(byte)(&DAT_009ab88f)[iVar9] * iVar10 * local_20) / local_60;
        if ((&DAT_009ab892)[iVar7] != '\f') {
          iVar7 = FUN_005c0e40(local_1c,1,0);
          if (1 < iVar7) {
            iVar7 = local_18 + local_20;
            if (iVar7 == 1 || iVar7 + -1 < 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = _rand();
              iVar9 = iVar9 % iVar7;
            }
            if (((int)local_18 < iVar9) &&
               ((local_24 < 0 || (iVar7 = FUN_005c0e40(iVar17,1,0), 3 < iVar7)))) goto LAB_0050a432;
          }
          FUN_005062b0(iVar17);
        }
LAB_0050a432:
        if (local_10 == 0) {
          uVar16 = *(undefined2 *)((int)&DAT_00952856 + local_8);
          iVar7 = local_c;
          goto LAB_0050a446;
        }
      }
      else {
        iVar17 = *(short *)((int)&DAT_00952832 + iVar7) * 0x34;
        if ((&DAT_009ab892)[iVar17] == '\f') {
          iVar9 = 1;
        }
        else {
          bVar19 = (&DAT_009ab88f)[iVar17];
          uVar13 = (uint)bVar19;
          if (bVar19 == 0) {
            uVar13 = 1;
          }
          else if (100 < bVar19) {
            uVar13 = 100;
          }
          iVar9 = uVar13 * 10;
        }
        iVar9 = iVar9 - (uint)(byte)(&DAT_00952838)[iVar7];
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        else if (9999 < iVar9) {
          iVar9 = 9999;
        }
        local_18 = (int)((uint)(byte)(&DAT_009ab88f)[iVar17] * iVar9 * local_18) / local_64;
        iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
        if ((&DAT_009ab892)[iVar7] == '\f') {
          iVar17 = 1;
        }
        else {
          bVar19 = (&DAT_009ab88f)[iVar7];
          uVar13 = (uint)bVar19;
          if (bVar19 == 0) {
            uVar13 = 1;
          }
          else if (100 < bVar19) {
            uVar13 = 100;
          }
          iVar17 = uVar13 * 10;
        }
        local_20 = (int)((uint)(byte)(&DAT_009ab88f)[iVar7] * local_60 * local_20) / iVar17;
        if ((&DAT_009ab892)[iVar7] != '\f') {
          iVar7 = FUN_005c0e40(param_1,1,0);
          if (1 < iVar7) {
            iVar7 = local_18 + local_20;
            if (iVar7 == 1 || iVar7 + -1 < 0) {
              iVar17 = 0;
            }
            else {
              iVar17 = _rand();
              iVar17 = iVar17 % iVar7;
            }
            if ((int)local_20 < iVar17) goto LAB_0050a2dd;
          }
          FUN_005062b0(param_1);
        }
LAB_0050a2dd:
        if (uVar18 == 0) {
          uVar16 = *(undefined2 *)((int)&DAT_00952856 + local_c);
          iVar7 = local_8;
LAB_0050a446:
          *(undefined2 *)((int)&DAT_00952856 + iVar7) = uVar16;
        }
      }
      iVar17 = local_c;
      uVar13 = local_10;
      uVar18 = local_14;
      iVar7 = DAT_0093f660;
      local_3c = 0;
      local_34 = 0;
      local_5c = 0;
      param_5 = 0;
      if ((local_54 == 0) && (local_68 == 0)) {
        if (param_2 == 0) {
          (&DAT_0093a96c)[local_10] = (&DAT_0093a96c)[local_10] + 1;
          (&DAT_0093a98c)[local_14] = (&DAT_0093a98c)[local_14] + 1;
          if ((iVar7 == 0) || (local_10 != DAT_00939284)) {
            if ((DAT_0093a95c != 0) &&
               (((byte)(1 << ((byte)local_10 & 0x1f)) & (byte)DAT_009a64e8) != 0)) {
              FUN_00625ec0(0,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_c) * 0x34,
                           0xffffffff,0xffffffff);
              FUN_00500120();
              FUN_0050b9a0((int)*(short *)((int)&DAT_00952832 + iVar17));
              FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
              uVar8 = FUN_0050b910(uVar18,0xffffffff,0xffffffff);
              FUN_00625ec0(2,uVar8);
              iVar7 = local_8;
              FUN_00625ec0(3,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_8) * 0x34,
                           0xffffffff,0xffffffff);
              FUN_00500120();
              FUN_0050b9a0((int)*(short *)((int)&DAT_00952832 + iVar7));
              FUN_00625ec0(4,&DAT_009b86a0,0xffffffff,0xffffffff);
              iVar7 = FUN_004e3d50(param_3,param_4,0xffffffff,0xffffffff,0xffffffff,uVar13);
              if (-1 < iVar7) {
                FUN_00625ec0(5,&DAT_0097d053 + iVar7 * 0x134,0xffffffff,0xffffffff);
              }
              FUN_0050b8d0(s_COMBATWIN_0068a24c,uVar13,param_3,param_4);
            }
          }
          else {
            FUN_00625ec0(0,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_c) * 0x34,
                         0xffffffff,0xffffffff);
            FUN_00500120();
            FUN_0050b9a0((int)*(short *)((int)&DAT_00952832 + iVar17));
            FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
            uVar8 = FUN_0050b910(uVar18,0xffffffff,0xffffffff);
            FUN_00625ec0(2,uVar8);
            iVar7 = local_8;
            FUN_00625ec0(3,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_8) * 0x34,
                         0xffffffff,0xffffffff);
            FUN_00500120();
            FUN_0050b9a0((int)*(short *)((int)&DAT_00952832 + iVar7));
            FUN_00625ec0(4,&DAT_009b86a0,0xffffffff,0xffffffff);
            iVar7 = FUN_004e3d50(param_3,param_4,0xffffffff,0xffffffff,0xffffffff,DAT_00939284);
            if (-1 < iVar7) {
              FUN_00625ec0(5,&DAT_0097d053 + iVar7 * 0x134,0xffffffff,0xffffffff);
            }
            FUN_0050b9c0(s_COMBATWIN_0068a240,0);
          }
          FUN_005b8ee0(param_1,1);
          FUN_00506130(param_1,&local_3c,&local_34,&local_5c,0xffffffff,uVar13);
          iVar7 = (uVar18 + uVar13 * 0x833) * 4;
          *(int *)(&DAT_0096cb6c + iVar7) = *(int *)(&DAT_0096cb6c + iVar7) + 1;
          *(int *)(&DAT_0096cb8c + iVar7) = *(int *)(&DAT_0096cb8c + iVar7) + 1;
          uVar22 = uVar13;
          uVar4 = uVar18;
        }
        else {
          iVar9 = (local_10 + local_14 * 0x833) * 4;
          *(int *)(&DAT_0096cb6c + iVar9) = *(int *)(&DAT_0096cb6c + iVar9) + 1;
          iVar7 = (&DAT_0093a96c)[local_14];
          *(int *)(&DAT_0096cb8c + iVar9) = *(int *)(&DAT_0096cb8c + iVar9) + 1;
          iVar9 = (&DAT_0093a98c)[local_10];
          bVar24 = DAT_0093f660 == 0;
          (&DAT_0093a96c)[local_14] = iVar7 + 1;
          (&DAT_0093a98c)[local_10] = iVar9 + 1;
          if ((bVar24) || (local_10 != DAT_00939284)) {
            if ((DAT_0093a95c != 0) &&
               (((byte)(1 << ((byte)local_10 & 0x1f)) & (byte)DAT_009a64e8) != 0)) {
              FUN_00625ec0(0,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_c) * 0x34,
                           0xffffffff,0xffffffff);
              DAT_009b86a0 = 0;
              FUN_0057d7d0(&DAT_009b86a0,(int)*(short *)((int)&DAT_00952832 + iVar17));
              FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
              FUN_00625ec0(2,&DAT_00946d54 + uVar18 * 0x59c,0xffffffff,0xffffffff);
              FUN_00625ec0(3,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_8) * 0x34,
                           0xffffffff,0xffffffff);
              DAT_009b86a0 = 0;
              FUN_0057d7d0(&DAT_009b86a0,(int)*(short *)((int)&DAT_00952832 + local_8));
              FUN_00625ec0(4,&DAT_009b86a0,0xffffffff,0xffffffff);
              iVar7 = FUN_004e3d50(param_3,param_4,0xffffffff,0xffffffff,0xffffffff,uVar13);
              if (-1 < iVar7) {
                FUN_00625ec0(5,&DAT_0097d053 + iVar7 * 0x134,0xffffffff,0xffffffff);
              }
              FUN_004055a0(s_COMBATLOSS_0068a234,0,uVar13,param_3,param_4);
            }
          }
          else {
            FUN_00625ec0(0,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_c) * 0x34,
                         0xffffffff,0xffffffff);
            DAT_009b86a0 = 0;
            FUN_0057d7d0(&DAT_009b86a0,(int)*(short *)((int)&DAT_00952832 + iVar17));
            FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
            FUN_00625ec0(2,&DAT_00946d54 + uVar18 * 0x59c,0xffffffff,0xffffffff);
            iVar7 = local_8;
            FUN_00625ec0(3,&DAT_009ab868 + *(short *)((int)&DAT_00952832 + local_8) * 0x34,
                         0xffffffff,0xffffffff);
            DAT_009b86a0 = 0;
            FUN_0057d7d0(&DAT_009b86a0,(int)*(short *)((int)&DAT_00952832 + iVar7));
            FUN_00625ec0(4,&DAT_009b86a0,0xffffffff,0xffffffff);
            iVar7 = FUN_004e3d50(param_3,param_4,0xffffffff,0xffffffff,0xffffffff,DAT_00939284);
            if (-1 < iVar7) {
              FUN_00625ec0(5,&DAT_0097d053 + iVar7 * 0x134,0xffffffff,0xffffffff);
            }
            FUN_0047a890(s_COMBATLOSS_0068a228,5000,0,0);
          }
          iVar7 = local_24;
          if (((((local_24 < 0) &&
                ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_4 + (int)param_7) * 0x2c) &
                 0x800) == 0)) &&
               (iVar9 = *(short *)((int)&DAT_00952832 + iVar17) * 0x34,
               (&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar9] * 0x90] != '\x02')) &&
              (((iVar10 = *(short *)((int)&DAT_00952832 + local_8) * 0x34,
                (&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar10] * 0x90] != '\x02' &&
                ((&DAT_009ab892)[iVar10] != '\v')) &&
               (((&DAT_009ab892)[iVar9] != '\x06' &&
                ((iVar9 = FUN_005b9580(local_1c,2,8,0xffffffff,0xffffffff), iVar9 == 0 ||
                 ((*(byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + (int)param_7) * 0x2c) & 0xe0)
                  < 0x60)))))))) ||
             (iVar9 = local_1c,
             (&DAT_009ab892)[*(short *)((int)&DAT_00952832 + iVar17) * 0x34] == '\f')) {
LAB_0050a904:
            iVar7 = local_1c;
            FUN_005b8ee0(local_1c,0);
            if (-1 < iVar7) {
              sVar6 = *(short *)((int)&DAT_0095285a + iVar17);
              while (-1 < sVar6) {
                iVar7 = (int)sVar6;
                sVar6 = (&DAT_0095285a)[iVar7 * 0x1a];
              }
              for (; -1 < iVar7; iVar7 = (int)(short)(&DAT_00952858)[iVar7 * 0x1a]) {
                iVar17 = iVar7 * 0x34;
                iVar9 = (short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34;
                if ((((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar9] * 0x90] == '\0') &&
                    (pbVar1 = (byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + (int)param_7) * 0x2c
                                      ), (*pbVar1 & 0xe0) < 0x60)) &&
                   ((((pbVar1[8] & 1) == 0 || (7 < (pbVar1[2] & 0xf))) &&
                    ((((&DAT_00952839)[iVar17] != '\x01' ||
                      ((short)(&DAT_0095283c)[iVar7 * 0x1a] == local_1c)) ||
                     ((short)(&DAT_0095283c)[iVar7 * 0x1a] < 0)))))) {
                  if ((&DAT_009ab892)[iVar9] == '\f') {
                    iVar9 = 1;
                  }
                  else {
                    bVar19 = (&DAT_009ab88f)[iVar9];
                    uVar18 = (uint)bVar19;
                    if (bVar19 == 0) {
                      uVar18 = 1;
                    }
                    else if (100 < bVar19) {
                      uVar18 = 100;
                    }
                    iVar9 = uVar18 * 10;
                  }
                  bVar19 = (&DAT_00952838)[iVar17];
                  iVar9 = iVar9 - (uint)bVar19;
                  if (iVar9 < 0) {
                    iVar9 = 0;
                  }
                  else if (9999 < iVar9) {
                    (&DAT_00952838)[iVar17] = bVar19 + 0xf;
                    goto LAB_0050aa62;
                  }
                  (&DAT_00952838)[iVar17] = (char)iVar9 + bVar19;
LAB_0050aa62:
                  iVar9 = *(short *)((int)&DAT_00952832 + local_8) * 0x34;
                  if ((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar9] * 0x10] < '\0') {
                    cVar20 = (&DAT_009ab88f)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34];
                  }
                  else {
                    cVar20 = (&DAT_009ab88f)[iVar9];
                  }
                  (&DAT_00952838)[iVar17] = (&DAT_00952838)[iVar17] + cVar20 * '\x03';
                  param_5 = param_5 + 1;
                  (&DAT_0095282c)[iVar7 * 0xd] = (&DAT_0095282c)[iVar7 * 0xd] | 4;
                }
                else if ((iVar7 == local_1c) ||
                        ((((cVar20 = (&DAT_009ab892)[iVar9], cVar20 != '\f' && (cVar20 != '\b')) &&
                          (cVar20 != '\v')) && (cVar20 != '\n')))) goto LAB_0050aa62;
                if (iVar7 < 0) break;
              }
            }
            param_7 = (int *)param_1;
            if (-1 < local_1c) {
              sVar6 = *(short *)((int)&DAT_0095285a + local_c);
              iVar7 = local_1c;
              while (-1 < sVar6) {
                iVar7 = (int)sVar6;
                sVar6 = (&DAT_0095285a)[iVar7 * 0x1a];
              }
              while (iVar17 = iVar7, -1 < iVar17) {
                iVar7 = (int)(short)(&DAT_00952858)[iVar17 * 0x1a];
                if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar17 * 0x1a] * 0x34] == '\f') {
                  iVar9 = 1;
                }
                else {
                  bVar19 = (&DAT_009ab88f)[(short)(&DAT_00952832)[iVar17 * 0x1a] * 0x34];
                  uVar18 = (uint)bVar19;
                  if (bVar19 == 0) {
                    uVar18 = 1;
                  }
                  else if (100 < bVar19) {
                    uVar18 = 100;
                  }
                  iVar9 = uVar18 * 10;
                }
                iVar10 = FUN_00422f00(iVar9 - (uint)(byte)(&DAT_00952838)[iVar17 * 0x34],0,9999);
                iVar9 = (int)param_7;
                if (((iVar10 < 1) || ((&DAT_00952836)[iVar17 * 0x34] == '\0')) &&
                   (iVar10 = FUN_00505d80(iVar17,&local_3c,&local_34,&local_5c,param_7,local_14),
                   iVar10 != 0)) {
                  if (iVar17 < iVar9) {
                    param_7 = (int *)(iVar9 + -1);
                  }
                  if (iVar17 < iVar7) {
                    iVar7 = iVar7 + -1;
                  }
                }
              }
            }
            param_5 = param_5 - (local_34 + local_3c);
            param_5 = ((int)param_5 < 0) - 1 & param_5;
            uVar8 = FUN_005bfe90(param_3,param_4);
            iVar7 = FUN_005b8e10(uVar8);
            local_44 = iVar7;
            if (-1 < iVar7) {
              iVar17 = FUN_005b9580(iVar7,2,0xc,0xffffffff,0xffffffff);
              iVar9 = FUN_005b9580(iVar7,1,0xffffffff,0xffffffff,0xffffffff);
              iVar10 = FUN_005b9580(iVar7,2,8,0xffffffff,0xffffffff);
              iVar12 = FUN_005b9580(iVar7,2,0xb,0xffffffff,0xffffffff);
              iVar14 = FUN_005b9580(iVar7,2,10,0xffffffff,0xffffffff);
              if (((iVar9 - iVar17) - iVar10) - iVar12 == iVar14) {
                FUN_00506130(iVar7,&local_3c,&local_34,&local_5c,param_1,local_14);
                param_5 = 0;
              }
            }
          }
          else {
            if (uVar18 != 0) {
              iVar10 = FUN_005c1760(local_1c);
              if (((iVar10 != 0) && (iVar7 < 0)) &&
                 ((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] != '\v'))
              goto LAB_0050a904;
              if ((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_8) * 0x34] != '\v') {
                iVar7 = FUN_005b9580(iVar9,2,0xc,0xffffffff,0xffffffff);
                iVar10 = FUN_005b9580(iVar9,1,0xffffffff,0xffffffff,0xffffffff);
                iVar12 = FUN_005b9580(iVar9,2,8,0xffffffff,0xffffffff);
                iVar14 = FUN_005b9580(iVar9,2,0xb,0xffffffff,0xffffffff);
                iVar9 = FUN_005b9580(iVar9,2,10,0xffffffff,0xffffffff);
                if ((((iVar10 - iVar7) - iVar12) - iVar14) - iVar9 < 2) goto LAB_0050a904;
              }
            }
            FUN_00505d80(local_1c,&local_3c,&local_34,&local_5c,param_1,local_14);
            iVar7 = local_44;
          }
          iVar17 = local_24;
          uVar18 = local_10;
          uVar13 = local_14;
          uVar22 = local_10;
          uVar4 = local_14;
          if (-1 < local_24) {
            iVar10 = local_24 * 0x134;
            (&DAT_0097d070)[local_24 * 0x4d] = (&DAT_0097d070)[local_24 * 0x4d] | 8;
            iVar9 = FUN_005001e0(local_30,local_2c);
            if (((((iVar9 == 0) &&
                  ((iVar9 = FUN_005ac060(iVar17), iVar9 == 0 ||
                   ('\x01' < (char)(&DAT_0097d046)[iVar10])))) &&
                 (iVar9 = FUN_00421670(4,iVar17,0), iVar9 == 0)) &&
                ((((iVar9 = FUN_00421670(5,iVar17,0), iVar9 == 0 &&
                   (iVar9 = FUN_004f80d0(5,local_10), iVar9 == 0)) &&
                  ((&DAT_0094ae68)
                   [(uint)(byte)(&DAT_009ab88d)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x10]
                   != '\0')) &&
                 ((local_14 != 0 && (iVar7 = FUN_00500250(param_3,param_4), iVar7 < 0)))))) &&
               ((*(int *)((int)&DAT_0096c9e8 + local_9c) != 0 ||
                (((byte)(1 << ((byte)local_10 & 0x1f)) & (byte)DAT_009a64e8) == 0)))) {
              cVar20 = (&DAT_0097d046)[iVar10] + -1;
              (&DAT_0097d046)[iVar10] = cVar20;
              if ('\0' < cVar20) {
                (&DAT_0097d04b)[local_14 + iVar10] = cVar20;
                goto LAB_0050ae02;
              }
              iVar7 = 0;
              local_40 = 0;
              FUN_004e5250(iVar17);
              local_24 = -1;
              do {
                FUN_00591e50(param_3,param_4,iVar7);
                iVar7 = iVar7 + 1;
              } while (iVar7 < 8);
              FUN_0046b190(1);
LAB_0050addc:
              iVar17 = -1;
              iVar7 = FUN_005b3380(local_10,local_14);
              if (iVar7 != 0) {
                local_48 = 0;
              }
            }
            else {
LAB_0050ae02:
              if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_10 & 0x1f))) == 0) {
                FUN_004e5fe0(iVar17,0);
              }
              if (local_40 != 0) {
                local_40 = ((char)(&DAT_0097d046)[iVar10] + 1) / 2;
                (&DAT_0097d046)[iVar10] = (&DAT_0097d046)[iVar10] - (char)local_40;
                iVar7 = FUN_005ac060(iVar17);
                if (iVar7 != 0) {
                  cVar20 = (&DAT_0097d046)[iVar10];
                  if (cVar20 < '\x01') {
                    cVar20 = '\x01';
                  }
                  (&DAT_0097d046)[iVar10] = cVar20;
                }
                if ((char)(&DAT_0097d046)[iVar10] < '\x01') {
                  FUN_004e5250(iVar17);
                  local_24 = -1;
                  iVar7 = 0;
                  do {
                    FUN_00591e50(param_3,param_4,iVar7);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 8);
                  FUN_0046b190(1);
                  goto LAB_0050addc;
                }
                FUN_005b57d0(iVar17,local_14);
              }
            }
            iVar7 = FUN_00500250(param_3,param_4);
            uVar18 = local_10;
            uVar13 = local_14;
            uVar22 = local_10;
            uVar4 = local_14;
            if (((iVar7 < 0) && (((byte)(1 << ((byte)local_10 & 0x1f)) & (byte)DAT_009a64e8) != 0))
               && (-1 < iVar17)) {
              FUN_00506490(iVar17);
              uVar18 = local_10;
              uVar13 = local_14;
              uVar22 = local_10;
              uVar4 = local_14;
            }
          }
        }
        if ((uVar4 != 0) && (uVar22 != 0)) {
          FUN_00477210(uVar13,uVar18);
        }
        uVar13 = local_10;
        uVar18 = local_14;
        if (((local_34 != 0) && (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_10 & 0x1f))) == 0))
           && (iVar7 = FUN_005002f0(local_14,local_10,0x10), iVar7 == 0)) {
          FUN_0053a030(uVar13,uVar18,5);
          FUN_0055b870(uVar18,uVar13,0x2000);
        }
      }
      if ((param_2 != 0) && (local_5c != 0)) {
        *(int *)((int)&DAT_0096cc00 + local_80) = *(int *)((int)&DAT_0096cc00 + local_80) + local_5c
        ;
        FUN_00514880(0);
        param_1 = 0;
        do {
          uVar8 = FUN_0048bee0(*(int *)((int)&DAT_0066ef50 + param_1) + (int)param_3);
          iVar17 = *(int *)((int)&DAT_0066ef74 + param_1) + param_4;
          iVar7 = FUN_004712a0(uVar8,iVar17);
          if (iVar7 != 0) {
            local_44 = FUN_005bfe90(uVar8,iVar17);
            uVar3 = extraout_ECX;
            while (-1 < local_44) {
              iVar7 = local_44 * 0x34;
              if ((&DAT_00952836)[iVar7] == '\0') {
                uVar18 = CONCAT22((short)((uint)uVar3 >> 0x10),*(ushort *)(&DAT_00952830 + iVar7))
                         >> 3 & 3;
                *(ushort *)(&DAT_00952830 + iVar7) =
                     ~((short)uVar18 * 8) & *(ushort *)(&DAT_00952830 + iVar7);
                sVar6 = FUN_00422f00(uVar18 + 1,0,3);
                *(ushort *)(&DAT_00952830 + iVar7) = *(ushort *)(&DAT_00952830 + iVar7) | sVar6 << 3
                ;
                FUN_0046af40(uVar8,iVar17,2);
              }
              local_44 = FUN_0050b8f0(local_44);
              uVar3 = extraout_ECX_00;
            }
          }
          param_1 = param_1 + 4;
        } while (param_1 < 0x20);
      }
      uVar13 = local_10;
      uVar18 = local_14;
      if (param_6 != 0) {
        if (param_2 == 0) {
          FUN_0046af90(local_30,local_2c,2,1);
          FUN_0046af40(param_3,param_4,1);
        }
        else {
          FUN_0046af40(local_30,local_2c);
          FUN_0046af90(param_3,param_4,2,1);
        }
        FUN_005fcbb0();
        uVar13 = local_10;
        uVar18 = local_14;
        if (((param_2 == 0) || (local_5c == 0)) || (local_14 != DAT_00939284)) {
          if (((1 < local_3c) || (param_5 != 0)) &&
             ((local_14 == DAT_00939284 || (local_10 == DAT_00939284)))) {
            FUN_00625e30(0,local_3c);
            FUN_00625e30(1,param_5);
            FUN_00500120();
            if ((uVar18 == DAT_00939284) == (param_2 != 0)) {
              pcVar25 = s_NUMGOT_0068a260;
            }
            else {
              pcVar25 = s_NUMLOST_0068a268;
            }
            FUN_00500130(pcVar25);
            if (local_3c < 2) {
              if (param_5 != 0) {
                puVar11 = &DAT_0068a274;
                goto LAB_0050b493;
              }
            }
            else if (param_5 != 0) {
              puVar11 = &DAT_0068a270;
LAB_0050b493:
              FUN_00500130(puVar11);
            }
            FUN_0050b9c0(&DAT_009b86a0,0);
          }
        }
        else {
          FUN_00625e30(0,local_5c);
          FUN_0050b9c0(s_HUSKS_0068a258,0);
          uVar13 = local_10;
        }
        if (local_34 != 0) {
          FUN_00625e30(0,local_34);
          if (uVar13 == DAT_00939284) {
            FUN_00500120();
            FUN_00500130(s_THEIRBOOTY_0068a278);
            iVar7 = FUN_005002f0(uVar18,uVar13,0x10);
            if (iVar7 == 0) {
              uVar8 = FUN_0050b930(uVar18,0xffffffff,0xffffffff);
              FUN_00625ec0(0,uVar8);
              FUN_0050b8a0(3);
              FUN_0050b9c0(&DAT_009b86a0,0);
            }
            else {
              uVar8 = FUN_00422f00(local_34,1,2);
              FUN_0050b8a0(uVar8);
              FUN_0050b9c0(&DAT_009b86a0,0);
            }
          }
          else if (uVar18 == DAT_00939284) {
            FUN_00500120();
            FUN_00500130(s_OURBOOTY_0068a284);
            uVar8 = FUN_00422f00(local_34,1,2);
            FUN_0050b8a0(uVar8);
            FUN_0050b9c0(&DAT_009b86a0,0);
          }
        }
        if ((local_40 != 0) && (sVar15 = _strlen(local_13c), sVar15 != 0)) {
          FUN_00625ec0(0,local_13c,0xffffffff,0xffffffff);
          FUN_0050b9c0(s_NERVEGAS_0068a290,0);
        }
        if (local_68 != 0) {
          FUN_00625ec0(0,&DAT_009ab868 + (short)(&DAT_00952832)[local_44 * 0x1a] * 0x34,0xffffffff,
                       0xffffffff);
          uVar8 = FUN_0050b910(uVar13,0xffffffff,0xffffffff);
          FUN_00625ec0(1,uVar8);
          if (uVar13 == DAT_00939284) {
            pcVar25 = s_WEDISENGAGED_0068a29c;
          }
          else {
            if (uVar18 != DAT_00939284) goto LAB_0050b5b7;
            pcVar25 = s_THEYDISENGAGED_0068a2ac;
          }
          FUN_0050b9c0(pcVar25,0);
        }
LAB_0050b5b7:
        FUN_004b9ea0();
        if (local_8c != 0) {
          FUN_00415dd0();
          FUN_005d5a70();
          FUN_005fcbb0();
        }
        if ((_DAT_009a6494 & 0x10) != 0) {
          FUN_00421b40();
          FUN_0050b970(s_BATTLEPAUSE_0068a2cc,s_batwon_sm_pcx_0068a2bc,0);
          FUN_00421b20();
          if (DAT_009bc070 != 0) {
            _DAT_009a6494 = _DAT_009a6494 & 0xffffffef;
            FUN_0059e5d0(0);
          }
        }
      }
      if (local_48 == 1) {
        uVar8 = FUN_0050b910(uVar18,0xffffffff,0xffffffff);
        FUN_00625ec0(0,uVar8);
        uVar8 = FUN_0050b930(uVar13,0xffffffff,0xffffffff);
        FUN_00625ec0(1,uVar8);
        pcVar25 = s_VENDETTAREPORT_0068a2d8;
      }
      else if (local_48 == 2) {
        uVar8 = FUN_0050b910(uVar18,0xffffffff,0xffffffff);
        FUN_00625ec0(0,uVar8);
        uVar8 = FUN_0050b930(uVar13,0xffffffff,0xffffffff);
        FUN_00625ec0(1,uVar8);
        pcVar25 = s_PACTATTACKED_0068a2e8;
      }
      else {
        if (local_48 != 3) goto LAB_0050b6f7;
        uVar8 = FUN_0050b930(uVar18,0xffffffff,0xffffffff);
        FUN_00625ec0(0,uVar8);
        uVar8 = FUN_0050b930(uVar13,0xffffffff,0xffffffff);
        FUN_00625ec0(1,uVar8);
        pcVar25 = s_PACTATTACKING_0068a2f8;
      }
      FUN_0050b9e0(pcVar25,0);
LAB_0050b6f7:
      (&DAT_009ab895)[local_94 * 0x34] =
           (&DAT_009ab895)[local_94 * 0x34] | '\x01' << ((byte)uVar13 & 0x1f);
      (&DAT_009ab895)[local_98 * 0x34] =
           (&DAT_009ab895)[local_98 * 0x34] | '\x01' << ((byte)uVar18 & 0x1f);
      if (local_88 != 0) {
        FUN_005230e0(0,0,1,0);
      }
      iVar7 = DAT_009a64dc;
      if (param_2 != 0) {
        iVar17 = DAT_009a64dc * 0x34;
        if (((&DAT_0094a379)
             [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[DAT_009a64dc * 0x1a] * 0x34] * 0x90
             ] == '\x02') &&
           ((&DAT_0094a37a)
            [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[DAT_009a64dc * 0x1a] * 0x34] * 0x90]
            != '\x01')) {
          FUN_005c1d20(DAT_009a64dc);
          (&DAT_00952850)[iVar17] = (&DAT_00952850)[iVar17] + (char)DAT_00949738;
        }
        else if ((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[DAT_009a64dc * 0x1a] * 0x34] *
                  0x90] == '\x01') {
          FUN_005c1d20(DAT_009a64dc);
          (&DAT_00952850)[iVar17] = (&DAT_00952850)[iVar17] + (char)DAT_00949738;
        }
        cVar20 = (&DAT_0094a37d)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90];
        if (cVar20 != '\0') {
          FUN_005c0b00(iVar7);
        }
        if (((((((byte)local_50 & (byte)DAT_009a64e8) != 0) || (local_24 < 0)) ||
             (iVar9 = FUN_00500250(param_3,param_4), -1 < iVar9)) ||
            (((&DAT_0094a379)
              [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90] !=
              '\x02' ||
             ((&DAT_0094a37a)
              [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90] == 0
             )))) || (uVar18 = 1,
                     (byte)(&DAT_0095284d)[iVar17] + 1 <
                     (uint)(byte)(&DAT_0094a37a)
                                 [(uint)(byte)(&DAT_009ab88c)
                                              [(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90])
           ) {
          uVar18 = (uint)(cVar20 == '\0');
        }
        return uVar18;
      }
      return 0;
    }
  }
  if (local_28 != 0) {
    iVar7 = *(short *)((int)&DAT_00952832 + local_c) * 0x34;
    if ((&DAT_009ab892)[iVar7] == '\f') {
      uVar18 = 1;
    }
    else {
      bVar19 = (&DAT_009ab88f)[iVar7];
      uVar18 = (uint)bVar19;
      if (bVar19 == 0) {
        uVar18 = 1;
      }
      else if (100 < bVar19) {
        uVar18 = 100;
      }
      uVar18 = uVar18 * 10;
    }
    iVar7 = uVar18 - (byte)(&DAT_00952838)[local_c];
    if (((-1 < iVar7) && ((9999 < iVar7 || (uVar18 != (byte)(&DAT_00952838)[local_c])))) &&
       (local_28 = local_28 - local_6c, local_28 < 1)) {
      local_78 = -1;
      local_90 = 0;
      local_28 = 0;
      do {
        iVar7 = local_28;
        piVar23 = (int *)((&DAT_0066ef50)[local_28] + (int)param_3);
        if ((DAT_0094988c & 1) == 0) {
          if ((int)piVar23 < 0) {
            piVar23 = (int *)((int)piVar23 + DAT_00949870);
          }
          else if (DAT_00949870 <= (int)piVar23) {
            piVar23 = (int *)((int)piVar23 - DAT_00949870);
          }
        }
        iVar9 = (&DAT_0066ef74)[local_28] + param_4;
        param_7 = piVar23;
        local_38 = iVar9;
        if ((((-1 < iVar9) && (iVar9 < DAT_00949874)) && (-1 < (int)piVar23)) &&
           (((int)piVar23 < DAT_00949870 &&
            (iVar10 = FUN_005c8d40(piVar23,iVar9,local_10), iVar10 == 0)))) {
          if ((((((&DAT_0094a379)
                  [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_c) * 0x34] *
                   0x90] == '\x02') ||
                (iVar7 = local_28,
                (*(byte *)(DAT_0094a30c + (iVar9 * DAT_0068faf0 + ((int)piVar23 >> 1)) * 0x2c) &
                0xe0) < 0x60 ==
                ((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_c) * 0x34] *
                  0x90] == '\x01'))) && (iVar10 = FUN_00592140(piVar23,iVar9), iVar10 == 0)) &&
              ((((iVar9 = iVar9 * DAT_0068faf0 + ((int)piVar23 >> 1),
                 pbVar1 = (byte *)(DAT_0094a30c + iVar9 * 0x2c),
                 (*(byte *)(DAT_0094a30c + 8 + iVar9 * 0x2c) & 0x20) == 0 ||
                 ((*pbVar1 & 0xe0) < 0x40)) ||
                ((-1 < DAT_009a6554 && ((byte)(&DAT_0097d044)[DAT_009a6554 * 0x134] == local_10))))
               || ((sVar6 = *(short *)((int)&DAT_00952832 + local_c), sVar6 < 0x40 &&
                   (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar6 * 0x34] * 0x10] < '\0'
                    || (sVar6 == 0xf)))))))) &&
             (((pbVar1[8] & 3) == 0 ||
              (((uVar18 = pbVar1[2] & 0xf, 7 < uVar18 || (uVar18 == local_10)) ||
               (((&DAT_0096c9f8)[local_10 * 4 + uVar18 * 0x20cc] & 1) != 0)))))) {
            uVar18 = iVar7 - (param_2 ^ 4);
            if ((int)uVar18 < 0) {
              uVar18 = (param_2 ^ 4) - iVar7;
            }
            uVar18 = uVar18 & 7;
            if (4 < uVar18) {
              uVar18 = 8 - uVar18;
            }
            if ((2 < (int)uVar18) && ((int)local_90 < (int)uVar18)) {
              local_90 = uVar18;
              local_78 = iVar7;
            }
          }
        }
        local_28 = iVar7 + 1;
      } while (local_28 < 8);
      if (-1 < local_78) {
        param_7 = (int *)((&DAT_0066ef50)[local_78] + (int)param_3);
        if ((DAT_0094988c & 1) == 0) {
          if ((int)param_7 < 0) {
            param_7 = (int *)((int)param_7 + DAT_00949870);
          }
          else if (DAT_00949870 <= (int)param_7) {
            param_7 = (int *)((int)param_7 - DAT_00949870);
          }
        }
        local_38 = (&DAT_0066ef74)[local_78] + param_4;
        uVar8 = FUN_005b8ee0(local_1c,1,param_7,local_38);
        FUN_005b8af0(uVar8);
        local_68 = 1;
        goto LAB_00509983;
      }
      local_28 = 0;
    }
  }
  goto LAB_005090d7;
}

