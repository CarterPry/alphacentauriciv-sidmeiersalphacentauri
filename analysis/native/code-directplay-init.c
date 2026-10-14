// REA Evidence: ev_55522bb369cdd92272d0af39a354d713a1d0d48fff6723348cef062481aea12f
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

char FUN_0062d9e0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  int in_ECX;
  char *_Str;
  int *unaff_EDI;
  int iVar9;
  undefined1 **ppuVar10;
  undefined4 uVar11;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2bc;
  int *piVar12;
  undefined4 **ppuVar13;
  int *local_298;
  undefined4 *puStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  char acStack_230 [12];
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  char acStack_214 [20];
  undefined1 local_200;
  undefined1 auStack_114 [20];
  undefined1 local_100;
  undefined4 *puStack_c;
  undefined4 uStack_4;
  
  iVar3 = FUN_0062d8e0();
  if (iVar3 != 0) {
    return '\0';
  }
  bVar1 = false;
  local_298 = (int *)0x0;
  if (param_1 != (char *)0x0) {
    *(undefined4 *)(in_ECX + 0x44) = param_4;
    _strchr(param_1,0x2f);
    puStack_2bc = (undefined1 *)0x62da53;
    pcVar4 = _strchr(param_1,0x2f);
    if (pcVar4 != (char *)0x0) {
      do {
        cVar2 = pcVar4[1];
        _Str = pcVar4 + 1;
        if (cVar2 == 'h') {
          bVar1 = true;
        }
        else if (cVar2 == 'j') {
          bVar1 = false;
        }
        else if (cVar2 == 'n') {
          _Str = pcVar4 + 2;
          pcVar4 = _strchr(_Str,0x20);
          local_100 = 0;
          if (pcVar4 == (char *)0x0) {
            FUN_00645470();
          }
          else {
            *pcVar4 = '\0';
            FUN_00645470();
            *pcVar4 = ' ';
          }
        }
        pcVar4 = _strchr(_Str,0x2f);
      } while (pcVar4 != (char *)0x0);
      if (!bVar1) {
        pcVar4 = _strstr(param_1,&DAT_00697568);
        if (pcVar4 == (char *)0x0) goto LAB_0062dd7b;
        iVar3 = FUN_006474a0();
        puStack_2bc = (undefined1 *)0x62db0a;
        pcVar4 = _strchr(pcVar4 + iVar3,0x20);
        local_200 = 0;
        if (pcVar4 == (char *)0x0) {
          FUN_00645470();
        }
        else {
          *pcVar4 = '\0';
          FUN_00645470();
          *pcVar4 = ' ';
        }
      }
      piVar12 = (int *)0x0;
      puStack_2bc = (undefined1 *)0x0;
      puStack_2c0 = (undefined1 *)0x62db53;
      Ordinal_4();
      uStack_25c = DAT_00697548;
      uStack_254 = DAT_00697550;
      uStack_250 = DAT_00697554;
      uStack_258 = DAT_0069754c;
      uStack_264 = 0x50;
      uStack_248 = puStack_c[1];
      uStack_24c = *puStack_c;
      uStack_224 = uStack_4;
      uStack_244 = puStack_c[2];
      uStack_240 = puStack_c[3];
      puStack_26c = auStack_114;
      puStack_268 = auStack_114;
      local_298 = (int *)(bVar1 + 1);
      puStack_290 = &uStack_274;
      uStack_28c = 0x36e95ee0;
      uStack_260 = 4;
      uStack_23c = 7;
      uStack_238 = 0;
      uStack_234 = 0;
      acStack_230[0] = '\0';
      acStack_230[1] = '\0';
      acStack_230[2] = '\0';
      acStack_230[3] = '\0';
      acStack_230[4] = '\0';
      acStack_230[5] = '\0';
      acStack_230[6] = '\0';
      acStack_230[7] = '\0';
      acStack_230[8] = '\0';
      acStack_230[9] = '\0';
      acStack_230[10] = '\0';
      acStack_230[0xb] = '\0';
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_218 = 0;
      uStack_274 = 0x10;
      uStack_270 = 0;
      uStack_288 = 0x11cf8577;
      uStack_284 = 0x80000c96;
      uStack_280 = 0x824e53c7;
      if (bVar1) {
        iStack_27c = 0;
      }
      else {
        puStack_2c0 = &stack0xfffffd5c;
        uVar11 = 0;
        iVar3 = *piVar12;
        sVar5 = _strlen(acStack_214);
        piVar6 = (int *)(sVar5 + 1);
        iVar3 = (**(code **)(iVar3 + 0x10))
                          (piVar12,&DAT_006717e0,&DAT_006717d0,acStack_214,piVar6,uVar11);
        if (iVar3 != -0x7788ffe2) {
          return '\0';
        }
        iVar3 = FUN_005d4510(puStack_2c0);
        if (iVar3 == 0) {
          FUN_0062e010();
          return '\0';
        }
        ppuVar10 = &puStack_2c0;
        iVar7 = *piVar6;
        iVar9 = iVar3;
        sVar5 = _strlen(acStack_230);
        iVar7 = (**(code **)(iVar7 + 0x10))
                          (piVar6,&DAT_006717e0,&DAT_006717d0,acStack_230,sVar5 + 1,iVar9,ppuVar10);
        iStack_27c = iVar3;
        if (iVar7 != 0) {
          puStack_2c0 = (undefined1 *)0x62dd34;
          FUN_0062e010();
          return '\0';
        }
      }
      iVar3 = iStack_27c;
      uStack_278 = 0;
      puStack_2c0 = &stack0xfffffd64;
      (**(code **)(*piVar12 + 0x30))(piVar12,0,0);
      if (iVar3 != 0) {
        FUN_00644ef2();
      }
    }
LAB_0062dd7b:
    if (local_298 != (int *)0x0) goto LAB_0062ddaf;
  }
  puStack_2bc = (undefined1 *)0x0;
  puStack_2c0 = (undefined1 *)0x62dd91;
  iVar3 = Ordinal_4();
  if (iVar3 != 0) {
    FUN_0062e010();
    return '\0';
  }
