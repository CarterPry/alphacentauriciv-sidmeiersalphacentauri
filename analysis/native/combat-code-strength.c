// REA evidence ev_c56faab4dffb476d23eab7cb510b2a171e7f42a6631349c40c0fbb845872c322

undefined4 FUN_00501da0(uint param_1,uint param_2,int *param_3,int *param_4,uint param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 8;
  local_c = 8;
  DAT_00915614 = 0;
  DAT_00915618 = 0;
  DAT_0091561c = 0;
  DAT_00915620 = 0;
  uVar5 = param_5 & 1;
  if ((uVar5 == 0) &&
     ((&DAT_0094a37d)
      [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] == '\0'))
  {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  local_14 = 0;
  if (((local_20 == 0) || ((&DAT_00952832)[param_1 * 0x1a] == 0xf)) ||
     (local_10 = param_2 * 0x34, (&DAT_00952832)[param_2 * 0x1a] == 0xf)) {
    if ((-1 < (int)param_1) &&
       ((char)(&DAT_0094ae68)
              [(uint)(byte)(&DAT_009ab88d)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x10] <
        '\0')) {
      local_14 = 1;
    }
    if ((-1 < (int)param_2) &&
       ((char)(&DAT_0094f280)
              [(uint)(byte)(&DAT_009ab88e)[(short)(&DAT_00952832)[param_2 * 0x1a] * 0x34] * 0x10] <
        '\0')) {
      local_14 = local_14 | 2;
    }
    if (local_14 != 0) {
      uVar15 = (uint)(byte)(&DAT_00952836)[param_1 * 0x34];
      if (*(int *)(&DAT_00946f4c + uVar15 * 0x59c) != 0) {
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x558));
        if ((*(int *)(&DAT_00946f4c + uVar15 * 0x59c) != 0) && (DAT_00915614 < 4)) {
          iVar7 = DAT_00915614 * 0x50;
          piVar16 = &DAT_009155f0 + DAT_00915614;
          DAT_00915614 = DAT_00915614 + 1;
          *piVar16 = *(int *)(&DAT_00946f4c + uVar15 * 0x59c);
          FUN_00645460(&DAT_0090f554 + iVar7,uVar6);
        }
      }
      if (((-1 < DAT_009a6560) && ((byte)(&DAT_0097d044)[DAT_009a6560 * 0x134] == uVar15)) &&
         (uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x55c)), iVar7 = DAT_00915614,
         DAT_00915614 < 4)) {
        puVar1 = &DAT_009155f0 + DAT_00915614;
        DAT_00915614 = DAT_00915614 + 1;
        *puVar1 = 0x32;
        FUN_00645460(&DAT_0090f554 + iVar7 * 0x50,uVar6);
      }
    }
    uVar15 = param_2;
    local_10 = param_2 * 0x34;
    uVar17 = (uint)(byte)(&DAT_00952836)[local_10];
    if (local_14 != 0) {
      if (*(int *)(&DAT_00946f4c + uVar17 * 0x59c) != 0) {
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x558));
        if ((*(int *)(&DAT_00946f4c + uVar17 * 0x59c) != 0) && (DAT_00915618 < 4)) {
          (&DAT_00915600)[DAT_00915618] = *(int *)(&DAT_00946f4c + uVar17 * 0x59c);
          iVar7 = DAT_00915618 * 0x50;
          DAT_00915618 = DAT_00915618 + 1;
          FUN_00645460(&DAT_0090f694 + iVar7,uVar6);
        }
      }
      if (((-1 < DAT_009a6538) && ((byte)(&DAT_0097d044)[DAT_009a6538 * 0x134] == uVar17)) &&
         (uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x560)), iVar7 = DAT_00915618,
         DAT_00915618 < 4)) {
        puVar1 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *puVar1 = 0x32;
        FUN_00645460(&DAT_0090f694 + iVar7 * 0x50,uVar6);
      }
      iVar7 = DAT_00915618;
      if (((-1 < (int)param_2) && ((&DAT_00952832)[uVar15 * 0x1a] == 0x13)) && (DAT_00915618 < 4)) {
        puVar1 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *puVar1 = 0x32;
        FUN_00645460(&DAT_0090f694 + iVar7 * 0x50,&DAT_009abc44);
      }
    }
  }
  if (-1 < (int)param_1) {
    local_8 = FUN_005015b0(param_1,param_2,local_14,local_20,0);
    iVar7 = param_1 * 0x34;
    iVar8 = (short)(&DAT_00952832)[param_1 * 0x1a] * 0x34;
    local_1c = iVar7;
    if ((&DAT_009ab892)[iVar8] != '\v') {
      if ((-1 < (int)param_2) && (param_5 == 0)) {
        pbVar14 = (byte *)((*(short *)((int)&DAT_0095282a + local_10) * DAT_0068faf0 +
                           ((int)*(short *)((int)&DAT_00952828 + local_10) >> 1)) * 0x2c +
                          DAT_0094a30c);
        if (((((pbVar14[8] & 0x20) != 0) && (0x3f < (*pbVar14 & 0xe0))) &&
            ((((short)(&DAT_00952832)[param_1 * 0x1a] < 0x40 &&
              ((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar8] * 0x10] < '\0')) ||
             ((-1 < DAT_009a6554 &&
              ((&DAT_0097d044)[DAT_009a6554 * 0x134] == (&DAT_00952836)[iVar7])))))) &&
           (-1 < (char)(&DAT_0094ae68)
                       [(uint)(byte)(&DAT_009ab88d)
                                    [*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x10])) {
          local_8 = local_8 + local_8 / 2;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x548));
          if (DAT_00915614 < 4) {
            iVar8 = DAT_00915614 * 0x50;
            puVar1 = &DAT_009155f0 + DAT_00915614;
            DAT_00915614 = DAT_00915614 + 1;
            *puVar1 = 0x32;
            FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
          }
        }
        uVar15 = local_14 & 2;
        if ((uVar15 != 0) &&
           (((&DAT_009ab88d)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] == '\f' ||
            ((&DAT_009ab88d)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] == '\r')))) {
          local_8 = (local_8 * 0x7d) / 100;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x1158));
          if (DAT_00915614 < 4) {
            iVar8 = DAT_00915614 * 0x50;
            puVar1 = &DAT_009155f0 + DAT_00915614;
            DAT_00915614 = DAT_00915614 + 1;
            *puVar1 = 0x19;
            FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
          }
        }
        iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x2000000);
        if ((((iVar8 == 0) && (uVar15 != 0)) &&
            (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x800), iVar8 != 0))
           && (DAT_00949800 != 0)) {
          local_8 = ((DAT_00949800 + 100) * local_8) / 100;
          iVar8 = FUN_00581170(0x800);
          uVar6 = FUN_006169a0((&DAT_009ab538)[iVar8 * 7]);
          iVar8 = DAT_00915614;
          if ((DAT_00949800 != 0) && (DAT_00915614 < 4)) {
            piVar16 = &DAT_009155f0 + DAT_00915614;
            DAT_00915614 = DAT_00915614 + 1;
            *piVar16 = DAT_00949800;
            FUN_00645460(&DAT_0090f554 + iVar8 * 0x50,uVar6);
          }
        }
      }
      if ((((*(byte *)(&DAT_0095282c + param_1 * 0xd) & 0x20) != 0) &&
          (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x10), iVar8 != 0)) &&
         (DAT_009497e4 != 0)) {
        local_8 = ((100 - DAT_009497e4) * local_8) / 100;
        cVar3 = (&DAT_00952836)[iVar7];
        iVar8 = FUN_005b9f20(DAT_009497c8,cVar3);
        if (((iVar8 != 0) ||
            ((iVar8 = DAT_00949740, -1 < DAT_009a6580 &&
             ((&DAT_0097d044)[DAT_009a6580 * 0x134] == cVar3)))) &&
           (iVar8 = DAT_00949870, DAT_00949870 <= DAT_00949874)) {
          iVar8 = DAT_00949874;
        }
        if (DAT_00949740 < iVar8) {
          uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x6d8);
        }
        else {
          uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x6d4);
        }
        uVar6 = FUN_006169a0(uVar6);
        if ((-DAT_009497e4 != 0) && (DAT_00915614 < 4)) {
          iVar8 = DAT_00915614 * 0x50;
          piVar16 = &DAT_009155f0 + DAT_00915614;
          DAT_00915614 = DAT_00915614 + 1;
          *piVar16 = -DAT_009497e4;
          FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
        }
      }
      if (((((*(uint *)(&DAT_00946f58 + (uint)(byte)(&DAT_00952836)[iVar7] * 0x59c) & 0x400) != 0)
           && (DAT_009497e8 != 0)) && (param_5 == 0)) && (local_14 == 0)) {
        local_8 = ((DAT_009497e8 + 100) * local_8) / 100;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x840));
        if ((DAT_009497e8 != 0) && (DAT_00915614 < 4)) {
          iVar8 = DAT_00915614 * 0x50;
          piVar16 = &DAT_009155f0 + DAT_00915614;
          DAT_00915614 = DAT_00915614 + 1;
          *piVar16 = DAT_009497e8;
          FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
        }
      }
      local_18 = 0;
      uVar15 = (uint)(byte)(&DAT_00952836)[iVar7];
      if (0 < (int)(&DAT_00946f5c)[uVar15 * 0x167]) {
        piVar16 = &DAT_00946f80 + uVar15 * 0x167;
        do {
          if (piVar16[-8] == 0x12) {
            local_8 = (*piVar16 * local_8) / 100;
            uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x1150));
            iVar7 = DAT_00915614;
            if ((*piVar16 + -100 != 0) && (DAT_00915614 < 4)) {
              piVar2 = &DAT_009155f0 + DAT_00915614;
              DAT_00915614 = DAT_00915614 + 1;
              *piVar2 = *piVar16 + -100;
              FUN_00645460(&DAT_0090f554 + iVar7 * 0x50,uVar6);
            }
          }
          local_18 = local_18 + 1;
          piVar16 = piVar16 + 1;
          iVar7 = local_1c;
        } while (local_18 < (int)(&DAT_00946f5c)[uVar15 * 0x167]);
      }
      if ((((local_14 != 0) && ((&DAT_00952836)[iVar7] != 0)) &&
          (uVar15 = (uint)(byte)(&DAT_00952836)[iVar7],
          *(int *)(&DAT_0096cc74 + uVar15 * 0x20cc) != 0)) && (DAT_00949824 != 0)) {
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x9c4));
        iVar7 = DAT_00915614;
        if ((*(int *)(&DAT_0096cc74 + uVar15 * 0x20cc) * DAT_00949824 != 0) && (DAT_00915614 < 4)) {
          piVar16 = &DAT_009155f0 + DAT_00915614;
          DAT_00915614 = DAT_00915614 + 1;
          *piVar16 = *(int *)(&DAT_0096cc74 + uVar15 * 0x20cc) * DAT_00949824;
          FUN_00645460(&DAT_0090f554 + iVar7 * 0x50,uVar6);
        }
        local_8 = ((*(int *)(&DAT_0096cc74 + uVar15 * 0x20cc) * DAT_00949824 + 100) * local_8) / 100
        ;
      }
    }
  }
  uVar15 = param_2;
  if ((param_5 & 2) == 0) {
    if ((int)param_2 < 0) goto LAB_005044a3;
    local_c = FUN_00501940(param_2,param_1,local_14,local_20);
    uVar17 = (uint)(byte)(&DAT_00952836)[local_10];
    iVar7 = 0;
    if (0 < (int)(&DAT_00946f5c)[uVar17 * 0x167]) {
      do {
        iVar8 = uVar17 * 0x167 + iVar7;
        if ((&DAT_00946f60)[iVar8] == 0x11) {
          local_c = ((&DAT_00946f80)[iVar8] * local_c) / 100;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x1154));
          if (((&DAT_00946f80)[(uint)(byte)(&DAT_00952836)[local_10] * 0x167 + iVar7] + -100 != 0)
             && (DAT_00915618 < 4)) {
            iVar8 = DAT_00915618 * 0x50;
            piVar16 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *piVar16 = (&DAT_00946f80)[(uint)(byte)(&DAT_00952836)[local_10] * 0x167 + iVar7] + -100
            ;
            FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
          }
        }
        iVar7 = iVar7 + 1;
        uVar17 = (uint)(byte)(&DAT_00952836)[local_10];
        uVar15 = param_2;
      } while (iVar7 < (int)(&DAT_00946f5c)[uVar17 * 0x167]);
    }
    if ((-1 < (int)param_1) &&
       ((&DAT_009ab892)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] == '\v')) {
      local_c = local_c * 4;
      goto LAB_005044a3;
    }
    iVar7 = (int)*(short *)((int)&DAT_00952828 + local_10);
    local_1c = (int)*(short *)((int)&DAT_0095282a + local_10);
    local_20 = iVar7;
    local_18 = FUN_004e3a50(iVar7,local_1c);
    if (local_14 == 0) {
      if ((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90] ==
          '\x02') {
        param_2 = 2;
      }
      else {
        param_2 = FUN_005010c0((&DAT_00952836)[local_10],iVar7,local_1c,uVar15,param_1);
      }
      if ((-1 < (int)param_1) &&
         ((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] ==
          '\0')) {
        iVar7 = local_8;
        if ((param_5 != 0) &&
           ((DAT_009497f0 != 0 &&
            ((&DAT_0094a379)
             [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90]
             == '\0')))) {
          uVar17 = (uint)(*(byte *)(((short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                                    ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1)) * 0x2c +
                                   DAT_0094a30c) >> 5);
          uVar15 = (uint)(*(byte *)((*(short *)((int)&DAT_0095282a + local_10) * DAT_0068faf0 +
                                    ((int)*(short *)((int)&DAT_00952828 + local_10) >> 1)) * 0x2c +
                                   DAT_0094a30c) >> 5);
          if (uVar15 < uVar17) {
            iVar8 = uVar17 - uVar15;
            iVar7 = ((iVar8 * DAT_009497f0 + 100) * local_8) / 100;
            local_8 = iVar7;
            uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x900));
            iVar8 = iVar8 * DAT_009497f0;
            if ((iVar8 != 0) && (DAT_00915614 < 4)) {
              iVar9 = DAT_00915614 * 0x50;
              piVar16 = &DAT_009155f0 + DAT_00915614;
              DAT_00915614 = DAT_00915614 + 1;
              *piVar16 = iVar8;
              FUN_00645460(&DAT_0090f554 + iVar9,uVar6);
            }
          }
        }
        if (((((DAT_009497f4 != 0) && (param_5 == 0)) && (local_18 < 0)) &&
            ((param_2 == 2 &&
             ((*(byte *)((DAT_0068faf0 * local_1c + (local_20 >> 1)) * 0x2c + 5 + DAT_0094a30c) &
              0xc0) < 0x80)))) &&
           (iVar8 = FUN_005c13b0((int)(short)(&DAT_00952832)[param_1 * 0x1a]), DAT_00949738 < iVar8)
           ) {
          iVar8 = FUN_005c13b0((int)(short)(&DAT_00952832)[param_1 * 0x1a]);
          iVar9 = FUN_005c13b0((int)*(short *)((int)&DAT_00952832 + local_10));
          if (iVar9 <= iVar8) {
            iVar7 = ((DAT_009497f4 + 100) * iVar7) / 100;
            local_8 = iVar7;
            uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x98c));
            if ((DAT_009497f4 != 0) && (DAT_00915614 < 4)) {
              iVar8 = DAT_00915614 * 0x50;
              piVar16 = &DAT_009155f0 + DAT_00915614;
              DAT_00915614 = DAT_00915614 + 1;
              *piVar16 = DAT_009497f4;
              FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
            }
          }
        }
        if ((((DAT_009497f8 != 0) && (param_5 == 0)) && ((2 < (int)param_2 || (-1 < local_18)))) &&
           (iVar8 = FUN_005c13b0((int)(short)(&DAT_00952832)[param_1 * 0x1a]), DAT_00949738 < iVar8)
           ) {
          local_c = ((DAT_009497f8 + 100) * local_c) / 100;
          if (local_18 < 0) {
            uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x890);
          }
          else {
            uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x990);
          }
          uVar6 = FUN_006169a0(uVar6);
          iVar8 = DAT_00915618;
          if ((DAT_009497f8 != 0) && (DAT_00915618 < 4)) {
            piVar16 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *piVar16 = DAT_009497f8;
            FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,uVar6);
          }
        }
        if ((DAT_009497bc != 0) && (param_5 == 0)) {
          iVar7 = ((DAT_009497bc + 100) * iVar7) / 100;
          local_8 = iVar7;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x978));
          if ((DAT_009497bc != 0) && (DAT_00915614 < 4)) {
            iVar8 = DAT_00915614 * 0x50;
            piVar16 = &DAT_009155f0 + DAT_00915614;
            DAT_00915614 = DAT_00915614 + 1;
            *piVar16 = DAT_009497bc;
            FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
          }
        }
        if ((((DAT_009497c4 != 0) && (param_5 == 0)) &&
            ((*(byte *)(((short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                        ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1)) * 0x2c + DAT_0094a30c) &
             0xe0) < (*(byte *)((DAT_0068faf0 * local_1c + (local_20 >> 1)) * 0x2c + DAT_0094a30c) &
                     0xe0))) &&
           (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x400), iVar8 == 0)) {
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x6e4));
          iVar8 = DAT_00915618;
          if ((DAT_009497c4 != 0) && (DAT_00915618 < 4)) {
            piVar16 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *piVar16 = DAT_009497c4;
            FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,uVar6);
          }
          local_c = ((DAT_009497c4 + 100) * local_c) / 100;
        }
        if (((DAT_009497c0 != 0) && (param_5 == 0)) &&
           (((*(byte *)((DAT_0068faf0 * local_1c + (local_20 >> 1)) * 0x2c + DAT_0094a30c) & 0xe0) <
             (*(byte *)(((short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                        ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1)) * 0x2c + DAT_0094a30c) &
             0xe0) && (iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x400),
                      iVar8 == 0)))) {
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x528));
          if ((DAT_009497c0 != 0) && (DAT_00915614 < 4)) {
            iVar8 = DAT_00915614 * 0x50;
            piVar16 = &DAT_009155f0 + DAT_00915614;
            DAT_00915614 = DAT_00915614 + 1;
            *piVar16 = DAT_009497c0;
            FUN_00645460(&DAT_0090f554 + iVar8,uVar6);
          }
          local_8 = ((DAT_009497c0 + 100) * iVar7) / 100;
        }
      }
      iVar7 = param_2;
      local_c = param_2 * local_c;
      if (2 < (int)param_2) {
        DAT_009b86a0 = 0;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x52c));
        FUN_00645470(&DAT_009b86a0,uVar6);
        FUN_00645470(&DAT_009b86a0,&DAT_00682820);
        FUN_00645470(&DAT_009b86a0,&DAT_00682e9c);
        uVar6 = FUN_006169a0(DAT_0090f550);
        FUN_00645470(&DAT_009b86a0,uVar6);
        FUN_00645470(&DAT_009b86a0,&DAT_00682e98);
        iVar8 = DAT_00915618;
        iVar7 = (iVar7 * 5 + -10) * 10;
        if ((iVar7 != 0) && (DAT_00915618 < 4)) {
          piVar16 = &DAT_00915600 + DAT_00915618;
          DAT_00915618 = DAT_00915618 + 1;
          *piVar16 = iVar7;
          FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,&DAT_009b86a0);
        }
      }
      iVar7 = local_20 >> 1;
      uVar15 = 2;
      uVar6 = 0;
      param_2 = 2;
      if (((*(uint *)((DAT_0068faf0 * local_1c + iVar7) * 0x2c + 8 + DAT_0094a30c) & 0x800) != 0) &&
         (((int)param_1 < 0 ||
          ((&DAT_0094a379)
           [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] !=
           '\x02')))) {
        uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x598);
        param_2 = 3;
      }
      if (-1 < local_18) {
        uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x530);
        param_2 = 2;
        uVar17 = param_1;
        if (-1 < (int)param_1) {
          cVar3 = (&DAT_0094a379)
                  [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90
                  ];
          uVar17 = uVar15;
          if (cVar3 == '\0') {
            FUN_0050ba00(4,&local_28,&local_24);
            local_28 = (uint)(((&DAT_0097d0cc)[local_18 * 0x134 + local_28] & (byte)local_24) != 0);
            if ((local_28 != 0) ||
               ((-1 < DAT_009a6528 &&
                ((&DAT_0097d044)[DAT_009a6528 * 0x134] == (&DAT_00952836)[local_10])))) {
              uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x588);
              uVar17 = 4;
            }
          }
          else if (cVar3 == '\x01') {
            FUN_0050ba00(0x1c,&local_28,&local_24);
            local_28 = (uint)(((&DAT_0097d0cc)[local_28 + local_18 * 0x134] & (byte)local_24) != 0);
            if ((local_28 != 0) ||
               ((-1 < DAT_009a653c &&
                ((&DAT_0097d044)[DAT_009a653c * 0x134] == (&DAT_0097d044)[local_18 * 0x134])))) {
              uVar6 = DAT_009a50a8;
              uVar17 = 4;
            }
          }
          else if (cVar3 == '\x02') {
            FUN_0050ba00(0x1d,&local_24,&local_28);
            local_28 = (uint)(((&DAT_0097d0cc)[local_24 + local_18 * 0x134] & (byte)local_28) != 0);
            if ((local_28 != 0) ||
               ((-1 < DAT_009a65a0 &&
                ((&DAT_0097d044)[DAT_009a65a0 * 0x134] == (&DAT_0097d044)[local_18 * 0x134])))) {
              uVar6 = DAT_009a50d8;
              uVar17 = 4;
            }
          }
        }
        FUN_0050ba00(5,&local_28,&local_24);
        local_28 = (uint)(((&DAT_0097d0cc)[local_18 * 0x134 + local_28] & (byte)local_24) != 0);
        if (local_28 != 0) {
          uVar17 = uVar17 + 2;
          uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x594);
        }
        if (((((int)uVar17 < 2) || (param_2 = uVar17, uVar17 == 2)) &&
            (((int)param_1 < 0 ||
             (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x20000), iVar8 == 0)
             ))) && (DAT_009497b8 != 0)) {
          uVar10 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x530));
          if ((DAT_009497b8 != 0) && (DAT_00915618 < 4)) {
            iVar8 = DAT_00915618 * 0x50;
            piVar16 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *piVar16 = DAT_009497b8;
            FUN_00645460(&DAT_0090f694 + iVar8,uVar10);
          }
          local_c = ((DAT_009497b8 + 100) * local_c) / 100;
        }
      }
      if ((-1 < (int)param_1) &&
         (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x20000), iVar8 != 0)) {
        if (2 < (int)param_2) {
          param_2 = 2;
        }
        uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x6b0);
        FUN_006169a0(uVar6);
      }
      if ((((((DAT_00949804 != 0) && (param_5 == 0)) && (-1 < local_18)) &&
           ((&DAT_00952836)[param_1 * 0x34] != '\0')) &&
          (((sVar4 = (&DAT_00952832)[param_1 * 0x1a], 0x3f < sVar4 ||
            ((-1 < (char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar4 * 0x34] * 0x10] &&
             (sVar4 != 0xf)))) &&
           ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[sVar4 * 0x34] * 0x90] == '\0')))) &&
         ((&DAT_0094a378)[(uint)(byte)(&DAT_009ab88c)[sVar4 * 0x34] * 0x90] == '\x01')) {
        local_8 = ((DAT_00949804 + 100) * local_8) / 100;
        uVar10 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x88c));
        if ((DAT_00949804 != 0) && (DAT_00915614 < 4)) {
          iVar8 = DAT_00915614 * 0x50;
          piVar16 = &DAT_009155f0 + DAT_00915614;
          DAT_00915614 = DAT_00915614 + 1;
          *piVar16 = DAT_00949804;
          FUN_00645460(&DAT_0090f554 + iVar8,uVar10);
        }
      }
      if (((((uVar5 != 0) && ((int)param_2 < 3)) && (local_18 < 0)) &&
          ((pbVar14 = (byte *)((DAT_0068faf0 * local_1c + iVar7) * 0x2c + DAT_0094a30c),
           (pbVar14[5] & 0xc0) < 0x80 && ((*(uint *)(pbVar14 + 8) & 0x200000) == 0)))) &&
         (((*(uint *)(pbVar14 + 8) & 0x20) == 0 || ((*pbVar14 & 0xe0) < 0x40)))) {
        param_2 = 3;
        uVar6 = *(undefined4 *)(DAT_009b90f8 + 0x834);
      }
      uVar5 = param_2;
      iVar7 = param_2 * local_c;
      local_c = iVar7;
      if (2 < (int)param_2) {
        uVar6 = FUN_006169a0(uVar6);
        iVar8 = DAT_00915618;
        iVar9 = (uVar5 * 5 + -10) * 10;
        if ((iVar9 != 0) && (DAT_00915618 < 4)) {
          piVar16 = &DAT_00915600 + DAT_00915618;
          DAT_00915618 = DAT_00915618 + 1;
          *piVar16 = iVar9;
          FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,uVar6);
        }
      }
    }
    else {
      if ((-1 < local_18) && (DAT_009497b8 != 0)) {
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x530));
        iVar7 = DAT_00915618;
        if ((DAT_009497b8 != 0) && (DAT_00915618 < 4)) {
          piVar16 = &DAT_00915600 + DAT_00915618;
          DAT_00915618 = DAT_00915618 + 1;
          *piVar16 = DAT_009497b8;
          FUN_00645460(&DAT_0090f694 + iVar7 * 0x50,uVar6);
        }
        local_c = ((DAT_009497b8 + 100) * local_c) / 100;
      }
      iVar7 = local_c * 4;
      local_c = iVar7;
    }
    iVar8 = DAT_00949870;
    iVar9 = local_c;
    if ((((&DAT_00952836)[local_10] != '\0') && (-1 < (int)param_1)) &&
       ((&DAT_0094a37d)
        [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] != '\0')
       ) {
      iVar13 = 0;
      do {
        iVar9 = *(int *)((int)&DAT_0066efbc + iVar13) + local_20;
        if ((DAT_0094988c & 1) == 0) {
          if (iVar9 < 0) {
            iVar9 = iVar9 + iVar8;
          }
          else if (iVar8 <= iVar9) {
            iVar9 = iVar9 - iVar8;
          }
        }
        iVar12 = *(int *)((int)&DAT_0066f440 + iVar13) + local_1c;
        if ((((-1 < iVar12) && (iVar12 < DAT_00949874)) &&
            ((-1 < iVar9 &&
             ((iVar9 < iVar8 &&
              (iVar9 = FUN_004e3a50(iVar9,iVar12), iVar8 = DAT_00949870, -1 < iVar9)))))) &&
           ((&DAT_0097d044)[iVar9 * 0x134] == (&DAT_00952836)[local_10])) {
          FUN_0050ba00(0x27,&param_5,&param_2);
          iVar8 = DAT_00949870;
          if (((&DAT_0097d0cc)[param_5 + iVar9 * 0x134] & (byte)param_2) != 0) {
            iVar7 = (iVar7 * 3) / 2;
            uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x1164));
            iVar9 = DAT_00915618;
            iVar8 = DAT_00949870;
            if (DAT_00915618 < 4) {
              puVar1 = &DAT_00915600 + DAT_00915618;
              DAT_00915618 = DAT_00915618 + 1;
              *puVar1 = 0x32;
              FUN_00645460(&DAT_0090f694 + iVar9 * 0x50,uVar6);
              iVar8 = DAT_00949870;
            }
          }
        }
        iVar13 = iVar13 + 4;
        iVar9 = iVar7;
      } while (iVar13 < 100);
    }
    local_c = iVar9;
    if (0x5f < (*(byte *)((DAT_0068faf0 * local_1c + (local_20 >> 1)) * 0x2c + DAT_0094a30c) & 0xe0)
       ) {
      param_2 = 0;
      if ((&DAT_00952836)[local_10] != '\0') {
        param_5 = 0;
        do {
          uVar5 = param_5;
          iVar7 = *(int *)((int)&DAT_0066efbc + param_5) + local_20;
          if ((DAT_0094988c & 1) == 0) {
            if (iVar7 < 0) {
              iVar7 = iVar8 + iVar7;
            }
            else if (iVar8 <= iVar7) {
              iVar7 = iVar7 - iVar8;
            }
          }
          iVar9 = *(int *)((int)&DAT_0066f440 + param_5) + local_1c;
          if ((((-1 < iVar9) && (iVar9 < DAT_00949874)) && (-1 < iVar7)) &&
             ((iVar7 < iVar8 &&
              (iVar12 = FUN_005bf010(iVar7,iVar9), iVar13 = local_10, iVar8 = DAT_00949870,
              iVar12 != 0)))) {
            if ((*(byte *)((DAT_0068faf0 * iVar9 + (iVar7 >> 1)) * 0x2c + DAT_0094a30c) & 0xe0) <
                0x60) {
              iVar13 = FUN_004e3b80(iVar7,iVar9);
              iVar8 = DAT_00949870;
              if ((&DAT_0097d044)[iVar13 * 0x134] == (&DAT_00952836)[local_10]) {
LAB_00503b11:
                param_2 = param_2 | 1;
                iVar7 = FUN_005bf010(iVar7,iVar9);
                iVar8 = DAT_00949870;
                if (1 < iVar7) {
                  param_2 = param_2 | 2;
                }
              }
            }
            else {
              uVar15 = FUN_004e3ef0((&DAT_00952836)[local_10],iVar7,iVar9,0,0);
              uVar5 = param_5;
              if (((int)uVar15 < 0) ||
                 (iVar8 = DAT_00949870, uVar15 == (byte)(&DAT_00952836)[iVar13])) goto LAB_00503b11;
            }
          }
          param_5 = uVar5 + 4;
          iVar7 = local_c;
        } while ((int)param_5 < 100);
      }
      uVar5 = param_2;
      if ((param_2 & 1) != 0) {
        iVar7 = ((DAT_00949820 + 100) * iVar7) / 100;
        local_c = iVar7;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x994));
        if ((DAT_00949820 != 0) && (DAT_00915618 < 4)) {
          iVar8 = DAT_00915618 * 0x50;
          piVar16 = &DAT_00915600 + DAT_00915618;
          DAT_00915618 = DAT_00915618 + 1;
          *piVar16 = DAT_00949820;
          FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
        }
      }
      if ((uVar5 & 2) != 0) {
        iVar7 = ((DAT_00949820 + 100) * iVar7) / 100;
        local_c = iVar7;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x118c));
        if ((DAT_00949820 != 0) && (DAT_00915618 < 4)) {
          iVar8 = DAT_00915618 * 0x50;
          piVar16 = &DAT_00915600 + DAT_00915618;
          DAT_00915618 = DAT_00915618 + 1;
          *piVar16 = DAT_00949820;
          FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
        }
      }
    }
    local_1c = param_1 * 0x34;
    iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x2000000);
    if (((iVar8 == 0) && (DAT_009497fc != 0)) && (-1 < (int)param_1)) {
      if ((local_14 & 1) != 0) {
        iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x40000);
        if (iVar8 != 0) {
          iVar7 = ((DAT_009497fc + 100) * iVar7) / 100;
          local_c = iVar7;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x524));
          if ((DAT_009497fc != 0) && (DAT_00915618 < 4)) {
            iVar8 = DAT_00915618 * 0x50;
            piVar16 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *piVar16 = DAT_009497fc;
            FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
          }
        }
        goto LAB_00503d1b;
      }
    }
    else {
LAB_00503d1b:
      if ((local_14 & 1) != 0) {
        if ((int)param_1 < 0) goto LAB_005044a3;
        if (((&DAT_009ab88e)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] == '\v') ||
           ((&DAT_009ab88e)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] == '\r')) {
          iVar7 = (iVar7 * 0x7d) / 100;
          local_c = iVar7;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x115c));
          iVar8 = DAT_00915618;
          if (DAT_00915618 < 4) {
            puVar1 = &DAT_00915600 + DAT_00915618;
            DAT_00915618 = DAT_00915618 + 1;
            *puVar1 = 0x19;
            FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,uVar6);
          }
        }
      }
    }
    if ((int)param_1 < 0) goto LAB_005044a3;
    if ((((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_1c) * 0x34] * 0x90] ==
          '\x02') &&
        (iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_1c),0x20), iVar8 != 0)) &&
       (local_14 == 0)) {
      if ((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90] ==
          '\x02') {
        if ((DAT_0094980c != 0) &&
           (iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x20), iVar8 == 0))
        {
          local_8 = ((DAT_0094980c + 100) * local_8) / 100;
          uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x704));
          iVar8 = DAT_00915614;
          iVar9 = DAT_0094980c;
          goto joined_r0x00503ef0;
        }
      }
      else if (DAT_00949808 != 0) {
        local_8 = ((100 - DAT_00949808) * local_8) / 100;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x700));
        iVar9 = -DAT_00949808;
        iVar8 = DAT_00915614;
