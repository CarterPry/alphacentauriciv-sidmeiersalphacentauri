// REA Evidence: ev_66f5d26606dc9da7c8116b363bfc6847ff6d33e2666898bbf522961bea836a49
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_004f4830(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  uint *puVar13;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = (uint)*(byte *)(DAT_0090ea30 + 2);
  psVar9 = DAT_0090ea30;
  if (*(int *)(DAT_0090ea30 + 0x62) < DAT_0090e91c) {
    do {
      local_c = -1;
      local_14 = -1;
      local_10 = 0;
      if (DAT_009a64c8 < 1) break;
      psVar12 = &DAT_00952856;
      do {
        if (((char)psVar12[-0x10] == (char)psVar9[2]) && (*psVar12 == DAT_00689370)) {
          if ((&DAT_009ab892)[psVar12[-0x12] * 0x34] == 10) {
            if ((((*(char *)((int)psVar12 + -0x1d) == '\x03') && ((char)psVar12[-4] == '\x01')) &&
                (iVar7 = DAT_0094a30c +
                         (psVar12[-0x16] * DAT_0068faf0 + ((int)psVar12[-0x17] >> 1)) * 0x2c,
                (*(byte *)(iVar7 + 8) & 1) != 0)) && ((*(byte *)(iVar7 + 2) & 0xf) < 8)) {
              iVar7 = 99999;
LAB_004f49a0:
              if (local_c < iVar7) {
                local_14 = local_10;
                local_c = iVar7;
              }
            }
          }
          else if (((*(byte *)(psVar12 + -0x15) & 0x10) != 0) &&
                  ((byte)(&DAT_009ab892)[psVar12[-0x12] * 0x34] < 10)) {
            local_1c = (int)psVar9[1];
            sVar3 = psVar12[-0x16];
            iVar7 = FUN_00644f3a((int)psVar12[-0x17] - (int)*psVar9);
            if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
              iVar7 = DAT_00949870 - iVar7;
            }
            local_1c = FUN_00644f3a(sVar3 - local_1c);
            iVar10 = FUN_00644f3a(iVar7);
            iVar6 = FUN_00644f3a(local_1c);
            iVar7 = iVar10;
            if (iVar10 <= iVar6) {
              iVar7 = iVar6;
            }
            iVar8 = iVar10;
            if (iVar6 <= iVar10) {
              iVar8 = iVar6;
            }
            iVar7 = iVar7 - (((iVar10 + iVar6 >> 1) - iVar8) + 1 >> 1);
            psVar9 = DAT_0090ea30;
            goto LAB_004f49a0;
          }
        }
        uVar11 = local_8;
        iVar7 = local_14;
        local_10 = local_10 + 1;
        psVar12 = psVar12 + 0x1a;
      } while (local_10 < DAT_009a64c8);
      if (local_c < 0) break;
      if ((&DAT_009ab892)[(short)(&DAT_00952832)[local_14 * 0x1a] * 0x34] == '\n') {
        (&DAT_00952839)[local_14 * 0x34] = 0;
        DAT_0090e91c = DAT_0090e91c + -1;
      }
      else {
        if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)local_8 & 0x1f))) == 0) {
          if ((&DAT_009ab892)[(short)(&DAT_00952832)[local_14 * 0x1a] * 0x34] == '\b') {
            (&DAT_0095282c)[local_14 * 0xd] = (&DAT_0095282c)[local_14 * 0xd] & 0xffffffef;
            iVar10 = *(int *)(&DAT_0096cc34 + local_8 * 0x20cc);
            iVar6 = FUN_005bf1f0((int)(short)(&DAT_00952832)[local_14 * 0x1a],0x10000);
            if (iVar6 == 0) {
              DAT_0090e91c = DAT_0090e91c - ((iVar10 < -3) + 1);
            }
          }
        }
        else {
          FUN_00625ec0(1,&DAT_009ab868 + (short)(&DAT_00952832)[local_14 * 0x1a] * 0x34,0xffffffff,
                       0xffffffff);
          FUN_0048c650(s_NOSUPPORT_00689b7c,0x8000,0xd,s_genwarning_sm_pcx_00689b68,0);
          uVar11 = local_8;
        }
        iVar10 = *(int *)(&DAT_0096cc34 + uVar11 * 0x20cc);
        iVar7 = FUN_005bf1f0((int)(short)(&DAT_00952832)[iVar7 * 0x1a],0x10000);
        psVar9 = DAT_0090ea30;
        if (iVar7 != 0) break;
        DAT_0090e91c = DAT_0090e91c - ((iVar10 < -3) + 1);
        FUN_005c0b00(local_14);
        psVar9 = DAT_0090ea30;
      }
    } while (*(int *)(psVar9 + 0x62) < DAT_0090e91c);
  }
  iVar7 = DAT_00689370;
  bVar5 = (byte)(1 << ((byte)local_8 & 0x1f));
  if (((((byte)DAT_009a64e8 & bVar5) == 0) ||
      (((*(uint *)(psVar9 + 0x1c) & 0x40) != 0 && ((*(uint *)(psVar9 + 0x1c) & 0x80000000) != 0))))
     && ((*(byte *)(psVar9 + 0x18) & 2) != 0)) {
    FUN_0050ba00(0x23,&local_1c,&local_18);
    iVar10 = local_8 * 0x20cc;
    if (((int)(*(int *)(&DAT_0096cc40 + iVar10) +
              (uint)(((&DAT_0097d0cc)[iVar7 * 0x134 + local_1c] & (byte)local_18) != 0) * 2) < -2)
       && ((*(int *)(DAT_0090ea30 + 0x8c) < *(int *)(DAT_0090ea30 + 0x8e) ||
           (*(int *)(DAT_0090ea30 + 0x68) < 0)))) {
      local_10 = 0;
      local_c = -1;
      local_14 = -1;
      if (0 < DAT_009a64c8) {
        puVar13 = &DAT_0095282c;
        local_1c = iVar10;
        do {
          if ((((*(byte *)((int)puVar13 + 10) == local_8) &&
               (*(short *)((int)puVar13 + 0x2a) == DAT_00689370)) &&
              (uVar11 = *puVar13, (uVar11 & 0x200000) != 0)) &&
             (((bVar5 & (byte)DAT_009a64e8) == 0 ||
              ((((((uVar11 & 0x200) != 0 && ((uVar11 & 0x1000200) != 0x1000200)) &&
                 (((uVar11 & 0x2000200) != 0x2000200 ||
                  (*(byte *)((int)puVar13 + 0xe) <= *(byte *)((int)puVar13 + 0xf))))) &&
                ((cVar1 = *(char *)((int)puVar13 + 0x22), cVar1 != '\v' && (cVar1 != '\n')))) &&
               (cVar1 == '\0')))))) {
            iVar7 = *(int *)(&DAT_0096cdbc + iVar10);
            if ((iVar7 == -1 || iVar7 + 1 < 0) || (iVar6 = _rand(), iVar6 % (iVar7 + 2) == 0)) {
              sVar3 = *(short *)((int)puVar13 + -2);
              sVar4 = DAT_0090ea30[1];
              local_18 = FUN_00644f3a((int)(short)puVar13[-1] - (int)*DAT_0090ea30);
              if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < local_18)) {
                local_18 = DAT_00949870 - local_18;
              }
              bVar2 = (&DAT_009ab891)[*(short *)((int)puVar13 + 6) * 0x34];
              uVar11 = (uint)bVar2;
              if (bVar2 == 0) {
                uVar11 = 1;
              }
              else if (99 < bVar2) {
                uVar11 = 99;
              }
              iVar7 = FUN_00644f3a((int)sVar3 - (int)sVar4);
              iVar7 = ((iVar7 + local_18 >> 1) * 100) / (int)uVar11;
              if ((&DAT_009ab892)[*(short *)((int)puVar13 + 6) * 0x34] == '\x02') {
                iVar7 = iVar7 * 2;
              }
              if ((&DAT_009ab892)[*(short *)((int)puVar13 + 6) * 0x34] == '\x01') {
                iVar7 = iVar7 / 2;
              }
              iVar10 = local_1c;
              if (local_c < iVar7) {
                local_14 = local_10;
                local_c = iVar7;
              }
            }
          }
          local_10 = local_10 + 1;
          puVar13 = puVar13 + 0xd;
        } while (local_10 < DAT_009a64c8);
        if (-1 < local_14) {
          FUN_005c0b00(local_14);
          *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xfffffffd;
        }
      }
    }
  }
  return;
}

