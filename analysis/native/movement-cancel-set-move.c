// ev_41c5a06f4acea268787021b5a79d5c040abd3e001b0ea826dfea20ec0e2a49a6


void FUN_00511520(int param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  
  bVar3 = false;
  if (DAT_0093f660 != 0) {
    if (DAT_0093a938 != 0) {
      return;
    }
    if (DAT_0093e944 != 0) {
      return;
    }
    if (((byte)DAT_009a681c & 0x10) == 0) {
      iVar4 = DAT_0093e8e0;
      if ((DAT_0093e8ec & 1 << ((byte)*(undefined4 *)(in_ECX + 0x23bd4) & 0x1f)) != 0) {
        return;
      }
    }
    else {
      iVar4 = FUN_0052dc70();
    }
    if (iVar4 != 0) {
      return;
    }
  }
  if ((DAT_00939288 == 0) || (param_1 != 0)) {
    *(undefined4 *)(in_ECX + 0x23bd8) = 0;
    *(undefined4 *)(in_ECX + 0x23bf8) = 0;
    *(undefined4 *)(in_ECX + 0x23bfc) = 1;
    bVar3 = true;
    if (*(int *)(in_ECX + 0x23c00) != 0) {
      *(undefined4 *)(in_ECX + 0x23c00) = 0;
      FUN_0046a550(1);
    }
    FUN_0046ae00();
    *(undefined4 *)(in_ECX + 0x23bd8) = 1;
    *(undefined4 *)(in_ECX + 0x23be4) = 0;
  }
  iVar4 = FUN_005c1a20(*(undefined4 *)(in_ECX + 0x23bdc));
  if (iVar4 == 0) {
    FUN_00510f50();
    bVar3 = false;
  }
  else {
    FUN_00446d10(*(undefined4 *)(in_ECX + 0x23bdc));
  }
  if ((-1 < *(int *)(in_ECX + 0x23bdc)) &&
     (iVar4 = FUN_005c1a20(*(int *)(in_ECX + 0x23bdc)), iVar4 != 0)) {
    if (((&DAT_00952850)[*(int *)(in_ECX + 0x23bdc) * 0x34] == '\0') && (DAT_0093f660 == 0)) {
      FUN_005b6260(*(int *)(in_ECX + 0x23bdc),0);
    }
    sVar1 = (&DAT_0095282a)[*(int *)(in_ECX + 0x23bdc) * 0x1a];
    sVar2 = (&DAT_00952828)[*(int *)(in_ECX + 0x23bdc) * 0x1a];
    *(undefined4 *)(in_ECX + 0x23bf8) = 0;
    if (*(int *)(in_ECX + 0x23c00) != 0) {
      *(undefined4 *)(in_ECX + 0x23c00) = 0;
      FUN_0046a550(1);
    }
    FUN_0046ad60();
    FUN_005109b0((int)sVar2,(int)sVar1);
    if (bVar3) {
      FUN_00458900(0);
      FUN_004b9ea0();
      FUN_0046fb10();
      FUN_005108a0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],
                   (&DAT_00952836)[*(int *)(in_ECX + 0x23bdc) * 0x34]);
      FUN_00460dd0(*(undefined4 *)(in_ECX + 0x23bdc));
    }
    *(undefined4 *)(in_ECX + 0x23bf4) = 1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x23be4) = 0;
  if (DAT_00939288 != 0) {
    FUN_00446b40(0x1e);
    *(undefined4 *)(in_ECX + 0x23bd8) = 0;
    *(undefined4 *)(in_ECX + 0x23bf8) = 1;
    *(undefined4 *)(in_ECX + 0x23bfc) = 1;
    if (*(int *)(in_ECX + 0x23c00) != 0) {
      *(undefined4 *)(in_ECX + 0x23c00) = 0;
      FUN_0046a550(1);
    }
    FUN_0046ae00();
    FUN_00458900(0);
    FUN_004b9ea0();
    FUN_0046fb10();
    FUN_00460dd0(*(undefined4 *)(in_ECX + 0x23bdc));
  }
  FUN_004b9f90((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8]);
  FUN_005108a0((&DAT_009392c0)[DAT_009392b8],(&DAT_00939340)[DAT_009392b8],
               *(undefined4 *)(in_ECX + 0x23bd4));
  return;
}

