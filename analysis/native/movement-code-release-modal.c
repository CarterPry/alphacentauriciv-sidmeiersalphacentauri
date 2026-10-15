// ev_ca5e7799b4cbff8567054c5c01a841c7a5554c67de9b975c1d26b2b8d0705123

void FUN_005ee280(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  if (DAT_009b7ae4 != 0) {
    iVar2 = DAT_009b7ae4 + -1;
    if ((&DAT_009b6ef8)[iVar2] == in_ECX) {
      DAT_009b7ae4 = iVar2;
      (&DAT_009b6ef8)[iVar2] = 0;
      *(undefined4 *)(&DAT_009b7a1c + iVar2 * 4) = 0;
      if (0 < iVar2) {
        DAT_009b7adc = *(undefined4 *)(&DAT_009b7a18 + iVar2 * 4);
        DAT_009b7ae0 = *(undefined4 *)(&DAT_009b6ef4 + iVar2 * 4);
        return;
      }
      DAT_009b7ae0 = 0;
    }
    else {
      iVar1 = 0;
      if (0 < iVar2) {
        piVar3 = &DAT_009b6ef8;
        do {
          if (*piVar3 == in_ECX) break;
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar1 < iVar2);
      }
      if (iVar1 == iVar2) {
        return;
      }
      DAT_009b7ae4 = iVar2;
      if (iVar1 < iVar2) {
        do {
          (&DAT_009b6ef8)[iVar1] = (&DAT_009b6efc)[iVar1];
          *(undefined4 *)(&DAT_009b7a1c + iVar1 * 4) = (&DAT_009b7a20)[iVar1];
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar2);
        return;
      }
    }
  }
  return;
}

