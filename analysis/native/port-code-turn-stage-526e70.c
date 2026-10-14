// REA Evidence: ev_b74492945595a017d4c78741deb5e616a26ede8e6e53febdd1c89e56c428845d
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_00526e70(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int local_8;
  
  uVar1 = (uint)param_1;
  iVar5 = (int)param_1 * 0x20cc;
  *(undefined4 *)(&DAT_0096cdd8 + iVar5) = 0;
  *(undefined4 *)(&DAT_0096ccdc + iVar5) = 0;
  *(undefined4 *)(&DAT_0096cce0 + iVar5) = 0;
  *(undefined4 *)(&DAT_0096cce8 + iVar5) = 0;
  FUN_005bae60(param_1);
  param_1 = (byte *)0x1;
  piVar6 = &DAT_0096eccc;
  do {
    if (((param_1 != (byte *)uVar1) &&
        (((uint)DAT_009a64e8._1_1_ & 1 << ((byte)param_1 & 0x1f)) != 0)) &&
       (((uint)DAT_009a64e8._1_1_ & 1 << ((byte)uVar1 & 0x1f)) != 0)) {
      iVar2 = ((int)param_1 + uVar1 * 0x833) * 4;
      if ((*(int *)(&DAT_0096caa4 + iVar2) != 0) && (piVar6[-0x58] == 0)) {
        if (((&DAT_0096c9f8)[iVar2] & 0x10) == 0) {
          iVar3 = *(int *)(&DAT_0096cac4 + iVar2);
          if ((int)(&DAT_0096cc00)[uVar1 * 0x833] <= *(int *)(&DAT_0096cac4 + iVar2)) {
            iVar3 = (&DAT_0096cc00)[uVar1 * 0x833];
          }
          *piVar6 = *piVar6 + iVar3;
          *(int *)(&DAT_0096caa4 + iVar2) = *(int *)(&DAT_0096caa4 + iVar2) - iVar3;
          (&DAT_0096cc00)[uVar1 * 0x833] = (&DAT_0096cc00)[uVar1 * 0x833] - iVar3;
          if (iVar3 < *(int *)(&DAT_0096cac4 + iVar2)) {
            *(int *)(&DAT_0096caa4 + iVar2) =
                 *(int *)(&DAT_0096caa4 + iVar2) + (*(int *)(&DAT_0096cac4 + iVar2) - iVar3);
          }
        }
        else {
          *(int *)(&DAT_0096caa4 + iVar2) =
               *(int *)(&DAT_0096cac4 + iVar2) + *(int *)(&DAT_0096caa4 + iVar2);
        }
      }
    }
    piVar6 = piVar6 + 0x833;
    param_1 = (byte *)((int)param_1 + 1);
  } while ((int)piVar6 < 0x97d260);
  *(uint *)(&DAT_0096c9e0 + iVar5) = *(uint *)(&DAT_0096c9e0 + iVar5) & 0xffffffdf;
  DAT_0093a958 = (&DAT_0096cc00)[uVar1 * 0x833];
  puVar4 = &DAT_0096d1b0 + uVar1 * 0x833;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1 = (byte *)(&DAT_0096d090 + uVar1 * 0x833);
  puVar4 = &DAT_0096d070 + uVar1 * 0x833;
  local_8 = 8;
  do {
    *puVar4 = 0;
    puVar7 = (undefined4 *)param_1;
    for (iVar2 = 9; iVar3 = DAT_009a64cc, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar4 = puVar4 + 1;
    param_1 = (byte *)((int)param_1 + 0x24);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar2 = 0;
  (&DAT_0096d1d4)[uVar1 * 0x833] = 0;
  (&DAT_0096d1d8)[uVar1 * 0x833] = 0;
  (&DAT_0096d1dc)[uVar1 * 0x833] = 0;
  (&DAT_0096d1e0)[uVar1 * 0x833] = 0;
  (&DAT_0096d1e4)[uVar1 * 0x833] = 0;
  if (0 < iVar3) {
    param_1 = &DAT_0097d044;
    do {
      if (*param_1 == uVar1) {
        iVar3 = FUN_004f79c0(iVar2);
        if (iVar3 != 0) {
          iVar2 = iVar2 + -1;
          param_1 = param_1 + -0x134;
        }
        FUN_005fcb20();
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x134;
    } while (iVar2 < DAT_009a64cc);
  }
  if (((((byte)(1 << ((byte)uVar1 & 0x1f)) & (byte)DAT_009a64e8) == 0) && (3 < DAT_009a64c4)) &&
     (iVar2 = *(int *)(&DAT_0096cce0 + iVar5), iVar2 != 0)) {
    if (DAT_009a64c4 == 4) {
      (&DAT_0096cc00)[uVar1 * 0x833] = (&DAT_0096cc00)[uVar1 * 0x833] + iVar2 / 3;
      iVar2 = *(int *)(&DAT_0096cce0 + iVar5);
      iVar3 = iVar2 / 3 + (iVar2 >> 0x1f);
    }
    else {
      (&DAT_0096cc00)[uVar1 * 0x833] = (&DAT_0096cc00)[uVar1 * 0x833] + (iVar2 * 2) / 3;
      iVar2 = *(int *)(&DAT_0096cce0 + iVar5);
      iVar3 = (iVar2 * 2) / 3 + (iVar2 * 2 >> 0x1f);
    }
    *(int *)(&DAT_0096cce0 + iVar5) = iVar2 - (iVar3 - (iVar3 >> 0x1f));
  }
  iVar2 = uVar1 * 0x59c;
  if ((*(uint *)(&DAT_00946f58 + iVar2) & 0x4000) != 0) {
    if (*(int *)(&DAT_00946f3c + iVar2) == 0) {
      if (0 < DAT_009a64cc) {
        pbVar8 = &DAT_0097d044;
        iVar3 = DAT_009a64cc;
        do {
          if (*pbVar8 == uVar1) {
            (&DAT_0096cc00)[uVar1 * 0x833] = (&DAT_0096cc00)[uVar1 * 0x833] + 1;
            *(int *)(&DAT_0096ccdc + iVar5) = *(int *)(&DAT_0096ccdc + iVar5) + 1;
          }
          pbVar8 = pbVar8 + 0x134;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      (&DAT_0096cc00)[uVar1 * 0x833] =
           (*(int *)(&DAT_00946f3c + iVar2) * (&DAT_0096cc00)[uVar1 * 0x833]) / 100 +
           (&DAT_0096cc00)[uVar1 * 0x833];
    }
  }
  *(undefined4 *)(&DAT_0096ccf0 + iVar5) = *(undefined4 *)(&DAT_0096ccdc + iVar5);
  *(int *)(&DAT_0096ccec + iVar5) =
       (*(int *)(&DAT_0096cce8 + iVar5) - *(int *)(&DAT_0096cce0 + iVar5)) +
       *(int *)(&DAT_0096ccdc + iVar5);
  if (DAT_009a64d4 == 1) {
    DAT_00945f40 = 1;
    iVar3 = 0;
    if (0 < *(int *)(&DAT_00946f24 + iVar2)) {
      do {
        FUN_00626250(s_Freebie_Advance_0068b9d8,&DAT_00946a84 + iVar2,uVar1,0,0);
        FUN_005be530(uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(&DAT_00946f24 + iVar2));
    }
    DAT_00945f40 = 0;
  }
  if ((((((byte)DAT_009a64c0 & 1) == 0) || (((byte)DAT_009a64c0 & 8) != 0)) &&
      (*(int *)(&DAT_0096caa0 + iVar5) != 0)) &&
     ((iVar3 = *(int *)(&DAT_0096caa0 + iVar5) + -1, *(int *)(&DAT_0096caa0 + iVar5) = iVar3,
      iVar3 == 0 && (uVar1 == DAT_00939284)))) {
    if (((&DAT_00946f58)[iVar2] & 0x80) != 0) {
      FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_SANCTIONSENDALIEN_0068b9f4,0,s_Alopdir_pcx_0068b9e8,0);
      return;
    }
    FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_SANCTIONSEND_0068ba18,0,s_council_sm_pcx_0068ba08,0);
  }
  return;
}

