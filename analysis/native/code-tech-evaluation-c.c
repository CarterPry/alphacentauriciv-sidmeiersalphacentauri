// REA Evidence: ev_c2af219463bea7acf554bd3c3730e62a19cf1f4338a31d2f469ffa5964fe4413
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_005bcbe0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  int *piVar11;
  uint uVar12;
  short *psVar13;
  int local_1c;
  int local_18;
  int local_8;
  
  if (param_1 == 9999) {
    return 2;
  }
  local_18 = 0;
  iVar4 = 1;
  do {
    if ((iVar4 != param_2) && (((&DAT_0096c9f8)[iVar4 * 4 + param_2 * 0x20cc] & 0x10) != 0)) {
      local_18 = local_18 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 1;
  if (param_3 == (char *)0x0) {
    iVar4 = (-(uint)((DAT_009a649c & 0x200) != 0) & 2) + 2;
  }
  if (0x58 < param_1) {
    if (param_1 < 0x61) {
      uVar12 = 1;
      iVar4 = FUN_0055bc80(param_2,param_1 + -0x59,0);
      if (iVar4 == 0) {
        uVar12 = 2;
      }
      iVar4 = FUN_0055bc80(param_1 + -0x59,param_2,0);
      if (iVar4 == 0) {
        uVar12 = uVar12 + 1;
      }
      return (int)((longlong)(ulonglong)uVar12 /
                  (longlong)(*(int *)(&DAT_0096cdbc + param_2 * 0x20cc) + 2)) * uVar12;
    }
LAB_005bccc7:
    iVar4 = (param_1 + -0x61) * 0x34;
    iVar7 = (int)(char)(&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar4] * 0x10];
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    else if (2 < iVar7) {
      iVar7 = 2;
    }
    iVar8 = (int)(char)(&DAT_0094f280)[(uint)(byte)(&DAT_009ab88e)[iVar4] * 0x10];
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    else if (2 < iVar8) {
      iVar8 = 2;
    }
    bVar10 = (&DAT_0094a378)[(uint)(byte)(&DAT_009ab88c)[iVar4] * 0x90];
    uVar12 = (uint)bVar10;
    if (bVar10 == 0) {
      uVar12 = 1;
    }
    else if (2 < bVar10) {
      uVar12 = 2;
    }
    return (byte)(&DAT_009ab88f)[iVar4] + uVar12 + iVar8 + -2 + iVar7;
  }
  if (0x60 < param_1) goto LAB_005bccc7;
  iVar7 = param_2 * 0x20cc;
  local_8 = (*(int *)(&DAT_0096cdcc + iVar7) * iVar4 + 1) * (&DAT_0094f378)[param_1 * 0xb] +
            (*(int *)(&DAT_0096cdc4 + iVar7) * iVar4 + 1) * (&DAT_0094f370)[param_1 * 0xb] +
            (*(int *)(&DAT_0096cdc8 + iVar7) * iVar4 + 1) * (&DAT_0094f374)[param_1 * 0xb] +
            (*(int *)(&DAT_0096cdc0 + iVar7) * iVar4 + 1) * (&DAT_0094f36c)[param_1 * 0xb];
  if ((((&DAT_0094f378)[param_1 * 0xb] == 0) ||
      ((*(int *)(&DAT_0096cdcc + iVar7) == 0 && (local_18 == 0)))) &&
     ((((&DAT_0094f370)[param_1 * 0xb] == 0 || (*(int *)(&DAT_0096cdc4 + iVar7) == 0)) &&
      ((((&DAT_0094f374)[param_1 * 0xb] == 0 || (*(int *)(&DAT_0096cdc8 + iVar7) == 0)) &&
       (((&DAT_0094f36c)[param_1 * 0xb] == 0 ||
        ((*(int *)(&DAT_0096cdc0 + iVar7) == 0 && (3 < (int)(&DAT_0096da3c)[param_2 * 0x833]))))))))
     )) {
    local_8 = (local_8 + 1) / 2;
  }
  bVar10 = (byte)(1 << ((byte)param_2 & 0x1f));
  if (((bVar10 & (byte)DAT_009a64e8) == 0) &&
     ((param_2 < 1 ||
      ((param_1 != -1 &&
       (((((param_1 < 0 || (0x57 < param_1)) || ((int)(&DAT_0094f37c)[param_1 * 0xb] < -1)) ||
         (((int)(&DAT_0094f380)[param_1 * 0xb] < -1 && ((&DAT_0094f37c)[param_1 * 0xb] != -1)))) ||
        (((&DAT_009a6670)[param_1] & bVar10) == 0)))))))) {
    if (param_3 != (char *)0x0) {
      iVar4 = FUN_0050ba30((&DAT_009a6670)[param_1]);
      if (1 < iVar4) {
        iVar4 = FUN_0050ba30((&DAT_009a6670)[param_1]);
        local_8 = local_8 + iVar4 * -2 + 2;
      }
      local_1c = 1;
      iVar4 = 0;
      do {
        if (0 < param_2) {
          if (iVar4 == -1) {
LAB_005bcf87:
            iVar8 = 0;
          }
          else {
            if (((iVar4 < 0) || (0x57 < iVar4)) ||
               ((iVar8 = (&DAT_0094f37c)[iVar4 * 0xb], iVar8 < -1 ||
                ((((int)(&DAT_0094f380)[iVar4 * 0xb] < -1 && (iVar8 != -1)) ||
                 (((&DAT_009a6670)[iVar4] & bVar10) == 0)))))) goto LAB_005bcfd3;
            if (0x58 < iVar4) goto LAB_005bcf87;
            iVar8 = FUN_005b9f90(iVar8,1);
            iVar5 = FUN_005b9f90((&DAT_0094f380)[iVar4 * 0xb],1);
            if (iVar8 <= iVar5) {
              iVar8 = iVar5;
            }
          }
          if (local_1c <= iVar8) {
            if ((iVar4 < 0) || (0x58 < iVar4)) {
              local_1c = 0;
            }
            else {
              iVar8 = FUN_005b9f90((&DAT_0094f37c)[iVar4 * 0xb],1);
              local_1c = FUN_005b9f90((&DAT_0094f380)[iVar4 * 0xb],1);
              if (local_1c < iVar8) {
                local_1c = iVar8;
              }
            }
          }
        }
LAB_005bcfd3:
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x59);
      if (param_1 < 0) {
        iVar4 = 0;
      }
      else {
        iVar8 = FUN_005b9f90((&DAT_0094f37c)[param_1 * 0xb],1);
        iVar4 = FUN_005b9f90((&DAT_0094f380)[param_1 * 0xb],1);
        if (iVar4 < iVar8) {
          iVar4 = iVar8;
        }
      }
      if (iVar4 < local_1c) {
        local_8 = ((iVar4 + 1) * local_8) / (local_1c + 1);
      }
      if (local_8 < 1) {
        local_8 = 1;
      }
      goto LAB_005bd036;
    }
  }
  else {
LAB_005bd036:
    if (param_3 != (char *)0x0) {
      return local_8;
    }
  }
  iVar4 = (&DAT_0096da3c)[param_2 * 0x833];
  if (iVar4 != 0) {
    uVar12 = 1;
    do {
      if (((uVar12 & 0x3f) != 0x3f) && ((uVar12 & 0x3f) != 0)) {
        cVar1 = (&DAT_0096e35c)[uVar12 + iVar7];
        if ((cVar1 == '\a') && ((local_18 != 0 && (((byte)DAT_009a64e8 & bVar10) == 0)))) {
          local_8 = local_8 + (int)((uint)(byte)(&DAT_0096db5c)[uVar12 + iVar7] *
                                   (&DAT_0094f378)[param_1 * 0xb]) / iVar4;
        }
        else if (cVar1 == '\x02') {
          local_8 = local_8 + (int)((uint)(byte)(&DAT_0096db5c)[uVar12 + iVar7] *
                                    (&DAT_0094f378)[param_1 * 0xb] * 4) /
                              (int)(((((byte)DAT_009a64e8 & bVar10) != 0) + 1) * iVar4);
        }
        else if (cVar1 == '\0') {
          local_8 = local_8 + (int)(((((int)(&DAT_0096d20c)[param_2 * 0x833] <=
                                      (int)(&DAT_0096d1f8)[param_2 * 0x833]) - 1 & 2) + 2) *
                                    (uint)(byte)(&DAT_0096db5c)[uVar12 + iVar7] *
                                   (&DAT_0094f378)[param_1 * 0xb]) /
                              (int)(((((byte)DAT_009a64e8 & bVar10) != 0) + 1) * iVar4);
        }
        else {
          param_3 = &DAT_0096fc28 + uVar12;
          iVar8 = 1;
          do {
            if ((((param_2 != iVar8) && (*param_3 != '\0')) &&
                ((&DAT_0096db5c)[uVar12 + iVar7] != 0)) &&
               ((uVar2 = *(uint *)(&DAT_0096c9f8 + param_2 * 0x20cc + iVar8 * 4), (uVar2 & 8) != 0
                && (((uVar2 & 3) == 0 || ((uVar2 & 0x20) != 0)))))) {
              local_8 = local_8 + (int)((uint)(byte)(&DAT_0096db5c)[uVar12 + iVar7] *
                                       (&DAT_0094f378)[param_1 * 0xb]) /
                                  (int)(((((byte)DAT_009a64e8 & bVar10) != 0) + 1) * iVar4);
            }
            iVar8 = iVar8 + 1;
            param_3 = param_3 + 0x20cc;
          } while (iVar8 < 8);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40);
  }
  if (0 < param_2) {
    if (param_1 == -1) {
      return local_8;
    }
    if (((-1 < param_1) && (param_1 < 0x58)) &&
       ((-2 < (int)(&DAT_0094f37c)[param_1 * 0xb] &&
        (((-2 < (int)(&DAT_0094f380)[param_1 * 0xb] || ((&DAT_0094f37c)[param_1 * 0xb] == -1)) &&
         (((&DAT_009a6670)[param_1] & bVar10) != 0)))))) {
      return local_8;
    }
  }
  iVar8 = FUN_00539e40();
  iVar4 = DAT_009a5e9c;
  if (((iVar8 != 0) && (-1 < param_1)) &&
     ((-1 < DAT_009a5e9c &&
      (((param_1 == DAT_009a5e9c ||
        (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a5e9c * 0xb],1), iVar8 != 0)) ||
       (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],1), iVar4 != 0)))))) {
    local_8 = local_8 << 2;
  }
  if (((0 < *(int *)(&DAT_0096cccc + iVar7)) && (*(int *)(&DAT_0096cdc0 + iVar7) != 0)) &&
     (-1 < param_1)) {
    if (((param_1 == 0x2f) || (iVar4 = FUN_005bcb60(param_1,DAT_0094fb90,0x270e), iVar4 != 0)) ||
       (iVar4 = FUN_005bcb60(param_1,DAT_0094fb94,0x270e), iVar4 != 0)) {
      local_8 = local_8 * 3;
    }
    if (((param_1 == 0x3d) || (iVar4 = FUN_005bcb60(param_1,DAT_0094fdf8,0x270e), iVar4 != 0)) ||
       (iVar4 = FUN_005bcb60(param_1,DAT_0094fdfc,0x270e), iVar4 != 0)) {
      local_8 = local_8 * 2;
    }
    if (((param_1 == 0x40) || (iVar4 = FUN_005bcb60(param_1,DAT_0094fe7c,2), iVar4 != 0)) ||
       (iVar4 = FUN_005bcb60(param_1,DAT_0094fe80,2), iVar4 != 0)) {
      local_8 = local_8 * 2;
    }
  }
  iVar4 = DAT_009a5b6c;
  if (((*(int *)(&DAT_0096ccd0 + iVar7) < 1) && (-1 < param_1)) && (-1 < DAT_009a5b6c)) {
    if (param_1 == DAT_009a5b6c) {
LAB_005bd3c7:
      if (*(int *)(&DAT_0096cdcc + iVar7) == 0) {
        local_8 = local_8 * 2;
      }
      if (*(int *)(&DAT_0096cdc4 + iVar7) != 0) {
        local_8 = local_8 * 2;
      }
    }
    else if ((*(int *)(&DAT_0096cdc4 + iVar7) != 0) != 0xfffffffe) {
      iVar8 = (*(int *)(&DAT_0096cdc4 + iVar7) != 0) + 1;
      iVar5 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a5b6c * 0xb],iVar8);
      if ((iVar5 != 0) ||
         (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],iVar8), iVar4 != 0))
      goto LAB_005bd3c7;
    }
  }
  if (((*(int *)(&DAT_0096cdc0 + iVar7) != 0) && (-1 < param_1)) &&
     ((param_1 == 0x23 ||
      ((iVar4 = FUN_005bcb60(param_1,DAT_0094f980,1), iVar4 != 0 ||
       (iVar4 = FUN_005bcb60(param_1,DAT_0094f984,1), iVar4 != 0)))))) {
    local_8 = local_8 * 2;
  }
  if ((((*(int *)(&DAT_0096cdc8 + iVar7) != 0) || (DAT_0094a2b4 == 0)) && (-1 < param_1)) &&
     (((param_1 == 0x3b || (iVar4 = FUN_005bcb60(param_1,DAT_0094fda0,0x270e), iVar4 != 0)) ||
      (iVar4 = FUN_005bcb60(param_1,DAT_0094fda4,0x270e), iVar4 != 0)))) {
    local_8 = local_8 * 2;
  }
  iVar4 = DAT_009a5c2c;
  if (((((&DAT_0094f358)[param_1 * 0x2c] & 1) != 0) && ((&DAT_009a6670)[param_1] == '\0')) &&
     ((DAT_009a649c & 0x200) == 0)) {
    local_8 = (*(int *)(&DAT_0096cdcc + iVar7) + 1) * local_8 * 2;
  }
  if (*(int *)(&DAT_00946f4c + param_2 * 0x59c) < 1) {
    iVar4 = (int)DAT_0095280c;
    if (param_1 == iVar4) {
      local_8 = local_8 * 2;
    }
    if (param_1 == DAT_00952818) {
      local_8 = local_8 * 2;
    }
    if (((-1 < param_1) && (-1 < iVar4)) &&
       ((param_1 == iVar4 ||
        ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar4 * 0xb],0x270e), iVar8 != 0 ||
         (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0x270e), iVar4 != 0)))))) {
      local_8 = local_8 + 1;
    }
    iVar4 = (int)DAT_0095280c;
    if ((((param_1 < 0) || (iVar4 < 0)) ||
        ((param_1 != iVar4 &&
         ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar4 * 0xb],0), iVar8 == 0 &&
          (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0), iVar4 == 0)))))) ||
       ((DAT_009a649c & 0x200) != 0)) goto LAB_005bd607;
  }
  else if (((param_1 < 0) || (DAT_009a5c2c < 0)) ||
          ((param_1 != DAT_009a5c2c &&
           ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a5c2c * 0xb],0x270e), iVar8 == 0 &&
            (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0x270e), iVar4 == 0))))))
  goto LAB_005bd607;
  local_8 = local_8 * 2;
