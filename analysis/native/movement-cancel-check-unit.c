// ev_4c71aae8e067c40ce50e32167801d532697bf7a382f42c7db505091e35d56dd3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6260(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  byte *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  local_5c = 0;
  local_64 = 0;
  local_60 = 0;
  if (DAT_0093f660 == 0) {
    param_2 = 1;
  }
  iVar13 = param_1 * 0x34;
  local_28 = (int)(short)(&DAT_0095282a)[param_1 * 0x1a];
  iVar11 = (int)(short)(&DAT_00952828)[param_1 * 0x1a];
  local_40 = (uint)(byte)(&DAT_0094a379)
                         [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34]
                          * 0x90];
  local_3c = iVar11;
  local_24 = iVar13;
  iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],0x40);
  if (iVar4 == 0) {
    iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],4);
    if (iVar4 == 0) {
      if ((*(ushort *)(&DAT_00952830 + iVar13) & 0x400) == 0) {
        iVar4 = (short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1);
        if ((((*(byte *)(DAT_0094a30c + 8 + iVar4 * 0x2c) & 0x20) == 0) ||
            ((*(byte *)(DAT_0094a30c + iVar4 * 0x2c) & 0xe0) < 0x40)) ||
           (local_38 = 2, (&DAT_00952832)[param_1 * 0x1a] == 0x13)) {
          local_38 = 0;
        }
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 1;
  }
  uVar14 = (uint)(byte)(&DAT_00952836)[iVar13];
  local_2c = 1 << ((&DAT_00952836)[iVar13] & 0x1f);
  local_c = uVar14;
  iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[param_1 * 0x1a],2);
  if ((iVar4 == 0) &&
     ((iVar4 = FUN_005bf010(iVar11,local_28), iVar4 == 0 ||
      (uVar5 = FUN_004e3ef0(uVar14,iVar11,local_28,0,0), uVar5 != uVar14)))) {
    local_44 = 0;
  }
  else {
    local_44 = 1;
  }
  iVar11 = iVar11 >> 1;
  pbVar12 = (byte *)(DAT_0094a30c + (DAT_0068faf0 * local_28 + iVar11) * 0x2c);
  local_48 = (uint)((*pbVar12 & 0xe0) < 0x60);
  local_50 = 0;
  local_20 = 0;
  if (uVar14 == 0) {
    (&DAT_0095284f)[iVar13] = (&DAT_0095284f)[iVar13] & pbVar12[4];
  }
  if ((((DAT_009a6494 & 1) != 0) && (uVar14 == DAT_00939284)) && (((byte)DAT_009a64c0 & 0x80) == 0))
  {
    local_1c = 0;
    local_30 = (-(uint)(local_44 != 0) & 0x18) + 0x19;
    if (local_30 != 0) {
      do {
        local_10 = (&DAT_0066efbc)[local_1c] + local_3c;
        if ((_DAT_0094988c & 1) == 0) {
          if (local_10 < 0) {
            local_10 = DAT_00949870 + local_10;
          }
          else if (DAT_00949870 <= local_10) {
            local_10 = local_10 - DAT_00949870;
          }
        }
        local_18 = (&DAT_0066f440)[local_1c] + local_28;
        if ((((-1 < local_18) && (local_18 < DAT_00949874)) && (-1 < local_10)) &&
           (local_10 < DAT_00949870)) {
          iVar4 = (-(uint)(local_44 != 0) & 0x10) + 9;
          if ((int)local_1c < iVar4) {
LAB_005b68a6:
            local_34 = 1;
          }
          else {
            if ((*(byte *)(DAT_0094a30c + 0xe + (DAT_0068faf0 * local_18 + (local_10 >> 1)) * 0x2c)
                & 0x20) != 0) goto LAB_005b6951;
            if ((int)local_1c < iVar4) goto LAB_005b68a6;
            local_34 = 0;
            local_4c = 0;
            uVar14 = local_c;
            do {
              iVar4 = *(int *)((int)&DAT_0066efbc + local_4c) + local_10;
              if ((_DAT_0094988c & 1) == 0) {
                if (iVar4 < 0) {
                  iVar4 = DAT_00949870 + iVar4;
                }
                else if (DAT_00949870 <= iVar4) {
                  iVar4 = iVar4 - DAT_00949870;
                }
              }
              iVar13 = *(int *)((int)&DAT_0066f440 + local_4c) + local_18;
              if (((-1 < iVar13) && (iVar13 < DAT_00949874)) &&
                 ((-1 < iVar4 && (iVar4 < DAT_00949870)))) {
                iVar8 = iVar4 >> 1;
                if ((int)local_4c < 0x24) {
                  iVar6 = DAT_0094a30c + (DAT_0068faf0 * iVar13 + iVar8) * 0x2c;
                  if (((*(byte *)(iVar6 + 8) & 3) == 0) ||
                     (uVar5 = *(byte *)(iVar6 + 2) & 0xf, 7 < uVar5)) {
                    uVar5 = 0xffffffff;
                  }
                  if (uVar5 == uVar14) goto LAB_005b68a6;
                  if (((&DAT_0096c9f8)[uVar5 * 4 + uVar14 * 0x20cc] & 1) != 0) {
                    for (iVar6 = FUN_005bfe90(iVar4,iVar13); -1 < iVar6;
                        iVar6 = (int)(short)(&DAT_00952858)[iVar6 * 0x1a]) {
                      if ((byte)(&DAT_00952836)[iVar6 * 0x34] == uVar14) goto LAB_005b68a6;
                    }
                    if (local_34 != 0) break;
                  }
                }
                iVar6 = FUN_005bf010(iVar4,iVar13);
                if (iVar6 != 0) {
                  if ((int)*(char *)(DAT_0094a30c + 7 + (DAT_0068faf0 * iVar13 + iVar8) * 0x2c) ==
                      uVar14) goto LAB_005b68a6;
                  iVar6 = FUN_004e3b80(local_3c,local_28);
                  if (iVar6 != -1) {
                    iVar7 = FUN_00644f3a(local_3c - (short)(&DAT_0097d040)[iVar6 * 0x9a]);
                    if (((_DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
                      iVar7 = DAT_00949870 - iVar7;
                    }
                    if (iVar7 != 0) {
                      iVar7 = FUN_00644f3a(local_3c - (short)(&DAT_0097d040)[iVar6 * 0x9a]);
                      if (((_DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar7)) {
                        iVar7 = DAT_00949870 - iVar7;
                      }
                      uVar14 = local_c;
                      if (iVar7 != 2) goto LAB_005b672a;
                    }
                    iVar7 = local_28 - (short)(&DAT_0097d042)[iVar6 * 0x9a];
                    if (iVar7 != 0) {
                      if (iVar7 < 0) {
                        iVar7 = (short)(&DAT_0097d042)[iVar6 * 0x9a] - local_28;
                      }
                      uVar14 = local_c;
                      if (iVar7 != 2) goto LAB_005b672a;
                    }
                    FUN_0050ba00(0x29,&local_54,&local_14);
                    uVar14 = local_c;
                    if ((local_54[(int)(&DAT_0097d0cc + iVar6 * 0x134)] & (byte)local_14) != 0)
                    goto LAB_005b68a6;
                  }
                }
LAB_005b672a:
                iVar8 = DAT_0094a30c + (DAT_0068faf0 * iVar13 + iVar8) * 0x2c;
                if (((*(byte *)(iVar8 + 8) & 1) == 0) ||
                   (uVar5 = *(byte *)(iVar8 + 2) & 0xf, 7 < uVar5)) {
                  uVar5 = 0xffffffff;
                }
                if (uVar5 == uVar14) goto LAB_005b68a6;
                if (((*(byte *)(iVar8 + 8) & 2) == 0) ||
                   (uVar5 = *(byte *)(iVar8 + 2) & 0xf, 7 < uVar5)) {
                  uVar5 = 0xffffffff;
                }
                if (((uVar5 == uVar14) || (((&DAT_0096c9f8)[uVar5 * 0x20cc + uVar14 * 4] & 1) != 0))
                   && (iVar4 = FUN_005bfe90(iVar4,iVar13), iVar13 = local_18, -1 < iVar4)) {
                  sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
                  while (-1 < sVar2) {
                    iVar4 = (int)sVar2;
                    sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
                  }
                  for (; -1 < iVar4; iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a]) {
                    if ((((byte)(&DAT_00952836)[iVar4 * 0x34] == local_c) &&
                        (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[iVar4 * 0x1a],2),
                        iVar8 != 0)) &&
                       (((&DAT_0094a379)
                         [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar4 * 0x1a] * 0x34] *
                          0x90] == '\x02' ||
                        ((*(byte *)(DAT_0094a30c + (DAT_0068faf0 * iVar13 + (local_10 >> 1)) * 0x2c)
                         & 0xe0) < 0x60 ==
                         ((&DAT_0094a379)
                          [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar4 * 0x1a] * 0x34]
                           * 0x90] == '\x01'))))) {
                      local_34 = 1;
                      uVar14 = local_c;
                      break;
                    }
                    uVar14 = local_c;
                  }
                }
              }
              local_4c = local_4c + 4;
            } while ((int)local_4c < 100);
          }
          if ((*(uint *)(DAT_0094a30c + 0xc + (DAT_0068faf0 * local_18 + (local_10 >> 1)) * 0x2c) &
              0x200000) == 0) {
            if (local_34 == 0) {
              if ((int)local_1c < 9) {
                iVar4 = 1;
              }
              else {
                iVar4 = (0x18 < (int)local_1c) + 2;
              }
              if ((int)local_20 <= iVar4) {
                if (8 < (int)local_1c) goto LAB_005b6943;
                local_20 = 1;
              }
            }
          }
          else if (local_34 != 0) {
            if ((int)local_1c < 9) {
              iVar4 = 1;
            }
            else {
              iVar4 = (0x18 < (int)local_1c) + 2;
            }
            if ((int)local_20 <= iVar4) {
              if ((int)local_1c < 9) {
                local_20 = 1;
              }
              else {
LAB_005b6943:
                local_20 = (0x18 < (int)local_1c) + 2;
              }
            }
          }
        }
