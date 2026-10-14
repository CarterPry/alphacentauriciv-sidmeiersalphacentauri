
int FUN_0058e360(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_6a30 [273];
  undefined **local_65ec;
  int local_5fec;
  undefined **local_3800;
  undefined **local_33bc;
  undefined **local_2208;
  undefined **local_1dc4;
  undefined **local_16b4;
  undefined **local_1270;
  int *local_c74;
  undefined **local_6d4;
  int local_6d0 [4];
  undefined4 local_6c0;
  undefined **local_6ac;
  undefined4 local_6a8;
  undefined4 uStackY_64;
  undefined4 uStackY_60;
  undefined4 uStackY_5c;
  undefined4 uStackY_58;
  undefined4 uStackY_54;
  undefined4 uStackY_50;
  undefined1 *puStackY_4c;
  undefined *puStackY_48;
  undefined4 uStackY_44;
  char *pcStackY_40;
  char *pcStackY_3c;
  undefined *puStackY_38;
  undefined *puStackY_34;
  char *pcStackY_30;
  undefined1 *puStackY_2c;
  undefined ***pppuStackY_28;
  char *pcStackY_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00660bcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00645550();
  FUN_004ad880();
  local_8 = 0;
  FUN_004048a0();
  local_8._0_1_ = 1;
  if (param_1 == 0) {
    DAT_0093a95c = 0;
    FUN_0051e3c0();
  }
  pcStackY_24 = (char *)0x58e3bc;
  FUN_0059dcf0();
  FUN_0059e950();
  if ((param_1 == 0) && ((DAT_009a6490 & 0x800) != 0)) {
    pcStackY_24 = s_fx_opening_menu_wav_0068f8f4;
    pppuStackY_28 = (undefined ***)0x58e3e3;
    FUN_004c6db0();
    FUN_004c6920();
  }
  if ((~DAT_0094b464 & 0x20000000) == 0) {
    DAT_006970dc = DAT_006970dc & 0xfffffffb;
  }
  else {
    DAT_006970dc = DAT_006970dc | 4;
  }
  if (DAT_009a6488 == 0) {
    if (DAT_00945824 == (int *)0x0) {
      pcStackY_24 = (char *)0x58e4f0;
      pvVar1 = operator_new(0xa14);
      local_8._0_1_ = 3;
      if (pvVar1 == (void *)0x0) {
        DAT_00945824 = (int *)0x0;
      }
      else {
        DAT_00945824 = (int *)FUN_005d4cf0();
      }
      local_8._0_1_ = 1;
      if (DAT_00945824 != (int *)0x0) {
        pcStackY_24 = (char *)0x0;
        pppuStackY_28 = (undefined ***)0x0;
        puStackY_2c = (undefined1 *)0x400000;
        pcStackY_30 = (char *)0x0;
        puStackY_34 = DAT_009b7b20;
        puStackY_38 = (undefined *)DAT_009b7b1c;
        pcStackY_3c = (char *)0x0;
        pcStackY_40 = (char *)0x0;
        uStackY_44 = 0x58e536;
        iVar2 = FUN_005d4ef0();
        if (iVar2 == 0) goto LAB_0058e547;
        FUN_00589b20();
      }
      goto LAB_0058e583;
    }
LAB_0058e547:
    pcStackY_24 = (char *)0x58e553;
    FUN_005d5250();
    pcStackY_24 = (char *)0x58e559;
    FUN_00589a30();
    FUN_005fe460();
    pcStackY_24 = (char *)0x58e572;
    (**(code **)(*DAT_00945824 + 4))();
LAB_0058e572:
    FUN_005fcbb0();
    DAT_009b8dd0 = DAT_00945824;
  }
  else {
    if (DAT_00945824 != (int *)0x0) {
LAB_0058e4a0:
      pcStackY_24 = (char *)0x58e4ac;
      FUN_005d5250();
      pcStackY_24 = (char *)0x58e4b2;
      FUN_00589a30();
      FUN_005fe460();
      pcStackY_24 = (char *)0x58e4cb;
      (**(code **)(*DAT_00945824 + 4))();
      goto LAB_0058e572;
    }
    pcStackY_24 = (char *)0x58e442;
    pvVar1 = operator_new(0xa14);
    local_8._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      DAT_00945824 = (int *)0x0;
    }
    else {
      DAT_00945824 = (int *)FUN_005d4cf0();
    }
    local_8._0_1_ = 1;
    if (DAT_00945824 != (int *)0x0) {
      pcStackY_24 = (char *)0x0;
      pppuStackY_28 = (undefined ***)0x0;
      puStackY_2c = (undefined1 *)0x400000;
      pcStackY_30 = (char *)0x0;
      puStackY_34 = DAT_009b7b20;
      puStackY_38 = (undefined *)DAT_009b7b1c;
      pcStackY_3c = (char *)0x0;
      pcStackY_40 = (char *)0x0;
      uStackY_44 = 0x58e48c;
      iVar2 = FUN_005d4ef0();
      if (iVar2 == 0) goto LAB_0058e4a0;
      FUN_00589b20();
    }
  }