LAB_005bd607:
  iVar8 = DAT_009a4e1c;
  iVar4 = (&DAT_0096da3c)[param_2 * 0x833];
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  else if (9999 < iVar4) {
    iVar4 = 9999;
  }
  iVar5 = (&DAT_0096d1dc)[param_2 * 0x833];
  if ((*(int *)(&DAT_0096cdcc + iVar7) < iVar5 / iVar4) &&
     ((((((-1 < param_1 && (-1 < DAT_009a4e1c)) &&
         ((param_1 == DAT_009a4e1c ||
          ((iVar6 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a4e1c * 0xb],0x270e), iVar6 != 0 ||
           (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar8 * 0xb],0x270e), iVar8 != 0)))))) ||
        ((iVar8 = DAT_009a4dec, -1 < param_1 &&
         ((-1 < DAT_009a4dec &&
          (((param_1 == DAT_009a4dec ||
            (iVar6 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a4dec * 0xb],0x270e), iVar6 != 0))
           || (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar8 * 0xb],0x270e), iVar8 != 0))))))))
       || (((iVar8 = DAT_009a514c, -1 < param_1 && (-1 < DAT_009a514c)) &&
           ((param_1 == DAT_009a514c ||
            ((iVar6 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a514c * 0xb],0x270e), iVar6 != 0
             || (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar8 * 0xb],0x270e), iVar8 != 0))))))
          )) || (((iVar8 = DAT_009a517c, -1 < param_1 && (-1 < DAT_009a517c)) &&
                 (((param_1 == DAT_009a517c ||
                   (iVar6 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a517c * 0xb],0x270e),
                   iVar6 != 0)) ||
                  (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar8 * 0xb],0x270e), iVar8 != 0))))
                )))) {
    local_8 = local_8 + iVar5 / iVar4;
  }
  iVar4 = DAT_009a4ffc;
  if (0 < *(int *)(&DAT_00946f40 + param_2 * 0x59c)) {
    if (((param_1 < 0) || (DAT_009a4ffc < 0)) ||
       ((param_1 != DAT_009a4ffc &&
        ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a4ffc * 0xb],0x270e), iVar8 == 0 &&
         (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0x270e), iVar4 == 0)))))) {
      iVar4 = DAT_009a502c;
      if ((-1 < param_1) &&
         ((-1 < DAT_009a502c &&
          ((((param_1 == DAT_009a502c ||
             (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[DAT_009a502c * 0xb],0x270e), iVar8 != 0))
            || (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0x270e), iVar4 != 0)) &&
           (0xfa < DAT_009a64d4)))))) {
        local_8 = (local_8 * 3) / 2;
      }
    }
    else {
      local_8 = local_8 * 2;
    }
  }
  if (*(int *)(&DAT_0096cdcc + iVar7) != 0) {
    psVar13 = &DAT_0094ae6c;
    do {
      if ((char)psVar13[-2] != '\0') {
        iVar4 = (int)*psVar13;
        if (param_1 == iVar4) {
          local_8 = ((((byte)DAT_009a64e8 & bVar10) != 0) + 3) * local_8;
        }
        else if (((-1 < param_1) && (-1 < iVar4)) &&
                ((param_1 == iVar4 ||
                 ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar4 * 0xb],0), iVar8 != 0 ||
                  (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0), iVar4 != 0)))))) {
          local_8 = ((((byte)DAT_009a64e8 & bVar10) != 0) + 2) * local_8;
        }
      }
      psVar13 = psVar13 + 8;
    } while ((int)psVar13 < 0x94b00c);
  }
  if ((*(int *)(&DAT_0096cdc4 + iVar7) != 0) || (*(int *)(&DAT_0096cdcc + iVar7) == 0)) {
    iVar4 = 0;
    do {
      if (((param_2 < 1) ||
          ((iVar4 != -1 &&
           ((((iVar4 < 0 || (0x57 < iVar4)) || ((int)(&DAT_0094f37c)[iVar4 * 0xb] < -1)) ||
            ((((int)(&DAT_0094f380)[iVar4 * 0xb] < -1 && ((&DAT_0094f37c)[iVar4 * 0xb] != -1)) ||
             (((&DAT_009a6670)[iVar4] & bVar10) == 0)))))))) &&
         (((((&DAT_0094f358)[iVar4 * 0x2c] & 1) != 0 && ((&DAT_009a6670)[iVar4] == '\0')) &&
          (((-1 < param_1 && (-1 < iVar4)) &&
           (((param_1 == iVar4 ||
             (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar4 * 0xb],0), iVar8 != 0)) ||
            (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0), iVar8 != 0)))))))) {
        local_8 = local_8 * 3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x59);
  }
  iVar8 = (int)DAT_009ab8ce;
  iVar4 = local_8;
  if (((-1 < param_1) && (-1 < iVar8)) &&
     ((((param_1 == iVar8 ||
        ((iVar5 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar8 * 0xb],0x270e), iVar5 != 0 ||
         (iVar8 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar8 * 0xb],0x270e), iVar8 != 0)))) &&
       ((iVar8 = (int)DAT_009ab8ce, param_2 < 1 ||
        ((iVar8 != -1 &&
         (((((iVar8 < 0 || (0x57 < iVar8)) || ((int)(&DAT_0094f37c)[iVar8 * 0xb] < -1)) ||
           (((int)(&DAT_0094f380)[iVar8 * 0xb] < -1 && ((&DAT_0094f37c)[iVar8 * 0xb] != -1)))) ||
          (((&DAT_009a6670)[iVar8] & bVar10) == 0)))))))) &&
      (iVar4 = local_8 * 2, (bVar10 & (byte)DAT_009a64e8) != 0)))) {
    iVar4 = local_8 * 4;
  }
  local_8 = iVar4;
  iVar4 = (int)DAT_0094a56e;
  if ((-1 < param_1) && (-1 < iVar4)) {
    if ((param_1 != iVar4) &&
       ((iVar8 = FUN_005bcb60(param_1,(&DAT_0094f37c)[iVar4 * 0xb],0x270e), iVar8 == 0 &&
        (iVar4 = FUN_005bcb60(param_1,(&DAT_0094f380)[iVar4 * 0xb],0x270e), iVar4 == 0)))) {
      return local_8;
    }
    iVar4 = (int)DAT_0094a56e;
    if (0 < param_2) {
      if (iVar4 == -1) {
        return local_8;
      }
      if ((((-1 < iVar4) && (iVar4 < 0x58)) && (-2 < (int)(&DAT_0094f37c)[iVar4 * 0xb])) &&
         (((-2 < (int)(&DAT_0094f380)[iVar4 * 0xb] || ((&DAT_0094f37c)[iVar4 * 0xb] == -1)) &&
          (((&DAT_009a6670)[iVar4] & bVar10) != 0)))) {
        return local_8;
      }
    }
    bVar3 = false;
    iVar4 = 1;
    piVar11 = &DAT_009aa74c;
    do {
      if ((&DAT_0096db5c)[iVar4 + iVar7] != '\0') {
        iVar8 = 1;
        pcVar9 = &DAT_0096fc28 + iVar4;
        do {
          if ((param_2 != iVar8) && (*pcVar9 == '\0')) {
            bVar3 = true;
            goto LAB_005bdb9a;
          }
          iVar8 = iVar8 + 1;
          pcVar9 = pcVar9 + 0x20cc;
        } while (iVar8 < 8);
        if (bVar3) {
LAB_005bdb9a:
          if (*piVar11 <= (int)(uint)(ushort)(&DAT_0096df5c)[param_2 * 0x1066 + iVar4]) {
            iVar8 = local_8 * 3;
            if ((bVar10 & (byte)DAT_009a64e8) != 0) {
              iVar8 = local_8 * 6;
            }
            break;
          }
        }
      }
      piVar11 = piVar11 + 7;
      iVar4 = iVar4 + 1;
      iVar8 = local_8;
    } while ((int)piVar11 < 0x9aae30);
    local_8 = iVar8;
    if (bVar3) {
      local_8 = local_8 * 2 + 4;
    }
  }
  return local_8;
}

