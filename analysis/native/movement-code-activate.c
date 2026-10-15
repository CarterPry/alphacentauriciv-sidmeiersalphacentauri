// ev_a84ca632b656fb1b99286d66fbbd0a4994653556e1f2df7dba78fedcdd05dc0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2f00(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  uVar2 = param_2;
  FUN_006262f0(s_Console_ACTIVATE_00688938,param_1,param_2,0);
  if (DAT_0093f660 != 0) {
    if (DAT_0093e93c != 0) {
      return;
    }
    if (DAT_0093e944 != 0) {
      return;
    }
    if ((((DAT_0093e8ec & 1 << ((byte)DAT_00939284 & 0x1f)) != 0) &&
        (((byte)DAT_009a681c & 0x10) == 0)) || (DAT_0093a938 != 0)) {
      param_2 = FUN_005bfe90(param_1,uVar2);
      iVar3 = FUN_005b9580(param_2,1,0xffffffff,0xffffffff,0xffffffff);
      if (((iVar3 == 1) || (param_2 = FUN_0048d0d0(param_2,s_PICKUNIT_0068894c,1), -1 < param_2)) &&
         (*(int *)(in_ECX + 0x23bdc) = param_2, -1 < param_2)) {
        *(int *)(in_ECX + 0x23be0) = param_2;
      }
      if (((DAT_0093e8ec & 1 << ((byte)DAT_00939284 & 0x1f)) != 0) &&
         (iVar3 = FUN_005c1b70(param_2), iVar3 != 0)) {
        FUN_0047a890(s_ALREADYDONE_00688958,2000,0,0);
        return;
      }
      FUN_0047a890(s_FIRSTMOVE_00688964,2000,0,0);
      return;
    }
  }
  if ((DAT_00939288 == 0) || (param_3 == 0)) {
    param_2 = FUN_005bfe90(param_1,uVar2);
    if (param_2 < 0) {
      *(undefined4 *)(in_ECX + 0x23be4) = 0;
      return;
    }
    iVar3 = FUN_005b9580(param_2,1,DAT_00939284,0xffffffff,0xffffffff);
    if (iVar3 == 0) {
      *(undefined4 *)(in_ECX + 0x23be4) = 0;
      return;
    }
    iVar3 = FUN_005b9580(param_2,1,0xffffffff,0xffffffff,0xffffffff);
    if ((iVar3 == 1) &&
       (((iVar3 = FUN_005c1a20(param_2), iVar3 != 0 || ((&DAT_00952839)[param_2 * 0x34] != '\0')) ||
        (((&DAT_0095282c)[param_2 * 0xd] & 0x4200) != 0)))) {
      FUN_006262f0(s_VEH_ORDERS_00688970,param_2,0,0);
      if (('\x02' < (char)(&DAT_00952839)[param_2 * 0x34]) && ((_DAT_009a6494 & 0x40000) == 0)) {
        FUN_00625ec0(0,&DAT_009ab868 + (short)(&DAT_00952832)[param_2 * 0x1a] * 0x34,0xffffffff,
                     0xffffffff);
        DAT_009b86a0 = 0;
        FUN_004b4970(param_2);
        FUN_00625ec0(1,&DAT_009b86a0,0xffffffff,0xffffffff);
        DAT_009b86a0 = 0;
        FUN_00645470(&DAT_009b86a0,s_VEHORDERS_0068897c);
        cVar1 = (&DAT_00952839)[param_2 * 0x34];
        if (('\x03' < cVar1) && (cVar1 < '\x18')) {
          iVar3 = FUN_004c9b00(param_2,cVar1 + -4,0);
          FUN_00625e30(0,iVar3 + 1);
          FUN_00645470(&DAT_009b86a0,&DAT_00688988);
        }
        iVar3 = FUN_005bf310(&DAT_009b86a0,0);
        if (iVar3 == 0) {
          return;
        }
        if (iVar3 == 2) {
          _DAT_009a6494 = _DAT_009a6494 | 0x40000;
          FUN_0059e5d0(0);
        }
      }
      goto LAB_004d3232;
    }
  }
  else {
    param_2 = *(int *)(in_ECX + 0x23bdc);
    *(undefined4 *)(in_ECX + 0x23be4) = 0;
    iVar3 = FUN_005b9580(param_2,1,DAT_00939284,0xffffffff,0xffffffff);
    if ((iVar3 == 1) && (iVar3 = FUN_005c1a20(param_2), iVar3 != 0)) {
      *(undefined4 *)(in_ECX + 0x23bec) = 1;
      return;
    }
  }
  param_2 = FUN_0048d0d0(param_2,s_PICKUNIT_0068898c,1);
  if (param_2 < 0) {
    return;
  }
LAB_004d3232:
  if ((uint)(byte)(&DAT_00952836)[param_2 * 0x34] == *(uint *)(in_ECX + 0x23bd4)) {
    FUN_006262f0(s_Activate_AWAKEN_00688998,param_2,(int)(short)(&DAT_00952828)[param_2 * 0x1a],
                 (int)(short)(&DAT_0095282a)[param_2 * 0x1a]);
    iVar3 = FUN_005c1c40(param_2);
    if (iVar3 != 0) {
      FUN_0047a890(s_INJAIL_006889a8,5000,0,0);
      return;
    }
    if ((((DAT_0093f660 == 0) || (iVar3 = FUN_005c1a20(param_2), iVar3 == 0)) ||
        ((&DAT_00952839)[param_2 * 0x34] != '\0')) ||
       (((&DAT_0095282c)[param_2 * 0xd] & 0x8004200) != 0)) {
      iVar3 = FUN_00531020(&param_2,0,0xffffffff,0xffffffff,0);
      if (iVar3 != 0) {
        return;
      }
      FUN_006262f0(s_Activate_AWAKENING_006889b0,param_2,(int)(short)(&DAT_00952828)[param_2 * 0x1a]
                   ,(int)(short)(&DAT_0095282a)[param_2 * 0x1a]);
      FUN_005c1d70(param_2);
      iVar3 = FUN_005c1a20(param_2);
      if (iVar3 == 0) {
        FUN_0046af40((int)(short)(&DAT_00952828)[param_2 * 0x1a],
                     (int)(short)(&DAT_0095282a)[param_2 * 0x1a],1);
        if (((DAT_00939288 == 0) && (((byte)DAT_009a64c0 & 2) == 0)) &&
           ((DAT_0093f660 == 0 || ((DAT_0093a938 == 0 && (DAT_0093e944 == 0)))))) {
          iVar3 = FUN_0048c360(PTR_s_SCRIPT_00691b0c,s_ALREADYMOVED2_006889e4,param_2,0);
          if (iVar3 != 0) {
            FUN_00511520(0);
          }
        }
        else if (DAT_0093f660 == 0) {
          FUN_0048c360(PTR_s_SCRIPT_00691b0c,s_ALREADYMOVED_006889d4,param_2,0);
        }
        else {
          FUN_0047a890(s_ALREADYMOVED_006889c4,5000,0,0);
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x23be4) = 0;
      }
      *(int *)(in_ECX + 0x23bdc) = param_2;
      FUN_00593220(param_2);
      FUN_00531480();
      FUN_005310f0();
    }
    else {
      *(int *)(in_ECX + 0x23bdc) = param_2;
    }
    FUN_00511520(1);
    *(undefined4 *)(in_ECX + 0x23bec) = 1;
  }
  return;
}

