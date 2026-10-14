// REA Evidence: ev_2a3ac535463d0b2f659333a31c9793ec6452a4a024c50dbc267daed68f12304c

undefined4 FUN_005a9280(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_136fc [67168];
  undefined1 local_309c [11488];
  undefined1 local_3bc [896];
  int local_3c;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00645550();
  DAT_00945d6c = param_2;
  DAT_00945d74 = 0;
  if (param_3 != 0) {
    uStack_c = param_1;
    uStack_10 = 1;
    uStack_14 = 0x398;
    if (param_2 == 0) {
      puStack_18 = (undefined4 *)local_3bc;
      uStack_1c = 0x5a92d4;
      iVar1 = FUN_00646178();
    }
    else {
      puStack_18 = (undefined4 *)local_3bc;
      uStack_1c = 0x5a92c6;
      iVar1 = FUN_0064603f();
    }
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 4;
      if (DAT_00945d6c == 0) {
        puStack_18 = &param_2;
        uStack_1c = 0x5a9329;
        iVar1 = FUN_00646178();
      }
      else {
        puStack_18 = &param_2;
        uStack_1c = 0x5a931e;
        iVar1 = FUN_0064603f();
      }
    }
    else {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 4;
      if (DAT_00945d6c == 0) {
        puStack_18 = &param_2;
        uStack_1c = 0x5a930a;
        iVar1 = FUN_005a67b0();
      }
      else {
        puStack_18 = &param_2;
        uStack_1c = 0x5a92ff;
        iVar1 = FUN_005a66e0();
      }
    }
    if (iVar1 == 0) {
      return 1;
    }
    if (local_3c < 3) {
      if (DAT_00945d74 == 0) {
        uStack_c = param_1;
        uStack_10 = 1;
        uStack_14 = 0xe5e0;
        if (DAT_00945d6c == 0) {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a9400;
          iVar1 = FUN_00646178();
        }
        else {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a93f2;
          iVar1 = FUN_0064603f();
        }
      }
      else {
        uStack_c = param_1;
        uStack_10 = 1;
        uStack_14 = 0xe5e0;
        if (DAT_00945d6c == 0) {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a93d8;
          iVar1 = FUN_005a67b0();
        }
        else {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a93ca;
          iVar1 = FUN_005a66e0();
        }
      }
      if (iVar1 == 0) {
        return 1;
      }
    }
    else {
      if (DAT_00945d74 == 0) {
        uStack_c = param_1;
        uStack_10 = 1;
        uStack_14 = 0x10660;
        if (DAT_00945d6c == 0) {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a9398;
          iVar1 = FUN_00646178();
        }
        else {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a938a;
          iVar1 = FUN_0064603f();
        }
      }
      else {
        uStack_c = param_1;
        uStack_10 = 1;
        uStack_14 = 0x10660;
        if (DAT_00945d6c == 0) {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a9370;
          iVar1 = FUN_005a67b0();
        }
        else {
          puStack_18 = (undefined4 *)auStack_136fc;
          uStack_1c = 0x5a9362;
          iVar1 = FUN_005a66e0();
        }
      }
      if (iVar1 == 0) {
        return 1;
      }
    }
    if (DAT_00945d74 == 0) {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 0x2ce0;
      if (DAT_00945d6c == 0) {
        puStack_18 = (undefined4 *)local_309c;
        uStack_1c = 0x5a9467;
        iVar1 = FUN_00646178();
      }
      else {
        puStack_18 = (undefined4 *)local_309c;
        uStack_1c = 0x5a9459;
        iVar1 = FUN_0064603f();
      }
    }
    else {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 0x2ce0;
      if (DAT_00945d6c == 0) {
        puStack_18 = (undefined4 *)local_309c;
        uStack_1c = 0x5a943f;
        iVar1 = FUN_005a67b0();
      }
      else {
        puStack_18 = (undefined4 *)local_309c;
        uStack_1c = 0x5a9431;
        iVar1 = FUN_005a66e0();
      }
    }
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_00945d74 == 0) {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 0x20;
      if (DAT_00945d6c == 0) {
        puStack_18 = (undefined4 *)local_24;
        uStack_1c = 0x5a94b8;
        iVar1 = FUN_00646178();
      }
      else {
        puStack_18 = (undefined4 *)local_24;
        uStack_1c = 0x5a94ad;
        iVar1 = FUN_0064603f();
      }
    }
    else {
      uStack_c = param_1;
      uStack_10 = 1;
      uStack_14 = 0x20;
      if (DAT_00945d6c == 0) {
        puStack_18 = (undefined4 *)local_24;
        uStack_1c = 0x5a9499;
        iVar1 = FUN_005a67b0();
      }
      else {
        puStack_18 = (undefined4 *)local_24;
        uStack_1c = 0x5a948e;
        iVar1 = FUN_005a66e0();
      }
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  uStack_c = param_1;
  if (DAT_00945d6c == 0) {
    uStack_10 = 0x5a94d5;
    iVar1 = FUN_00591130();
  }
  else {
    uStack_10 = 0x5a94ce;
    iVar1 = FUN_005910b0();
  }
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