LAB_0058e583:
  DAT_00945f48 = 0;
  local_c74 = DAT_00945824;
  do {
    if (DAT_009a6488 == 0) {
      if (DAT_00945824 == (int *)0x0) {
        pcStackY_24 = (char *)0x58e631;
        pvVar1 = operator_new(0xa14);
        local_8._0_1_ = 5;
        if (pvVar1 == (void *)0x0) {
          DAT_00945824 = (int *)0x0;
        }
        else {
          DAT_00945824 = (int *)FUN_005d4cf0();
        }
        local_8._0_1_ = 1;
        if (DAT_00945824 != (int *)0x0) {
          pcStackY_24 = (char *)0x0;
          pppuStackY_28 = (undefined ***)0x0;
          puStackY_2c = (undefined1 *)0x400000;
          pcStackY_30 = (char *)0x0;
          puStackY_34 = DAT_009b7b20;
          puStackY_38 = (undefined *)DAT_009b7b1c;
          pcStackY_3c = (char *)0x0;
          pcStackY_40 = (char *)0x0;
          uStackY_44 = 0x58e677;
          iVar2 = FUN_005d4ef0();
          if (iVar2 == 0) goto LAB_0058e688;
          FUN_00589b20();
        }
        goto LAB_0058e6bc;
      }
LAB_0058e688:
      pcStackY_24 = (char *)0x58e68e;
      FUN_005d5250();
      pcStackY_24 = (char *)0x58e694;
      FUN_00589a30();
      FUN_005fe460();
      pcStackY_24 = (char *)0x58e6ad;
      (**(code **)(*DAT_00945824 + 4))();
      FUN_005fcbb0();
      DAT_009b8dd0 = DAT_00945824;
    }
    else {
      if (DAT_00945824 != (int *)0x0) goto LAB_0058e688;
      pcStackY_24 = (char *)0x58e5bd;
      pvVar1 = operator_new(0xa14);
      local_8._0_1_ = 4;
      if (pvVar1 == (void *)0x0) {
        DAT_00945824 = (int *)0x0;
      }
      else {
        DAT_00945824 = (int *)FUN_005d4cf0();
      }
      local_8._0_1_ = 1;
      if (DAT_00945824 != (int *)0x0) {
        pcStackY_24 = (char *)0x0;
        pppuStackY_28 = (undefined ***)0x0;
        puStackY_2c = (undefined1 *)0x400000;
        pcStackY_30 = (char *)0x0;
        puStackY_34 = DAT_009b7b20;
        puStackY_38 = (undefined *)DAT_009b7b1c;
        pcStackY_3c = (char *)0x0;
        pcStackY_40 = (char *)0x0;
        uStackY_44 = 0x58e607;
        iVar2 = FUN_005d4ef0();
        if (iVar2 == 0) goto LAB_0058e688;
        FUN_00589b20();
      }
    }
LAB_0058e6bc:
    local_c74 = DAT_00945824;
    pcStackY_24 = (char *)0x58e6ce;
    FUN_0059dcf0();
    FUN_0059e950();
    pcStackY_30 = s_HOTSEAT_0068f988;
    if (param_1 == 0) {
      pcStackY_30 = s_TOPMENU_0068f990;
    }
    pcStackY_24 = (char *)0x0;
    pppuStackY_28 = (undefined ***)0x0;
    puStackY_2c = (undefined1 *)0xffffffff;
    puStackY_34 = &DAT_009b8aa8;
    puStackY_38 = (undefined *)0x58e6fd;
    FUN_00406380();
    if (param_1 == 0) {
      local_5fec = DAT_0094b360;
    }
    pppuStackY_28 = local_6a30;
    pcStackY_24 = (char *)0x1;
    puStackY_2c = (undefined1 *)0x58e722;
    iVar2 = FUN_004adb20();
    if ((iVar2 < 0) || (iVar2 == 6)) {
      local_6a30[0] = &PTR_FUN_006695c8;
      local_65ec = &PTR_LAB_006695c0;
      local_8._0_1_ = 7;
      FUN_00404900();
      local_3800 = &PTR_FUN_00669d58;
      local_33bc = &PTR_LAB_00669d50;
      local_8._0_1_ = 10;
      FUN_00605370();
      local_8._0_1_ = 9;
      FUN_00406880();
      local_8._0_1_ = 8;
      FUN_00406880();
      local_8._0_1_ = 6;
      FUN_005d4dd0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004064d0();
      local_16b4 = &PTR_FUN_0066d8e8;
      local_1270 = &PTR_LAB_0066d8e0;
      local_8 = 0xf;
      FUN_004ad9c0();
      local_8._0_1_ = 0xe;
      FUN_005d7410();
      local_8._0_1_ = 0xd;
      FUN_004066c0();
      local_6ac = &PTR_FUN_006693ac;
      DAT_009b3374 = local_6a8;
      local_8._0_1_ = 0xc;
      FUN_005fa870();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_005d7410();
      local_8 = 0xffffffff;
      FUN_005d4dd0();
      ExceptionList = local_10;
      return 1;
    }
    if (param_1 == 0) {
      pcStackY_24 = (char *)0x58e745;
      DAT_0094b360 = iVar2;
      FUN_0059e5d0();
    }
    else if (0 < iVar2) {
      iVar2 = iVar2 + 1;
    }
    switch(iVar2) {
    case 0:
    case 1:
      pcStackY_24 = (char *)0x58e76d;
      iVar2 = FUN_0058d6b0();
      goto LAB_0058e772;
    case 2:
      if (param_1 == 0) {
        pcStackY_24 = (char *)0x1;
        pppuStackY_28 = (undefined ***)s_SCENARIOMENU_0068f998;
        puStackY_2c = (undefined1 *)0x58e812;
        iVar2 = FUN_004adaf0();
        if (-1 < iVar2) {
          if (iVar2 == 1) {
            pcStackY_24 = (char *)0x58e91e;
            FUN_0058ced0();
            DAT_0094a2a4 = 1;
            DAT_0094a2a8 = 1;
            DAT_0094a2ac = 1;
            DAT_0094a2b0 = 1;
            DAT_0094a2b4 = 1;
            DAT_0094a2b8 = 1;
            pcStackY_24 = (char *)0x58e947;
            FUN_00591040();
            pcStackY_24 = (char *)0x3;
            pppuStackY_28 = (undefined ***)0x58e94e;
            FUN_00589d30();
            pppuStackY_28 = (undefined ***)0x1;
            DAT_009a64c8 = 0;
            puStackY_2c = (undefined1 *)0x58e95a;
            FUN_005b3920();
            DAT_009a64c0 = DAT_009a64c0 | 0x80000e0;
            DAT_009b2070 = DAT_00939284;
            goto LAB_0058eb1d;
          }
          if (iVar2 != 2) goto LAB_0058e870;
          iVar2 = FUN_005ab600();
          if (iVar2 == 0) {
            pcStackY_24 = (char *)0x58e83f;
            FUN_00589d30();
            pcStackY_24 = (char *)0x1;
            DAT_009a64c8 = 0;
            pppuStackY_28 = (undefined ***)0x58e84b;
            FUN_005b3920();
            DAT_009a64c0 = DAT_009a64c0 | 0x80000e0;
            DAT_009b2070 = DAT_00939284;
            iVar2 = 0;
            goto LAB_0058e772;
          }
        }
      }
      else {
        iVar2 = 0;
LAB_0058e870:
        iVar3 = DAT_0093a95c;
        pcStackY_24 = (char *)0x1;
        pppuStackY_28 = (undefined ***)0x58e87e;
        iVar4 = FUN_005aaab0();
        if ((iVar3 == 0) || (DAT_0093a95c = 1, DAT_0093f660 != 0)) {
          DAT_0093a95c = 0;
        }
        if (iVar4 == 0) {
          if (DAT_009b2074 != 0) {
            FUN_0050f440();
            FUN_006169d0();
            FUN_00616950();
            pcStackY_24 = (char *)0x1;
            pppuStackY_28 = (undefined ***)0x58e8cb;
            iVar3 = FUN_0058f2f0();
            if (iVar3 == 0) {
              DAT_0068f21c = 0;
            }
          }
          if (iVar2 == 0) {
            pcStackY_24 = (char *)0x58e8e7;
            iVar2 = FUN_00589d30();
            if (iVar2 != 0) {
              pcStackY_24 = (char *)0x58e8fb;
              FUN_005873c0();
              goto LAB_0058e772;
            }
            DAT_009b2070 = DAT_00939284;
            pcStackY_24 = (char *)0xffffffff;
            DAT_009bbff0 = 0;
            DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
            pppuStackY_28 = (undefined ***)(&DAT_00946a9c + DAT_00939284 * 0x59c);
            puStackY_2c = (undefined1 *)0x1;
            pcStackY_30 = (char *)0x58e9d9;
            FUN_00625ec0();
            pcStackY_30 = (char *)0xffffffff;
            puStackY_34 = (undefined *)0xffffffff;
            DAT_009bbff0 = 0;
            DAT_009bbfec = (&DAT_00946a50)[DAT_00939284 * 0x167];
            puStackY_38 = &DAT_00946a84 + DAT_00939284 * 0x59c;
            pcStackY_3c = (char *)0x2;
            pcStackY_40 = (char *)0x58ea11;
            FUN_00625ec0();
            pcStackY_40 = (char *)0xffffffff;
            uStackY_44 = 0xffffffff;
            DAT_009bbff0 = (&DAT_00946d50)[DAT_00939284 * 0x167];
            DAT_009bbfec = (&DAT_00946d4c)[DAT_00939284 * 0x167];
            puStackY_48 = &DAT_00946d34 + DAT_00939284 * 0x59c;
            puStackY_4c = (undefined1 *)0x3;
            uStackY_50 = 0x58ea4f;
            FUN_00625ec0();
            DAT_009b86a0 = 0;
            pcStackY_24 = (char *)0x58ea6b;
            FUN_006169a0();
            pcStackY_24 = &DAT_009b86a0;
            pppuStackY_28 = (undefined ***)0x58ea76;
            FUN_00645470();
            pppuStackY_28 = (undefined ***)&DAT_00682820;
            puStackY_2c = &DAT_009b86a0;
            pcStackY_30 = (char *)0x58ea85;
            FUN_00645470();
            pcStackY_30 = &DAT_009b86a0;
            puStackY_34 = (undefined *)0x58ea8f;
            FUN_005c89b0();
            puStackY_34 = (undefined *)0xffffffff;
            puStackY_38 = (undefined *)0xffffffff;
            pcStackY_3c = &DAT_009b86a0;
            pcStackY_40 = (char *)0x4;
            uStackY_44 = 0x58ea9f;
            FUN_00625ec0();
            uStackY_44 = 0xffffffff;
            puStackY_48 = (undefined *)0xffffffff;
            puStackY_4c = &DAT_009b86a0;
            uStackY_50 = 0;
            uStackY_54 = 0x58eaae;
            FUN_00625ec0();
            uStackY_54 = DAT_0094b4c0;
            uStackY_58 = 0;
            uStackY_5c = 0x58eabb;
            FUN_00625e30();
            uStackY_5c = DAT_0094b4c4;
            uStackY_60 = 1;
            uStackY_64 = 0x58eac8;
            FUN_00625e30();
            pcStackY_24 = (char *)DAT_00939284;
            pppuStackY_28 = (undefined ***)0x58eae4;
            pppuStackY_28 = (undefined ***)FUN_005ac110();
            puStackY_2c = (undefined1 *)0x2;
            pcStackY_30 = (char *)0x58eaec;
            FUN_00625e30();
            pcStackY_30 = DAT_0094b4d4;
            puStackY_34 = (undefined *)0x3;
            puStackY_38 = (undefined *)0x58eaf9;
            FUN_00625e30();
            puStackY_38 = (undefined *)0x0;
            pcStackY_3c = s_INTRO_0068f9a8;
            pcStackY_40 = s_SCENARIO_0068f9b0;
            uStackY_44 = 0x58eb09;
            FUN_005bf330();
            pcStackY_24 = (char *)0x58eb18;
            FUN_00511520();
          }
          else {
            DAT_009b2070 = DAT_00939284;
            DAT_009a64c0 = DAT_009a64c0 | 0x80000e0;
          }
          goto switchD_0058e758_default;
        }
      }
      break;
    case 3:
      pcStackY_24 = (char *)0x0;
      DAT_00945d78 = param_1;
      pppuStackY_28 = (undefined ***)0x58e7a6;
      iVar2 = FUN_005aaab0();
      DAT_00945d78 = 0;
      if (iVar2 == 0) {
        DAT_009b2070 = DAT_00939284;
        iVar2 = 0;
        if (DAT_009b2074 != 0) {
          FUN_0050f440();
          FUN_006169d0();
          FUN_00616950();
          pcStackY_24 = (char *)0x1;
          pppuStackY_28 = (undefined ***)0x58e7e4;
          iVar3 = FUN_0058f2f0();
          if (iVar3 == 0) {
            DAT_0068f21c = 0;
          }
        }
        goto LAB_0058e772;
      }
      break;
    case 4:
      pcStackY_24 = (char *)0x58e909;
      iVar2 = FUN_0058db30();
LAB_0058e772:
      if (iVar2 == 0) goto switchD_0058e758_default;
      break;
    case 5:
      FUN_00428df0();
      break;
    default:
      goto switchD_0058e758_default;
    }
  } while (DAT_009b2068 == 0);
