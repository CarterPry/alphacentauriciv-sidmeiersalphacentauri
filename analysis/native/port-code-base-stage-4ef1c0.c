// REA Evidence: ev_a14415758bace350169843a4562ef9291d5033ca42a6d0dc047256c9879f87f7
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_004ef1c0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  byte local_2c [4];
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar6 = DAT_0094a30c;
  iVar5 = DAT_0068faf0;
  uVar9 = (uint)*(byte *)(DAT_0090ea30 + 2);
  local_14 = (int)*DAT_0090ea30;
  local_18 = (int)DAT_0090ea30[1];
  local_10 = uVar9;
  if (*(int *)(DAT_0090ea30 + 0x1e) < 0) {
    if ((((byte)DAT_009a64c0 & 1) == 0) || (((byte)DAT_009a64c0 & 8) != 0)) {
      if ((DAT_0090e904 != 0) && (0 < (int)DAT_009a64c8)) {
        psVar10 = &DAT_00952832;
        local_20 = DAT_009a64c8;
        do {
          if (((((psVar10[0x12] == DAT_00689370) && ((&DAT_009ab892)[*psVar10 * 0x34] == '\n')) &&
               (*(char *)((int)psVar10 + 7) == '\x03')) &&
              (((char)psVar10[0xe] == '\0' &&
               (iVar4 = psVar10[-4] * iVar5 + ((int)psVar10[-5] >> 1),
               (*(byte *)(iVar6 + 8 + iVar4 * 0x2c) & 1) != 0)))) &&
             ((*(byte *)(iVar6 + iVar4 * 0x2c + 2) & 0xf) < 8)) {
            *(undefined1 *)((int)psVar10 + 7) = 0;
          }
          psVar10 = psVar10 + 0x1a;
          local_20 = (int *)((int)local_20 + -1);
        } while (local_20 != (int *)0x0);
      }
      if (((&DAT_00946f58)[uVar9 * 0x59c] & 0x80) == 0) {
        pcVar13 = s_starv_sm_pcx_006894b8;
        pcVar12 = s_STARVE_006894c8;
      }
      else {
        pcVar13 = s_al_starv_sm_pcx_006894a0;
        pcVar12 = s_STARVE_006894b0;
      }
      FUN_0048c650(pcVar12,0x4000,0xe,pcVar13,0);
      iVar5 = FUN_005ac060(DAT_00689370);
      if (((iVar5 == 0) || ('\x01' < (char)DAT_0090ea30[3])) &&
         (*(char *)(DAT_0090ea30 + 3) = (char)DAT_0090ea30[3] + -1, (char)DAT_0090ea30[3] < '\x01'))
      {
        FUN_004e5250(DAT_00689370);
        FUN_0046b190(1);
        FUN_005b3380(uVar9,0);
        return 1;
      }
    }
    *(undefined4 *)(DAT_0090ea30 + 0x1e) = *(undefined4 *)(DAT_0090ea30 + 0x68);
    FUN_0046af40(local_14,local_18,2);
    return 0;
  }
  iVar6 = FUN_004e4430(uVar9,0,DAT_00689370);
  iVar5 = DAT_00689370;
  iVar6 = iVar6 * ((char)DAT_0090ea30[3] + 1);
  if ((((-1 < DAT_009a6574) && ((byte)(&DAT_0097d044)[DAT_009a6574 * 0x134] == uVar9)) ||
      (5 < DAT_0090e918)) &&
     ((DAT_0094973c != 0 && (DAT_0094973c <= *(int *)(DAT_0090ea30 + 0x68))))) {
    iVar4 = DAT_00689370 * 0x134;
    if (DAT_009a6548 < 0) {
      bVar11 = false;
    }
    else {
      bVar11 = (uint)(byte)(&DAT_0097d044)[DAT_009a6548 * 0x134] ==
               (uint)(byte)(&DAT_0097d044)[iVar4];
    }
    local_24 = (int *)(-(uint)bVar11 & 2);
    local_20 = (int *)(&DAT_00946f40 + (uint)(byte)(&DAT_0097d044)[iVar4] * 0x59c);
    if (((((int)(char)(&DAT_0097d046)[iVar4] - (int)local_24) + *local_20 < DAT_0094976c) ||
        (iVar7 = FUN_00421670(0x18,DAT_00689370,0), iVar7 != 0)) &&
       ((((int)(char)(&DAT_0097d046)[iVar4] - (int)local_24) + *local_20 < DAT_00949770 ||
        (iVar5 = FUN_00421670(0x19,iVar5,0), iVar5 != 0)))) {
      if ((char)DAT_0090ea30[3] < '\x7f') {
        *(char *)(DAT_0090ea30 + 3) = (char)DAT_0090ea30[3] + '\x01';
      }
      DAT_00689374 = DAT_00689370;
      FUN_004e9550();
      FUN_004e80b0();
      FUN_004e9b70();
      FUN_004e9cb0();
      FUN_004eb560();
      FUN_0046af40(local_14,local_18,2);
      if (*(int *)(DAT_0090ea30 + 0x1e) <= iVar6) {
        return 0;
      }
      *(int *)(DAT_0090ea30 + 0x1e) = iVar6;
      return 0;
    }
  }
  iVar5 = DAT_00689370;
  if (iVar6 <= *(int *)(DAT_0090ea30 + 0x1e)) {
    if (DAT_0090e918 < -2) {
      *(int *)(DAT_0090ea30 + 0x1e) = iVar6;
      return 0;
    }
    iVar6 = DAT_00689370 * 0x134;
    if (DAT_009a6548 < 0) {
      bVar11 = false;
    }
    else {
      bVar11 = (uint)(byte)(&DAT_0097d044)[DAT_009a6548 * 0x134] ==
               (uint)(byte)(&DAT_0097d044)[iVar6];
    }
    local_24 = (int *)(&DAT_00946f40 + (uint)(byte)(&DAT_0097d044)[iVar6] * 0x59c);
    if (((int)(((int)(char)(&DAT_0097d046)[iVar6] - (-(uint)bVar11 & 2)) + *local_24) < DAT_0094976c
        ) || (iVar4 = FUN_00421670(0x18,DAT_00689370,0), iVar4 != 0)) {
      if (((int)(((int)(char)(&DAT_0097d046)[iVar6] - (-(uint)bVar11 & 2)) + *local_24) <
           DAT_00949770) || (iVar5 = FUN_00421670(0x19,iVar5,0), iVar5 != 0)) {
        psVar10 = DAT_0090ea30;
        psVar10[0x1e] = 0;
        psVar10[0x1f] = 0;
        *(char *)(DAT_0090ea30 + 3) = (char)DAT_0090ea30[3] + '\x01';
        DAT_00689374 = DAT_00689370;
        FUN_004e9550();
        FUN_004e80b0();
        FUN_004e9b70();
        FUN_004e9cb0();
        FUN_004eb560();
        FUN_0046af40(local_14,local_18,2);
        goto LAB_004ef6c6;
      }
      iVar5 = 0x19;
    }
    else {
      iVar5 = 0x18;
    }
    iVar6 = FUN_004e4430((char)DAT_0090ea30[2],0,DAT_00689370);
    *(int *)(DAT_0090ea30 + 0x1e) = (iVar6 * ((char)DAT_0090ea30[3] + 1)) / 2;
    FUN_00625e50(1,(&DAT_009a4b68)[iVar5 * 0xc],0xffffffff,0xffffffff);
    if (((&DAT_00946f58)[local_10 * 0x59c] & 0x80) == 0) {
      FUN_0048c650(s_POPULATIONLIMIT_006894fc,0x800,0x10,s_pop_sm_pcx_006894f0,0);
    }
    else {
      FUN_0048c650(s_POPULATIONLIMIT_006894e0,0x800,0x10,s_al_pop_sm_pcx_006894d0,0);
    }
  }
