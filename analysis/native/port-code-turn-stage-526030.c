// REA Evidence: ev_eb8d3b5e2c6a94cdbea2e4b50b4f2e1b9b0dfeeb5bb20d20d6040d0b4df58656
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_00526030(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  (&DAT_0096cd44)[param_1 * 0x833] = 0;
  if (0 < DAT_009a64c8) {
    do {
      iVar3 = local_10;
      iVar5 = DAT_009a64d4;
      iVar13 = local_10 * 0x34;
      if ((byte)(&DAT_00952836)[iVar13] == param_1) {
        local_c = (int)(short)(&DAT_00952828)[local_10 * 0x1a];
        iVar15 = (int)(short)(&DAT_0095282a)[local_10 * 0x1a];
        bVar1 = (&DAT_00952838)[iVar13];
        (&DAT_00952852)[iVar13] = 0;
        (&DAT_00952850)[iVar13] = 0;
        (&DAT_0095282c)[local_10 * 0xd] = (&DAT_0095282c)[local_10 * 0xd] & 0xfbffdffd;
        (&DAT_00952831)[iVar13] = (&DAT_00952831)[iVar13] & 0xef;
        if ((iVar5 + local_10 & 3U) == 0) {
          (&DAT_0095282c)[local_10 * 0xd] = (&DAT_0095282c)[local_10 * 0xd] & 0xfffff7ff;
          if ((*(ushort *)(&DAT_00952830 + iVar13) & 2) == 0) {
            uVar2 = 0xfffe;
          }
          else {
            uVar2 = 0xfffd;
          }
          *(ushort *)(&DAT_00952830 + iVar13) = *(ushort *)(&DAT_00952830 + iVar13) & uVar2;
        }
        if (((((&DAT_00952839)[iVar13] == '\x01') || ((&DAT_00952839)[iVar13] == '\x02')) &&
            ((&DAT_00952844)[local_10 * 0x1a] != 0)) &&
           (sVar4 = (&DAT_00952844)[local_10 * 0x1a] + -1, (&DAT_00952844)[local_10 * 0x1a] = sVar4,
           sVar4 == 0)) {
          (&DAT_00952839)[iVar13] = 0;
        }
        if ((((&DAT_0095282c)[local_10 * 0xd] & 8) != 0) &&
           ((((iVar5 = DAT_0094a30c + (DAT_0068faf0 * iVar15 + (local_c >> 1)) * 0x2c,
              (*(byte *)(iVar5 + 8) & 1) != 0 && ((*(byte *)(iVar5 + 2) & 0xf) < 8)) ||
             (((&DAT_0094a379)
               [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[local_10 * 0x1a] * 0x34] * 0x90]
               == '\0' && ((*(uint *)(iVar5 + 8) & 0x800) != 0)))) ||
            (((&DAT_0094a379)
              [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[local_10 * 0x1a] * 0x34] * 0x90]
              == '\x02' && ((*(uint *)(iVar5 + 8) & 0x40000) != 0)))))) {
          (&DAT_0095282c)[local_10 * 0xd] = (&DAT_0095282c)[local_10 * 0xd] & 0xfffffff7;
        }
        if ((&DAT_00952832)[local_10 * 0x1a] == 0x13) {
          (&DAT_00952836)[iVar13] = 0;
        }
        sVar4 = (&DAT_00952832)[local_10 * 0x1a];
        local_14 = iVar15;
        if ((((sVar4 != 0x10) && (sVar4 != 0x11)) && (sVar4 != 0x12)) &&
           (((sVar4 == 0x13 || ((*(byte *)(&DAT_0095282c + local_10 * 0xd) & 4) == 0)) &&
            ((&DAT_00952838)[iVar13] != '\0')))) {
          local_8 = 1;
          if (sVar4 != 0x13) {
            if ((((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[sVar4 * 0x34] * 0x10] < '\0') &&
                (sVar4 < 0x40)) &&
               ((iVar5 = DAT_0068faf0 * iVar15 + (local_c >> 1),
                (*(byte *)(DAT_0094a30c + 8 + iVar5 * 0x2c) & 0x20) != 0 &&
                (0x3f < (*(byte *)(DAT_0094a30c + iVar5 * 0x2c) & 0xe0))))) {
              local_8 = 2;
            }
            uVar6 = FUN_004e3ef0(param_1,local_c,iVar15,0,0);
            if (uVar6 == param_1) {
              local_8 = local_8 + 1;
            }
            if (((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90]
                 == '\x02') &&
               ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * iVar15 + (local_c >> 1)) * 0x2c) &
                0x40000) != 0)) {
              local_8 = local_8 + 1;
            }
            if (((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90]
                 == '\0') &&
               ((*(uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * local_14 + (local_c >> 1)) * 0x2c) &
                0x800) != 0)) {
              local_8 = local_8 + 1;
            }
          }
          iVar5 = FUN_004e3a50(local_c,local_14);
          if ((-1 < iVar5) && ((*(byte *)(&DAT_0097d070 + iVar5 * 0x4d) & 2) == 0)) {
            local_8 = local_8 + 1;
            iVar15 = (short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34;
            if (((char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar15] * 0x10] < '\0') &&
               ((short)(&DAT_00952832)[iVar3 * 0x1a] < 0x40)) {
              iVar15 = FUN_004e65c0(iVar5,(&DAT_0097d044)[iVar5 * 0x134]);
              if (iVar15 != 0) {
                local_8 = (uint)(byte)(&DAT_00952838)[iVar13];
              }
            }
            else {
              if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar15] * 0x90] == '\x01') {
                uVar7 = 0x1c;
                iVar15 = 10;
              }
              else if ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar15] * 0x90] == '\x02') {
                uVar7 = 0x1d;
                iVar15 = 0x23;
              }
              else {
                uVar7 = 0x1b;
                iVar15 = 1;
              }
              FUN_0050ba00(uVar7,&local_1c,local_20);
              if ((((&DAT_0097d0cc)[local_1c + iVar5 * 0x134] & local_20[0]) != 0) ||
                 ((-1 < (int)(&DAT_009a6514)[iVar15] &&
                  ((byte)(&DAT_0097d044)[(&DAT_009a6514)[iVar15] * 0x134] == param_1)))) {
                local_8 = (uint)(byte)(&DAT_00952838)[iVar13];
              }
            }
          }
          iVar15 = local_10;
          local_18 = 0;
          if (((((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90]
                 == '\0') && (iVar8 = FUN_005c1760(local_10), iVar8 != 0)) &&
              (((&DAT_00952839)[iVar13] == '\x01' ||
               ((*(byte *)(DAT_0094a30c + (DAT_0068faf0 * local_14 + (local_c >> 1)) * 0x2c) & 0xe0)
                < 0x60)))) && (-1 < iVar15)) {
            sVar4 = (&DAT_0095285a)[iVar3 * 0x1a];
            iVar8 = iVar15;
            while (-1 < sVar4) {
              iVar8 = (int)sVar4;
              sVar4 = (&DAT_0095285a)[iVar8 * 0x1a];
            }
            if (-1 < iVar8) {
              do {
                if ((iVar8 != iVar15) &&
                   (iVar9 = FUN_005bf1f0((int)(short)(&DAT_00952832)[iVar8 * 0x1a],0x200000),
                   iVar9 != 0)) {
                  local_18 = 1;
                }
                iVar8 = (int)(short)(&DAT_00952858)[iVar8 * 0x1a];
              } while (-1 < iVar8);
              if (local_18 != 0) {
                local_8 = local_8 * 2;
              }
            }
          }
          if ((-1 < DAT_009a656c) && ((byte)(&DAT_0097d044)[DAT_009a656c * 0x134] == param_1)) {
            local_8 = (uint)(byte)(&DAT_00952838)[iVar13];
          }
          uVar6 = (uint)(byte)(&DAT_009ab88f)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34];
          iVar15 = uVar6 * local_8;
          if ((((param_1 == 0) || (local_18 != 0)) || (-1 < iVar5)) ||
             ((-1 < DAT_009a656c && ((byte)(&DAT_0097d044)[DAT_009a656c * 0x134] == param_1)))) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar6 * 2;
            if (((uVar6 != 0) &&
                (pbVar14 = (byte *)(DAT_0094a30c + (DAT_0068faf0 * local_14 + (local_c >> 1)) * 0x2c
                                   ), (pbVar14[8] & 0x20) != 0)) && (0x3f < (*pbVar14 & 0xe0))) {
              if (((char)(&DAT_0094ae68)
                         [(uint)(byte)(&DAT_009ab88d)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] *
                          0x10] < '\0') && ((short)(&DAT_00952832)[iVar3 * 0x1a] < 0x40)) {
                uVar12 = 0;
              }
              if ((-1 < DAT_009a6534) && ((byte)(&DAT_0097d044)[DAT_009a6534 * 0x134] == param_1)) {
                uVar12 = 0;
                iVar15 = iVar15 + uVar6;
              }
            }
          }
          uVar11 = (uint)(byte)(&DAT_00952838)[iVar13];
          uVar10 = uVar11 - iVar15;
          uVar6 = uVar12;
          if ((((int)uVar12 <= (int)uVar10) && (uVar12 < 1000)) &&
             (uVar6 = uVar10, 999 < (int)uVar10)) {
            uVar6 = 999;
          }
          if ((int)uVar11 <= (int)uVar6) {
            uVar6 = uVar11;
          }
          (&DAT_00952838)[iVar13] = (char)uVar6;
          if (((((uVar6 & 0xff) <= uVar12) &&
               (((byte)DAT_009a64e8 & (byte)(1 << ((byte)param_1 & 0x1f))) != 0)) &&
              (((&DAT_00952839)[iVar13] == '\x01' && ((uVar6 & 0xff) != (uint)bVar1)))) &&
             (((&DAT_0094a379)
               [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90] !=
               '\0' || (0x5f < (*(byte *)(DAT_0094a30c +
                                         (DAT_0068faf0 * local_14 + (local_c >> 1)) * 0x2c) & 0xe0))
              ))) {
            (&DAT_00952839)[iVar13] = 0;
          }
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < DAT_009a64c8);
  }
  local_10 = 0;
  if (0 < DAT_009a64c8) {
    pbVar14 = &DAT_00952836;
    do {
      if (*pbVar14 == param_1) {
        iVar5 = DAT_0094a30c +
                (*(short *)(pbVar14 + -0xc) * DAT_0068faf0 + ((int)*(short *)(pbVar14 + -0xe) >> 1))
                * 0x2c;
        if ((((*(byte *)(iVar5 + 8) & 1) == 0) || (7 < (*(byte *)(iVar5 + 2) & 0xf))) &&
           ((*pbVar14 == DAT_00939284 ||
            ((pbVar14[0x19] & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) != 0)))) {
          FUN_0046af40((int)*(short *)(pbVar14 + -0xe),(int)*(short *)(pbVar14 + -0xc),0xffffffff);
        }
      }
      local_10 = local_10 + 1;
      pbVar14 = pbVar14 + 0x34;
    } while (local_10 < DAT_009a64c8);
  }
  FUN_005fcbb0();
  return;
}

