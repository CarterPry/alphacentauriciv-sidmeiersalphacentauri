// REA Evidence: ev_ed86e2a6f2b3ed1be780457315748901ab979fc8bfde0c3d6c503747ecee3378
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode, not original source.


void FUN_004f3fe0(void)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pcVar3 = (char *)(uint)*(byte *)(DAT_0090ea30 + 2);
  local_14 = 1 << (*(byte *)(DAT_0090ea30 + 2) & 0x1f);
  if ((((byte)DAT_009a64e8 & (byte)local_14) != 0) &&
     (((byte)(~*(uint *)(DAT_0090ea30 + 0x1c) >> 0x1a) & 0x20) != 0 ||
      (~*(uint *)(DAT_0090ea30 + 0x1c) & 0x20) != 0)) {
    return;
  }
  if (*(int *)(DAT_0090ea30 + 0x20) == 0) {
    return;
  }
  local_c = *(int *)(DAT_0090ea30 + 0x28);
  iVar8 = 0;
  if (local_c < 0) {
    local_8 = -local_c;
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    iVar4 = FUN_005c1850(local_c,DAT_00689370,0);
  }
  else {
    iVar4 = (&DAT_009a4b74)[local_8 * 0xc];
  }
  local_10 = FUN_004e4430(pcVar3,1,0xffffffff);
  iVar7 = DAT_00689370;
  local_10 = local_10 * iVar4;
  local_1c = (int)*DAT_0090ea30;
  iVar4 = DAT_0090ea30[1] * DAT_0068faf0 + (local_1c >> 1);
  bVar1 = *(byte *)(DAT_0094a30c + 3 + iVar4 * 0x2c);
  iVar4 = DAT_0094a30c + iVar4 * 0x2c;
  if (local_c < 0) {
    if (((*(byte *)(DAT_0090ea30 + 0x18) & 2) == 0) || (local_8 == 0)) {
      if (local_8 == 1) {
        iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 10;
      }
      else if ((local_8 == 4) || (local_8 == 5)) {
        pcVar9 = (char *)0x1;
        iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 0x32;
        local_18 = &DAT_0096fc29;
        do {
          if (((pcVar9 != pcVar3) &&
              ((*(uint *)(&DAT_0096c9f8 + (int)pcVar9 * 4 + (int)pcVar3 * 0x20cc) & 0x40030) != 0))
             && ((*local_18 != '\0' ||
                 (((byte)DAT_009a64e8 & (byte)(1 << ((byte)pcVar9 & 0x1f))) != 0)))) {
            iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 10;
          }
          pcVar9 = pcVar9 + 1;
          local_18 = local_18 + 0x20cd;
        } while ((int)local_18 < 0x97e1c4);
      }
      else if (local_8 < 0x46) {
        if (local_8 == 0x21) {
          iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 0x32;
          iVar4 = FUN_00539ef0(pcVar3);
          if (iVar4 != 0) {
            iVar8 = iVar8 * 2;
          }
        }
      }
      else {
        iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 0x32;
        if (1999 < (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833]) {
          iVar8 = iVar8 * 4;
        }
        if (local_8 == 0x66) {
          iVar8 = iVar8 << 2;
        }
      }
    }
    else {
      iVar4 = (int)pcVar3 * 0x20cc;
      iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] /
              ((*(int *)(&DAT_0096cdcc + iVar4) + 1 + *(int *)(&DAT_0096cdc8 + iVar4)) * 5);
      if (((*(int *)(DAT_0090ea30 + 0x8c) < *(int *)(DAT_0090ea30 + 0x8e)) &&
          (FUN_0050ba00(0x23,&local_1c,&local_18),
          (int)(*(int *)(&DAT_0096cc40 + iVar4) +
               (uint)(((&DAT_0097d0cc)[iVar7 * 0x134 + local_1c] & (byte)local_18) != 0) * 2) < -1))
         && (local_8 < 0x46)) {
        iVar4 = (int)((&DAT_0096cc00)[(int)pcVar3 * 0x833] * 3 +
                     ((&DAT_0096cc00)[(int)pcVar3 * 0x833] * 3 >> 0x1f & 3U)) >> 2;
        iVar8 = (local_10 - *(int *)(DAT_0090ea30 + 0x20)) *
                (-(uint)(((byte)DAT_009a64e8 & (byte)local_14) != 0) & 2);
        if ((iVar8 < 0) || (iVar4 < 0)) {
          iVar8 = 0;
        }
        else if (iVar8 - iVar4 != 0 && iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    }
  }
  else {
    local_18 = (char *)(local_c * 0x34);
    if (((&DAT_009ab892)[(int)local_18] == '\b') && ((char)DAT_0090ea30[3] < '\x02')) {
      return;
    }
    if (((((*(byte *)(iVar4 + 8) & 2) == 0) || (7 < (*(byte *)(iVar4 + 2) & 0xf))) ||
        ((*(byte *)(DAT_0090ea30 + 0x18) & 8) != 0)) ||
       (iVar4 = FUN_00579cc0(pcVar3,0x10,local_1c,(int)DAT_0090ea30[1]), iVar4 != 0)) {
      iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 10;
    }
    else if ((local_c < 0x40) || ((*(byte *)((int)&DAT_009ab898 + (int)local_18) & 4) != 0)) {
      bVar2 = (&DAT_009ab892)[(int)local_18];
      iVar4 = (int)pcVar3 * 0x20cc;
      bVar1 = (&DAT_0096e35c)[(uint)bVar1 + iVar4];
      if ((((bVar1 == bVar2) || ((bVar2 == 9 && (bVar1 == 8)))) || ((bVar2 == 1 && (bVar1 < 3)))) &&
         ((iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] /
                   ((*(int *)(&DAT_0096cdc8 + iVar4) + 2) * 0x19 +
                   *(int *)(&DAT_0096cdcc + iVar4) * -10), bVar1 == 8 &&
          (iVar8 = (*(int *)(&DAT_0096cdc0 + iVar4) + 5) * iVar8,
          iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2,
          DAT_009a64d4 < (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833])))) {
        iVar8 = iVar8 * 2;
      }
    }
    else {
      iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] /
              ((*(int *)(&DAT_0096cdc8 + (int)pcVar3 * 0x20cc) + 2) * 10);
    }
    iVar4 = FUN_005004f0(local_c);
    if ((iVar4 != 0) && ((&DAT_0096da50)[(int)pcVar3 * 0x833] == 0)) {
      piVar5 = &DAT_0096ec84;
      local_18 = (char *)0x1;
      do {
        if ((((local_18 != pcVar3) &&
             (((&DAT_0096c9f8)[(int)local_18 * 4 + (int)pcVar3 * 0x20cc] & 0x10) != 0)) &&
            (*piVar5 != 0)) && (*(int *)(&DAT_0096cbb8 + (int)pcVar3 * 0x20cc) <= *piVar5)) {
          iVar8 = (int)(&DAT_0096cc00)[(int)pcVar3 * 0x833] / 10;
        }
        piVar5 = piVar5 + 0x833;
        local_18 = local_18 + 1;
      } while ((int)piVar5 < 0x97d218);
    }
  }
  local_18 = (char *)((int)pcVar3 * 0x833);
  iVar4 = (&DAT_0096cc00)[(int)pcVar3 * 0x833];
  iVar7 = iVar4 >> 0x1f;
  if (iVar4 < 0x12c0) {
    if (0xc80 < iVar4) {
      iVar7 = iVar4 / 100 + iVar7;
      goto LAB_004f45aa;
    }
    if (2000 < iVar4) {
      iVar7 = iVar4 / 0xfa + iVar7;
      goto LAB_004f45aa;
    }
  }
  else {
    iVar7 = iVar4 / 0x19 + iVar7;
LAB_004f45aa:
    iVar8 = iVar8 + (iVar7 - (iVar7 >> 0x1f));
  }
  if ((iVar8 < 0) || (iVar4 < 0)) {
    iVar8 = 0;
  }
  else if (iVar4 < iVar8) {
    iVar8 = iVar4;
  }
  iVar4 = local_10 - *(int *)(DAT_0090ea30 + 0x20);
  if ((iVar8 < 0) || (iVar4 < 0)) goto LAB_004f474c;
  if (iVar4 < iVar8) {
    iVar8 = iVar4;
  }
  if (iVar8 == 0) goto LAB_004f474c;
  if (DAT_009a6590 < 0) {
    iVar4 = _strcmp(&DAT_00946a54 + (int)pcVar3 * 0x59c,s_MORGAN_00689b3c);
    if (iVar4 == 0) {
      iVar8 = (iVar8 * 2) / 3;
    }
    else {
      iVar4 = _strcmp(&DAT_00946a54 + (int)pcVar3 * 0x59c,s_PEACE_00689b44);
      if (iVar4 == 0) {
        iVar8 = iVar8 * 3;
        goto LAB_004f4649;
      }
    }
  }
  else {
LAB_004f4649:
    iVar8 = iVar8 / 2;
  }
  iVar4 = *(int *)(&DAT_00946f44 + (int)pcVar3 * 0x59c);
  if ((iVar4 != 100) && (iVar8 < (int)(&DAT_0096cc00)[(int)local_18] / 10)) {
    iVar8 = (iVar8 * 100) / iVar4;
  }
  iVar6 = local_10 - *(int *)(DAT_0090ea30 + 0x20);
  iVar7 = (iVar6 * iVar6) / 0x14 + iVar6 * 2;
  if (*(int *)(DAT_0090ea30 + 0x28) < -0x45) {
    iVar7 = iVar7 * 2;
  }
  if (-1 < DAT_009a6590) {
    iVar7 = iVar7 * 2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (iVar6 * iVar8) / iVar7;
  }
  *(int *)(DAT_0090ea30 + 0x20) = (iVar7 * 100) / iVar4 + *(int *)(DAT_0090ea30 + 0x20);
  if (((byte)local_14 & (byte)DAT_009a64e8) == 0) {
    iVar4 = (DAT_009a64c4 * iVar8) / ((8 - (&DAT_0096c9e4)[DAT_009a650c * 0x833]) * 10);
  }
  else {
    iVar4 = 0;
  }
  (&DAT_0096cc00)[(int)local_18] = (&DAT_0096cc00)[(int)local_18] + (iVar4 - iVar8);
LAB_004f474c:
  iVar8 = local_8;
  if ((((((byte)local_14 & (byte)DAT_009a64e8) == 0) && (0x45 < local_8)) &&
      (*(int *)(&DAT_009a63fc + local_8 * 4) == -1)) &&
     (((DAT_009a6800 < 1 && (((byte)DAT_009a64c0 & 1) == 0)) &&
      (iVar4 = FUN_004e4430((char)DAT_0090ea30[2],1,0xffffffff),
      iVar4 * (&DAT_009a4b74)[iVar8 * 0xc] <=
      *(int *)(DAT_0090ea30 + 0x6a) + *(int *)(DAT_0090ea30 + 0x20))))) {
    FUN_00625ec0(0,&DAT_00946d54 + (uint)*(byte *)(DAT_0090ea30 + 2) * 0x59c,0xffffffff,0xffffffff);
    FUN_00625e50(1,(&DAT_009a4b68)[iVar8 * 0xc],0xffffffff,0xffffffff);
    FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_DONEPROJECT_00689b5c,0,s_secproj_sm_pcx_00689b4c,0);
  }
  return;
}