switchD_0058e758_default:
  if (param_1 == 0) {
LAB_0058eb1d:
    if ((DAT_009a6490 & 0x800) == 0) goto LAB_0058eb27;
  }
  else {
LAB_0058eb27:
    iVar2 = FUN_004c6b10();
    if (iVar2 == 0) goto LAB_0058eb4e;
  }
  pcStackY_24 = (char *)0x58eb44;
  FUN_004c6600();
  FUN_004c6ea0();
LAB_0058eb4e:
  iVar2 = DAT_009b2068;
  local_6a30[0] = &PTR_FUN_006695c8;
  local_65ec = &PTR_LAB_006695c0;
  local_8._0_1_ = 0x11;
  FUN_00404900();
  local_3800 = &PTR_FUN_00669d58;
  local_33bc = &PTR_LAB_00669d50;
  local_8._0_1_ = 0x14;
  FUN_00605370();
  local_2208 = &PTR_FUN_00669754;
  local_1dc4 = &PTR_LAB_0066974c;
  local_8._0_1_ = 0x15;
  FUN_00607da0();
  local_8._0_1_ = 0x13;
  FUN_00607040();
  local_8._0_1_ = 0x12;
  FUN_00406880();
  local_8._0_1_ = 0x10;
  FUN_005d4dd0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004064d0();
  local_16b4 = &PTR_FUN_0066d8e8;
  local_1270 = &PTR_LAB_0066d8e0;
  local_8 = 0x1a;
  FUN_004ad9c0();
  local_8._0_1_ = 0x19;
  FUN_005d7410();
  local_6d4 = &PTR_FUN_006698c4;
  *(undefined ***)((int)local_6d0 + *(int *)(local_6d0[0] + 4)) = &PTR_FUN_006698c0;
  local_8._0_1_ = 0x1b;
  FUN_00402970();
  local_6c0 = 0;
  local_6d4 = &PTR_LAB_006693a4;
  local_8._0_1_ = 0x18;
  *(undefined ***)((int)local_6d0 + *(int *)(local_6d0[0] + 4)) = &PTR_FUN_006693a0;
  FUN_00402970();
  local_6c0 = 0;
  local_6ac = &PTR_FUN_006693ac;
  DAT_009b3374 = local_6a8;
  local_8._0_1_ = 0x17;
  FUN_005fa870();
  local_8 = CONCAT31(local_8._1_3_,0x16);
  FUN_005d7410();
  local_8 = 0xffffffff;
  FUN_005d4dd0();
  ExceptionList = local_10;
  return iVar2;
}

