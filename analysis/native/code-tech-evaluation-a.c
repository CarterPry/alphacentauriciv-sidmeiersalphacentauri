// REA Evidence: ev_d2bdbfbd70f1926de6d2a56b18c681a3f6e5e5c5824866e75e2ccf4d94bbf017
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_005b9c40(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_54 [80];
  
  if (param_2 < -1) {
    uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x4d8));
    FUN_00645470(param_1,uVar1);
    return;
  }
  if (param_2 < 0) {
    uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 100));
    FUN_00645470(param_1,uVar1);
    return;
  }
  if (param_2 == 9999) {
    uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x4c8));
    FUN_00645470(param_1,uVar1);
    return;
  }
  if (param_2 < 0x59) {
    uVar1 = FUN_006169a0((&DAT_0094f35c)[param_2 * 0xb]);
    FUN_00645470(param_1,uVar1);
    if (param_3 != 0) {
      FUN_00645470(param_1,&DAT_00682820);
      FUN_00645470(param_1,&DAT_00682e9c);
      iVar4 = (&DAT_0094f36c)[param_2 * 0xb];
      iVar3 = (&DAT_0094f370)[param_2 * 0xb];
      iVar2 = iVar4;
      if (iVar4 < iVar3) {
        iVar2 = iVar3;
      }
      uVar5 = (uint)(iVar4 < iVar3);
      if (iVar2 < (int)(&DAT_0094f374)[param_2 * 0xb]) {
        uVar5 = 2;
        iVar2 = (&DAT_0094f374)[param_2 * 0xb];
      }
      if (iVar2 < (int)(&DAT_0094f378)[param_2 * 0xb]) {
        uVar5 = 3;
      }
      uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x9d4 + uVar5 * 4));
      FUN_00645470(param_1,uVar1);
      iVar3 = FUN_005b9f90((&DAT_0094f37c)[param_2 * 0xb],1);
      iVar4 = FUN_005b9f90((&DAT_0094f380)[param_2 * 0xb],1);
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_0064fc88(iVar4,local_54,10);
      FUN_00645470(param_1,local_54);
      FUN_00645470(param_1,&DAT_00682e98);
      return;
    }
  }
  else {
    if (param_2 < 0x61) {
      param_2 = param_2 + -0x59;
      if (DAT_009bc054 != 0) {
        uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x79c));
        FUN_00645470(param_1,uVar1);
        FUN_00645470(param_1,&DAT_00682820);
        FUN_00645470(param_1,&DAT_00682e9c);
        DAT_009bbfec = (&DAT_00946d4c)[param_2 * 0x167];
        DAT_009bbff0 = (&DAT_00946d50)[param_2 * 0x167];
        FUN_00645470(param_1,&DAT_00946d34 + param_2 * 0x59c);
        FUN_00645470(param_1,&DAT_00682e98);
        return;
      }
      FUN_00645470(param_1,&DAT_00946d54 + param_2 * 0x59c);
      FUN_00645470(param_1,&DAT_00682820);
      uVar1 = *(undefined4 *)(DAT_009b90f8 + 0x79c);
    }
    else {
      FUN_00645470(param_1,param_2 * 0x34 + 0x9aa4b4);
      FUN_00645470(param_1,&DAT_00682820);
      uVar1 = *(undefined4 *)(DAT_009b90f8 + 0x2e4);
    }
    uVar1 = FUN_006169a0(uVar1);
    FUN_00645470(param_1,uVar1);
  }
  return;
}