joined_r0x00503ef0:
        DAT_00915614 = iVar8;
        if ((iVar9 != 0) && (iVar8 < 4)) {
          DAT_00915614 = iVar8 + 1;
          (&DAT_009155f0)[iVar8] = iVar9;
          FUN_00645460(&DAT_0090f554 + iVar8 * 0x50,uVar6);
        }
      }
    }
    iVar9 = local_10;
    iVar8 = local_1c;
    if ((((((&DAT_0094a379)
            [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_1c) * 0x34] * 0x90]
            == '\x02') &&
          ((&DAT_0094a379)
           [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90] ==
           '\x02')) &&
         (iVar13 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x20), iVar13 != 0))
        && ((iVar13 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar8),0x20), iVar13 == 0 &&
            (local_14 == 0)))) &&
       (((&DAT_0094a37d)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar8) * 0x34] * 0x90] == '\0'
        && (((&DAT_0094a37d)
             [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar9) * 0x34] * 0x90] ==
             '\0' && (DAT_0094980c != 0)))))) {
      iVar7 = ((DAT_0094980c + 100) * iVar7) / 100;
      local_c = iVar7;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x704));
      iVar8 = DAT_00915618;
      if ((DAT_0094980c != 0) && (DAT_00915618 < 4)) {
        piVar16 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *piVar16 = DAT_0094980c;
        FUN_00645460(&DAT_0090f694 + iVar8 * 0x50,uVar6);
      }
    }
    iVar8 = *(short *)((int)&DAT_00952832 + local_10) * 0x34;
    if (((((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar8] * 0x10] == '\0') &&
         ((&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[iVar8] * 0x10] == '\x01')) &&
        (((&DAT_00952836)[local_1c] != '\0' || (local_18 < 0)))) && (DAT_00949810 != 0)) {
      iVar7 = ((100 - DAT_00949810) * iVar7) / 100;
      local_c = iVar7;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x6dc));
      if ((-DAT_00949810 != 0) && (DAT_00915618 < 4)) {
        iVar8 = DAT_00915618 * 0x50;
        piVar16 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *piVar16 = -DAT_00949810;
        FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
      }
    }
    if (((((&DAT_0094a379)
           [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_1c) * 0x34] * 0x90] !=
           '\x01') &&
         ((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90] ==
          '\x01')) && (-1 < local_18)) && (DAT_00949818 != 0)) {
      local_8 = ((DAT_00949818 + 100) * local_8) / 100;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x53c));
      iVar8 = DAT_00915614;
      if ((DAT_00949818 != 0) && (DAT_00915614 < 4)) {
        piVar16 = &DAT_009155f0 + DAT_00915614;
        DAT_00915614 = DAT_00915614 + 1;
        *piVar16 = DAT_00949818;
        FUN_00645460(&DAT_0090f554 + iVar8 * 0x50,uVar6);
      }
    }
    iVar9 = local_10;
    iVar8 = local_1c;
    if ((((&DAT_009ab88e)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] == '\n') ||
        ((&DAT_009ab88e)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] == '\f')) &&
       (((&DAT_0094a379)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_1c) * 0x34] * 0x90] ==
         '\0' && (1 < (byte)(&DAT_0094a378)
                            [(uint)(byte)(&DAT_009ab88c)
                                         [*(short *)((int)&DAT_00952832 + local_1c) * 0x34] * 0x90])
        ))) {
      iVar7 = (iVar7 * 0x7d) / 100;
      local_c = iVar7;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x1160));
      if (DAT_00915618 < 4) {
        iVar13 = DAT_00915618 * 0x50;
        puVar1 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *puVar1 = 0x19;
        FUN_00645460(&DAT_0090f694 + iVar13,uVar6);
      }
    }
    iVar13 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar8),0x2000000);
    if ((((iVar13 == 0) &&
         (iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + iVar9),0x200), iVar9 != 0)) &&
        ((&DAT_0094a379)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar8) * 0x34] * 0x90] == '\0'
        )) && ((1 < (byte)(&DAT_0094a378)
                          [(uint)(byte)(&DAT_009ab88c)
                                       [*(short *)((int)&DAT_00952832 + iVar8) * 0x34] * 0x90] &&
               (DAT_00949814 != 0)))) {
      iVar7 = ((DAT_00949814 + 100) * iVar7) / 100;
      local_c = iVar7;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x540));
      if ((DAT_00949814 != 0) && (DAT_00915618 < 4)) {
        iVar8 = DAT_00915618 * 0x50;
        piVar16 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *piVar16 = DAT_00949814;
        FUN_00645460(&DAT_0090f694 + iVar8,uVar6);
      }
    }
    iVar8 = local_1c;
    iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_1c),0x2000000);
    if (((iVar9 != 0) ||
        (iVar9 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_10),0x100), iVar9 == 0)) ||
       (((&DAT_0094a379)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + iVar8) * 0x34] * 0x90] !=
         '\x02' || (DAT_0094981c == 0)))) goto LAB_005044a3;
    local_c = ((DAT_0094981c + 100) * iVar7) / 100;
    uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x544));
    iVar7 = DAT_00915618;
    if ((DAT_0094981c == 0) || (3 < DAT_00915618)) goto LAB_005044a3;
    piVar16 = &DAT_00915600 + DAT_00915618;
    DAT_00915618 = DAT_00915618 + 1;
    *piVar16 = DAT_0094981c;
    puVar11 = &DAT_0090f694 + iVar7 * 0x50;
  }
  else {
    if (((int)param_2 < 0) ||
       (local_c = FUN_005015b0(param_2,param_1,local_14,local_20,1), (param_5 & 0x18) != 0))
    goto LAB_005044a3;
    if (((&DAT_0094a379)
         [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90] ==
         '\x01') &&
       ((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] == '\0')
       ) {
      if (DAT_009497ec == 0) goto LAB_005044a3;
      local_8 = ((DAT_009497ec + 100) * local_8) / 100;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x6cc));
      iVar7 = DAT_00915614;
      if ((DAT_009497ec == 0) || (3 < DAT_00915614)) goto LAB_005044a3;
      piVar16 = &DAT_009155f0 + DAT_00915614;
      DAT_00915614 = DAT_00915614 + 1;
      *piVar16 = DAT_009497ec;
      puVar11 = &DAT_0090f554 + iVar7 * 0x50;
    }
    else if (((&DAT_0094a379)
              [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] ==
              '\x01') &&
            ((&DAT_0094a379)
             [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_10) * 0x34] * 0x90]
             == '\0')) {
      if (DAT_009497ec == 0) goto LAB_005044a3;
      local_c = ((DAT_009497ec + 100) * local_c) / 100;
      uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x6cc));
      if ((DAT_009497ec == 0) || (3 < DAT_00915618)) goto LAB_005044a3;
      puVar11 = &DAT_0090f694 + DAT_00915618 * 0x50;
      piVar16 = &DAT_00915600 + DAT_00915618;
      DAT_00915618 = DAT_00915618 + 1;
      *piVar16 = DAT_009497ec;
    }
    else {
      if (DAT_009497f0 == 0) goto LAB_005044a3;
      uVar15 = (uint)(*(byte *)(((short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                                ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1)) * 0x2c +
                               DAT_0094a30c) >> 5);
      uVar5 = (uint)(*(byte *)((*(short *)((int)&DAT_0095282a + local_10) * DAT_0068faf0 +
                               ((int)*(short *)((int)&DAT_00952828 + local_10) >> 1)) * 0x2c +
                              DAT_0094a30c) >> 5);
      if (uVar5 < uVar15) {
        local_8 = (int)(((uVar15 - uVar5) * DAT_009497f0 + 100) * local_8) / 100;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x900));
        iVar7 = DAT_00915614;
        iVar8 = (uVar15 - uVar5) * DAT_009497f0;
        if ((iVar8 == 0) || (3 < DAT_00915614)) goto LAB_005044a3;
        piVar16 = &DAT_009155f0 + DAT_00915614;
        DAT_00915614 = DAT_00915614 + 1;
        *piVar16 = iVar8;
        puVar11 = &DAT_0090f554 + iVar7 * 0x50;
      }
      else {
        if (uVar5 <= uVar15) goto LAB_005044a3;
        local_c = (int)(((uVar5 - uVar15) * DAT_009497f0 + 100) * local_c) / 100;
        uVar6 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x900));
        iVar7 = (uVar5 - uVar15) * DAT_009497f0;
        if ((iVar7 == 0) || (3 < DAT_00915618)) goto LAB_005044a3;
        puVar11 = &DAT_0090f694 + DAT_00915618 * 0x50;
        piVar16 = &DAT_00915600 + DAT_00915618;
        DAT_00915618 = DAT_00915618 + 1;
        *piVar16 = iVar7;
      }
    }
  }
  FUN_00645460(puVar11,uVar6);
LAB_005044a3:
  if (param_3 != (int *)0x0) {
    *param_3 = local_8;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_c;
  }
  return 0;
}

