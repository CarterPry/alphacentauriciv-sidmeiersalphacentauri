// REA Evidence: ev_99a2e917e2c565c9c248b706e18a0c10e2bb68471560cdff5eca4adc813f6dbd
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_005258c0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  short *psVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  byte *local_14;
  int local_10;
  byte *local_c;
  byte *local_8;
  
  iVar8 = DAT_009a64c8 + -1;
  if (-1 < iVar8) {
    psVar6 = &DAT_00952832 + iVar8 * 0x1a;
    do {
      if (((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[*psVar6 * 0x34] * 0x90] == '\x02') &&
         ((&DAT_0094a37a)[(uint)(byte)(&DAT_009ab88c)[*psVar6 * 0x34] * 0x90] != '\0')) {
        uVar2 = FUN_005c1540(iVar8,0);
        iVar3 = uVar2 - *(byte *)(psVar6 + 0xf);
        if ((((-1 < iVar3) && ((999 < iVar3 || (uVar2 != *(byte *)(psVar6 + 0xf))))) &&
            ((iVar3 = DAT_0094a30c + (DAT_0068faf0 * psVar6[-4] + ((int)psVar6[-5] >> 1)) * 0x2c,
             (*(byte *)(iVar3 + 8) & 1) == 0 || (7 < (*(byte *)(iVar3 + 2) & 0xf))))) &&
           (((*(uint *)(iVar3 + 8) & 0x40000) == 0 &&
            (iVar3 = FUN_005b9580(iVar8,6,0x80,0xffffffff,0xffffffff), iVar3 == 0)))) {
          if ((int)(uint)*(byte *)((int)psVar6 + 0x1b) <
              (int)((byte)(&DAT_0094a37a)[(uint)(byte)(&DAT_009ab88c)[*psVar6 * 0x34] * 0x90] - 1))
          {
            (&DAT_0095284d)[iVar8 * 0x34] = (&DAT_0095284d)[iVar8 * 0x34] + '\x01';
            return;
          }
          *(uint *)(psVar6 + -3) = *(uint *)(psVar6 + -3) | 4;
          iVar3 = *psVar6 * 0x34;
          if (((&DAT_0094a37a)[(uint)(byte)(&DAT_009ab88c)[iVar3] * 0x90] == '\x01') &&
             ((&DAT_009ab88c)[iVar3] == 6)) {
            bVar1 = *(byte *)(psVar6 + 3);
            uVar2 = (uint)(ushort)((char)(&DAT_009ab88f)[iVar3] * 3);
          }
          else {
            if ((&DAT_009ab892)[iVar3] == '\f') {
              iVar3 = 1;
            }
            else {
              iVar3 = FUN_00422f00((&DAT_009ab88f)[iVar3],1,100);
              iVar3 = iVar3 * 10;
            }
            bVar1 = *(byte *)(psVar6 + 3);
            uVar2 = iVar3 - (uint)bVar1;
            if ((int)uVar2 < 0) {
              uVar2 = 0;
            }
            else if (9999 < (int)uVar2) {
              uVar2 = 9999;
            }
          }
          *(byte *)(psVar6 + 3) = bVar1 + (char)uVar2;
          if ((&DAT_009ab892)[*psVar6 * 0x34] == '\f') {
            iVar3 = 1;
          }
          else {
            iVar3 = FUN_00422f00((&DAT_009ab88f)[*psVar6 * 0x34],1,100);
            iVar3 = iVar3 * 10;
          }
          iVar3 = iVar3 - (uint)*(byte *)(psVar6 + 3);
          if ((iVar3 < 0) || ((iVar3 < 10000 && (iVar3 < 1)))) {
            FUN_005c0b00(iVar8);
          }
        }
      }
      iVar8 = iVar8 + -1;
      psVar6 = psVar6 + -0x1a;
    } while (-1 < iVar8);
  }
  DAT_0090db84 = 0;
  FUN_005ac690(1);
  DAT_009a64d4 = DAT_009a64d4 + 1;
  DAT_009a64d8 = FUN_005c89a0(DAT_009a64d4);
  FUN_0046fb10();
  if ((DAT_009a67d8 != 0) &&
     (DAT_009a67d4 = DAT_009a67d4 + DAT_009a67cc, DAT_009a67d0 <= DAT_009a67d4)) {
    DAT_009a67d4 = DAT_009a67d4 - DAT_009a67d0;
    if (DAT_009a67d8 < 1) {
      iVar8 = (-1 < DAT_009a67d8) - 1;
    }
    else {
      iVar8 = 1;
    }
    DAT_009a67d8 = DAT_009a67d8 - iVar8;
    DAT_0094987c = DAT_0094987c + iVar8;
    FUN_005c5a30();
    FUN_0046b190(1);
    if (iVar8 < 1) {
      pcVar13 = s_seafal_sm_pcx_0068b5b0;
      pcVar12 = s_SEAFALLING_0068b5c0;
    }
    else {
      pcVar13 = s_searis_sm_pcx_0068b594;
      pcVar12 = s_SEARISING_0068b5a4;
    }
    FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,pcVar12,0,pcVar13,0);
  }
  FUN_00522180();
  FUN_00522f00();
  bVar11 = false;
  if (DAT_009a64d4 == 4) {
    uVar2 = _rand();
    uVar2 = uVar2 & 0x80000003;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (!bVar10) goto LAB_00525bd9;
  }
  else {
LAB_00525bd9:
    if ((DAT_009a64d4 != 5) || (iVar8 = _rand(), iVar8 % 3 != 0)) {
      if (DAT_009a64d4 == 6) {
        uVar2 = _rand();
        uVar2 = uVar2 & 0x80000001;
        bVar10 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) goto LAB_00525c1c;
      }
      if (DAT_009a64d4 < 7) goto LAB_00525d18;
    }
  }
