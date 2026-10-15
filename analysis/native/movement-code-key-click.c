// ev_3ba9aec13fe4fbde68c632dbe84d4a6801b5fecbfd96bee9f57903929a28daea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005178c0(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int in_ECX;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined1 local_544 [80];
  undefined1 local_4f4 [80];
  undefined1 local_4a4 [80];
  undefined1 local_454 [80];
  undefined1 local_404 [80];
  undefined1 local_3b4 [80];
  undefined1 local_364 [80];
  undefined1 local_314 [80];
  undefined1 local_2c4 [80];
  undefined1 local_274 [80];
  undefined1 local_224 [80];
  undefined1 local_1d4 [80];
  undefined1 local_184 [80];
  undefined1 local_134 [80];
  undefined1 local_e4 [80];
  undefined1 local_94 [80];
  undefined1 local_44 [4];
  undefined1 local_40 [6];
  undefined1 local_3a;
  undefined1 local_39;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0065d4d8;
  local_10 = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_10;
  local_38 = in_ECX;
  FUN_00625fb0();
  local_8 = 0;
  if ((DAT_009b2068 != 0) || ((param_2 & 0xfffcffff) == 0x12)) goto LAB_0051b64f;
  switch(param_2) {
  case 0x30041:
    DAT_00939fe3 = 0x61;
    break;
  case 0x30045:
    DAT_00939fe5 = 0x65;
    break;
  case 0x30049:
    DAT_00939fe1 = 0x69;
    break;
  case 0x30050:
    DAT_00939fe0 = 0x70;
    break;
  case 0x30052:
    DAT_00939fe2 = 0x72;
    break;
  case 0x30054:
    DAT_00939fe4 = 0x74;
    break;
  case 0x3007a:
    if (DAT_00939e8c == 0) {
      DAT_009a64e8 = DAT_009a64e8 & 0xffffff00;
      FUN_00616350(&LAB_0050e890,0,100,5);
    }
    else {
      FUN_00616730();
      DAT_009a64e8 = CONCAT31(DAT_009a64e8._1_3_,0x10);
    }
  }
  FUN_00403830();
  if (DAT_0093a940 == 0) {
    DAT_0093a944 = 1;
    goto LAB_0051b64f;
  }
  iVar4 = FUN_004bdde0();
  if ((iVar4 != 0) && ((param_2 == 0xd || (param_2 == 0x1b)))) goto LAB_0051b64f;
  if (param_2 == 0x91) {
    FUN_0045b550();
LAB_005179f5:
    if (param_1 == 0x20) goto LAB_005179fb;
LAB_00517a2d:
    if ((param_2 == 0xd) && ((iVar4 = FUN_005f7e90(), iVar4 != 0 || (DAT_007fe06c != 0))))
    goto LAB_00517a4c;
  }
  else {
    if (param_2 != 0xd) goto LAB_005179f5;
LAB_005179fb:
    if ((((DAT_0080a6bc == 0) && (DAT_00805304 == 0)) && (DAT_007cd2e8 == 0)) &&
       ((DAT_007cd11c != 1000 || (iVar4 = FUN_005f7e90(), iVar4 != 0)))) goto LAB_00517a2d;
LAB_00517a4c:
    iVar4 = FUN_005f7e90();
    if (iVar4 == 0) {
      FUN_0062b8a0(0x3e9);
    }
    iVar4 = FUN_005f7e90();
    if (iVar4 != 0) {
      FUN_00403830();
    }
    if (DAT_007fe06c != 0) {
      FUN_00479c00();
    }
    if (DAT_007cd2e8 != 0) {
      FUN_0045c170();
    }
    if ((DAT_0080a6bc != 0) || (DAT_00805304 != 0)) {
      FUN_0047a7d0();
      FUN_0047a7d0();
      goto LAB_0051b64f;
    }
  }
  FUN_00459280();
  FUN_004b8970();
  if ((0x5f < (int)param_2) && ((int)param_2 < 0x6a)) {
    param_1 = 0;
  }
  if (((param_2 == 0xd) && ((DAT_009a64c0 & 0x80) != 0)) && ((DAT_007d3c3c[0x775c] & 0x4000U) != 0))
  {
    iVar4 = FUN_005bfe90((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
    if (iVar4 < 0) {
LAB_00517b72:
      FUN_0046b190(1);
    }
    else {
      do {
        if ((&DAT_00952839)[iVar4 * 0x34] == '\x18') {
          FUN_0059bc10(iVar4,(&DAT_00952836)[iVar4 * 0x34]);
          goto LAB_00517b72;
        }
        if (iVar4 < 0) goto LAB_00517b72;
        iVar4 = (int)(short)(&DAT_00952858)[iVar4 * 0x1a];
      } while (-1 < iVar4);
      FUN_0046b190(1);
    }
    goto LAB_0051b64f;
  }
  local_28 = FUN_006466ef(param_1);
  local_39 = 0;
  local_3a = (undefined1)param_1;
  FUN_00626350(s_Key__0068aa9c,&local_3a,param_1,param_2,0);
  iVar5 = DAT_00939288;
  iVar4 = DAT_0068a5cc;
  if ((DAT_0093f660 == 0) || (((DAT_0093a938 == 0 && (DAT_0093e944 == 0)) && (DAT_0093e8c8 == 0))))
  {
    local_30 = 0;
  }
  else {
    local_30 = 1;
    if (DAT_0093a938 != 0) goto LAB_0051b64f;
  }
  if (((*(int *)(in_ECX + -0x84) == 1) && (-1 < DAT_0068a5cc)) &&
     ((iVar6 = *(int *)(in_ECX + -0x1b8), -1 < iVar6 && (DAT_00939288 != 0)))) {
    if (local_28 == 0x6a) {
      piVar10 = (int *)(&DAT_007d3c3c + DAT_0068a5cc);
      *(uint *)((int)(&DAT_007d3c3c)[DAT_0068a5cc] + 0x1dd84) =
           (uint)(*(int *)((int)(&DAT_007d3c3c)[DAT_0068a5cc] + 0x1dd84) == 0);
      FUN_005ec8a0(&local_24,&local_34);
      (**(code **)(*(int *)(*(int *)(*(int *)*piVar10 + 4) + *piVar10) + 0x44))(local_24,local_34);
      goto LAB_0051b64f;
    }
    if ((local_28 == 0x67) || (local_28 == 0x20)) {
      iVar5 = iVar6 * 0x34;
      uVar8 = (&DAT_0095282c)[iVar6 * 0xd];
      if ((uVar8 & 0x1000200) == 0x1000200) {
        if ((byte)(&DAT_0095283a)[iVar5] < 3) {
          (&DAT_0095283a)[iVar5] = (&DAT_0095283a)[iVar5] + 1;
        }
        else {
          (&DAT_0095283a)[iVar5] = 0;
        }
      }
      else if ((uVar8 & 0x2000000) == 0) {
        (&DAT_0095282c)[iVar6 * 0xd] = uVar8 | 0x2000000;
        (&DAT_0095283b)[*(int *)(in_ECX + -0x1b8) * 0x34] = 0;
        (&DAT_0095283a)[*(int *)(in_ECX + -0x1b8) * 0x34] = 1;
      }
      else {
        (&DAT_0095283a)[iVar5] = (&DAT_0095283a)[iVar5] + '\x01';
        iVar5 = *(int *)(in_ECX + -0x1b8);
        if (3 < (byte)(&DAT_0095283a)[iVar5 * 0x34]) {
          (&DAT_0095282c)[iVar5 * 0xd] = (&DAT_0095282c)[iVar5 * 0xd] & 0xfdffffff;
          (&DAT_0095283a)[*(int *)(in_ECX + -0x1b8) * 0x34] = 0;
        }
      }
      piVar10 = (int *)(&DAT_007d3c3c + iVar4);
      FUN_005ec8a0(&local_24,&local_34);
      *(undefined4 *)(*piVar10 + 0x1de10) = 0xffffffff;
      *(undefined4 *)(*piVar10 + 0x1de0c) = 0xffffffff;
      (**(code **)(*(int *)(*(int *)(*(int *)*piVar10 + 4) + *piVar10) + 0x44))(local_24,local_34);
      goto LAB_0051b64f;
    }
    (&DAT_0095282c)[iVar6 * 0xd] = (&DAT_0095282c)[iVar6 * 0xd] & 0xfdfffdff;
    (&DAT_00952839)[*(int *)(in_ECX + -0x1b8) * 0x34] = 0;
  }
  if ((((*(int *)(in_ECX + -0x84) == 8) && (*(int *)(in_ECX + -0x6014) != 0)) &&
      (iVar4 = *(int *)(in_ECX + -0x1b8), -1 < iVar4)) &&
     ((iVar5 != 0 && ((local_28 == 0x20 || (local_28 == 0x67)))))) {
    if ((byte)(&DAT_0095283a)[iVar4 * 0x34] < 3) {
      (&DAT_0095283a)[iVar4 * 0x34] = (&DAT_0095283a)[iVar4 * 0x34] + 1;
    }
    else {
      (&DAT_0095283a)[iVar4 * 0x34] = 0;
    }
    FUN_005ec8a0(&local_24,&local_34);
    DAT_007d3c3c[0x7783] = -1;
    (**(code **)(*(int *)(*(int *)(*DAT_007d3c3c + 4) + (int)DAT_007d3c3c) + 0x44))
              (local_24,local_34);
    goto LAB_0051b64f;
  }
  piVar10 = (int *)&DAT_007d3c3c;
  do {
    iVar4 = *piVar10;
    if ((((iVar4 != 0) && (((int **)piVar10 == &DAT_007d3c3c || (*(int *)(iVar4 + 0x1dd74) != 0))))
        && ((*(uint *)(iVar4 + 0x1dd70) & 0x400000) != 0)) &&
       ((local_28 == 0x67 || (local_28 == 0x70)))) {
      param_2 = 0;
      param_1 = 0;
      local_28 = 0;
    }
    piVar10 = piVar10 + 1;
  } while ((int)piVar10 < 0x7d3c5c);
  if ((*(int *)(in_ECX + -0x84) != 0) && ((local_28 == 0x67 || (local_28 == 0x70)))) {
    param_2 = 0;
    param_1 = 0;
    local_28 = 0;
  }
  FUN_0050ef50();
  local_14 = (int *)&DAT_007d3c3c;
  *(undefined4 *)(in_ECX + -0x84) = 0;
  do {
    iVar4 = *local_14;
    if ((iVar4 != 0) && (((int **)local_14 == &DAT_007d3c3c || (*(int *)(iVar4 + 0x1dd74) != 0)))) {
      if ((*(int *)(iVar4 + 0x1ef4c) != 0) || (*(int *)(iVar4 + 0x1ef50) != 0x7f00)) {
        FUN_005ec7c0(0x7f00);
        *(undefined4 *)(iVar4 + 0x1ef50) = 0x7f00;
        *(undefined4 *)(iVar4 + 0x1ef4c) = 0;
      }
      uVar8 = *(uint *)(*local_14 + 0x1dd70);
      if ((uVar8 & 0xc40000) != 0) {
        *(uint *)(*local_14 + 0x1dd70) = uVar8 & 0xff3bffff;
        FUN_0046a550(1);
      }
      FUN_005fca30();
    }
    local_14 = local_14 + 1;
  } while ((int)local_14 < 0x7d3c5c);
  if ((param_2 == 0xd) && ((&DAT_007ae778)[DAT_007d392c] == 5)) {
    FUN_004a3930();
    iVar4 = FUN_005f7e90();
    if (iVar4 != 0) {
      FUN_0041a4c0();
    }
    goto LAB_0051b64f;
  }
  iVar4 = FUN_005f7e90();
  if (iVar4 == 0) {
    if (DAT_007cd11c == 1000) {
      FUN_0062b8a0(0x3e9);
    }
    goto LAB_00518194;
  }
  switch(param_2) {
  case 0xd:
  case 0x1b:
    FUN_0041a4c0();
    goto LAB_0051b64f;
  default:
    if ((0x2f < local_28) && (local_28 < 0x3a)) {
      if ((local_30 == 0) ||
         ((DAT_0093a934 != 0 && ((DAT_0093e8f0 & 1 << ((byte)DAT_00939284 & 0x1f)) == 0)))) {
        FUN_00417040(local_28 + -0x30,0);
      }
      goto LAB_0051b64f;
    }
    break;
  case 0x21:
  case 0x25:
  case 100:
  case 0x69:
switchD_00517fdd_caseD_21:
    FUN_0041a010();
    goto LAB_0051b64f;
  case 0x22:
  case 0x27:
  case 99:
  case 0x66:
switchD_00517fdd_caseD_22:
    FUN_0041a160();
    goto LAB_0051b64f;
  }
  switch(local_28) {
  case 0x2b:
  case 0x3d:
    if ((DAT_009a64c0 & 0x40) != 0) {
      FUN_00415dd0();
      if (*(char *)(DAT_0090ea30 + 6) < 'c') {
        cVar2 = *(char *)(DAT_0090ea30 + 6) + '\x01';
LAB_00518162:
        *(char *)(DAT_0090ea30 + 6) = cVar2;
      }
      FUN_00416d90(0);
    }
  default:
switchD_00518052_caseD_2f:
    local_2c = 1;
LAB_00518194:
    if (param_2 == 0x2000d) {
      FUN_005169f0();
      goto LAB_0051b64f;
    }
    if (param_2 == 0x20020) {
      FUN_00517060();
      goto LAB_0051b64f;
    }
    if (local_2c != 0) {
LAB_0051867a:
      if ((DAT_009a64c0 & 0x40) == 0) {
LAB_0051a413:
        iVar4 = FUN_004e1f40();
        if (iVar4 == 0) {
          if (local_28 == 0x2a) {
            FUN_005165b0();
          }
          if ((0x30 < (int)param_2) && ((int)param_2 < 0x37)) {
            iVar4 = param_2 - 0x30;
            if ((int)DAT_00939284 <= iVar4) {
              iVar4 = param_2 - 0x2f;
            }
            if ((((((&DAT_0096c9f8)[DAT_00939284 * 0x20cc + iVar4 * 4] & 8) != 0) ||
                 ((DAT_009a64c0 & 0x80) != 0)) ||
                ((-1 < DAT_009a6524 && ((byte)(&DAT_0097d044)[DAT_009a6524 * 0x134] == DAT_00939284)
                 ))) || ((((byte)DAT_009a64e8 & (byte)(1 << ((byte)iVar4 & 0x1f))) != 0 &&
                         (iVar5 = FUN_00539160(), iVar5 != 0)))) {
              FUN_00558c60(iVar4);
            }
          }
        }
        goto LAB_0051a4ce;
      }
      if (local_2c == 0) {
        switch(local_28) {
        case 0x21:
          if ((DAT_009a64c0 & 0x1000) != 0) {
            DAT_009b86a0 = 0;
            FUN_00645470(&DAT_009b86a0,s_Checksum_0068ab04);
            FUN_0064fc88(DAT_00939284,local_134,10);
            FUN_00645470(&DAT_009b86a0,local_134);
            FUN_00645470(&DAT_009b86a0,&DAT_0068ab10);
            FUN_00626040(&DAT_009b86a0);
            FUN_006260d0();
            local_18 = 0;
            FUN_006260f0(s_BASE_CHECKSUMS_0068ab18,0,0,0,0);
            iVar4 = 0;
            if (0 < DAT_009a64cc) {
              puVar11 = &DAT_0097d07c;
              do {
                uVar3 = FUN_00539090(puVar11 + -0xf,7,0);
                uVar3 = FUN_00539090(puVar11,4,uVar3);
                uVar3 = FUN_00539090(puVar11 + 1,4,uVar3);
                uVar3 = FUN_00539090(puVar11 + 4,4,uVar3);
                uVar3 = FUN_00539090(puVar11 + 5,4,uVar3);
                uVar3 = FUN_00539090(puVar11 + 0xf,4,uVar3);
                uVar3 = FUN_00539090(puVar11 + 0x12,8,uVar3);
                uVar8 = FUN_00539090(puVar11 + 0x14,9,uVar3);
                local_20 = (undefined4 *)(uVar8 & 0xff);
                DAT_009b86a0 = 0;
                FUN_0064fc88(local_20,local_134,10);
                FUN_00645470(&DAT_009b86a0,local_134);
                FUN_00645470(&DAT_009b86a0,s_Base_0068ab28);
                FUN_0064fc88(iVar4,local_2c4,10);
                FUN_00645470(&DAT_009b86a0,local_2c4);
                FUN_006260f0(&DAT_009b86a0,(int)puVar11 + -0x29,local_20,0,0);
                iVar4 = iVar4 + 1;
                puVar11 = puVar11 + 0x4d;
              } while (iVar4 < DAT_009a64cc);
            }
            FUN_006260f0(&DAT_0068ab30,0,0,0,0);
            FUN_006260f0(s_LEADER_CHECKSUMS_0068ab34,0,0,0,0);
            puVar11 = &DAT_0096ee78;
            local_20 = &DAT_009472e8;
            do {
              FUN_006260f0(&DAT_0068ab48,0,0,0,0);
              DAT_009bbff0 = local_20[1];
              DAT_009bbfec = *local_20;
              FUN_006260f0(local_20 + -6,0,0,0,0);
              DAT_009b86a0 = 0;
              FUN_0064fc88(puVar11[-1],local_134,10);
              FUN_00645470(&DAT_009b86a0,local_134);
              FUN_00645470(&DAT_009b86a0,s_Research_0068ab4c);
              FUN_006260f0(&DAT_009b86a0,0,0,0,0);
              DAT_009b86a0 = 0;
              FUN_0064fc88(*puVar11,local_2c4,10);
              FUN_00645470(&DAT_009b86a0,local_2c4);
              FUN_00645470(&DAT_009b86a0,s_Researching_0068ab58);
              FUN_006260f0(&DAT_009b86a0,0,0,0,0);
              DAT_009b86a0 = 0;
              FUN_0064fc88(puVar11[0x26],local_544,10);
              FUN_00645470(&DAT_009b86a0,local_544);
              FUN_00645470(&DAT_009b86a0,s_Planet_0068ab68);
              FUN_006260f0(&DAT_009b86a0,0,0,0,0);
              DAT_009b86a0 = 0;
              FUN_0064fc88(puVar11[-0x6b],local_4a4,10);
              FUN_00645470(&DAT_009b86a0,local_4a4);
              FUN_00645470(&DAT_009b86a0,s_Energy_0068ab70);
              FUN_006260f0(&DAT_009b86a0,0,0,0,0);
              DAT_009b86a0 = 0;
              FUN_0064fc88(puVar11[-0xaa],local_454,10);
              FUN_00645470(&DAT_009b86a0,local_454);
              FUN_00645470(&DAT_009b86a0,s_Blacken_0068ab78);
              FUN_006260f0(&DAT_009b86a0,0,0,0,0);
              local_14 = puVar11 + -0x69;
              iVar4 = 0;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_404,10);
                FUN_00645470(&DAT_009b86a0,local_404);
                FUN_00645470(&DAT_009b86a0,s_Social_0068ab84);
                FUN_0064fc88(iVar4,local_4f4,10);
                FUN_00645470(&DAT_009b86a0,local_4f4);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                iVar4 = iVar4 + 1;
                local_14 = local_14 + 1;
              } while (iVar4 < 4);
              local_14 = puVar11 + 0x10f;
              iVar4 = 0;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_364,10);
                FUN_00645470(&DAT_009b86a0,local_364);
                FUN_00645470(&DAT_009b86a0,s_Satellites_0068ab8c);
                FUN_0064fc88(iVar4,local_274,10);
                FUN_00645470(&DAT_009b86a0,local_274);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                iVar4 = iVar4 + 1;
                local_14 = local_14 + 1;
              } while (iVar4 < 4);
              local_14 = puVar11 + -0xed;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_1d4,10);
                FUN_00645470(&DAT_009b86a0,local_1d4);
                FUN_00645470(&DAT_009b86a0,s_Treaties_with_0068ab98);
                DAT_009bbfec = *puVar12;
                DAT_009bbff0 = puVar12[1];
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xe5;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_224,10);
                FUN_00645470(&DAT_009b86a0,local_224);
                FUN_00645470(&DAT_009b86a0,s_Agenda_with_0068aba8);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xdd;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_314,10);
                FUN_00645470(&DAT_009b86a0,local_314);
                FUN_00645470(&DAT_009b86a0,s_Friction_with_0068abb8);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xc5;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)(char)*local_14,local_3b4,10);
                FUN_00645470(&DAT_009b86a0,local_3b4);
                FUN_00645470(&DAT_009b86a0,s_Patience_with_0068abc8);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = (int *)((int)local_14 + 1);
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xcd;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_184,10);
                FUN_00645470(&DAT_009b86a0,local_184);
                FUN_00645470(&DAT_009b86a0,s_Merc_with_0068abd8);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xd5;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_e4,10);
                FUN_00645470(&DAT_009b86a0,local_e4);
                FUN_00645470(&DAT_009b86a0,s_Spoke_with_0068abe4);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              local_14 = puVar11 + -0xa0;
              puVar12 = &DAT_00946d4c;
              do {
                DAT_009b86a0 = 0;
                FUN_0064fc88(*local_14,local_94,10);
                FUN_00645470(&DAT_009b86a0,local_94);
                FUN_00645470(&DAT_009b86a0,s_Wrongs_with_0068abf4);
                DAT_009bbff0 = puVar12[1];
                DAT_009bbfec = *puVar12;
                FUN_00645470(&DAT_009b86a0,puVar12 + -6);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                puVar12 = puVar12 + 0x167;
                local_14 = local_14 + 1;
              } while ((int)puVar12 < 0x949a2c);
              puVar11 = puVar11 + 0x833;
              local_20 = local_20 + 0x167;
            } while ((int)local_20 < 0x949a2c);
            FUN_006260f0(&DAT_0068ac04,0,0,0,0);
            FUN_006260f0(s_UNIT_CHECKSUMS_0068ac08,0,0,0,0);
            iVar4 = 0;
            if (0 < DAT_009a64c8) {
              puVar13 = &DAT_0095282a;
              do {
                uVar3 = FUN_00539090(puVar13 + -1,2,0);
                uVar3 = FUN_00539090(puVar13,2,uVar3);
                uVar3 = FUN_00539090(puVar13 + 4,3,uVar3);
                uVar3 = FUN_00539090(puVar13 + 0x11,1,uVar3);
                uVar3 = FUN_00539090(puVar13 + 0x13,1,uVar3);
                uVar8 = FUN_00539090(puVar13 + 0x16,2,uVar3);
                local_20 = (undefined4 *)(uVar8 & 0xff);
                DAT_009b86a0 = 0;
                FUN_0064fc88(local_20,local_94,10);
                FUN_00645470(&DAT_009b86a0,local_94);
                FUN_00645470(&DAT_009b86a0,s_Veh_0068ac18);
                FUN_0064fc88(iVar4,local_e4,10);
                FUN_00645470(&DAT_009b86a0,local_e4);
                FUN_00645470(&DAT_009b86a0,&DAT_00682e94);
                FUN_00645470(&DAT_009b86a0,&DAT_00946d54 + (uint)*(byte *)(puVar13 + 6) * 0x59c);
                FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                FUN_00645470(&DAT_009b86a0,&DAT_009ab868 + (short)puVar13[4] * 0x34);
                FUN_006260f0(&DAT_009b86a0,0,local_20,0,0);
                iVar4 = iVar4 + 1;
                puVar13 = puVar13 + 0x1a;
              } while (iVar4 < DAT_009a64c8);
            }
            FUN_006260f0(&DAT_0068ac20,0,0,0,0);
            FUN_006260f0(s_MAP_CHECKSUMS_0068ac24,0,0,0,0);
            local_14 = DAT_0094a30c;
            local_34 = 0;
            iVar4 = DAT_00949870;
            if (0 < DAT_00949874) {
              do {
                local_24 = local_34 & 1;
                if ((int)local_24 < iVar4) {
                  piVar10 = local_14 + 2;
                  do {
                    uVar3 = FUN_00539090(local_14,1,0);
                    uVar3 = FUN_00539090((int)piVar10 + -5,1,uVar3);
                    uVar3 = FUN_00539090(piVar10,4,uVar3);
                    uVar3 = FUN_00539090((int)piVar10 + -7,1,uVar3);
                    uVar3 = FUN_00539090((int)piVar10 + -1,1,uVar3);
                    uVar3 = FUN_00539090(piVar10 + 1,1,uVar3);
                    DAT_009b86a0 = 0;
                    FUN_0064fc88(uVar3,local_94,10);
                    FUN_00645470(&DAT_009b86a0,local_94);
                    FUN_00645470(&DAT_009b86a0,&DAT_0068ac34);
                    FUN_0064fc88(local_24,local_e4,10);
                    FUN_00645470(&DAT_009b86a0,local_e4);
                    FUN_00645470(&DAT_009b86a0,&DAT_0068ac38);
                    FUN_0064fc88(local_34,local_184,10);
                    FUN_00645470(&DAT_009b86a0,local_184);
                    FUN_00645470(&DAT_009b86a0,&DAT_0068ac3c);
                    FUN_006260f0(&DAT_009b86a0,0,uVar3,0,0);
                    local_14 = local_14 + 0xb;
                    local_24 = local_24 + 2;
                    piVar10 = piVar10 + 0xb;
                    iVar4 = DAT_00949870;
                  } while ((int)local_24 < DAT_00949870);
                }
                local_34 = local_34 + 1;
              } while ((int)local_34 < DAT_00949874);
            }
            FUN_006260f0(&DAT_0068ac40,0,0,0,0);
            FUN_006260f0(s_BASE_ENUMERATION_0068ac44,0,0,0,0);
            local_20 = (undefined4 *)0x0;
            if (0 < DAT_009a64cc) {
              psVar14 = &DAT_0097d040;
              do {
                FUN_006260f0(&DAT_0068ac58,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(local_20,local_94,10);
                FUN_00645470(&DAT_009b86a0,local_94);
                FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                FUN_00645470(&DAT_009b86a0,(int)psVar14 + 0x13);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)*psVar14,local_e4,10);
                FUN_00645470(&DAT_009b86a0,local_e4);
                FUN_00645470(&DAT_009b86a0,&DAT_0068ac5c);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)psVar14[1],local_184,10);
                FUN_00645470(&DAT_009b86a0,local_184);
                FUN_00645470(&DAT_009b86a0,&DAT_0068ac60);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)(char)psVar14[3],local_3b4,10);
                FUN_00645470(&DAT_009b86a0,local_3b4);
                FUN_00645470(&DAT_009b86a0,s_Size_0068ac64);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined1 *)((int)psVar14 + 5),local_314,10);
                FUN_00645470(&DAT_009b86a0,local_314);
                FUN_00645470(&DAT_009b86a0,s_Former_0068ac6c);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x1e),local_224,10);
                FUN_00645470(&DAT_009b86a0,local_224);
                FUN_00645470(&DAT_009b86a0,s_Nutrient_0068ac74);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x20),local_1d4,10);
                FUN_00645470(&DAT_009b86a0,local_1d4);
                FUN_00645470(&DAT_009b86a0,s_Minerals_0068ac80);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x26),local_274,10);
                FUN_00645470(&DAT_009b86a0,local_274);
                FUN_00645470(&DAT_009b86a0,s_Num_Making_0068ac8c);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x28),local_364,10);
                FUN_00645470(&DAT_009b86a0,local_364);
                FUN_00645470(&DAT_009b86a0,s_Making_0068ac98);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x3c),local_4f4,10);
                FUN_00645470(&DAT_009b86a0,local_4f4);
                FUN_00645470(&DAT_009b86a0,s_Radius_0068aca0);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x42),local_404,10);
                FUN_00645470(&DAT_009b86a0,local_404);
                FUN_00645470(&DAT_009b86a0,s_Spec_0_0068aca8);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(*(undefined4 *)(psVar14 + 0x44),local_454,10);
                FUN_00645470(&DAT_009b86a0,local_454);
                FUN_00645470(&DAT_009b86a0,s_Spec_1_0068acb0);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                iVar4 = 0;
                do {
                  DAT_009b86a0 = 0;
                  FUN_0064fc88(*(undefined1 *)(iVar4 + 0x8c + (int)psVar14),local_4a4,10);
                  FUN_00645470(&DAT_009b86a0,local_4a4);
                  FUN_00645470(&DAT_009b86a0,&DAT_0068acb8);
                  FUN_0064fc88(iVar4,local_544,10);
                  FUN_00645470(&DAT_009b86a0,local_544);
                  FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 9);
                local_20 = (undefined4 *)((int)local_20 + 1);
                psVar14 = psVar14 + 0x9a;
              } while ((int)local_20 < DAT_009a64cc);
            }
            FUN_006260f0(&DAT_0068acc0,0,0,0,0);
            FUN_006260f0(s_UNIT_ENUMERATION_0068acc4,0,0,0,0);
            iVar4 = 0;
            if (0 < DAT_009a64c8) {
              psVar14 = &DAT_00952832;
              do {
                FUN_006260f0(&DAT_0068acd8,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88(iVar4,local_94,10);
                FUN_00645470(&DAT_009b86a0,local_94);
                FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                FUN_00645470(&DAT_009b86a0,&DAT_00946d54 + (uint)*(byte *)(psVar14 + 2) * 0x59c);
                FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                FUN_00645470(&DAT_009b86a0,&DAT_009ab868 + *psVar14 * 0x34);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)psVar14[-5],local_e4,10);
                FUN_00645470(&DAT_009b86a0,local_e4);
                FUN_00645470(&DAT_009b86a0,&DAT_0068acdc);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)psVar14[-4],local_184,10);
                FUN_00645470(&DAT_009b86a0,local_184);
                FUN_00645470(&DAT_009b86a0,&DAT_0068ace0);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)*psVar14,local_3b4,10);
                FUN_00645470(&DAT_009b86a0,local_3b4);
                FUN_00645470(&DAT_009b86a0,s_proto_0068ace4);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((char)psVar14[2],local_314,10);
                FUN_00645470(&DAT_009b86a0,local_314);
                FUN_00645470(&DAT_009b86a0,&DAT_0068acec);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((char)psVar14[3],local_224,10);
                FUN_00645470(&DAT_009b86a0,local_224);
                FUN_00645470(&DAT_009b86a0,s_damage_0068acf4);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((char)psVar14[0xd],local_1d4,10);
                FUN_00645470(&DAT_009b86a0,local_1d4);
                FUN_00645470(&DAT_009b86a0,s_morale_0068acfc);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((char)psVar14[0xf],local_274,10);
                FUN_00645470(&DAT_009b86a0,local_274);
                FUN_00645470(&DAT_009b86a0,s_moves_0068ad04);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                DAT_009b86a0 = 0;
                FUN_0064fc88((int)psVar14[0x12],local_364,10);
                FUN_00645470(&DAT_009b86a0,local_364);
                FUN_00645470(&DAT_009b86a0,s_home_0068ad0c);
                FUN_006260f0(&DAT_009b86a0,0,0,0,0);
                iVar4 = iVar4 + 1;
                psVar14 = psVar14 + 0x1a;
              } while (iVar4 < DAT_009a64c8);
            }
            local_18 = 1;
            FUN_00538f30(s_Made_CHECKSUM_FILE_0068ad14,&DAT_00939ff0,0,0,0);
            in_ECX = local_38;
          }
          break;
        case 0x26:
          if ((DAT_009a64c0 & 0x1000) == 0) {
            if (DAT_0093f660 == 0) {
              bVar1 = false;
              iVar4 = DAT_009a64c8 + -1;
              *(int *)(in_ECX + -0x1b8) = iVar4;
              while (-1 < iVar4) {
                iVar4 = *(int *)(in_ECX + -0x1b8);
                if (((((short)(&DAT_0095282a)[iVar4 * 0x1a] < 0) ||
                     (DAT_00949874 <= (short)(&DAT_0095282a)[iVar4 * 0x1a])) ||
                    ((short)(&DAT_00952828)[iVar4 * 0x1a] < 0)) ||
                   (DAT_00949870 <= (short)(&DAT_00952828)[iVar4 * 0x1a])) {
                  FUN_005c08c0(iVar4);
                  FUN_00538f30(s_Killed_a_baddy__0068aac0,&DAT_00939ff0,0,0,0);
                  bVar1 = true;
                }
                iVar4 = *(int *)(in_ECX + -0x1b8) + -1;
                *(int *)(in_ECX + -0x1b8) = iVar4;
              }
              iVar4 = DAT_009a64c8 + -1;
              *(int *)(in_ECX + -0x1b8) = iVar4;
              while (-1 < iVar4) {
                iVar4 = *(int *)(in_ECX + -0x1b8);
                if (((short)(&DAT_0095285a)[iVar4 * 0x1a] == iVar4) ||
                   ((short)(&DAT_00952858)[iVar4 * 0x1a] == iVar4)) {
                  local_24 = (uint)(short)(&DAT_00952828)[iVar4 * 0x1a];
                  local_34 = (uint)(short)(&DAT_0095282a)[iVar4 * 0x1a];
                  FUN_005bffa0(iVar4);
                  FUN_005c0080(*(undefined4 *)(in_ECX + -0x1b8),local_24,local_34);
                  FUN_00538f30(s_Found_a_baddy__0068aad0,&DAT_00939ff0,0,0,0);
                  bVar1 = true;
                }
                iVar4 = *(int *)(in_ECX + -0x1b8) + -1;
                *(int *)(in_ECX + -0x1b8) = iVar4;
              }
              if (bVar1) {
                FUN_00538f30(s_Game_fixed__0068aae0,&DAT_00939ff0,0,0,0);
              }
            }
          }
          else {
            *(undefined4 *)(in_ECX + -0x1b8) = 0;
            if (0 < DAT_009a64c8) {
              do {
                iVar4 = *(int *)(in_ECX + -0x1b8);
                if (((short)(&DAT_0095285a)[iVar4 * 0x1a] == iVar4) ||
                   ((short)(&DAT_00952858)[iVar4 * 0x1a] == iVar4)) {
                  DAT_009b86a0 = 0;
                  FUN_00645470(&DAT_009b86a0,
                               &DAT_00946d54 +
                               (uint)(byte)(&DAT_00952836)[*(int *)(in_ECX + -0x1b8) * 0x34] * 0x59c
                              );
                  FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                  FUN_00645470(&DAT_009b86a0,
                               &DAT_009ab868 +
                               (short)(&DAT_00952832)[*(int *)(in_ECX + -0x1b8) * 0x1a] * 0x34);
                  FUN_00645470(&DAT_009b86a0,&DAT_00682820);
                  FUN_00645470(&DAT_009b86a0,&DAT_0068aaec);
                  FUN_0064fc88((int)(short)(&DAT_00952828)[*(int *)(in_ECX + -0x1b8) * 0x1a],
                               local_2c4,10);
                  FUN_00645470(&DAT_009b86a0,local_2c4);
                  FUN_00645470(&DAT_009b86a0,&DAT_0068aaf0);
                  FUN_0064fc88((int)(short)(&DAT_0095282a)[*(int *)(in_ECX + -0x1b8) * 0x1a],
                               local_134,10);
                  FUN_00645470(&DAT_009b86a0,local_134);
                  FUN_00645470(&DAT_009b86a0,&DAT_0068aaf4);
                  iVar4 = *(int *)(in_ECX + -0x1b8);
                  FUN_00538f30(s_Funny_Unit_0068aaf8,&DAT_009b86a0,iVar4,
                               (int)(short)(&DAT_0095285a)[iVar4 * 0x1a],
                               (int)(short)(&DAT_00952858)[iVar4 * 0x1a]);
                }
                iVar4 = *(int *)(in_ECX + -0x1b8) + 1;
                *(int *)(in_ECX + -0x1b8) = iVar4;
              } while (iVar4 < DAT_009a64c8);
            }
          }
          break;
        case 0x3b:
          if (((DAT_009a64c0 & 0x1000) != 0) &&
             (iVar4 = FUN_005bfd10(s_EDITINTERLUDE_0068aab0,DAT_00939fcc,0), iVar4 == 0)) {
            DAT_00939fcc = FUN_00645da7(&DAT_009bb5e8);
            _DAT_009a64a4 = _DAT_009a64a4 & ~(1 << ((byte)DAT_00939fcc & 0x1f));
            FUN_005230e0(DAT_00939fcc,0,1,0);
          }
          break;
        case 0x40:
          local_38 = 0;
          local_2c = 0;
          bVar1 = false;
          iVar5 = 0xa0;
          local_28 = 1;
          local_14 = (int *)0x4;
          iVar4 = 0x1e;
          param_2 = 0x14;
