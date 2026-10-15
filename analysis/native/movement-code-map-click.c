// ev_55ccb2968fb91bb95204a271e39ca702d0f826f3710592d7a06d2d47c129c65e

/* WARNING: Removing unreachable block (ram,0x0046e43a) */
/* WARNING: Removing unreachable block (ram,0x0046e444) */
/* WARNING: Removing unreachable block (ram,0x0046e463) */
/* WARNING: Removing unreachable block (ram,0x0046e48b) */
/* WARNING: Removing unreachable block (ram,0x0046e495) */
/* WARNING: Removing unreachable block (ram,0x0046e44d) */
/* WARNING: Removing unreachable block (ram,0x0046e4b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d5d0(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  SHORT SVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int extraout_ECX;
  undefined2 uVar8;
  int unaff_EBX;
  undefined2 uVar9;
  int unaff_ESI;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00655e88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00645550();
  FUN_004048a0();
  local_8 = 0;
  if (*(int *)(extraout_ECX + 0x1dd88) == 0) {
    FUN_00403830();
    FUN_00459280();
    FUN_004b8970();
    FUN_004bdde0();
    DAT_009392b0 = 0;
    DAT_006e8150 = 0;
    puVar7 = *(undefined **)(extraout_ECX + 0x1ef4c);
    iVar6 = *(int *)(extraout_ECX + 0x1de24);
    FUN_0050ef50();
    GetAsyncKeyState(0x11);
    if ((((byte)DAT_009a64c0 & 0x40) != 0) && (uVar3 = GetKeyState(0x91), (uVar3 & 1) != 0)) {
      GetAsyncKeyState(0x10);
    }
    puVar1 = *(undefined **)(extraout_ECX + 0x1ef4c);
    iVar12 = 0x46d75d;
    iVar5 = FUN_005107e0();
    if ((iVar5 == 0) || (puVar1 != &DAT_0093ab4c)) {
      if (((param_3 == 0) && (DAT_0093a938 == 0)) ||
         (((puVar7 != &DAT_0093aa9c && (iVar12 == 0)) && (iVar5 == 0)))) {
        puVar13 = &stack0xffffffe8;
        iVar12 = FUN_00463040();
        iVar5 = DAT_0093928c;
        if (iVar12 == 0) {
          if (((unaff_ESI < 0) || (DAT_00949874 <= unaff_ESI)) ||
             ((unaff_EBX < 0 || (DAT_00949870 <= unaff_EBX)))) {
            local_8 = 0x16;
            FUN_00404900();
            local_8._0_1_ = 0x19;
            FUN_00605370();
            local_8._0_1_ = 0x18;
            FUN_00406880();
            local_8._0_1_ = 0x17;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x15);
          }
          else if (*(int *)(extraout_ECX + 0x1dd8c) == 0) {
            if (((puVar13 == (undefined1 *)0x0) || (iVar6 < 0)) ||
               ((byte)(&DAT_0097d044)[iVar6 * 0x134] != DAT_00939284)) {
              if (param_1 == 0) {
                if (param_2 == 0) {
                  if (((((byte)DAT_009a64c0 & 0x40) == 0) ||
                      (&stack0x00000000 == (undefined1 *)0x14)) || (DAT_0093a938 != 0)) {
                    if (param_3 == 0) {
LAB_0046e5eb:
                      if (*(int *)(extraout_ECX + 0x1dd78) == 0) {
                        if (((DAT_00939288 == 0) || (param_3 != 0)) ||
                           ((DAT_0093a938 != 0 || (iVar6 = FUN_004e1f40(), iVar6 != 0)))) {
                          FUN_00511480();
                          FUN_005147e0();
                          goto LAB_0046e646;
                        }
                      }
                      else {
LAB_0046e646:
                        if ((param_3 != 0) && (1 < *(int *)(extraout_ECX + 0x1dd7c))) {
                          local_8 = 0x5c;
                          FUN_00404900();
                          local_8._0_1_ = 0x5f;
                          FUN_00605370();
                          local_8._0_1_ = 0x60;
                          FUN_00607da0();
                          local_8._0_1_ = 0x5e;
                          FUN_00607040();
                          local_8._0_1_ = 0x5d;
                          FUN_00406880();
                          local_8 = CONCAT31(local_8._1_3_,0x5b);
                          goto LAB_0046eb38;
                        }
                      }
                      iVar6 = FUN_004e3a50();
                      if ((((*(int *)(extraout_ECX + 0x1dd78) == 1) || (iVar6 < 0)) ||
                          (param_3 != 0)) || (DAT_0093a938 != 0)) {
                        if (extraout_ECX == DAT_007d3c3c) {
                          *(undefined4 *)(extraout_ECX + 0x21a44) = 1;
                        }
                        FUN_0046b1f0();
                        *(undefined4 *)(extraout_ECX + 0x21a44) = 0;
                        iVar6 = FUN_005bfe90();
                        if ((((*(int *)(extraout_ECX + 0x1dd78) == 1) || (iVar6 < 0)) ||
                            (((byte)(&DAT_00952836)[iVar6 * 0x34] != DAT_00939284 ||
                             ((param_3 != 0 || (DAT_0093a938 != 0)))))) ||
                           (iVar6 = FUN_004e1f40(), iVar6 != 0)) {
                          local_8 = 0x6e;
                          FUN_00404900();
                          local_8._0_1_ = 0x71;
                          FUN_00605370();
                          local_8._0_1_ = 0x72;
                          FUN_00607da0();
                          local_8._0_1_ = 0x70;
                          FUN_00607040();
                          local_8._0_1_ = 0x73;
                          FUN_00607da0();
                          local_8._0_1_ = 0x6f;
                          FUN_00607040();
                          local_8 = CONCAT31(local_8._1_3_,0x6d);
                        }
                        else {
                          FUN_004d2f00();
                          local_8 = 0x68;
                          FUN_00404900();
                          local_8._0_1_ = 0x6b;
                          FUN_00605370();
                          local_8._0_1_ = 0x6c;
                          FUN_00607da0();
                          local_8._0_1_ = 0x6a;
                          FUN_00607040();
                          local_8._0_1_ = 0x69;
                          FUN_00406880();
                          local_8 = CONCAT31(local_8._1_3_,0x67);
                        }
                      }
                      else {
                        iVar6 = iVar6 * 0x134;
                        if (((((byte)(&DAT_0097d044)[iVar6] == DAT_00939284) ||
                             (((&DAT_0097d04a)[iVar6] & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) !=
                              0)) || (((byte)DAT_009a64c0 & 0x80) != 0)) &&
                           (((((byte)DAT_009a64c0 & 0x80) != 0 ||
                             ((byte)(&DAT_0097d044)[iVar6] == DAT_00939284)) ||
                            ((iVar5 = FUN_0055bc00(), iVar5 != 0 ||
                             (((&DAT_0096c9f8)
                               [(DAT_00939284 * 0x833 + (uint)(byte)(&DAT_0097d044)[iVar6]) * 4] & 1
                              ) != 0)))))) {
                          FUN_0046b1f0();
                          if ((*(int *)(extraout_ECX + 0x1dd78) != 0) &&
                             ((*(uint *)(extraout_ECX + 0x1dd70) & 0x40000000) != 0)) {
                            FUN_0046b1f0();
                          }
                          FUN_0041a920();
                        }
                        local_8 = 0x62;
                        FUN_00404900();
                        local_8._0_1_ = 0x65;
                        FUN_00605370();
                        local_8._0_1_ = 0x66;
                        FUN_00607da0();
                        local_8._0_1_ = 100;
                        FUN_00607040();
                        local_8._0_1_ = 99;
                        FUN_00406880();
                        local_8 = CONCAT31(local_8._1_3_,0x61);
                      }
                    }
                    else {
                      SVar4 = GetAsyncKeyState(0x10);
                      if ((char)((ushort)SVar4 >> 8) == '\0') {
                        if ((((_DAT_009a6494 & 0x100) == 0) &&
                            (*(int *)(extraout_ECX + 0x1dd78) != 1)) || (DAT_0093a938 != 0))
                        goto LAB_0046e5eb;
                        FUN_0046c0d0();
                        local_8 = 0x57;
                        FUN_00404900();
                        local_8._0_1_ = 0x5a;
                        FUN_00605370();
                        local_8._0_1_ = 0x59;
                        FUN_00406880();
                        local_8._0_1_ = 0x58;
                        FUN_00406880();
                        local_8 = CONCAT31(local_8._1_3_,0x56);
                      }
                      else {
                        FUN_004b9f90();
                        FUN_004b9ea0();
                        FUN_00458f10();
                        local_8 = 0x4d;
                        FUN_00404900();
                        local_8._0_1_ = 0x50;
                        FUN_00605370();
                        local_8._0_1_ = 0x4f;
                        FUN_00406880();
                        local_8._0_1_ = 0x4e;
                        FUN_00406880();
                        local_8 = CONCAT31(local_8._1_3_,0x4c);
                      }
                    }
                  }
                  else {
                    FUN_00511480();
                    FUN_005147e0();
                    FUN_005abf20();
                    FUN_0046b510();
                    local_8 = 0x48;
                    FUN_00404900();
                    local_8._0_1_ = 0x4b;
                    FUN_00605370();
                    local_8._0_1_ = 0x4a;
                    FUN_00406880();
                    local_8._0_1_ = 0x49;
                    FUN_00406880();
                    local_8 = CONCAT31(local_8._1_3_,0x47);
                  }
                }
                else if (DAT_0093928c < 0) {
                  local_8 = 0x3e;
                  FUN_00404900();
                  local_8._0_1_ = 0x41;
                  FUN_00605370();
                  local_8._0_1_ = 0x40;
                  FUN_00406880();
                  local_8._0_1_ = 0x3f;
                  FUN_00406880();
                  local_8 = CONCAT31(local_8._1_3_,0x3d);
                }
                else {
                  switch(param_2) {
                  case 2:
                    FUN_004d8dc0();
                    break;
                  case 3:
                    FUN_004d8dc0();
                    break;
                  case 4:
                    FUN_00532140();
                    break;
                  case 8:
                    FUN_004cda30();
                    break;
                  case 10:
                    FUN_004cd090();
                    break;
                  case 0xb:
                    FUN_004d8cd0();
                  }
                  DAT_00939294 = 0;
                  local_8 = 0x43;
                  FUN_00404900();
                  local_8._0_1_ = 0x46;
                  FUN_00605370();
                  local_8._0_1_ = 0x45;
                  FUN_00406880();
                  local_8._0_1_ = 0x44;
                  FUN_00406880();
                  local_8 = CONCAT31(local_8._1_3_,0x42);
                }
              }
              else {
                uVar8 = (undefined2)unaff_EBX;
                uVar9 = (undefined2)unaff_ESI;
                if ((DAT_00939288 != 0) && (-1 < DAT_0093928c)) {
LAB_0046df0e:
                  iVar6 = FUN_00531020();
                  if (iVar6 == 0) {
                    iVar6 = iVar5 * 0x34;
                    uVar2 = (&DAT_0095282c)[iVar5 * 0xd];
                    (&DAT_00952839)[iVar6] = 0x18;
                    if ((uVar2 & 0x2000000) == 0) {
                      (&DAT_0095283c)[iVar5 * 0x1a] = uVar8;
                      (&DAT_00952844)[iVar5 * 0x1a] = uVar9;
                      (&DAT_0095282c)[iVar5 * 0xd] = (&DAT_0095282c)[iVar5 * 0xd] & 0xfdfeffff;
                      (&DAT_0095283a)[iVar6] = 0;
                      (&DAT_0095283b)[iVar6] = 0;
                    }
                    else {
                      (&DAT_0095282c)[iVar5 * 0xd] = (&DAT_0095282c)[iVar5 * 0xd] | 0x2000200;
                      (&DAT_0095283c)[(uint)(byte)(&DAT_0095283a)[iVar6] + iVar5 * 0x1a] = uVar8;
                      (&DAT_00952844)[(uint)(byte)(&DAT_0095283a)[iVar6] + iVar5 * 0x1a] = uVar9;
                      (&DAT_0095282c)[iVar5 * 0xd] = (&DAT_0095282c)[iVar5 * 0xd] & 0xfffeffff;
                    }
                    FUN_004d92d0();
                    FUN_00593220();
                    FUN_005310f0();
                    if (DAT_00939288 == 0) {
                      FUN_00511520();
                    }
                    local_8 = 0x39;
                    FUN_00404900();
                    local_8._0_1_ = 0x3c;
                    FUN_00605370();
                    local_8._0_1_ = 0x3b;
                    FUN_00406880();
                    local_8._0_1_ = 0x3a;
                    FUN_00406880();
                    local_8 = CONCAT31(local_8._1_3_,0x38);
                  }
                  else {
                    local_8 = 0x34;
                    FUN_00404900();
                    local_8._0_1_ = 0x37;
                    FUN_00605370();
                    local_8._0_1_ = 0x36;
                    FUN_00406880();
                    local_8._0_1_ = 0x35;
                    FUN_00406880();
                    local_8 = CONCAT31(local_8._1_3_,0x33);
                  }
                  FUN_005d4dd0();
                  goto LAB_0046eb4a;
                }
                if (DAT_009393cc == 0) {
                  if (-1 < DAT_0093928c) goto LAB_0046df0e;
                  local_8 = 0x2f;
                  FUN_00404900();
                  local_8._0_1_ = 0x32;
                  FUN_00605370();
                  local_8._0_1_ = 0x31;
                  FUN_00406880();
                  local_8._0_1_ = 0x30;
                  FUN_00406880();
                  local_8 = CONCAT31(local_8._1_3_,0x2e);
                }
                else {
                  FUN_005147e0();
                  iVar6 = FUN_005c1d50();
                  (&DAT_00952828)[iVar6 * 0x1a] = uVar8;
                  (&DAT_0095282a)[iVar6 * 0x1a] = uVar9;
                  (&DAT_00952839)[iVar6 * 0x34] = 0x18;
                  (&DAT_0095283c)[iVar6 * 0x1a] = uVar8;
                  (&DAT_00952844)[iVar6 * 0x1a] = uVar9;
                  (&DAT_0095282c)[iVar6 * 0xd] = 0;
                  FUN_004d92d0();
                  local_8 = 0x2a;
                  FUN_00404900();
                  local_8._0_1_ = 0x2d;
                  FUN_00605370();
                  local_8._0_1_ = 0x2c;
                  FUN_00406880();
                  local_8._0_1_ = 0x2b;
                  FUN_00406880();
                  local_8 = CONCAT31(local_8._1_3_,0x29);
                }
              }
            }
            else {
              FUN_004e39d0();
              iVar6 = FUN_00530d50();
              if (iVar6 == 0) {
                puVar7 = (undefined *)FUN_004e3d50();
                FUN_00625ec0();
                FUN_00625ec0();
                FUN_00406380();
                puVar11 = &DAT_0094f1a8;
                do {
                  DAT_009b86a0 = 0;
                  FUN_006169a0();
                  FUN_00645470();
                  FUN_00645470();
                  FUN_00645470();
                  FUN_004e3a00();
                  FUN_00645470();
                  FUN_00612a70();
                  puVar11 = puVar11 + 1;
                } while ((int)puVar11 < 0x94f1b4);
                iVar5 = 0;
                iVar6 = FUN_00602600();
                if (-1 < iVar6) {
                  if (puVar7 == &DAT_00682e9c) {
                    puVar7 = (undefined *)0xffffffff;
                  }
                  else if (iVar6 == 1) {
                    iVar5 = FUN_0050e160();
                    if (iVar5 == 0) {
LAB_0046dc9c:
                      FUN_00625e50();
                      FUN_0047a890();
                      goto LAB_0046dccd;
                    }
                  }
                  else if ((iVar6 == 0) &&
                          (*(char *)(DAT_0094a30c + 3 +
                                    ((short)(&DAT_0097d042)[(int)puVar7 * 0x9a] * DAT_0068faf0 +
                                    ((int)(short)(&DAT_0097d040)[(int)puVar7 * 0x9a] >> 1)) * 0x2c)
                           != *(char *)(DAT_0094a30c + 3 +
                                       (*(short *)((int)&DAT_0097d042 + iVar5) * DAT_0068faf0 +
                                       ((int)*(short *)((int)&DAT_0097d040 + iVar5) >> 1)) * 0x2c)))
                  goto LAB_0046dc9c;
                  (&DAT_0097d150)[iVar6 + 0x3eac09d8] = (short)puVar7;
                }
LAB_0046dccd:
                FUN_00530e50();
                local_8 = 0x25;
                FUN_00404900();
                local_8._0_1_ = 0x28;
                FUN_00605370();
                local_8._0_1_ = 0x27;
                FUN_00406880();
                local_8._0_1_ = 0x26;
                FUN_00406880();
                local_8 = CONCAT31(local_8._1_3_,0x24);
              }
              else {
                local_8 = 0x20;
                FUN_00404900();
                local_8._0_1_ = 0x23;
                FUN_00605370();
                local_8._0_1_ = 0x22;
                FUN_00406880();
                local_8._0_1_ = 0x21;
                FUN_00406880();
                local_8 = CONCAT31(local_8._1_3_,0x1f);
              }
            }
          }
          else {
            FUN_0046b510();
            *(undefined4 *)(extraout_ECX + 0x1dd8c) = 0;
            if (((DAT_00945ae0 == 0) || (DAT_00945ae0 == 2)) || (DAT_00945ae0 == 0x12)) {
              FUN_005c5a30();
              piVar10 = &DAT_007d3c3c;
              do {
                if ((*piVar10 != 0) &&
                   ((piVar10 == &DAT_007d3c3c || (*(int *)(*piVar10 + 0x1dd74) != 0)))) {
                  FUN_0046a550();
                }
                piVar10 = piVar10 + 1;
              } while ((int)piVar10 < 0x7d3c5c);
            }
            else {
              FUN_0046b190();
            }
            local_8 = 0x1b;
            FUN_00404900();
            local_8._0_1_ = 0x1e;
            FUN_00605370();
            local_8._0_1_ = 0x1d;
            FUN_00406880();
            local_8._0_1_ = 0x1c;
            FUN_00406880();
            local_8 = CONCAT31(local_8._1_3_,0x1a);
          }
        }
        else {
          local_8 = 0x11;
          FUN_00404900();
          local_8._0_1_ = 0x14;
          FUN_00605370();
          local_8._0_1_ = 0x13;
          FUN_00406880();
          local_8._0_1_ = 0x12;
          FUN_00406880();
          local_8 = CONCAT31(local_8._1_3_,0x10);
        }
      }
      else {
        local_8 = 0xc;
        FUN_00404900();
        local_8._0_1_ = 0xf;
        FUN_00605370();
        local_8._0_1_ = 0xe;
        FUN_00406880();
        local_8._0_1_ = 0xd;
        FUN_00406880();
        local_8 = CONCAT31(local_8._1_3_,0xb);
      }
    }
    else {
      local_8 = 7;
      FUN_00404900();
      local_8._0_1_ = 10;
      FUN_00605370();
      local_8._0_1_ = 9;
      FUN_00406880();
      local_8._0_1_ = 8;
      FUN_00406880();
      local_8 = CONCAT31(local_8._1_3_,6);
    }
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x1dd88) = 0;
    local_8 = 2;
    FUN_00404900();
    local_8._0_1_ = 5;
    FUN_00605370();
    local_8._0_1_ = 4;
    FUN_00406880();
    local_8._0_1_ = 3;
    FUN_00406880();
    local_8 = CONCAT31(local_8._1_3_,1);
  }
LAB_0046eb38:
  FUN_005d4dd0();
LAB_0046eb4a:
  local_8 = 0xffffffff;
  FUN_004064d0();
  ExceptionList = local_10;
  return;
}