LAB_00525c1c:
  iVar8 = 1;
  pbVar5 = &DAT_009474f4;
  puVar9 = &DAT_0096eaac;
  do {
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,pbVar5 + -0x504);
    CharUpperA(&DAT_009b86a0);
    if (((((*pbVar5 & 0x80) != 0) || (iVar3 = _strcmp(&DAT_009b86a0,s_FUNGBOY_0068b950), iVar3 == 0)
         ) && (puVar9[0x417] == 0)) &&
       (((*puVar9 | 0x200) == 0xffffffff && (puVar9[2] == 0xffffffff)))) {
      bVar1 = (byte)(1 << ((byte)iVar8 & 0x1f));
      if ((((byte)DAT_009a64e8 & bVar1) == 0) && ((DAT_009a64e8._1_1_ & bVar1) == 0)) {
        if ((*pbVar5 & 0x80) != 0) {
          bVar11 = true;
        }
        DAT_009a64e8._1_1_ = DAT_009a64e8._1_1_ | '\x01' << ((byte)iVar8 & 0x1f);
        FUN_005b0e00(iVar8,0xfffffee6,0);
      }
    }
    puVar9 = puVar9 + 0x833;
    iVar8 = iVar8 + 1;
    pbVar5 = pbVar5 + 0x59c;
  } while ((int)puVar9 < 0x97d040);
  if (bVar11) {
    FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_ALIENSARRIVE_0068b968,0,s_al_land_sm_pcx_0068b958,0);
    FUN_005230e0(0x15,0,1,0);
  }
