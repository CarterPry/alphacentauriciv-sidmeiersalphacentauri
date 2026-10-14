
void FUN_005efd20(RECT *param_1)

{
  HDC hdc;
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  HDC hdcSrc;
  int cy;
  int cx;
  char *pcVar4;
  int iVar5;
  int iStack_14;
  tagRECT tStack_10;
  
  if (DAT_009b7a48 != (code *)0x0) {
    (*DAT_009b7a48)();
  }
  if (DAT_009b7a50 != (char *)0x0) {
    if (param_1 != (RECT *)0x0) {
      FUN_005d8000();
    }
    FUN_005e3203(&DAT_009b6e38,DAT_00696d30);
    DAT_009b6e38 = DAT_009b6e38 + 1;
    DAT_009b6e40 = DAT_009b6e40 + -1;
    DAT_009b6e3c = DAT_009b6e3c + 1;
    DAT_009b6e44 = DAT_009b6e44 + -1;
    FUN_005dfcd0(&DAT_009b6e38);
    FUN_005dac70(DAT_009b7a54,0,0);
    FUN_005dacb0(DAT_00696d2c,0xffffffff,1);
    pcVar1 = _strchr(DAT_009b7a50,0x5e);
    pcVar4 = DAT_009b7a50;
    if (pcVar1 == (char *)0x0) {
      if (DAT_009b7a50 != (char *)0x0) {
        _strlen(DAT_009b7a50);
        FUN_005dd130(pcVar4,&DAT_009b6e38);
      }
    }
    else {
      iStack_14 = DAT_009b6e3c + 1;
      while( true ) {
        pcVar1 = _strchr(pcVar4,0x5e);
        if (pcVar1 != (char *)0x0) {
          *pcVar1 = '\0';
        }
        iVar2 = DAT_009b6e38;
        iVar5 = DAT_009b6e40 - DAT_009b6e38;
        if (pcVar4 != (char *)0x0) {
          _strlen(pcVar4);
          FUN_005dd020(pcVar4,iVar2,iStack_14,iVar5);
        }
        if (*DAT_009b7a54 < 0) {
          iVar2 = DAT_009b7a54[3];
        }
        else {
          iVar2 = DAT_009b7a54[4] + *DAT_009b7a54;
        }
        iStack_14 = iStack_14 + iVar2;
        pcVar4 = pcVar1 + 1;
        if (pcVar1 == (char *)0x0) break;
        *pcVar1 = '^';
      }
    }
    DAT_009b6e38 = DAT_009b6e38 + -1;
    DAT_009b6e40 = DAT_009b6e40 + 1;
    DAT_009b6e3c = DAT_009b6e3c + -1;
    DAT_009b6e44 = DAT_009b6e44 + 1;
    if (param_1 != (RECT *)0x0) {
      FUN_005d8000();
    }
  }
  if (DAT_009b7a2c != 0) {
    FUN_005e4b4a(&DAT_009b7490,*(undefined1 *)(DAT_009b7a2c + 8),DAT_009b7a30,DAT_009b7a34,1);
  }
  if (DAT_009bc498 != (int *)0x0) {
    if (DAT_009b7ad8 == 0) {
      (**(code **)(*DAT_009bc494 + 0x58))(DAT_009bc494,1);
      (**(code **)(*DAT_009bc498 + 0x2c))(DAT_009bc498,0,1);
      if (param_1 == (RECT *)0x0) {
        (**(code **)(*DAT_009bc49c + 0x14))(DAT_009bc49c,0,DAT_009bc498,0,0x1000000,0);
        return;
      }
      BVar3 = IntersectRect((LPRECT)&stack0xffffffd8,(RECT *)&DAT_009bc2d0,param_1);
      if (BVar3 == 0) {
        return;
      }
      (**(code **)(*DAT_009bc49c + 0x14))
                (DAT_009bc49c,&stack0xffffffd8,DAT_009bc498,&stack0xffffffd8,0x1000000,0);
      return;
    }
    if (param_1 == (RECT *)0x0) {
      (**(code **)(*DAT_009bc498 + 0x14))(DAT_009bc498,0,DAT_009bc49c,0,0x1000000);
      return;
    }
    BVar3 = IntersectRect(&tStack_10,(RECT *)&DAT_009bc2d0,param_1);
    if (BVar3 == 0) {
      return;
    }
    (**(code **)(*DAT_009bc498 + 0x14))(DAT_009bc498,&tStack_10,DAT_009bc49c,&tStack_10,0x1000000);
    return;
  }
  if (DAT_009b3ab0 == 0) {
    DAT_009b7b2c = GetDC(DAT_009b7b28);
    if (DAT_009b7b2c != (HDC)0x0) {
      DAT_009b3ab0 = 1;
    }
  }
  else {
    DAT_009b3ab0 = DAT_009b3ab0 + 1;
  }
  hdc = DAT_009b7b2c;
  if (DAT_009b7b2c == (HDC)0x0) {
    return;
  }
  hdcSrc = (HDC)FUN_005e3503();
  if (hdcSrc == (HDC)0x0) {
    DAT_009b3ab0 = DAT_009b3ab0 + -1;
    if (DAT_009b3ab0 != 0) {
      return;
    }
    if (DAT_009bc498 == (int *)0x0) {
      ReleaseDC(DAT_009b7b28,DAT_009b7b2c);
      DAT_009b7b2c = (HDC)0x0;
      return;
    }
    (**(code **)(*DAT_009bc498 + 0x68))(DAT_009bc498);
    DAT_009b7b2c = hdcSrc;
    return;
  }
  FUN_005de8f0();
  if (DAT_009bc494 == (int *)0x0) {
    if (DAT_009b3ab0 == 0) {
      if (DAT_009bc498 == (int *)0x0) {
        DAT_009b7b2c = GetDC(DAT_009b7b28);
      }
      else {
        (**(code **)(*DAT_009bc498 + 0x44))(DAT_009bc498);
      }
      if (DAT_009b7b2c == (HDC)0x0) goto LAB_005f0150;
      DAT_009b3ab0 = 1;
    }
    else {
      DAT_009b3ab0 = DAT_009b3ab0 + 1;
    }
    if (DAT_009b7b2c != (HDC)0x0) {
      SelectPalette(DAT_009b7b2c,DAT_009b8178,0);
      RealizePalette(DAT_009b7b2c);
      FUN_005ec6f0();
    }
  }
LAB_005f0150:
  if (param_1 == (RECT *)0x0) {
    cy = -DAT_009b7514;
    iVar5 = 0;
    iVar2 = 0;
    cx = DAT_009b7510;
  }
  else {
    iVar2 = param_1->top;
    iVar5 = param_1->left;
    cy = param_1->bottom - iVar2;
    cx = param_1->right - iVar5;
  }
  BitBlt(hdc,iVar5,iVar2,cx,cy,hdcSrc,iVar5,iVar2,0xcc0020);
  DAT_009b3ab0 = DAT_009b3ab0 + -1;
  if (DAT_009b3ab0 == 0) {
    if (DAT_009bc498 == (int *)0x0) {
      ReleaseDC(DAT_009b7b28,DAT_009b7b2c);
    }
    else {
      (**(code **)(*DAT_009bc498 + 0x68))(DAT_009bc498);
    }
    DAT_009b7b2c = (HDC)0x0;
  }
  FUN_005e3563();
  return;
}