LAB_0062ddaf:
  ppuVar13 = &puStack_290;
  iVar7 = 0;
  puStack_2bc = (undefined1 *)0x62ddbc;
  iVar3 = (**(code **)(*local_298 + 0x20))();
  if (iVar3 != -0x7788ffe2) {
    puStack_2c0 = (undefined1 *)0x62ddcd;
    (**(code **)(*unaff_EDI + 8))();
    puStack_2c0 = (undefined1 *)0x62ddd4;
    FUN_0062e010();
    return '\0';
  }
  puStack_2c0 = (undefined1 *)0x62dded;
  puVar8 = (undefined1 *)FUN_005d4510();
  if (puVar8 != (undefined1 *)0x0) {
    puStack_2bc = &stack0xfffffd60;
    puStack_2c0 = puVar8;
    iVar3 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,0);
    if (iVar3 == 0) {
      cVar2 = (*(int *)(puVar8 + 4) != 2) + '\x01';
      if (*(int *)(puVar8 + 8) != 0) {
        *(undefined4 *)(*(int *)(puVar8 + 8) + 4) = 4;
        *(undefined4 *)(*(int *)(puVar8 + 8) + 0x28) = 7;
        iVar3 = (**(code **)(*local_298 + 0x30))(local_298,0,0,puVar8);
        if ((iVar3 == 0) &&
           (iVar3 = (**(code **)(*local_298 + 0xc))(local_298,0,&stack0xfffffd54,0), iVar3 == 0)) {
          iVar3 = (*(code *)**ppuVar13)(ppuVar13,&DAT_006717c0,&DAT_009be600);
          *(undefined4 *)(iVar7 + 0x1c) = DAT_009be600;
          if (iVar3 == 0) {
            (*(code *)(*ppuVar13)[2])(ppuVar13);
            if (cVar2 == '\x01') {
              local_298[0x36] = local_298[0x36] | 0x10000;
            }
            else {
              local_298[0x36] = local_298[0x36] | 0x20000;
            }
            FUN_0062e540(0,*(undefined4 *)(*(int *)(puVar8 + 0xc) + 8),0);
            FUN_00644ef2(puVar8);
            return cVar2;
          }
        }
      }
    }
    if (local_298 != (int *)0x0) {
      (**(code **)(*local_298 + 8))(local_298);
    }
    FUN_00644ef2(puVar8);
    FUN_0062e010();
    return '\0';
  }
  return '\0';
}