LAB_00525d18:
  iVar8 = 0;
  iVar3 = 1;
  puVar7 = &DAT_00946ff0;
  do {
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,puVar7);
    CharUpperA(&DAT_009b86a0);
    iVar4 = _strcmp(&DAT_009b86a0,s_CARETAKE_0068b978);
    if (iVar4 == 0) {
      iVar8 = iVar3;
    }
    puVar7 = puVar7 + 0x59c;
    iVar3 = iVar3 + 1;
  } while ((int)puVar7 < 0x949734);
  if ((iVar8 != 0) && (local_10 = 0, 0 < DAT_009a64cc)) {
    local_8 = &DAT_0097d044;
    do {
      if ((*(int *)(local_8 + 0x4c) == -0x66) &&
         (uVar2 = (uint)*local_8, ((&DAT_0096c9f8)[uVar2 * 4 + iVar8 * 0x20cc] & 0x10) == 0)) {
        iVar3 = (iVar8 + uVar2 * 0x833) * 4;
        if (((&DAT_0096c9f8)[iVar3] & 1) != 0) {
          FUN_0053c650(uVar2,iVar8);
        }
        FUN_0055b870(iVar8,uVar2,0x18);
        FUN_0055bb30(iVar8,uVar2,0x40,1);
        bVar11 = uVar2 == DAT_00939284;
        *(int *)(&DAT_0096ca58 + iVar3) = DAT_009a64d4;
        if (bVar11) {
          FUN_005bf7d0(s_NOTRANSCEND_0068b984,0x100000,(&PTR_DAT_006846d8)[iVar8],&LAB_005398e0);
        }
      }
      local_10 = local_10 + 1;
      local_8 = local_8 + 0x134;
    } while (local_10 < DAT_009a64cc);
  }
  iVar8 = 1;
  local_10 = 0x833;
  local_c = &DAT_009474f4;
  local_8 = (byte *)&DAT_0096eb28;
  do {
    iVar3 = 1;
    local_14 = &DAT_009474f4;
    pbVar5 = local_8;
    do {
      if (((iVar8 != iVar3) && ((*local_c & 0x80) != 0)) && ((*local_14 & 0x80) != 0)) {
        FUN_0055bb30(iVar3,iVar8,0xc80c0c38,1);
        FUN_0055bba0(iVar3,iVar8,0x2c2d,1);
        iVar4 = DAT_009a64d4;
        *(int *)(&DAT_0096ca58 + (local_10 + iVar3) * 4) = DAT_009a64d4;
        *(int *)pbVar5 = iVar4;
      }
      local_14 = local_14 + 0x59c;
      iVar3 = iVar3 + 1;
      pbVar5 = (byte *)((int)pbVar5 + 0x20cc);
    } while ((int)local_14 < 0x949c38);
    local_8 = (byte *)((int)local_8 + 4);
    iVar8 = iVar8 + 1;
    local_c = local_c + 0x59c;
    local_10 = local_10 + 0x833;
  } while ((int)local_8 < 0x96eb44);
  FUN_0051f2e0(0);
  if ((DAT_009a64d4 == 0x4b) && (iVar8 = FUN_005b9f20(DAT_009a4d2c,DAT_00939284), iVar8 != 0)) {
    FUN_005230e0(1,0,1,0);
  }
  iVar8 = FUN_005ac680(DAT_00939284);
  uVar2 = DAT_00939284;
  if ((iVar8 != 0) && ((*(uint *)(&DAT_0096c9e0 + DAT_00939284 * 0x20cc) & 0x2000) == 0)) {
    *(uint *)(&DAT_0096c9e0 + DAT_00939284 * 0x20cc) =
         *(uint *)(&DAT_0096c9e0 + DAT_00939284 * 0x20cc) | 0x2000;
    DAT_009bbff0 = 0;
    DAT_009bbfec = (&DAT_00946a50)[uVar2 * 0x167];
    FUN_00625ec0(0,&DAT_00946a9c + uVar2 * 0x59c,0xffffffff,0xffffffff);
    DAT_009bbff0 = 0;
    DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
    FUN_00625ec0(1,&DAT_00946a84 + DAT_00939284 * 0x59c,0xffffffff,0xffffffff);
    FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_ASCENT_0068b58c,0,s_asctran_sm_pcx_0068b57c,0);
  }
  if (((byte)DAT_009a64d4 & 3) == 1) {
    FUN_00523dd0();
  }
  FUN_005fcb20();
  return;
}