LAB_005b6951:
        local_1c = local_1c + 1;
      } while ((int)local_1c < (int)local_30);
    }
  }
  local_1c = 0;
  uVar14 = (-(uint)(local_44 != 0) & 0x10) + 9;
  iVar4 = DAT_00949870;
  if (uVar14 != 0) {
    do {
      iVar13 = (&DAT_0066efbc)[local_1c] + local_3c;
      if ((_DAT_0094988c & 1) == 0) {
        if (iVar13 < 0) {
          iVar13 = iVar13 + iVar4;
        }
        else if (iVar4 <= iVar13) {
          iVar13 = iVar13 - iVar4;
        }
      }
      iVar8 = (&DAT_0066f440)[local_1c] + local_28;
      if (((-1 < iVar8) && (iVar8 < DAT_00949874)) && ((-1 < iVar13 && (iVar13 < iVar4)))) {
        iVar13 = DAT_0068faf0 * iVar8 + (iVar13 >> 1);
        pbVar12 = (byte *)(DAT_0094a30c + iVar13 * 0x2c);
        if ((*(uint *)(DAT_0094a30c + 0xc + iVar13 * 0x2c) & 0x80002000) == 0x2000) {
          local_5c = local_5c + 1;
        }
        if ((((int)local_1c < 9) || (local_40 == 2)) ||
           ((*pbVar12 & 0xe0) < 0x60 == (local_40 == 1))) {
          if (((local_c == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) &&
             ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)) {
            if (((byte)local_2c & pbVar12[4]) == 0) {
              *(uint *)(pbVar12 + 0xc) = *(uint *)(pbVar12 + 0xc) | 0x400000;
              DAT_0090d91c = DAT_0090d91c | 1;
            }
            if (((((*(uint *)(pbVar12 + local_c * 4 + 0xc) ^ *(uint *)(pbVar12 + 8)) & 0xfffffffc)
                  != 0) || ((pbVar12[4] & (byte)local_2c) == 0)) &&
               (uVar5 = (8 < (int)local_1c) + 2, (int)local_20 <= (int)uVar5)) {
              local_20 = uVar5;
            }
          }
          if (local_c != 0) {
            *(undefined4 *)(pbVar12 + local_c * 4 + 0xc) = *(undefined4 *)(pbVar12 + 8);
          }
          pbVar12[4] = pbVar12[4] | (byte)local_2c;
          iVar4 = DAT_00949870;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar14);
  }
  local_30 = (-(uint)(local_44 != 0) & 0x18) + 0x19;
  local_1c = uVar14;
  if (uVar14 < local_30) {
    do {
      local_10 = (&DAT_0066efbc)[local_1c] + local_3c;
      local_34 = _DAT_0094988c & 1;
      if (local_34 == 0) {
        if (local_10 < 0) {
          local_10 = DAT_00949870 + local_10;
        }
        else if (DAT_00949870 <= local_10) {
          local_10 = local_10 - DAT_00949870;
        }
      }
      local_18 = (&DAT_0066f440)[local_1c] + local_28;
      if ((((-1 < local_18) && (local_18 < DAT_00949874)) && (-1 < local_10)) &&
         (local_10 < DAT_00949870)) {
        local_54 = (byte *)(DAT_0094a30c + (DAT_0068faf0 * local_18 + (local_10 >> 1)) * 0x2c);
        if ((local_54[4] & (byte)local_2c) == 0) {
          iVar4 = 0;
          local_4c = 0;
          do {
            iVar13 = *(int *)((int)&DAT_0066ef50 + iVar4) + local_10;
            if (local_34 == 0) {
              if (iVar13 < 0) {
                iVar13 = iVar13 + DAT_00949870;
              }
              else if (DAT_00949870 <= iVar13) {
                iVar13 = iVar13 - DAT_00949870;
              }
            }
            iVar8 = *(int *)((int)&DAT_0066ef74 + iVar4) + local_18;
            uVar14 = local_4c;
            if ((((-1 < iVar8) && (iVar8 < DAT_00949874)) &&
                ((-1 < iVar13 &&
                 ((iVar13 < DAT_00949870 &&
                  ((*(byte *)(DAT_0094a30c + 4 + (DAT_0068faf0 * iVar8 + (iVar13 >> 1)) * 0x2c) &
                   (byte)local_2c) == 0)))))) &&
               ((*(int *)((int)&DAT_0066ef50 + iVar4) == 0 ||
                (uVar14 = local_4c + 1, *(int *)((int)&DAT_0066ef74 + iVar4) == 0)))) {
              uVar14 = local_4c + 2;
            }
            local_4c = uVar14;
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0x20);
          if ((local_44 != 0) || (iVar4 = 4, (*local_54 & 0xe0) < 0x60)) {
            iVar4 = 6;
          }
          if ((int)local_4c < iVar4) {
            if (((local_c == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) &&
               ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)) {
              *(uint *)(local_54 + 0xc) = *(uint *)(local_54 + 0xc) | 0x400000;
              DAT_0090d91c = DAT_0090d91c | 1;
            }
            if (local_c != 0) {
              *(undefined4 *)(local_54 + local_c * 4 + 0xc) = *(undefined4 *)(local_54 + 8);
            }
            local_54[4] = local_54[4] | (byte)local_2c;
            iVar4 = FUN_004e3a50(local_10,local_18);
            if (-1 < iVar4) {
              bVar10 = '\x01' << ((byte)local_c & 0x1f);
              iVar13 = iVar4 * 0x134;
              (&DAT_0097d04a)[iVar13] = (&DAT_0097d04a)[iVar13] | bVar10;
              (&DAT_0097d04b)[local_c + iVar13] = (&DAT_0097d046)[iVar13];
              iVar13 = (int)(short)(&DAT_0097d042)[iVar4 * 0x9a];
              iVar8 = (int)(short)(&DAT_0097d040)[iVar4 * 0x9a];
              iVar4 = FUN_004712a0(iVar8,iVar13);
              if (iVar4 != 0) {
                iVar4 = DAT_0094a30c + (iVar13 * DAT_0068faf0 + (iVar8 >> 1)) * 0x2c;
                if (((local_c == DAT_00939284) && ((*(byte *)(iVar4 + 4) & (byte)local_2c) == 0)) &&
                   ((((byte)DAT_009a64c0 & 0x80) == 0 &&
                    ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)))) {
                  *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | 0x400000;
                  DAT_0090d91c = DAT_0090d91c | 1;
                }
                *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | bVar10;
                FUN_00591e50(iVar8,iVar13,local_c);
              }
            }
            uVar14 = (local_44 != 0) + 2;
            if ((int)local_20 <= (int)uVar14) {
              local_20 = uVar14;
            }
          }
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_30);
  }
  if (-1 < param_1) {
    sVar2 = *(short *)((int)&DAT_0095285a + local_24);
    iVar4 = param_1;
    while (-1 < sVar2) {
      iVar4 = (int)sVar2;
      sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
    }
    for (; -1 < iVar4; iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a]) {
      bVar10 = (&DAT_00952836)[iVar4 * 0x34];
      uVar14 = (uint)bVar10;
      if (uVar14 != local_c) {
        iVar13 = (int)(short)(&DAT_0095282a)[iVar4 * 0x1a];
        iVar8 = (int)(short)(&DAT_00952828)[iVar4 * 0x1a];
        if (((-1 < iVar13) && (iVar13 < DAT_00949874)) && ((-1 < iVar8 && (iVar8 < DAT_00949870))))
        {
          FUN_005b5700(iVar8,iVar13,uVar14);
        }
        sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
        iVar13 = iVar4;
        while (-1 < sVar2) {
          iVar13 = (int)sVar2;
          sVar2 = (&DAT_0095285a)[iVar13 * 0x1a];
        }
        if (-1 < iVar13) {
          do {
            iVar8 = iVar13 * 0x34;
            (&DAT_0095284f)[iVar8] = (&DAT_0095284f)[iVar8] | '\x01' << (bVar10 & 0x1f);
            if (uVar14 != 0) {
              *(ushort *)(&DAT_00952830 + iVar8) = *(ushort *)(&DAT_00952830 + iVar8) & 0xfbbf;
            }
            iVar13 = (int)(short)(&DAT_00952858)[iVar13 * 0x1a];
          } while (-1 < iVar13);
        }
      }
    }
  }
  local_1c = 0;
  do {
    iVar4 = (&DAT_0066efbc)[local_1c] + local_3c;
    if ((_DAT_0094988c & 1) == 0) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + DAT_00949870;
      }
      else if (DAT_00949870 <= iVar4) {
        iVar4 = iVar4 - DAT_00949870;
      }
    }
    iVar13 = (&DAT_0066f440)[local_1c] + local_28;
    if ((((-1 < iVar13) && (iVar13 < DAT_00949874)) && (-1 < iVar4)) && (iVar4 < DAT_00949870)) {
      local_18 = iVar13;
      local_10 = iVar4;
      iVar6 = FUN_005bf010(iVar4,iVar13);
      iVar8 = local_24;
      if (iVar6 != 0) {
        iVar4 = DAT_0068faf0 * iVar13 + (iVar4 >> 1);
        bVar10 = *(byte *)(DAT_0094a30c + 7 + iVar4 * 0x2c);
        uVar14 = (uint)(char)bVar10;
        iVar4 = DAT_0094a30c + iVar4 * 0x2c;
        if (((0 < (int)uVar14) && (uVar14 != local_c)) &&
           ((local_38 != 1 &&
            (((*(byte *)(iVar4 + 8) & 1) == 0 || (7 < (*(byte *)(iVar4 + 2) & 0xf))))))) {
          if (-1 < param_1) {
            iVar4 = (int)*(short *)((int)&DAT_0095282a + local_24);
            iVar6 = (int)*(short *)((int)&DAT_00952828 + local_24);
            if ((((-1 < iVar4) && (iVar4 < DAT_00949874)) && (-1 < iVar6)) && (iVar6 < DAT_00949870)
               ) {
              FUN_005b5700(iVar6,iVar4,uVar14);
            }
          }
          iVar4 = local_10;
          if (-1 < param_1) {
            sVar2 = *(short *)((int)&DAT_0095285a + iVar8);
            iVar8 = param_1;
            while (-1 < sVar2) {
              iVar8 = (int)sVar2;
              sVar2 = (&DAT_0095285a)[iVar8 * 0x1a];
            }
            if (-1 < iVar8) {
              do {
                (&DAT_0095284f)[iVar8 * 0x34] =
                     (&DAT_0095284f)[iVar8 * 0x34] | '\x01' << (bVar10 & 0x1f);
                *(ushort *)(&DAT_00952830 + iVar8 * 0x34) =
                     *(ushort *)(&DAT_00952830 + iVar8 * 0x34) & 0xfbbf;
                iVar8 = (int)(short)(&DAT_00952858)[iVar8 * 0x1a];
              } while (-1 < iVar8);
            }
          }
          if ((((&DAT_0096c9f8)[(uVar14 + local_c * 0x833) * 4] & 7) == 0) && (param_2 != 0)) {
            if (local_40 == 0) {
              FUN_00579a30(uVar14,0,2,local_10,iVar13,0xffffffff);
              FUN_00579a30(uVar14,2,1,iVar4,iVar13,0xffffffff);
            }
            else {
              FUN_00579a30(uVar14,6,2,local_10,iVar13,0xffffffff);
            }
          }
        }
      }
      if (local_1c != 0) {
        local_34 = FUN_004e3a50(local_10,iVar13);
        if (-1 < (int)local_34) {
          iVar4 = local_34 * 0x134;
          bVar10 = (&DAT_0097d044)[iVar4];
          if (local_c != bVar10) {
            if ((local_40 != 2) ||
               ((&DAT_0094a37a)
                [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_24) * 0x34] *
                 0x90] == '\0')) {
              if ((local_48 == 0) && (local_38 == 0)) {
                local_50 = local_50 | 1 << (bVar10 & 0x1f);
              }
              else if (((&DAT_0096c9f8)[(uint)bVar10 * 4 + local_c * 0x20cc] & 8) == 0) {
                local_50 = local_50 | 1 << (bVar10 & 0x1f);
              }
            }
            if ((local_c == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) {
              if (((byte)local_2c & (&DAT_0097d04a)[iVar4]) == 0) {
                if ((int)local_20 < 3) {
                  local_20 = 2;
                }
              }
              else if (((uint)(byte)(&DAT_0097d04b)[local_c + iVar4] !=
                        (int)(char)(&DAT_0097d046)[iVar4]) && ((int)local_20 < 2)) {
                local_20 = 1;
              }
            }
            local_5 = '\x01' << ((byte)local_c & 0x1f);
            (&DAT_0097d04a)[iVar4] = (&DAT_0097d04a)[iVar4] | local_5;
            (&DAT_0097d04b)[local_c + iVar4] = (&DAT_0097d046)[iVar4];
            iVar6 = (int)(short)(&DAT_0097d042)[local_34 * 0x9a];
            iVar8 = (int)(short)(&DAT_0097d040)[local_34 * 0x9a];
            iVar13 = FUN_004712a0(iVar8,iVar6);
            if (iVar13 != 0) {
              iVar13 = DAT_0094a30c + (iVar6 * DAT_0068faf0 + (iVar8 >> 1)) * 0x2c;
              if ((((local_c == DAT_00939284) && ((*(byte *)(iVar13 + 4) & (byte)local_2c) == 0)) &&
                  (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                 ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)) {
                *(uint *)(iVar13 + 0xc) = *(uint *)(iVar13 + 0xc) | 0x400000;
                DAT_0090d91c = DAT_0090d91c | 1;
              }
              *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) | local_5;
              FUN_00591e50(iVar8,iVar6,local_c);
            }
            iVar13 = local_24;
            if ((local_38 == 0) ||
               (((&DAT_0096c9f8)[(local_c * 0x833 + (uint)(byte)(&DAT_0097d044)[iVar4]) * 4] & 8) ==
                0)) {
              local_54 = (byte *)(uint)(byte)(&DAT_0097d044)[iVar4];
              if (-1 < param_1) {
                iVar8 = (int)*(short *)((int)&DAT_0095282a + local_24);
                iVar6 = (int)*(short *)((int)&DAT_00952828 + local_24);
                if (((-1 < iVar8) && (iVar8 < DAT_00949874)) &&
                   ((-1 < iVar6 && (iVar6 < DAT_00949870)))) {
                  FUN_005b5700(iVar6,iVar8,local_54);
                }
              }
              if (-1 < param_1) {
                sVar2 = *(short *)((int)&DAT_0095285a + iVar13);
                iVar13 = param_1;
                while (-1 < sVar2) {
                  iVar13 = (int)sVar2;
                  sVar2 = (&DAT_0095285a)[iVar13 * 0x1a];
                }
                if (-1 < iVar13) {
                  do {
                    iVar8 = iVar13 * 0x34;
                    (&DAT_0095284f)[iVar8] =
                         (&DAT_0095284f)[iVar8] | '\x01' << ((byte)local_54 & 0x1f);
                    if (local_54 != (byte *)0x0) {
                      *(ushort *)(&DAT_00952830 + iVar8) =
                           *(ushort *)(&DAT_00952830 + iVar8) & 0xfbbf;
                    }
                    iVar13 = (int)(short)(&DAT_00952858)[iVar13 * 0x1a];
                  } while (-1 < iVar13);
                }
              }
            }
            iVar8 = local_10;
            iVar13 = local_18;
            if (((local_40 == 0) &&
                (((&DAT_0096c9f8)[local_c * 4 + (uint)(byte)(&DAT_0097d044)[iVar4] * 0x20cc] & 7) ==
                 0)) && (param_2 != 0)) {
              FUN_00579a30((uint)(byte)(&DAT_0097d044)[iVar4],0,2,local_10,local_18,0xffffffff);
              FUN_00579a30((&DAT_0097d044)[iVar4],2,1,iVar8,iVar13,0xffffffff);
            }
          }
        }
        iVar13 = local_10;
        iVar4 = local_18;
        uVar14 = (uint)((*(byte *)(DAT_0094a30c + (DAT_0068faf0 * local_18 + (local_10 >> 1)) * 0x2c
                                  ) & 0xe0) < 0x60);
        local_4c = uVar14;
        iVar8 = FUN_005bf1f0((int)*(short *)((int)&DAT_00952832 + local_24),0x40);
        if ((iVar8 == 0) || (uVar14 != 0)) {
          uVar9 = FUN_005bfe90(iVar13,iVar4);
          uVar5 = FUN_005b8e10(uVar9);
          uVar14 = local_c;
          local_30 = uVar5;
          if (-1 < (int)uVar5) {
            iVar4 = uVar5 * 0x34;
            local_14 = (uint)(byte)(&DAT_00952836)[iVar4];
            if (local_14 != local_c) {
              if (((local_38 == 0) ||
                  (iVar13 = FUN_005bf1f0((int)(short)(&DAT_00952832)[uVar5 * 0x1a],2), iVar13 != 0))
                 || (local_54 = (byte *)(uVar14 * 0x833),
                    ((&DAT_0096c9f8)[(int)(local_54 + (byte)(&DAT_00952836)[iVar4]) * 4] & 8) == 0))
              {
                if ((int)local_34 < 0) {
                  if (-1 < param_1) {
                    iVar13 = (int)*(short *)((int)&DAT_0095282a + local_24);
                    iVar8 = (int)*(short *)((int)&DAT_00952828 + local_24);
                    if ((((-1 < iVar13) && (iVar13 < DAT_00949874)) && (-1 < iVar8)) &&
                       ((iVar8 < DAT_00949870 && (iVar6 = FUN_004712a0(iVar8,iVar13), iVar6 != 0))))
                    {
                      iVar6 = DAT_0094a30c + (iVar13 * DAT_0068faf0 + (iVar8 >> 1)) * 0x2c;
                      if (((local_14 == DAT_00939284) &&
                          (((*(byte *)(iVar6 + 4) & (byte)(1 << ((byte)local_14 & 0x1f))) == 0 &&
                           (((byte)DAT_009a64c0 & 0x80) == 0)))) &&
                         ((*(uint *)(&DAT_0096c9e0 + local_14 * 0x20cc) & 0x200) == 0)) {
                        *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | 0x400000;
                        DAT_0090d91c = DAT_0090d91c | 1;
                      }
                      *(byte *)(iVar6 + 4) =
                           *(byte *)(iVar6 + 4) | '\x01' << ((byte)local_14 & 0x1f);
                      FUN_00591e50(iVar8,iVar13,local_14);
                    }
                  }
                  iVar13 = FUN_00579920(param_1);
                  if (-1 < iVar13) {
                    do {
                      iVar8 = iVar13 * 0x34;
                      (&DAT_0095284f)[iVar8] =
                           (&DAT_0095284f)[iVar8] | '\x01' << ((byte)local_14 & 0x1f);
                      if (local_14 != 0) {
                        *(ushort *)(&DAT_00952830 + iVar8) =
                             *(ushort *)(&DAT_00952830 + iVar8) & 0xfbbf;
                      }
                      iVar13 = (int)(short)(&DAT_00952858)[iVar13 * 0x1a];
                    } while (-1 < iVar13);
                  }
                }
                uVar14 = local_14;
                local_54 = (byte *)(local_c * 0x833);
                pbVar12 = local_54 + local_14;
                if ((((&DAT_0096c9f8)[(int)pbVar12 * 4] & 1) == 0) && (param_2 != 0)) {
                  FUN_005b6060(local_30);
                  if (((byte)(1 << ((byte)uVar14 & 0x1f)) & (byte)DAT_009a64e8) == 0) {
                    if ((((&DAT_0096c9f8)[(int)pbVar12 * 4] & 7) == 0) &&
                       ((local_4c != 0 || (local_48 == 0)))) {
                      if ((((&DAT_0095282c)[uVar5 * 0xd] & 0x2000200) == 0x2000200) &&
                         ((byte)(&DAT_0095283b)[iVar4] < (byte)(&DAT_0095283a)[iVar4])) {
                        (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xfdfffdff;
                      }
                      if (((&DAT_0095282c)[uVar5 * 0xd] & 0x1000200) == 0x1000200) {
                        (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xfefffdff;
                      }
                      (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xffffbfff;
                      cVar1 = (&DAT_00952839)[iVar4];
                      goto joined_r0x005b7772;
                    }
                  }
                  else if ((local_48 == local_4c) &&
                          (iVar13 = FUN_005b5ea0(local_c,local_30,param_1), iVar13 != 0)) {
                    if ((((&DAT_0095282c)[uVar5 * 0xd] & 0x2000200) == 0x2000200) &&
                       ((byte)(&DAT_0095283b)[iVar4] < (byte)(&DAT_0095283a)[iVar4])) {
                      (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xfdfffdff;
                    }
                    if (((&DAT_0095282c)[uVar5 * 0xd] & 0x1000200) == 0x1000200) {
                      (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xfefffdff;
                    }
                    (&DAT_0095282c)[uVar5 * 0xd] = (&DAT_0095282c)[uVar5 * 0xd] & 0xffffbfff;
                    cVar1 = (&DAT_00952839)[iVar4];
joined_r0x005b7772:
                    if (cVar1 == '\x18') {
                      (&DAT_00952839)[iVar4] = 0;
                    }
                  }
                }
              }
              iVar13 = FUN_005bf1f0((int)(short)(&DAT_00952832)[uVar5 * 0x1a],0x40);
              if ((((((iVar13 == 0) &&
                     (iVar13 = FUN_005bf1f0((int)(short)(&DAT_00952832)[uVar5 * 0x1a],4),
                     iVar13 == 0)) && ((*(ushort *)(&DAT_00952830 + iVar4) & 0x400) == 0)) &&
                   (((pbVar12 = (byte *)(DAT_0094a30c +
                                        ((short)(&DAT_0095282a)[uVar5 * 0x1a] * DAT_0068faf0 +
                                        ((int)(short)(&DAT_00952828)[uVar5 * 0x1a] >> 1)) * 0x2c),
                     (pbVar12[8] & 0x20) == 0 || ((*pbVar12 & 0xe0) < 0x40)) ||
                    ((&DAT_00952832)[uVar5 * 0x1a] == 0x13)))) ||
                  ((local_44 != 0 ||
                   (iVar13 = FUN_005b9580(local_30,1,0xffffffff,0xffffffff,0xffffffff), iVar13 != 1)
                   ))) || (((&DAT_0096c9f8)[(int)(local_54 + (byte)(&DAT_00952836)[iVar4]) * 4] & 8)
                           == 0)) {
                if ((int)local_34 < 0) {
                  if ((((local_c == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                      (((byte)local_2c & (&DAT_0095284f)[iVar4]) == 0)) && ((int)local_20 < 2)) {
                    local_20 = 1;
                  }
                  iVar4 = (int)(short)(&DAT_0095282a)[uVar5 * 0x1a];
                  iVar13 = (int)(short)(&DAT_00952828)[uVar5 * 0x1a];
                  if (((-1 < iVar4) && (iVar4 < DAT_00949874)) &&
                     ((-1 < iVar13 &&
                      ((iVar13 < DAT_00949870 && (iVar8 = FUN_004712a0(iVar13,iVar4), iVar8 != 0))))
                     )) {
                    iVar8 = DAT_0094a30c + (iVar4 * DAT_0068faf0 + (iVar13 >> 1)) * 0x2c;
                    if ((local_c == DAT_00939284) &&
                       ((((*(byte *)(iVar8 + 4) & (byte)local_2c) == 0 &&
                         (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                        ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)))) {
                      *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x400000;
                      DAT_0090d91c = DAT_0090d91c | 1;
                    }
                    *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) | '\x01' << ((byte)local_c & 0x1f);
                    FUN_00591e50(iVar13,iVar4,local_c);
                  }
                  iVar4 = FUN_00579920(local_30);
                  if (-1 < iVar4) {
                    do {
                      iVar13 = iVar4 * 0x34;
                      (&DAT_0095284f)[iVar13] =
                           (&DAT_0095284f)[iVar13] | '\x01' << ((byte)local_c & 0x1f);
                      if (local_c != 0) {
                        *(ushort *)(&DAT_00952830 + iVar13) =
                             *(ushort *)(&DAT_00952830 + iVar13) & 0xfbbf;
                      }
                      iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a];
                    } while (-1 < iVar4);
                  }
                }
                if (((byte)local_2c & (byte)DAT_009a64e8) == 0) {
                  if ((((&DAT_0096c9f8)[(int)(local_54 + local_14) * 4] & 7) == 0) &&
                     (((local_48 != 0 || (local_4c == 0)) || (local_40 == 2)))) {
                    if (((*(uint *)((int)&DAT_0095282c + local_24) & 0x2000200) == 0x2000200) &&
                       ((byte)(&DAT_0095283b)[local_24] < (byte)(&DAT_0095283a)[local_24])) {
                      *(uint *)((int)&DAT_0095282c + local_24) =
                           *(uint *)((int)&DAT_0095282c + local_24) & 0xfdfffdff;
                    }
                    if ((*(uint *)((int)&DAT_0095282c + local_24) & 0x1000200) == 0x1000200) {
                      *(uint *)((int)&DAT_0095282c + local_24) =
                           *(uint *)((int)&DAT_0095282c + local_24) & 0xfefffdff;
                    }
                    *(uint *)((int)&DAT_0095282c + local_24) =
                         *(uint *)((int)&DAT_0095282c + local_24) & 0xffffbfff;
                    if ((&DAT_00952839)[local_24] == '\x18') {
                      (&DAT_00952839)[local_24] = 0;
                    }
                  }
                }
                else if (((local_48 == local_4c) || (local_40 == 2)) &&
                        (iVar4 = FUN_005b5ea0(local_14,param_1,local_30), iVar4 != 0)) {
                  if (((*(uint *)((int)&DAT_0095282c + local_24) & 0x2000200) == 0x2000200) &&
                     ((byte)(&DAT_0095283b)[local_24] < (byte)(&DAT_0095283a)[local_24])) {
                    *(uint *)((int)&DAT_0095282c + local_24) =
                         *(uint *)((int)&DAT_0095282c + local_24) & 0xfdfffdff;
                  }
                  if ((*(uint *)((int)&DAT_0095282c + local_24) & 0x1000200) == 0x1000200) {
                    *(uint *)((int)&DAT_0095282c + local_24) =
                         *(uint *)((int)&DAT_0095282c + local_24) & 0xfefffdff;
                  }
                  *(uint *)((int)&DAT_0095282c + local_24) =
                       *(uint *)((int)&DAT_0095282c + local_24) & 0xffffbfff;
                  if ((&DAT_00952839)[local_24] == '\x18') {
                    (&DAT_00952839)[local_24] = 0;
                  }
                }
                iVar13 = local_10;
                iVar4 = local_18;
                if (((local_4c != 0) && (local_14 != 0)) &&
                   (((&DAT_0096c9f8)[(int)(local_54 + local_14) * 4] & 7) == 0)) {
                  iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[uVar5 * 0x1a],0x44,local_10,
                                       local_18,0xffffffff);
                  FUN_00579a30(local_c,6,(iVar8 != 0) + '\x02');
                }
                local_54 = local_54 + local_14;
                if (((&DAT_0096c9f8)[(int)local_54 * 4] & 7) == 0) {
                  FUN_00579a30(local_c,0,(-(local_c != 0) & 2U) + 1,iVar13,iVar4,0xffffffff);
                }
                if ((((7 < (byte)(&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_24) * 0x34])
                     && (((&DAT_0096c9f8)[(int)local_54 * 4] & 1) == 0)) &&
                    (uVar14 = FUN_004e3ef0(local_14,iVar13,iVar4,0,0), uVar14 == local_14)) &&
                   (7 < (byte)(&DAT_009ab892)[(short)(&DAT_00952832)[uVar5 * 0x1a] * 0x34])) {
                  FUN_00579a30(local_14,2,2,iVar13,iVar4,0xffffffff);
                  FUN_00579a30(local_14,0,1,iVar13,iVar4,0xffffffff);
                  FUN_00579a30(local_14,3,1,iVar13,iVar4,0xffffffff);
                }
                if ((local_40 != 2) ||
                   ((&DAT_0094a37a)
                    [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_24) * 0x34] *
                     0x90] == '\0')) {
                  sVar2 = (&DAT_00952832)[uVar5 * 0x1a];
                  if ((((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[sVar2 * 0x34] * 0x90] != '\x02')
                      || ((&DAT_0094a37a)[(uint)(byte)(&DAT_009ab88c)[sVar2 * 0x34] * 0x90] == '\0')
                      ) && (((local_48 == local_4c || ((-1 < (int)local_34 && (local_48 == 0)))) ||
                            (((&DAT_0096c9f8)[(int)local_54 * 4] & 8) == 0)))) {
                    if (sVar2 == 0x13) {
                      local_64 = 1;
                    }
                    else if ((sVar2 < 0x40) &&
                            (((char)(&DAT_0094ae68)
                                    [(uint)(byte)(&DAT_009ab88d)[sVar2 * 0x34] * 0x10] < '\0' ||
                             (sVar2 == 0xf)))) {
                      local_60 = 1;
                    }
                    local_50 = local_50 | 1 << ((byte)local_14 & 0x1f);
                  }
                }
              }
            }
          }
        }
      }
    }
    local_1c = local_1c + 1;
  } while ((int)local_1c < 9);
  local_1c = 9;
  do {
    iVar4 = (&DAT_0066efbc)[local_1c] + local_3c;
    if ((_DAT_0094988c & 1) == 0) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + DAT_00949870;
      }
      else if (DAT_00949870 <= iVar4) {
        iVar4 = iVar4 - DAT_00949870;
      }
    }
    iVar13 = (&DAT_0066f440)[local_1c] + local_28;
    local_18 = iVar13;
    local_10 = iVar4;
    if ((((-1 < iVar13) && (iVar13 < DAT_00949874)) && (-1 < iVar4)) && (iVar4 < DAT_00949870)) {
      iVar8 = FUN_005bf010(iVar4,iVar13);
      if (iVar8 != 0) {
        iVar4 = DAT_0068faf0 * iVar13 + (iVar4 >> 1);
        bVar10 = *(byte *)(DAT_0094a30c + 7 + iVar4 * 0x2c);
        uVar14 = (uint)(char)bVar10;
        iVar4 = DAT_0094a30c + iVar4 * 0x2c;
        if (((0 < (int)uVar14) && (uVar14 != local_c)) &&
           ((local_38 != 1 &&
            (((*(byte *)(iVar4 + 8) & 1) == 0 || (7 < (*(byte *)(iVar4 + 2) & 0xf))))))) {
          if (-1 < param_1) {
            iVar13 = (int)*(short *)((int)&DAT_0095282a + local_24);
            iVar4 = (int)*(short *)((int)&DAT_00952828 + local_24);
            if ((((-1 < iVar13) && (iVar13 < DAT_00949874)) && (-1 < iVar4)) &&
               ((iVar4 < DAT_00949870 && (iVar8 = FUN_004712a0(iVar4,iVar13), iVar8 != 0)))) {
              iVar8 = DAT_0094a30c + (iVar13 * DAT_0068faf0 + (iVar4 >> 1)) * 0x2c;
              if (((uVar14 == DAT_00939284) &&
                  (((*(byte *)(iVar8 + 4) & (byte)(1 << (bVar10 & 0x1f))) == 0 &&
                   (((byte)DAT_009a64c0 & 0x80) == 0)))) &&
                 ((*(uint *)(&DAT_0096c9e0 + uVar14 * 0x20cc) & 0x200) == 0)) {
                *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x400000;
                DAT_0090d91c = DAT_0090d91c | 1;
              }
              *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) | '\x01' << (bVar10 & 0x1f);
              FUN_00591e50(iVar4,iVar13,uVar14);
            }
          }
          iVar13 = local_10;
          iVar4 = local_18;
          if (-1 < param_1) {
            sVar2 = *(short *)((int)&DAT_0095285a + local_24);
            iVar8 = param_1;
            while (-1 < sVar2) {
              iVar8 = (int)sVar2;
              sVar2 = (&DAT_0095285a)[iVar8 * 0x1a];
            }
            if (-1 < iVar8) {
              do {
                iVar6 = iVar8 * 0x34;
                (&DAT_0095284f)[iVar6] = (&DAT_0095284f)[iVar6] | '\x01' << (bVar10 & 0x1f);
                *(ushort *)(&DAT_00952830 + iVar6) = *(ushort *)(&DAT_00952830 + iVar6) & 0xfbbf;
                iVar8 = (int)(short)(&DAT_00952858)[iVar8 * 0x1a];
              } while (-1 < iVar8);
            }
          }
          if ((((&DAT_0096c9f8)[local_c * 0x20cc + uVar14 * 4] & 7) == 0) && (param_2 != 0)) {
            if (local_40 == 0) {
              FUN_00579a30(uVar14,0,2,local_10,local_18,0xffffffff);
              FUN_00579a30(uVar14,2,1,iVar13,iVar4,0xffffffff);
            }
            else {
              FUN_00579a30(uVar14,6,2,local_10,local_18,0xffffffff);
            }
          }
        }
      }
      uVar14 = local_c;
      iVar13 = local_10;
      iVar4 = local_18;
      local_54 = (byte *)(local_10 >> 1);
      if (((*(byte *)(DAT_0094a30c + 8 + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c) & 3) == 0
          ) || (local_14 = *(byte *)(DAT_0094a30c + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c
                                    + 2) & 0xf, 7 < local_14)) {
        local_14 = 0xffffffff;
      }
      if (local_14 != local_c) {
        uVar9 = FUN_005bfe90(local_10,local_18);
        local_30 = FUN_005b8e10(uVar9);
        local_34 = FUN_004e3a50(iVar13,iVar4);
        if ((local_44 == 0) ||
           ((local_40 != 2 &&
            ((*(byte *)(DAT_0094a30c + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c) & 0xe0) <
             0x60 != (local_40 == 1))))) {
LAB_005b8403:
          uVar3 = local_30;
          uVar5 = local_34;
          if (((-1 < (int)local_30) && (local_38 == 0)) &&
             ((iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[local_30 * 0x1a],2), iVar4 != 0 &&
              (((&DAT_0094a379)
                [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[uVar3 * 0x1a] * 0x34] * 0x90] ==
                '\x02' ||
               (local_48 ==
                ((&DAT_0094a379)
                 [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[uVar3 * 0x1a] * 0x34] * 0x90]
                == '\x01'))))))) {
            if ((((&DAT_0096c9f8)[local_14 * 4 + uVar14 * 0x20cc] & 1) == 0) && (param_2 != 0)) {
              FUN_005b6060(local_30);
            }
            iVar4 = DAT_0094a30c + (DAT_0068faf0 * local_28 + iVar11) * 0x2c;
            if (((*(byte *)(iVar4 + 8) & 1) == 0) || (7 < (*(byte *)(iVar4 + 2) & 0xf))) {
              if (-1 < param_1) {
                iVar4 = (int)*(short *)((int)&DAT_0095282a + local_24);
                iVar13 = (int)*(short *)((int)&DAT_00952828 + local_24);
                if ((((((-1 < iVar4) && (iVar4 < DAT_00949874)) && (-1 < iVar13)) &&
                     ((iVar13 < DAT_00949870 && (-1 < iVar4)))) && (iVar4 < DAT_00949874)) &&
                   ((-1 < iVar13 && (iVar13 < DAT_00949870)))) {
                  iVar8 = DAT_0094a30c + (iVar4 * DAT_0068faf0 + (iVar13 >> 1)) * 0x2c;
                  if ((local_14 == DAT_00939284) &&
                     (((((byte)(1 << ((byte)local_14 & 0x1f)) & *(byte *)(iVar8 + 4)) == 0 &&
                       (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                      ((*(uint *)(&DAT_0096c9e0 + local_14 * 0x20cc) & 0x200) == 0)))) {
                    *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x400000;
                    DAT_0090d91c = DAT_0090d91c | 1;
                  }
                  *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) | '\x01' << ((byte)local_14 & 0x1f);
                  FUN_00591e50(iVar13,iVar4,local_14);
                }
              }
              if (-1 < param_1) {
                sVar2 = *(short *)((int)&DAT_0095285a + local_24);
                iVar4 = param_1;
                while (-1 < sVar2) {
                  iVar4 = (int)sVar2;
                  sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
                }
                if (-1 < iVar4) {
                  do {
                    iVar13 = iVar4 * 0x34;
                    (&DAT_0095284f)[iVar13] =
                         (&DAT_0095284f)[iVar13] | '\x01' << ((byte)local_14 & 0x1f);
                    if (local_14 != 0) {
                      *(ushort *)(&DAT_00952830 + iVar13) =
                           *(ushort *)(&DAT_00952830 + iVar13) & 0xfbbf;
                    }
                    iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a];
                  } while (-1 < iVar4);
                }
              }
            }
            uVar5 = local_34;
            if (((0x5f < (*(byte *)(DAT_0094a30c + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c)
                         & 0xe0)) && (local_14 != 0)) &&
               (((&DAT_0096c9f8)[(local_c + local_14 * 0x833) * 4] & 2) == 0)) {
              FUN_00579a30(local_14,6,2,local_3c,local_28,0xffffffff);
              uVar5 = local_34;
            }
          }
        }
        else {
          if (-1 < (int)local_34) {
            if ((uVar14 == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) {
              iVar4 = local_34 * 0x134;
              if (((&DAT_0097d04a)[iVar4] & (byte)local_2c) == 0) {
                uVar5 = 3;
                if ((int)local_20 < 4) {
LAB_005b808c:
                  local_20 = uVar5;
                }
              }
              else if (((uint)(byte)(&DAT_0097d04b)[uVar14 + iVar4] !=
                        (int)(char)(&DAT_0097d046)[iVar4]) && (uVar5 = 2, (int)local_20 < 3))
              goto LAB_005b808c;
            }
            iVar4 = local_34 * 0x134;
            bVar10 = '\x01' << ((byte)uVar14 & 0x1f);
            (&DAT_0097d04a)[iVar4] = (&DAT_0097d04a)[iVar4] | bVar10;
            (&DAT_0097d04b)[uVar14 + iVar4] = (&DAT_0097d046)[iVar4];
            iVar4 = (int)(short)(&DAT_0097d042)[local_34 * 0x9a];
            iVar13 = (int)(short)(&DAT_0097d040)[local_34 * 0x9a];
            if ((((-1 < iVar4) && (iVar4 < DAT_00949874)) && (-1 < iVar13)) &&
               (iVar13 < DAT_00949870)) {
              iVar8 = DAT_0094a30c + (iVar4 * DAT_0068faf0 + (iVar13 >> 1)) * 0x2c;
              if (((uVar14 == DAT_00939284) && ((*(byte *)(iVar8 + 4) & (byte)local_2c) == 0)) &&
                 ((((byte)DAT_009a64c0 & 0x80) == 0 &&
                  (((&DAT_0096c9e1)[local_c * 0x20cc] & 2) == 0)))) {
                *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x400000;
                DAT_0090d91c = DAT_0090d91c | 1;
              }
              *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) | bVar10;
              FUN_00591e50(iVar13,iVar4,local_c);
              uVar14 = local_c;
            }
          }
          uVar3 = local_30;
          uVar5 = local_34;
          if (-1 < (int)local_30) {
            if ((int)local_34 < 0) {
              iVar13 = local_30 * 0x34;
              iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[local_30 * 0x1a],0x40);
              if (((iVar4 == 0) &&
                  (iVar4 = FUN_005bf1f0((int)(short)(&DAT_00952832)[uVar3 * 0x1a],4), iVar4 == 0))
                 && ((*(ushort *)(&DAT_00952830 + iVar13) & 0x400) == 0)) {
                iVar13 = (int)(short)(&DAT_0095282a)[uVar3 * 0x1a];
                iVar8 = (int)(short)(&DAT_00952828)[uVar3 * 0x1a];
                iVar4 = iVar13 * DAT_0068faf0 + (iVar8 >> 1);
                if ((((*(byte *)(DAT_0094a30c + 8 + iVar4 * 0x2c) & 0x20) == 0) ||
                    ((*(byte *)(DAT_0094a30c + iVar4 * 0x2c) & 0xe0) < 0x40)) ||
                   (uVar14 = local_c, (&DAT_00952832)[uVar3 * 0x1a] == 0x13)) {
                  if (((local_c == DAT_00939284) && (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                     ((((&DAT_0095284f)[local_24] & (byte)local_2c) == 0 && ((int)local_20 < 3)))) {
                    local_20 = 2;
                  }
                  if (((-1 < iVar13) && (iVar13 < DAT_00949874)) &&
                     ((-1 < iVar8 &&
                      ((iVar8 < DAT_00949870 && (iVar4 = FUN_004712a0(iVar8,iVar13), iVar4 != 0)))))
                     ) {
                    iVar4 = DAT_0094a30c + (iVar13 * DAT_0068faf0 + (iVar8 >> 1)) * 0x2c;
                    if ((local_c == DAT_00939284) &&
                       ((((*(byte *)(iVar4 + 4) & (byte)local_2c) == 0 &&
                         (((byte)DAT_009a64c0 & 0x80) == 0)) &&
                        ((*(uint *)(&DAT_0096c9e0 + local_c * 0x20cc) & 0x200) == 0)))) {
                      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | 0x400000;
                      DAT_0090d91c = DAT_0090d91c | 1;
                    }
                    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | '\x01' << ((byte)local_c & 0x1f);
                    FUN_00591e50(iVar8,iVar13,local_c);
                  }
                  sVar2 = (&DAT_0095285a)[uVar3 * 0x1a];
                  uVar14 = local_30;
                  while (-1 < sVar2) {
                    uVar14 = (uint)sVar2;
                    sVar2 = (&DAT_0095285a)[uVar14 * 0x1a];
                  }
                  if (-1 < (int)uVar14) {
                    do {
                      iVar4 = uVar14 * 0x34;
                      (&DAT_0095284f)[iVar4] =
                           (&DAT_0095284f)[iVar4] | '\x01' << ((byte)local_c & 0x1f);
                      if (local_c != 0) {
                        *(ushort *)(&DAT_00952830 + iVar4) =
                             *(ushort *)(&DAT_00952830 + iVar4) & 0xfbbf;
                      }
                      uVar14 = (uint)(short)(&DAT_00952858)[uVar14 * 0x1a];
                    } while (-1 < (int)uVar14);
                  }
                  uVar14 = local_c;
                  if ((((*(byte *)(DAT_0094a30c + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c)
                        & 0xe0) < 0x60) && (local_14 != 0)) &&
                     (((&DAT_0096c9f8)[local_14 * 4 + local_c * 0x20cc] & 2) == 0)) {
                    FUN_00579a30(local_c,6,2,local_10,local_18,0xffffffff);
                    uVar14 = local_c;
                  }
                }
              }
            }
            goto LAB_005b8403;
          }
        }
        if (-1 < (int)uVar5) {
          local_34 = local_14 * 0x20cc;
          local_4c = *(uint *)(&DAT_0096c9e0 + local_34) & 0x200;
          bVar10 = (byte)local_14;
          if (((local_4c != 0) ||
              ((*(byte *)(DAT_0094a30c + 4 + (DAT_0068faf0 * local_28 + iVar11) * 0x2c) &
               (byte)(1 << (bVar10 & 0x1f))) != 0)) &&
             ((local_38 == 0 &&
              ((pbVar12 = (byte *)(DAT_0094a30c + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c),
               local_48 != (*pbVar12 & 0xe0) < 0x60 ||
               (*(byte *)(DAT_0094a30c + 3 + (DAT_0068faf0 * local_28 + iVar11) * 0x2c) ==
                pbVar12[3])))))) {
            if (-1 < param_1) {
              iVar4 = (int)*(short *)((int)&DAT_0095282a + local_24);
              iVar13 = (int)*(short *)((int)&DAT_00952828 + local_24);
              if (((((-1 < iVar4) && (iVar4 < DAT_00949874)) && (-1 < iVar13)) &&
                  ((iVar13 < DAT_00949870 && (-1 < iVar4)))) &&
                 ((iVar4 < DAT_00949874 && ((-1 < iVar13 && (iVar13 < DAT_00949870)))))) {
                iVar8 = DAT_0094a30c + (iVar4 * DAT_0068faf0 + (iVar13 >> 1)) * 0x2c;
                if ((local_14 == DAT_00939284) &&
                   (((((byte)(1 << (bVar10 & 0x1f)) & *(byte *)(iVar8 + 4)) == 0 &&
                     (((byte)DAT_009a64c0 & 0x80) == 0)) && (local_4c == 0)))) {
                  *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x400000;
                  DAT_0090d91c = DAT_0090d91c | 1;
                }
                *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) | '\x01' << (bVar10 & 0x1f);
                FUN_00591e50(iVar13,iVar4,local_14);
              }
            }
            uVar14 = local_14;
            if (-1 < param_1) {
              sVar2 = *(short *)((int)&DAT_0095285a + local_24);
              iVar4 = param_1;
              while (-1 < sVar2) {
                iVar4 = (int)sVar2;
                sVar2 = (&DAT_0095285a)[iVar4 * 0x1a];
              }
              if (-1 < iVar4) {
                do {
                  iVar13 = iVar4 * 0x34;
                  (&DAT_0095284f)[iVar13] =
                       (&DAT_0095284f)[iVar13] | '\x01' << ((byte)local_14 & 0x1f);
                  if (local_14 != 0) {
                    *(ushort *)(&DAT_00952830 + iVar13) =
                         *(ushort *)(&DAT_00952830 + iVar13) & 0xfbbf;
                  }
                  iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a];
                } while (-1 < iVar4);
              }
            }
            if ((((&DAT_0094a379)
                  [(uint)(byte)(&DAT_009ab88c)[*(short *)((int)&DAT_00952832 + local_24) * 0x34] *
                   0x90] == '\0') &&
                (*(char *)(DAT_0094a30c + 3 + (DAT_0068faf0 * local_28 + iVar11) * 0x2c) ==
                 *(char *)(DAT_0094a30c + 3 + (int)(local_54 + DAT_0068faf0 * local_18) * 0x2c))) &&
               ((local_10 == *(int *)(&DAT_0096cdd0 + local_34) &&
                (local_18 == *(int *)(&DAT_0096cdd4 + local_34))))) {
              *(undefined4 *)(&DAT_0096cdd4 + local_34) = 0xffffffff;
              *(undefined4 *)(&DAT_0096cdd0 + local_34) = 0xffffffff;
              for (iVar4 = FUN_005bfe90(local_10,local_18); -1 < iVar4;
                  iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a]) {
                if (((&DAT_0095282c)[iVar4 * 0xd] & 0x40000) != 0) {
                  (&DAT_0095282c)[iVar4 * 0xd] = (&DAT_0095282c)[iVar4 * 0xd] | 0x60000;
                }
              }
            }
            iVar13 = local_28;
            iVar4 = local_3c;
            if (((&DAT_009ab892)[*(short *)((int)&DAT_00952832 + local_24) * 0x34] == '\v') &&
               (((&DAT_0096c9f8)[(uVar14 + local_c * 0x833) * 4] & 1) == 0)) {
              FUN_00579a30(uVar14,0,2,local_3c,local_28,0xffffffff);
              FUN_00579a30(uVar14,2,1,iVar4,iVar13,0xffffffff);
              FUN_00579a30(uVar14,3,1,iVar4,iVar13,0xffffffff);
            }
          }
        }
      }
    }
    uVar5 = local_c;
    uVar14 = local_20;
    iVar4 = local_3c;
    local_1c = local_1c + 1;
    if (0x18 < (int)local_1c) {
      if (DAT_009a64d4 != 0) {
        FUN_0046aef0(local_3c,local_28,(local_c != DAT_00939284) - 1 & local_20,2);
        if ((uVar5 == DAT_00939284) && (uVar14 != 0)) {
          FUN_005d5a70();
        }
        if (((8 < local_5c) && (uVar5 == DAT_00939284)) &&
           (((&DAT_00946f58)[uVar5 * 0x59c] & 0x80) != 0)) {
          FUN_005230e0(0x29,0,1,0);
        }
        if ((local_50 & 1) != 0) {
          FUN_0055e370(uVar5,0,iVar4,local_28,local_64,local_60);
        }
        if ((uVar5 != 0) && (param_2 != 0)) {
          uVar14 = 1;
          do {
            if ((uVar14 != uVar5) && ((local_50 & 1 << ((byte)uVar14 & 0x1f)) != 0)) {
              FUN_0055e370(uVar5,uVar14,iVar4,local_28,0,0);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < 8);
        }
      }
      return;
    }
  } while( true );
}