LAB_004ef6c6:
  *(int *)(DAT_0090ea30 + 0x1e) = *(int *)(DAT_0090ea30 + 0x1e) + *(int *)(DAT_0090ea30 + 0x68);
  iVar5 = *(int *)(DAT_0090ea30 + 0x68);
  if ((((iVar5 < 0) && (-1 < *(int *)(DAT_0090ea30 + 0x1e) - iVar5)) &&
      (iVar5 + *(int *)(DAT_0090ea30 + 0x1e) + iVar5 * 4 < 0)) &&
     ((*(uint *)(DAT_0090ea30 + 0x1c) & 0x80000040) != 0x80000040)) {
    local_8 = 0;
    local_c = 0;
    local_1c = 1;
    local_20 = (int *)0x0;
    do {
      iVar5 = DAT_00689370;
      iVar6 = *(int *)((int)&DAT_0066efc0 + (int)local_20) + local_14;
      if ((DAT_0094988c & 1) == 0) {
        if (iVar6 < 0) {
          iVar6 = iVar6 + DAT_00949870;
        }
        else if (DAT_00949870 <= iVar6) {
          iVar6 = iVar6 - DAT_00949870;
        }
      }
      iVar4 = *(int *)((int)&DAT_0066f444 + (int)local_20) + local_18;
      if (((-1 < iVar4) && (iVar4 < DAT_00949874)) && ((-1 < iVar6 && (iVar6 < DAT_00949870)))) {
        iVar8 = DAT_0068faf0 * iVar4 + (iVar6 >> 1);
        iVar7 = DAT_0094a30c + iVar8 * 0x2c;
        if ((*(byte *)(DAT_0094a30c + iVar8 * 0x2c) & 0xe0) < 0x60) {
          if (((*(uint *)(DAT_0090ea30 + 0x3c) & 1 << ((byte)local_1c & 0x1f)) != 0) &&
             ((*(uint *)(iVar7 + 8) & 0x8000) == 0)) {
LAB_004ef7d7:
            local_c = local_c + 1;
          }
        }
        else {
          uVar9 = *(uint *)(iVar7 + 8);
          if ((uVar9 & 0x8000) == 0) {
            if ((uVar9 & 0x200000) != 0) {
              FUN_0050ba00(0xd,&local_28,local_2c);
              local_24 = (int *)(uint)(((&DAT_0097d0cc)[iVar5 * 0x134 + local_28] & local_2c[0]) !=
                                      0);
              if (local_24 != (int *)0x0) goto LAB_004ef924;
            }
            iVar5 = DAT_0068faf0 * iVar4 + (iVar6 >> 1);
            local_24 = *(int **)(DAT_0094a30c + 8 + iVar5 * 0x2c);
            pbVar1 = (byte *)(DAT_0094a30c + iVar5 * 0x2c);
            if (((((uint)local_24 & 0x20) == 0) || ((*pbVar1 & 0xe0) < 0x40)) ||
               (*(int *)(&DAT_0096ccf4 + local_10 * 0x20cc) < 2)) {
              bVar2 = *pbVar1 >> 3;
              bVar3 = bVar2 & 3;
              if ((*(uint *)(DAT_0090ea30 + 0x3c) & 1 << ((byte)local_1c & 0x1f)) == 0) {
                if (((uint)local_24 & 0x8000) == 0) {
                  if (bVar3 != 1) {
                    iVar5 = FUN_005b9f20(DAT_00949784,local_10);
joined_r0x004ef91f:
                    if (iVar5 == 0) goto LAB_004ef924;
                  }
LAB_004ef921:
                  local_8 = local_8 + 1;
                }
              }
              else {
                if ((((((uint)local_24 & 0x20) != 0) && (0x3f < (*pbVar1 & 0xe0))) ||
                    (((uint)local_24 & 0x200000) != 0)) ||
                   (((pbVar1[5] & 0xc0) == 0x80 || ((bVar2 & 3) == 0)))) goto LAB_004ef7d7;
                if (((uint)local_24 & 0x8000) == 0) {
                  if (bVar3 != 1) {
                    iVar5 = FUN_005b9f20(DAT_00949784,local_10);
                    goto joined_r0x004ef91f;
                  }
                  goto LAB_004ef921;
                }
              }
            }
          }
        }
      }
LAB_004ef924:
      uVar9 = local_10;
      local_20 = (int *)((int)local_20 + 4);
      local_1c = local_1c + 1;
    } while ((int)local_20 < 0x50);
    if (((&DAT_00946f58)[local_10 * 0x59c] & 0x80) != 0) {
      if ((local_8 != 0) && (iVar5 = FUN_005b9f20((int)DAT_009ab8ce,local_10), iVar5 != 0)) {
        if ((&DAT_0096d239)[uVar9 * 0x20cc] != '\0') {
          FUN_0048c650(s_LOWNUTRIENTFARMS_0068951c,0,0xffffffff,s_al_starv_sm_pcx_0068950c,0);
          return 0;
        }
        FUN_0048c650(s_LOWNUTRIENTFORMERS_00689540,0,0xffffffff,s_al_starv_sm_pcx_00689530,0);
        return 0;
      }
      if ((*(int *)(DAT_0090ea30 + 0x3e) < 2) &&
         ((*(int *)(DAT_0090ea30 + 0x3e) == 0 || ('\x02' < (char)DAT_0090ea30[3])))) {
        FUN_0048c650(s_LOWNUTRIENT_006895ac,0x80,0x10,s_al_starv_sm_pcx_0068959c,0);
        return 0;
      }
      if (DAT_0090e920 != 0) {
        FUN_0048c650(s_LOWNUTRIENTSPEC1_00689564,0,0xffffffff,s_al_starv_sm_pcx_00689554,0);
        return 0;
      }
      FUN_0048c650(s_LOWNUTRIENTSPEC2_00689588,0,0xffffffff,s_al_starv_sm_pcx_00689578,0);
      return 0;
    }
    if ((local_8 != 0) && (iVar5 = FUN_005b9f20((int)DAT_009ab8ce,local_10), iVar5 != 0)) {
      if ((&DAT_0096d239)[uVar9 * 0x20cc] != '\0') {
        FUN_0048c650(s_LOWNUTRIENTFARMS_006895c8,0,0xffffffff,s_starv_sm_pcx_006895b8,0);
        return 0;
      }
      FUN_0048c650(s_LOWNUTRIENTFORMERS_006895ec,0,0xffffffff,s_starv_sm_pcx_006895dc,0);
      return 0;
    }
    if ((*(int *)(DAT_0090ea30 + 0x3e) < 2) &&
       ((*(int *)(DAT_0090ea30 + 0x3e) == 0 || ('\x02' < (char)DAT_0090ea30[3])))) {
      FUN_0048c650(s_LOWNUTRIENT_00689658,0x80,0x10,s_starv_sm_pcx_00689648,0);
      return 0;
    }
    if (DAT_0090e920 != 0) {
      FUN_0048c650(s_LOWNUTRIENTSPEC1_00689610,0,0xffffffff,s_starv_sm_pcx_00689600,0);
      return 0;
    }
    FUN_0048c650(s_LOWNUTRIENTSPEC2_00689634,0,0xffffffff,s_starv_sm_pcx_00689624,0);
  }
  return 0;
}