joined_r0x00518755:
          do {
            if (iVar4 != 0) {
              if (param_2 != 0) {
                if (iVar5 == 1 || iVar5 + -1 < 0) {
                  local_20 = (undefined4 *)0x0;
                }
                else {
                  iVar6 = _rand();
                  local_20 = (undefined4 *)(iVar6 % iVar5);
                }
                iVar6 = _rand();
                if (iVar6 % 0x30 < (int)local_20) {
                  param_2 = param_2 + -1;
                  local_38 = local_38 + 1;
                }
                else {
                  iVar4 = iVar4 + -1;
                  local_2c = local_2c + 1;
                }
                goto joined_r0x00518755;
              }
              if (iVar4 != 0) {
                if (((iVar5 == -0x2f || iVar5 + 0x2f < 0) ||
                    (iVar6 = _rand(), iVar6 % (iVar5 + 0x30) < 0x30)) && (!bVar1)) {
                  bVar1 = true;
                  iVar5 = iVar5 + iVar5 / 2;
                }
                local_14 = (int *)((int)local_14 + -1);
                if ((int)local_14 < 1) {
                  local_14 = (int *)0x4;
                  local_28 = 1;
                  iVar4 = 0x1e;
                  param_2 = 0x14;
                  iVar5 = 0xa0;
                  FUN_005fc7f0();
                }
                else {
                  param_2 = 0x14;
                  FUN_005fc7f0();
                }
                goto joined_r0x00518755;
              }
            }
            local_28 = local_28 + -1;
            if (local_28 < 1) {
              local_14 = (int *)0x4;
              local_28 = 1;
              iVar4 = 0x1e;
              param_2 = 0x14;
              bVar1 = false;
              iVar5 = 0xa0;
              FUN_005fc7f0();
            }
            else {
              iVar4 = 0x1e;
              bVar1 = false;
              iVar5 = 0xa0;
              FUN_005fc7f0();
            }
          } while( true );
        case 0x79:
          DAT_009a64c0 = DAT_009a64c0 ^ 0x80;
          if (((DAT_009a64c0 & 0x80) == 0) || ((DAT_009a64c0 & 0x40) == 0)) {
            (**(code **)(DAT_007b0cb8 + 8))();
          }
          else {
            (**(code **)(DAT_007b0cb8 + 4))(0);
          }
          FUN_00592a80();
          FUN_0046b190(1);
          FUN_005d5a70();
          FUN_0058ee50();
          FUN_00458900(0);
          FUN_004b9ea0();
          FUN_0046fb10();
        }
        if ((int)param_2 < 0x20072) {
          if (param_2 == 0x20071) {
            FUN_004dfad0();
          }
          else {
            switch(param_2) {
            case 0x10070:
              FUN_004ded00();
              break;
            case 0x10071:
              FUN_005be530(DAT_00939284);
              break;
            case 0x10072:
              FUN_004df4f0();
              break;
            case 0x10073:
              FUN_004e0120();
              break;
            case 0x10074:
              FUN_004e0210();
              break;
            case 0x10075:
              FUN_004e05e0();
              break;
            case 0x10076:
              FUN_005adbf0();
              break;
            case 0x10077:
              FUN_00515f70();
              break;
            case 0x10078:
              FUN_004db870();
              break;
            case 0x10079:
              FUN_004dc230();
              break;
            case 0x1007a:
              FUN_004dc520();
              break;
            case 0x1007b:
              FUN_004dccc0();
            }
          }
        }
        else if ((int)param_2 < 0x30071) {
          if (param_2 == 0x30070) {
            FUN_004dda50(0xffffffff);
          }
          else {
            switch(param_2) {
            case 0x20074:
              FUN_004e09e0();
              break;
            case 0x20075:
              FUN_004e09b0();
              break;
            case 0x20076:
              FUN_005a9eb0(1);
              break;
            case 0x20077:
              FUN_004dbc40();
              break;
            case 0x20078:
              FUN_004dbd20();
            }
          }
        }
        else if ((int)param_2 < 0x40009) {
          if (param_2 == 0x40008) {
            FUN_004e1f20();
          }
          else {
            switch(param_2) {
            case 0x30071:
              local_20 = (undefined4 *)0x0;
              iVar4 = 0;
              local_14 = &DAT_0094f380;
              do {
                iVar5 = FUN_005b9f20(iVar4,DAT_00939284);
                if (((iVar5 == 0) && (-2 < local_14[-1])) && (-2 < *local_14)) {
                  local_20 = (undefined4 *)((int)local_20 + 1);
                  FUN_0050ba00(iVar4,local_40,local_44);
                  (&DAT_009a6670)[iVar4] =
                       (&DAT_009a6670)[iVar4] |
                       '\x01' << ((byte)*(undefined4 *)(in_ECX + -0x1c0) & 0x1f);
                  *(int *)(&DAT_0096cd3c + *(int *)(in_ECX + -0x1c0) * 0x20cc) =
                       *(int *)(&DAT_0096cd3c + *(int *)(in_ECX + -0x1c0) * 0x20cc) + 1;
                  if ((int)local_14 < 0x9502cc) {
                    *(int *)(&DAT_0096cd3c + *(int *)(in_ECX + -0x1c0) * 0x20cc) =
                         *(int *)(&DAT_0096cd3c + *(int *)(in_ECX + -0x1c0) * 0x20cc) + 1;
                  }
                }
                iVar4 = iVar4 + 1;
                local_14 = local_14 + 0xb;
              } while ((int)local_14 < 0x9502a0);
              if (local_20 == (undefined4 *)0x0) {
                iVar4 = 0;
                *(undefined4 *)(&DAT_0096cd3c + *(int *)(in_ECX + -0x1c0) * 0x20cc) = 1;
                do {
                  (&DAT_009a6670)[iVar4] =
                       (&DAT_009a6670)[iVar4] &
                       ~('\x01' << ((byte)*(undefined4 *)(in_ECX + -0x1c0) & 0x1f));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 0x59);
              }
              break;
            case 0x30072:
              FUN_004dd6f0();
              break;
            case 0x30074:
              FUN_004e0a00();
              break;
            case 0x30075:
              FUN_004e0290();
              break;
            case 0x30076:
              FUN_0051bba0(1,0);
              break;
            case 0x30077:
              FUN_004dbb40();
              break;
            case 0x30078:
              FUN_004dbfb0();
              break;
            case 0x30079:
              FUN_004e1f70();
              break;
            case 0x3007b:
              FUN_004dc860();
            }
          }
        }
      }
      if (((DAT_009a64c0 & 0x40) == 0) || (local_2c != 0)) goto LAB_0051a413;
      switch(local_28) {
      case 0x24:
        if ((DAT_009a64c0 & 0x1000) != 0) {
          uVar8 = DAT_007d3c3c[0x775c] ^ 4;
LAB_0051a3e8:
          DAT_007d3c3c[0x775c] = uVar8;
        }
        goto LAB_0051a3ee;
      case 0x25:
        if ((DAT_009a64c0 & 0x1000) != 0) {
          uVar8 = DAT_007d3c3c[0x775c] ^ 0x2000;
          goto LAB_0051a3e8;
        }
        goto LAB_0051a3ee;
      case 0x2a:
        if ((DAT_009a64c0 & 0x1000) != 0) {
          uVar8 = DAT_007d3c3c[0x775c] ^ 0x10000;
          goto LAB_0051a3e8;
        }
LAB_0051a3ee:
        FUN_0046b190(1);
        break;
      case 0x30:
        FUN_004e10c0();
        break;
      case 0x31:
        FUN_004e0a50(0);
        break;
      case 0x32:
        FUN_004e0a50(1);
        break;
      case 0x33:
        FUN_004e0a50(2);
        break;
      case 0x34:
        FUN_004e0a50(3);
        break;
      case 0x35:
        FUN_004e0a50(4);
        break;
      case 0x36:
        FUN_004e0b00();
        break;
      case 0x37:
        FUN_004e0ea0();
        break;
      case 0x38:
        FUN_004e0fa0();
        break;
      case 0x39:
        FUN_004e0fd0();
      }
      DAT_0090d91c = DAT_0090d91c | 4;
      FUN_005d5a70();
