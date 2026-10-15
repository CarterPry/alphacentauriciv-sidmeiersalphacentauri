// ev_173fad6b81d8ee0052c5aac5d6d3bbf07bdef44a16425a81acc31e57090e2bc0

undefined4 FUN_005105c0(int param_1,int *param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  if (*(int *)(in_ECX + 0x23d10) == 1) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x23d10) == 0) {
    return 0;
  }
  if (-1 < *(int *)(in_ECX + 0x23d14)) {
    sVar2 = (&DAT_0095282a)[*(int *)(in_ECX + 0x23bdc) * 0x1a];
    iVar3 = FUN_00644f3a(param_1 - (short)(&DAT_00952828)[*(int *)(in_ECX + 0x23bdc) * 0x1a]);
    if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar3)) {
      iVar3 = DAT_00949870 - iVar3;
    }
    iVar4 = FUN_00644f3a((int)param_2 - (int)sVar2);
    if (*(int *)(in_ECX + 0x23d14) < iVar4 + iVar3 >> 1) {
      piVar5 = &DAT_007d3c3c;
      do {
        iVar3 = *piVar5;
        if ((iVar3 != 0) &&
           (((piVar5 == &DAT_007d3c3c || (*(int *)(iVar3 + 0x1dd74) != 0)) &&
            (*(undefined **)(iVar3 + 0x1ef4c) != &DAT_0093ab4c)))) {
          FUN_005ec740(&DAT_0093ab4c,DAT_0093aa24,DAT_0093aa54);
          *(undefined **)(iVar3 + 0x1ef4c) = &DAT_0093ab4c;
        }
        piVar5 = piVar5 + 1;
      } while ((int)piVar5 < 0x7d3c5c);
      FUN_005fca30();
      return 1;
    }
  }
  if ((*(int *)(in_ECX + 0x23d10) == 8) &&
     (iVar3 = FUN_004cd6a0(*(undefined4 *)(in_ECX + 0x23bdc),param_1,param_2), iVar3 == 0)) {
    piVar5 = &DAT_007d3c3c;
    do {
      iVar3 = *piVar5;
      if (((iVar3 != 0) && ((piVar5 == &DAT_007d3c3c || (*(int *)(iVar3 + 0x1dd74) != 0)))) &&
         (*(undefined **)(iVar3 + 0x1ef4c) != &DAT_0093ab4c)) {
        FUN_005ec740(&DAT_0093ab4c,DAT_0093aa24,DAT_0093aa54);
        *(undefined **)(iVar3 + 0x1ef4c) = &DAT_0093ab4c;
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x7d3c5c);
    FUN_005fca30();
    return 1;
  }
  iVar3 = *(int *)(in_ECX + 0x23d10);
  param_2 = &DAT_007d3c3c;
  do {
    iVar4 = *param_2;
    if ((iVar4 != 0) &&
       (((param_2 == &DAT_007d3c3c || (*(int *)(iVar4 + 0x1dd74) != 0)) &&
        (puVar1 = &DAT_0093aa70 + iVar3 * 0x2c, *(undefined **)(iVar4 + 0x1ef4c) != puVar1)))) {
      FUN_005ec740(puVar1,*(undefined4 *)(&DAT_0093aa10 + iVar3 * 4),
                   *(undefined4 *)(&DAT_0093aa40 + iVar3 * 4));
      *(undefined **)(iVar4 + 0x1ef4c) = puVar1;
    }
    param_2 = param_2 + 1;
  } while ((int)param_2 < 0x7d3c5c);
  FUN_005fca30();
  return 1;
}

