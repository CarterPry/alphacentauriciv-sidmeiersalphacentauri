// REA Evidence: ev_13fcd03ce7d7d4b1d938437a69247ad55c778ab682089b5f7967ba81e099116d
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_004f79c0(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_c;
  int *local_8;
  
  DAT_00689370 = param_1;
  psVar1 = &DAT_0097d040 + param_1 * 0x9a;
  uVar5 = (uint)(byte)(&DAT_0097d044)[param_1 * 0x134];
  DAT_0090e934 = 0;
  DAT_00689374 = param_1;
  DAT_0090ea30 = psVar1;
  (&DAT_0097d070)[param_1 * 0x4d] = (&DAT_0097d070)[param_1 * 0x4d] & 0xdffffdff;
  FUN_004e9550();
  FUN_004e80b0();
  FUN_004e9b70();
  FUN_004e9cb0();
  FUN_004eb560();
  FUN_004f07e0();
  FUN_004f3fe0();
  *(undefined4 *)(DAT_0090ea30 + 0x4e) = *(undefined4 *)(DAT_0090ea30 + 0x20);
  *(undefined4 *)(DAT_0090ea30 + 0x22) = *(undefined4 *)(DAT_0090ea30 + 0x28);
  iVar2 = FUN_004ef1c0();
  if (iVar2 != 0) {
    return 1;
  }
  if (1 < DAT_009a64d4) {
    FUN_004f4830();
  }
  DAT_0090ea34 = 1;
  DAT_00689374 = DAT_00689370;
  FUN_004e9550();
  FUN_004e80b0();
  FUN_004e9b70();
  FUN_004e9cb0();
  FUN_004eb560();
  iVar2 = uVar5 * 0x20cc;
  if (((&DAT_0096e35c)
       [(uint)*(byte *)(DAT_0094a30c + 3 +
                       (DAT_0090ea30[1] * DAT_0068faf0 + ((int)*DAT_0090ea30 >> 1)) * 0x2c) + iVar2]
       == '\a') && (*(int *)(&DAT_0096cdbc + iVar2) < 1)) {
    local_c = 4;
  }
  else {
    local_c = ((&DAT_0096e35c)
               [(uint)*(byte *)(DAT_0094a30c + 3 +
                               (DAT_0090ea30[1] * DAT_0068faf0 + ((int)*DAT_0090ea30 >> 1)) * 0x2c)
                + iVar2] != '\x02') + 1;
  }
  iVar3 = FUN_0050ba30(*(undefined4 *)(DAT_0090ea30 + 0x3c));
  iVar8 = DAT_009a64d4;
  (&DAT_0096d1d4)[uVar5 * 0x833] = (&DAT_0096d1d4)[uVar5 * 0x833] + iVar3 * local_c;
  DAT_0090ea34 = 2;
  if (1 < iVar8) {
    FUN_004f5ce0();
    FUN_004f5f30();
    if (*(byte *)(DAT_0090ea30 + 2) != uVar5) {
      return 1;
    }
    FUN_004f4dc0();
    if (((5 < DAT_009a64d4) || (DAT_0093f660 != 0)) || (((byte)DAT_009a6490 & 0x20) == 0)) {
      FUN_004f4e80();
    }
  }
  DAT_00689370 = param_1;
  DAT_0090ea30 = psVar1;
  if (DAT_00689374 != param_1) {
    DAT_00689374 = param_1;
    FUN_004e9550();
    FUN_004e80b0();
    FUN_004e9b70();
    FUN_004e9cb0();
    FUN_004eb560();
  }
  FUN_004f67f0();
  local_8 = &DAT_0090ea10;
  piVar7 = &DAT_0096eb6c;
  uVar6 = 1;
  (&DAT_0096cc00)[uVar5 * 0x833] = (&DAT_0096cc00)[uVar5 * 0x833] + *(int *)(DAT_0090ea30 + 0x80);
  pbVar4 = &DAT_009474f4;
  do {
    if (((uVar6 != uVar5) && (((&DAT_00946f58)[uVar5 * 0x59c] & 0x80) == 0)) &&
       ((*pbVar4 & 0x80) == 0)) {
      if ((*(int *)(&DAT_0096caa0 + iVar2) == 0) && (*piVar7 == 0)) {
        iVar8 = *local_8;
      }
      else {
        iVar8 = 0;
      }
      *(int *)(&DAT_0096cce8 + iVar2) = *(int *)(&DAT_0096cce8 + iVar2) + iVar8;
    }
    pbVar4 = pbVar4 + 0x59c;
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 0x833;
    local_8 = local_8 + 1;
  } while ((int)pbVar4 < 0x949c38);
  iVar8 = uVar5 * 0x59c;
  if (((&DAT_00946f58)[iVar8] & 0x80) != 0) {
    local_8 = (int *)0x0;
    local_c = 0;
    do {
      uVar6 = local_c & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      if ((*(byte *)(((int)(local_c + ((int)local_c >> 0x1f & 7U)) >> 3) + 0x8c + (int)DAT_0090ea30)
          & (byte)(1 << ((byte)uVar6 & 0x1f))) != 0) {
        local_8 = (int *)((int)local_8 + 1);
      }
      local_c = local_c + 1;
    } while ((int)local_c < 0x46);
    piVar7 = &DAT_009a6514;
    do {
      if (*piVar7 == param_1) {
        local_8 = (int *)((int)local_8 + 5);
      }
      piVar7 = piVar7 + 1;
    } while ((int)piVar7 < 0x9a6614);
    iVar3 = (int)local_8 / 2;
    if (*(int *)(&DAT_0096caa0 + iVar2) != 0) {
      iVar3 = 0;
    }
    *(int *)(&DAT_0096cce8 + iVar2) = *(int *)(&DAT_0096cce8 + iVar2) + iVar3;
  }
  if (1 < DAT_009a64d4) {
    FUN_004f65f0();
  }
  FUN_004ecbf0(0);
  if ((((*(uint *)(DAT_0090ea30 + 0x18) & 0x10000) != 0) && (iVar2 = _rand(), iVar2 % 3 == 0)) &&
     (((byte)DAT_009a64c0 & 1) == 0)) {
    if ((((byte)(&DAT_0097d044)[DAT_00689370 * 0x134] == DAT_00939284) ||
        (((byte)(1 << ((byte)DAT_00939284 & 0x1f)) & (&DAT_0097d04a)[DAT_00689370 * 0x134]) != 0))
       && (iVar2 = FUN_005108a0((int)*DAT_0090ea30,(int)DAT_0090ea30[1],DAT_00939284), iVar2 == 0))
    {
      FUN_0046b140((int)*DAT_0090ea30,(int)DAT_0090ea30[1],2);
    }
    FUN_00625ec0(1,(int)DAT_0090ea30 + 0x13,0xffffffff,0xffffffff);
    DAT_009bbfec = (&DAT_00946d4c)[uVar5 * 0x167];
    DAT_009bbff0 = (&DAT_00946d50)[uVar5 * 0x167];
    FUN_00625ec0(0,&DAT_00946d34 + iVar8,0xffffffff,0xffffffff);
    FUN_004e4090(uVar5,(int)DAT_0090ea30 + 0x13,1,
                 (*(byte *)(DAT_0094a30c +
                           (DAT_0090ea30[1] * DAT_0068faf0 + ((int)*DAT_0090ea30 >> 1)) * 0x2c) &
                 0xe0) < 0x60);
    FUN_00625ec0(2,(int)DAT_0090ea30 + 0x13,0xffffffff,0xffffffff);
    if (((byte)(&DAT_0097d044)[DAT_00689370 * 0x134] == DAT_00939284) ||
       (((&DAT_0097d04a)[DAT_00689370 * 0x134] & (byte)(1 << ((byte)DAT_00939284 & 0x1f))) != 0)) {
      FUN_0046b190(1);
      if (((&DAT_00946f58)[iVar8] & 0x80) == 0) {
        pcVar10 = s_colfoun_sm_pcx_00689ec0;
        pcVar9 = s_RENAMEBASE_00689ed0;
      }
      else {
        pcVar10 = s_al_col_sm_pcx_00689ea4;
        pcVar9 = s_RENAMEBASE_00689eb4;
      }
      FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,pcVar9,0,pcVar10,0);
    }
    *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xfffeffff;
    *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) | 0x80;
  }
  DAT_00689374 = 0xffffffff;
  if (DAT_00689370 == DAT_006e8134) {
    FUN_0041e790();
  }
  if ((DAT_0090e934 != 0) && ((((byte)DAT_009a64c0 & 1) == 0 || (((byte)DAT_009a64c0 & 8) != 0)))) {
    FUN_006262f0(s_UPKEEP_zoom_to_base_00689edc,param_1,0,0);
    FUN_0041a920(param_1,1);
    FUN_006262f0(s_FINISHED_zoom_to_base_00689ef0,param_1,0,0);
  }
  DAT_0090ea34 = 0;
  if (*(char *)((int)DAT_0090ea30 + 7) != '\0') {
    *(char *)((int)DAT_0090ea30 + 7) = *(char *)((int)DAT_0090ea30 + 7) + -1;
    if ((*(char *)((int)DAT_0090ea30 + 5) == (char)DAT_0090ea30[2]) &&
       (*(char *)((int)DAT_0090ea30 + 7) != '\0')) {
      *(char *)((int)DAT_0090ea30 + 7) = *(char *)((int)DAT_0090ea30 + 7) + -1;
    }
    if (*(char *)((int)DAT_0090ea30 + 7) == '\0') {
      *(char *)((int)DAT_0090ea30 + 5) = (char)DAT_0090ea30[2];
    }
  }
  if ((char)DAT_0090ea30[4] != '\0') {
    *(char *)(DAT_0090ea30 + 4) = (char)DAT_0090ea30[4] + -1;
  }
  *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xffdffff7;
  if ((DAT_00689370 + DAT_009a64d4 & 7U) == 0) {
    *(uint *)(DAT_0090ea30 + 0x18) = *(uint *)(DAT_0090ea30 + 0x18) & 0xffefffff;
  }
  return 0;
}