LAB_0051a4ce:
      if ((local_28 == 0x77) || (param_2 == 9)) {
        if ((local_30 == 0) && ((local_2c == 0 && (iVar4 = FUN_004e1f40(), iVar4 == 0)))) {
          if (DAT_00939288 == 0) {
            FUN_00511520(0);
          }
          else {
            FUN_004d04a0(*(undefined4 *)(in_ECX + -0x1b8));
          }
        }
        else {
          iVar4 = FUN_004e1f40();
          if (iVar4 != 0) {
            FUN_0047a890(s_PROTECTED_0068ad28,5000,0,0);
          }
        }
      }
      if ((int)param_2 < 0x20044) {
        if (param_2 == 0x20043) {
          FUN_00515770(0);
        }
        else if ((int)param_2 < 0x78) {
          if (param_2 == 0x77) {
            FUN_004acb80(0);
          }
          else {
            switch(param_2) {
            case 8:
              if (local_2c != 0) goto LAB_0051b64f;
              *(undefined4 *)(in_ECX + -0x19c) = 0;
              if (*(int *)(in_ECX + -0x194) != 0) {
                *(undefined4 *)(in_ECX + -0x194) = 0;
                FUN_0046a550(1);
              }
              FUN_0046ad60();
              if (DAT_00939288 != 0) {
                FUN_00446b40(0x1e);
                *(undefined4 *)(in_ECX + -0x1bc) = 0;
                *(undefined4 *)(in_ECX + -0x19c) = 1;
                *(undefined4 *)(in_ECX + -0x198) = 1;
                if (*(int *)(in_ECX + -0x194) != 0) {
                  *(undefined4 *)(in_ECX + -0x194) = 0;
                  FUN_0046a550(1);
                }
                FUN_0046ae00();
                FUN_00458900(0);
                FUN_004b9ea0();
                FUN_0046fb10();
                FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
              }
              iVar4 = *(int *)(in_ECX + -0x18c) + -1;
              *(int *)(in_ECX + -0x18c) = iVar4;
              if (iVar4 < 0) {
                *(undefined4 *)(in_ECX + -0x18c) = 0x1f;
              }
              FUN_004b9f90((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
              FUN_0046b310((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
              goto LAB_0051b081;
            case 0xd:
switchD_0051a573_caseD_d:
              if (((DAT_009a64c0 & 2) == 0) || (iVar4 = FUN_004e1f40(), iVar4 != 0)) {
                iVar4 = FUN_004e3a50((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
                if (-1 < iVar4) {
                  local_20 = (undefined4 *)(uint)(byte)(&DAT_0097d044)[iVar4 * 0x134];
                  if ((((local_20 == (undefined4 *)DAT_00939284) ||
                       (local_38 = 1,
                       ((&DAT_0097d04a)[iVar4 * 0x134] & (byte)(1 << ((byte)DAT_00939284 & 0x1f)))
                       != 0)) || ((DAT_009a64c0 & 0x80) != 0)) &&
                     ((((DAT_009a64c0 & 0x80) != 0 || (local_20 == (undefined4 *)DAT_00939284)) ||
                      (iVar5 = FUN_0055bc00(local_20), iVar5 != 0)))) {
                    FUN_0041a920(iVar4,0);
                  }
                }
              }
              else {
                *(undefined4 *)(in_ECX + -0x1b0) = 0;
                *(undefined4 *)(in_ECX + -0x1ac) = 0;
              }
              break;
            case 0x13:
              if (DAT_0093f660 != 0) {
                if ((DAT_0093e8e0 & 1 << ((byte)DAT_00939284 & 0x1f)) == 0) {
                  if (((byte)DAT_009a681c & 0x10) != 0) {
                    FUN_0047a890(s_SIMULNOT_0068ad34,5000,0,0);
                    FUN_00479330(0);
                    break;
                  }
                  uVar15 = 0x4c00;
                }
                else {
                  uVar15 = 0x4c01;
                }
                FUN_00592ee0(uVar15,0,0,0,0,0);
                FUN_00479330(0);
              }
              break;
            case 0x1b:
              if ((&DAT_007ae778)[DAT_007d392c] != 5) {
                if ((DAT_0093f660 == 0) && (DAT_0093a95c == 0)) {
LAB_0051a644:
                  pcVar7 = s_REALLYQUIT_0068a7e4;
                }
                else {
                  iVar4 = FUN_0050ba30(DAT_009a64e8 & 0xff);
                  pcVar7 = s_REALLYWIMPOUT_0068a7d4;
                  if (iVar4 < 2) goto LAB_0051a644;
                }
                iVar4 = FUN_005bf310(pcVar7,0);
                if (iVar4 == 0) break;
                if (DAT_0093a95c != 0) {
                  DAT_009a64e8 = CONCAT31(DAT_009a64e8._1_3_,
                                          (byte)DAT_009a64e8 &
                                          ~('\x01' << ((byte)DAT_00939284 & 0x1f)));
                  FUN_005a9eb0(0);
                }
                if (((DAT_009a649c & 0x400) != 0) && (DAT_0093a95c == 0)) {
                  FUN_005abd20();
                }
                goto joined_r0x0051a6a3;
              }
              FUN_004a3930();
              break;
            case 0x70:
              FUN_00429180(0xe,0);
              break;
            case 0x71:
              FUN_004ac9a0();
              break;
            case 0x72:
              FUN_004ac9f0();
              break;
            case 0x73:
              FUN_004aca40();
              break;
            case 0x74:
              FUN_004aca90();
              break;
            case 0x75:
              FUN_004acae0();
              break;
            case 0x76:
              FUN_004acb30();
            }
          }
        }
        else if ((int)param_2 < 0x1000e) {
          if (param_2 == 0x1000d) goto switchD_0051a573_caseD_d;
          if ((int)param_2 < 0x7b) {
            if (param_2 == 0x7a) {
              if ((_DAT_009a6494 & 0x200000) == 0) {
                _DAT_009a6494 = _DAT_009a6494 | 0x200000;
                FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
                FUN_005bf310(s_MENUDETAIL_0068a9c0,0);
              }
              else {
                _DAT_009a6494 = _DAT_009a6494 & 0xffdfffff;
                FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
                FUN_005bf310(s_MENUSIMPLE_0068a9cc,0);
              }
            }
            else if (param_2 == 0x78) {
              FUN_00476a50(0);
            }
            else if (param_2 == 0x79) {
              FUN_0044ae50(0);
            }
          }
          else if (param_2 == 0x7b) {
            FUN_0045d170(0x3ec);
          }
          else if (param_2 == 0x10008) {
            if (local_2c != 0) goto LAB_0051b64f;
            FUN_00510b70();
            goto LAB_0051b081;
          }
        }
        else if ((int)param_2 < 0x20042) {
          if (param_2 == 0x20041) {
            FUN_00514f10();
          }
          else {
            if (param_2 == 0x1004e) {
              if (local_2c != 0) goto LAB_0051b64f;
              FUN_005162a0(0xffffffff,0xffffffff);
              goto LAB_0051b081;
            }
            if (param_2 == 0x10051) {
              FUN_00514b30();
              goto switchD_0051ac32_caseD_20051;
            }
          }
        }
        else if (param_2 == 0x20042) {
          if (local_2c != 0) goto LAB_0051b64f;
          FUN_004d61a0(0xffffffff,0xfffffffe,0);
          goto LAB_0051b081;
        }
        goto switchD_0051a573_caseD_9;
      }
      if ((int)param_2 < 0x20074) {
        if (param_2 == 0x20073) {
          FUN_00625ec0(0,PTR_s_RELEASE_2_0_00691870,0xffffffff,0xffffffff);
          FUN_00625ec0(1,PTR_s_20_Dec_1999_00691874,0xffffffff,0xffffffff);
          FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_VERSIONCONTROLX_0068aa8c,0,s_ac_logo_sm_pcx_0068aa7c,
                       0);
          goto switchD_0051a573_caseD_9;
        }
        switch(param_2) {
        case 0x20047:
          uVar15 = 0x20a;
          DAT_009a6490 = DAT_009a6490 ^ 0x100;
          uVar8 = DAT_009a6490 & 0x100;
          goto LAB_0051b026;
        case 0x20049:
          FUN_00514f30();
          break;
        case 0x2004b:
          FUN_004d9970();
          break;
        case 0x2004c:
          if ((DAT_0093f660 == 0) || ((DAT_009a64c0 & 0x1000) != 0))
          goto switchD_0051adc7_caseD_3004c;
          break;
        case 0x2004d:
          FUN_00514f40();
          break;
        case 0x2004e:
          if ((_DAT_009a6494 & 0x1000) == 0) {
            if ((_DAT_009a6494 & 0x2000) == 0) {
              DAT_0094b468 = _DAT_009a6494 | 0x2000;
              _DAT_009a6494 = DAT_0094b468;
            }
            else {
              DAT_0094b468 = _DAT_009a6494 | 0x1000;
              _DAT_009a6494 = DAT_0094b468;
            }
          }
          else {
            DAT_0094b468 = _DAT_009a6494 & 0xffffcfff;
            _DAT_009a6494 = DAT_0094b468;
          }
          goto LAB_0051b046;
        case 0x2004f:
          FUN_00514f00();
          break;
        case 0x20050:
          FUN_00514ef0();
          break;
        case 0x20051:
switchD_0051ac32_caseD_20051:
          if ((DAT_0093f660 == 0) && (DAT_0093a95c == 0)) {
LAB_0051aa3a:
            pcVar7 = s_REALLYQUIT_0068a7e4;
          }
          else {
            iVar4 = FUN_0050ba30(DAT_009a64e8 & 0xff);
            pcVar7 = s_REALLYWIMPOUT_0068a7d4;
            if (iVar4 < 2) goto LAB_0051aa3a;
          }
          iVar4 = FUN_005bf310(pcVar7,0);
          if (iVar4 != 0) {
            if (DAT_0093a95c != 0) {
              DAT_009a64e8 = CONCAT31(DAT_009a64e8._1_3_,
                                      (byte)DAT_009a64e8 & ~('\x01' << ((byte)DAT_00939284 & 0x1f)))
              ;
              FUN_005a9eb0(0);
            }
            if (((DAT_009a649c & 0x400) != 0) && (DAT_0093a95c == 0)) {
              FUN_005abd20();
            }
joined_r0x0051a6a3:
            if (DAT_0093f660 != 0) {
              FUN_0052e050();
              DAT_0093e8c0 = 0;
              _DAT_0093e8c4 = 0;
              DAT_0093e8c8 = 0;
              _DAT_0093e8cc = 0;
              DAT_0093e8f0 = 0;
              DAT_0093e8ec = 0;
              DAT_0093e8fc = 0;
              DAT_0093e8f8 = 0;
              DAT_0093e90c = 0;
              _DAT_0093e938 = 0;
              _DAT_0093e930 = 0;
              _DAT_0093e934 = 0;
              _DAT_0093e95c = 0;
              _DAT_0093e958 = 0;
              DAT_0093e8e0 = 0;
              _DAT_0093e8e4 = 0;
              _DAT_0093e8e8 = 0;
              _DAT_0093e954 = 0;
              _DAT_0093e950 = 0;
              DAT_0093e940 = 0;
              DAT_0093e93c = 0;
              DAT_0093e944 = 0;
              DAT_0093e8d0 = 0;
              DAT_0093e8d4 = 0;
              DAT_0093e968 = 0;
              DAT_0093e964 = 0;
              DAT_0093e8d8 = 0;
              _DAT_0093e8dc = 0;
              DAT_0093e960 = 0xff;
              DAT_0093e908 = 0;
              puVar11 = &DAT_0093e910;
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              FUN_005900d0();
              FUN_004e25b0();
              DAT_0093f660 = 0;
              in_ECX = local_38;
            }
            DAT_009b2068 = 1;
            FUN_006262f0(s_Quit_____________________________0068a7f0,0,0,0);
          }
          break;
        case 0x20053:
          FUN_005a9eb0(0);
          break;
        case 0x20057:
          FUN_00514f20();
          break;
        case 0x20058:
          if (local_2c != 0) goto LAB_0051b64f;
          FUN_005150d0(0x208,0);
          goto LAB_0051b081;
        case 0x2005a:
          if (local_2c != 0) goto LAB_0051b64f;
          FUN_005150d0(0x207,0);
          goto LAB_0051b081;
        }
        goto switchD_0051a573_caseD_9;
      }
      switch(param_2) {
      case 0x30041:
        DAT_007d3c3c[0x775c] = DAT_007d3c3c[0x775c] ^ 0x40000;
        FUN_0046b190(1);
        break;
      case 0x30047:
        uVar15 = 0x20b;
        DAT_009a6490 = DAT_009a6490 ^ 0x200;
        uVar8 = DAT_009a6490 & 0x200;
LAB_0051b026:
        if (uVar8 == 0) {
          FUN_005fb7c0(2,uVar15);
        }
        else {
          FUN_005fb760(2,uVar15);
        }
        DAT_0094b464 = DAT_009a6490;
        goto LAB_0051b046;
      case 0x3004c:
switchD_0051adc7_caseD_3004c:
        FUN_0051bba0(0,0);
        break;
      case 0x3004e:
        if (local_2c != 0) goto LAB_0051b64f;
        FUN_00516490(0xffffffff,0xffffffff);
        goto LAB_0051b081;
      case 0x30051:
        if (DAT_0093f660 == 0) {
          if (DAT_0093a95c == 0) {
LAB_0051ae70:
            pcVar7 = s_REALLYQUIT_0068a7e4;
          }
          else {
            iVar4 = FUN_0050ba30(DAT_009a64e8 & 0xff);
            pcVar7 = s_REALLYWIMPOUT_0068a7d4;
            if (iVar4 < 2) goto LAB_0051ae70;
          }
          iVar4 = FUN_005bf310(pcVar7,0);
          if (iVar4 != 0) {
            if (DAT_0093a95c != 0) {
              DAT_009a64e8 = CONCAT31(DAT_009a64e8._1_3_,
                                      (byte)DAT_009a64e8 & ~('\x01' << ((byte)DAT_00939284 & 0x1f)))
              ;
              FUN_005a9eb0(0);
            }
            if (((DAT_009a649c & 0x400) != 0) && (DAT_0093a95c == 0)) {
              FUN_005abd20();
            }
            if (DAT_0093f660 != 0) {
              FUN_0052e050();
              DAT_0093e8c0 = 0;
              _DAT_0093e8c4 = 0;
              DAT_0093e8c8 = 0;
              _DAT_0093e8cc = 0;
              DAT_0093e8f0 = 0;
              DAT_0093e8ec = 0;
              DAT_0093e8fc = 0;
              DAT_0093e8f8 = 0;
              DAT_0093e90c = 0;
              _DAT_0093e938 = 0;
              _DAT_0093e930 = 0;
              _DAT_0093e934 = 0;
              _DAT_0093e95c = 0;
              _DAT_0093e958 = 0;
              DAT_0093e8e0 = 0;
              _DAT_0093e8e4 = 0;
              _DAT_0093e8e8 = 0;
              _DAT_0093e954 = 0;
              _DAT_0093e950 = 0;
              DAT_0093e940 = 0;
              DAT_0093e93c = 0;
              DAT_0093e944 = 0;
              DAT_0093e8d0 = 0;
              DAT_0093e8d4 = 0;
              DAT_0093e968 = 0;
              DAT_0093e964 = 0;
              DAT_0093e8d8 = 0;
              _DAT_0093e8dc = 0;
              DAT_0093e960 = 0xff;
              DAT_0093e908 = 0;
              puVar11 = &DAT_0093e910;
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              FUN_005900d0();
              FUN_004e25b0();
              DAT_0093f660 = 0;
              in_ECX = local_38;
            }
            DAT_009b2068 = 1;
            FUN_006262f0(s_Quit_____________________________0068a7f0,0,0,0);
          }
          if (DAT_009b2068 != 0) {
            DAT_0093a948 = 1;
          }
        }
        break;
      case 0x30057:
        _DAT_009a6494 = _DAT_009a6494 ^ 1;
        FUN_0046b190(1);
        FUN_0059e5d0(0);
        break;
      case 0x30058:
        _DAT_009a6494 = _DAT_009a6494 ^ 0x10000;
        if ((_DAT_009a6494 & 0x10000) == 0) {
          FUN_005fb7c0(2,0x209);
          DAT_0094b468 = _DAT_009a6494;
        }
        else {
          FUN_005fb760(2,0x209);
          DAT_0094b468 = _DAT_009a6494;
        }
LAB_0051b046:
        FUN_0059e5d0(0);
        FUN_0046b190(1);
        break;
      case 0x30073:
        FUN_00428df0();
      }
switchD_0051a573_caseD_9:
      if (local_2c != 0) goto LAB_0051b64f;
LAB_0051b081:
      local_20 = (undefined4 *)(param_2 & 0x20000);
      uVar8 = param_2;
      if (local_20 != (undefined4 *)0x0) {
        uVar8 = param_2 & 0xfffcffff;
      }
      if ((int)uVar8 < 0x62) {
        if (uVar8 == 0x61) {
switchD_0051b0ab_caseD_23:
          iVar4 = 4;
        }
        else {
          switch(uVar8) {
          case 0x21:
switchD_0051b0ab_caseD_21:
            iVar4 = 0;
            break;
          case 0x22:
switchD_0051b0ab_caseD_22:
            iVar4 = 2;
            break;
          case 0x23:
            goto switchD_0051b0ab_caseD_23;
          case 0x24:
switchD_0051b0ab_caseD_24:
            iVar4 = 6;
            break;
          case 0x25:
switchD_0051b0ab_caseD_25:
            iVar4 = 5;
            break;
          case 0x26:
switchD_0051b0ab_caseD_26:
            iVar4 = 7;
            break;
          case 0x27:
switchD_0051b0ab_caseD_27:
            iVar4 = 1;
            break;
          case 0x28:
switchD_0051b0ab_caseD_28:
            iVar4 = 3;
            break;
          default:
            goto switchD_0051b0ab_default;
          }
        }
        if ((local_20 == (undefined4 *)0x0) || ((param_2 & 0x10000) == 0)) {
          if (DAT_00939288 != 0) {
            iVar5 = FUN_004e1f40();
            if (iVar5 == 0) {
              if ((local_30 == 0) && (-1 < *(int *)(in_ECX + -0x1b8))) {
                if (local_20 == (undefined4 *)0x0) {
                  iVar5 = FUN_0052dc70();
                  if (iVar5 == 0) {
                    iVar5 = FUN_005c1b70(*(undefined4 *)(in_ECX + -0x1b8));
                    if (iVar5 == 0) {
                      FUN_0047a890(s_UNITMOVED_0068ad48,5000,0,0);
                      *(undefined4 *)(in_ECX + -0x1b0) = 0;
                    }
                    else {
                      FUN_00531780(*(undefined4 *)(in_ECX + -0x1b8),iVar4,0);
                    }
                  }
                  else {
                    FUN_0047a890(s_SIMULNO_0068ad40,5000,0,0);
                  }
                }
                else {
                  (&DAT_00952839)[*(int *)(in_ECX + -0x1b8) * 0x34] = 0x19;
                  param_2._0_2_ = (undefined2)iVar4;
                  (&DAT_0095283c)[*(int *)(in_ECX + -0x1b8) * 0x1a] = (undefined2)param_2;
                  (&DAT_0095283e)[*(int *)(in_ECX + -0x1b8) * 0x1a] =
                       (&DAT_00952828)[*(int *)(in_ECX + -0x1b8) * 0x1a];
                  (&DAT_00952846)[*(int *)(in_ECX + -0x1b8) * 0x1a] =
                       (&DAT_0095282a)[*(int *)(in_ECX + -0x1b8) * 0x1a];
                }
              }
              goto LAB_0051b64f;
            }
            if (DAT_00939288 != 0) {
              FUN_00446b40(0x1e);
              *(undefined4 *)(in_ECX + -0x19c) = 1;
              *(undefined4 *)(in_ECX + -0x198) = 1;
              *(undefined4 *)(in_ECX + -0x1bc) = 0;
              if (*(int *)(in_ECX + -0x194) != 0) {
                *(undefined4 *)(in_ECX + -0x194) = 0;
                FUN_0046a550(1);
              }
              FUN_0046ae00();
              FUN_00458900(0);
              FUN_004b9ea0();
              FUN_0046fb10();
              FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
            }
          }
          iVar5 = (&DAT_0066ef50)[iVar4] + (&DAT_009392c0)[DAT_009392b8];
          if ((DAT_0094988c & 1) == 0) {
            if (iVar5 < 0) {
              iVar5 = iVar5 + DAT_00949870;
            }
            else if (DAT_00949870 <= iVar5) {
              iVar5 = iVar5 - DAT_00949870;
            }
          }
          iVar4 = (&DAT_0066ef74)[iVar4] + (&DAT_00939340)[DAT_009392b8];
          if ((((-1 < iVar4) && (iVar4 < DAT_00949874)) && (-1 < iVar5)) && (iVar5 < DAT_00949870))
          {
            *(undefined4 *)(in_ECX + -0x19c) = 0;
            if (*(int *)(in_ECX + -0x194) != 0) {
              *(undefined4 *)(in_ECX + -0x194) = 0;
              FUN_0046a550(1);
            }
            FUN_0046ad60();
            FUN_005109b0(iVar5,iVar4);
            FUN_004b9ea0();
            *(undefined4 *)(in_ECX + -0x19c) = 1;
            *(undefined4 *)(in_ECX + -0x198) = 1;
            FUN_0046ad60();
            FUN_0046b310(iVar5,iVar4);
          }
        }
        else if (iVar4 == 5) {
          FUN_004b89c0();
        }
        else if (iVar4 == 1) {
          FUN_004b8bd0();
        }
        goto LAB_0051b64f;
      }
      if ((int)uVar8 < 0x10026) {
        if (uVar8 == 0x10025) goto switchD_0051b146_caseD_10064;
        switch(uVar8) {
        case 0x62:
          goto switchD_0051b0ab_caseD_28;
        case 99:
          goto switchD_0051b0ab_caseD_22;
        case 100:
          goto switchD_0051b0ab_caseD_25;
        case 0x66:
          goto switchD_0051b0ab_caseD_27;
        case 0x67:
          goto switchD_0051b0ab_caseD_24;
        case 0x68:
          goto switchD_0051b0ab_caseD_26;
        case 0x69:
          goto switchD_0051b0ab_caseD_21;
        }
        goto switchD_0051b0ab_default;
      }
      switch(uVar8) {
      case 0x10026:
      case 0x10068:
        iVar5 = (DAT_007d3c3c[0x7774] + 2) / 3;
        iVar4 = DAT_007d3c3c[0x776a];
        if ((iVar5 < 0) || (iVar4 < 0)) {
          iVar5 = 0;
        }
        else if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        uVar9 = DAT_007d3c3c[0x7768] - iVar5;
        goto LAB_0051b188;
      case 0x10027:
      case 0x10066:
        uVar8 = (DAT_007d3c3c[0x7773] + 2) / 3 + DAT_007d3c3c[0x7767];
        if ((DAT_0094988c & 1) == 0) {
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + DAT_00949870;
          }
          else if (DAT_00949870 <= (int)uVar8) {
            uVar8 = uVar8 - DAT_00949870;
          }
        }
        local_24 = uVar8;
        if (uVar8 == DAT_007d3c3c[0x7767]) break;
        uVar9 = DAT_007d3c3c[0x7768];
        goto LAB_0051b19f;
      case 0x10028:
      case 0x10062:
        iVar4 = (DAT_007d3c3c[0x7774] + 2) / 3;
        iVar5 = ((DAT_00949874 + DAT_007d3c3c[0x7776] * -2) - DAT_007d3c3c[0x776a]) + 1;
        if ((iVar4 < 0) || (iVar5 < 0)) {
          iVar5 = 0;
        }
        else if (iVar4 <= iVar5) {
          uVar9 = iVar4 + DAT_007d3c3c[0x7768];
          goto LAB_0051b188;
        }
        uVar9 = iVar5 + DAT_007d3c3c[0x7768];
LAB_0051b188:
        local_34 = uVar9;
        if (uVar9 != DAT_007d3c3c[0x7768]) {
          uVar8 = DAT_007d3c3c[0x7767];
LAB_0051b19f:
          FUN_0046b1f0(uVar8,uVar9,1);
        }
        break;
      case 0x10064:
switchD_0051b146_caseD_10064:
        uVar8 = DAT_007d3c3c[0x7767] - (DAT_007d3c3c[0x7773] + 2) / 3;
        if ((DAT_0094988c & 1) == 0) {
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + DAT_00949870;
          }
          else if (DAT_00949870 <= (int)uVar8) {
            uVar8 = uVar8 - DAT_00949870;
          }
        }
        local_24 = uVar8;
        if (uVar8 != DAT_007d3c3c[0x7767]) {
          uVar9 = DAT_007d3c3c[0x7768];
          goto LAB_0051b19f;
        }
      }
switchD_0051b0ab_default:
      if (DAT_00939288 != 0) {
        iVar4 = FUN_004e1f40();
        if (iVar4 == 0) {
          if (-1 < DAT_0093928c) {
            FUN_005171d0(param_1,local_28,param_2);
          }
          goto LAB_0051b64f;
        }
        if (DAT_00939288 != 0) {
          FUN_00446b40(0x1e);
          *(undefined4 *)(in_ECX + -0x19c) = 1;
          *(undefined4 *)(in_ECX + -0x198) = 1;
          *(undefined4 *)(in_ECX + -0x1bc) = 0;
          if (*(int *)(in_ECX + -0x194) != 0) {
            *(undefined4 *)(in_ECX + -0x194) = 0;
            FUN_0046a550(1);
          }
          FUN_0046ae00();
          FUN_00458900(0);
          FUN_004b9ea0();
          FUN_0046fb10();
          FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
        }
      }
      FUN_005166d0(param_1,local_28,param_2);
      goto LAB_0051b64f;
    }
    break;
  case 0x2c:
  case 0x3c:
    goto switchD_00517fdd_caseD_21;
  case 0x2d:
  case 0x5f:
    if ((DAT_009a64c0 & 0x40) != 0) {
      FUN_00415dd0();
      if ('\x01' < *(char *)(DAT_0090ea30 + 6)) {
        cVar2 = *(char *)(DAT_0090ea30 + 6) + -1;
        goto LAB_00518162;
      }
    }
    goto switchD_00518052_caseD_2f;
  case 0x2e:
  case 0x3e:
  case 0x6e:
    goto switchD_00517fdd_caseD_22;
  case 99:
    goto joined_r0x0051805c;
  case 0x65:
    if ((DAT_009a64c0 & 0x40) != 0) {
      FUN_0041c7a0();
    }
    goto LAB_0051b64f;
  case 0x68:
    if (local_30 == 0) {
      FUN_00418df0();
    }
    goto LAB_0051b64f;
  case 0x70:
joined_r0x0051805c:
    if ((local_30 == 0) ||
       ((DAT_0093a934 != 0 && ((1 << ((byte)DAT_00939284 & 0x1f) & DAT_0093e8f0) == 0)))) {
      FUN_00417040(0,0);
    }
    goto LAB_0051b64f;
  case 0x72:
    FUN_0041a2b0();
    goto LAB_0051b64f;
  }
  switch(param_1) {
  case 0x2b:
    FUN_004dd1b0();
    break;
  case 0x2c:
    if (local_30 == 0) {
      FUN_004e2000();
    }
    break;
  default:
    iVar4 = FUN_004e1f40();
    if ((iVar4 != 0) && ((param_1 == 0x76 || (param_1 == 0x61)))) {
      FUN_0047a890(s_PROTECTED_0068aaa4,5000,0,0);
    }
    iVar4 = FUN_004e1f40();
    if (iVar4 == 0) {
      switch(param_1) {
      case 0x41:
        if (local_30 == 0) {
          FUN_004d8a70(*(undefined4 *)(in_ECX + -0x1b8),0);
        }
        break;
      case 0x4a:
        FUN_004d95f0();
        break;
      case 0x50:
        if (DAT_0093f660 != 0) {
          FUN_00477f00(2);
        }
        break;
      case 0x52:
        if ((DAT_009a649c & 0x200) == 0) {
          FUN_00515010(DAT_00939284);
        }
        else {
          local_20 = (undefined4 *)DAT_00939284;
          iVar4 = DAT_00939284 * 0x20cc;
          DAT_009bc06c = (uint)(*(int *)(&DAT_0096cdc0 + iVar4) != 0);
          if (*(int *)(&DAT_0096cdc4 + iVar4) != 0) {
            DAT_009bc06c = DAT_009bc06c | 2;
          }
          FUN_0051dcc0(2,*(undefined4 *)(&DAT_0096cdc8 + iVar4));
          FUN_0051dcc0(3,*(undefined4 *)(&DAT_0096cdcc + iVar4));
          iVar5 = FUN_005bf3f0(s_TECHRANDOM_0068a8c8,1,0);
          if (-1 < iVar5) {
            cVar2 = (char)DAT_009bc06c;
            *(uint *)(&DAT_0096cdc0 + iVar4) = (int)(char)DAT_009bc06c & 1;
            *(uint *)(&DAT_0096cdc4 + iVar4) = ((int)cVar2 & 2U) >> 1;
            *(uint *)(&DAT_0096cdc8 + iVar4) = ((int)cVar2 & 4U) >> 2;
            *(uint *)(&DAT_0096cdcc + iVar4) = ((int)cVar2 & 8U) >> 3;
            FUN_00593310(local_20);
          }
        }
        break;
      case 0x54:
        FUN_00515900();
        break;
      case 0x5e:
        FUN_00517060();
        break;
      case 0x6a:
        FUN_004d61a0(*(undefined4 *)(in_ECX + -0x1b8),0x18,1);
        break;
      case 0x76:
        if (local_30 == 0) {
          if (DAT_00939288 == 0) {
            FUN_00511520(0);
          }
          else {
            FUN_00446b40(0x1e);
            *(undefined4 *)(in_ECX + -0x19c) = 1;
            *(undefined4 *)(in_ECX + -0x198) = 1;
            *(undefined4 *)(in_ECX + -0x1bc) = 0;
            if (*(int *)(in_ECX + -0x194) != 0) {
              *(undefined4 *)(in_ECX + -0x194) = 0;
              FUN_0046a550(1);
            }
            FUN_0046ae00();
            FUN_00458900(0);
            FUN_004b9ea0();
            FUN_0046fb10();
            FUN_00460dd0(*(undefined4 *)(in_ECX + -0x1b8));
            FUN_005108a0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],
                         *(undefined4 *)(in_ECX + -0x1c0));
          }
        }
      }
    }
    if (local_28 == 0x3a) {
      if (DAT_0068a5c8 == -1) {
        DAT_0068a5c8 = 0;
      }
    }
    else if (local_28 == 0x7e) {
      if ((DAT_009a64c0 & 0x60) == 0) {
        if (DAT_0068a5c8 == -1) {
          if (DAT_0093f660 == 0) {
LAB_005185e7:
            DAT_0068a5c8 = DAT_0068a5c8 + 1;
          }
        }
        else if (DAT_0068a5c8 < 4) goto LAB_005185e7;
        if (DAT_0068a5c8 < (int)(-(uint)(DAT_0093f660 != 0) & 4)) goto LAB_0051867a;
      }
      DAT_009a64c0 = DAT_009a64c0 ^ 0x1000;
      if (((DAT_0093f660 != 0) && ((DAT_009a64c0 & 0x1000) != 0)) && ((DAT_009a64c0 & 0x20) == 0)) {
        DAT_009a64c0 = DAT_009a64c0 | 0xa0;
      }
      FUN_00592a80();
      FUN_0046b190(1);
      FUN_005d5a70();
      FUN_00458900(0);
      FUN_004b9ea0();
      FUN_0046fb10();
    }
    goto LAB_0051867a;
  case 0x3d:
    if ((((DAT_009a64c0 & 0x10) != 0) || (DAT_0094b4c0 < 9000)) || (DAT_0094b4c4 < 9000)) {
      FUN_00516c50();
    }
    break;
  case 0x44:
    if (local_30 == 0) {
      if ((DAT_00939288 == 0) || (DAT_0093928c < 0)) {
        FUN_004d2de0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
      }
      else {
        FUN_004d2ac0(*(undefined4 *)(in_ECX + -0x1b8));
      }
    }
    break;
  case 0x58:
    uVar15 = 0x206;
    goto LAB_00518208;
  case 0x5a:
    uVar15 = 0x205;
    goto LAB_00518208;
  case 99:
    FUN_0046b1f0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],1);
    break;
  case 0x65:
    if (local_30 == 0) {
      FUN_005b5620(DAT_00939284);
    }
    break;
  case 0x74:
    FUN_00515450();
    break;
  case 0x75:
    if (local_30 == 0) {
      FUN_00583cb0(*(undefined4 *)(in_ECX + -0x1c0),0xffffffff);
    }
    break;
  case 0x78:
    uVar15 = 0x204;
    goto LAB_00518208;
  case 0x7a:
    uVar15 = 0x203;
LAB_00518208:
    FUN_005150d0(uVar15,0);
    FUN_005fd120();
  }
LAB_0051b64f:
  local_8 = 0xffffffff;
  FUN_00626020();
  ExceptionList = local_10;
  return 1;
}

