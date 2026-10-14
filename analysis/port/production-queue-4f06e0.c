// REA Evidence: ev_3f12b4f835df6c87eb04bd84c41083144591c3b6b562fdbc6e26a6d56da1d863
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode, not original source.


undefined4 FUN_004f06e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (&DAT_0097d08c)[param_1 * 0x4d];
  uVar4 = (uint)(byte)(&DAT_0097d044)[param_1 * 0x134];
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (-1 < (int)(&DAT_0097d090)[param_1 * 0x4d]) {
      (&DAT_0096d438)[uVar4 * 0x20cc + (&DAT_0097d090)[param_1 * 0x4d]] =
           (&DAT_0096d438)[uVar4 * 0x20cc + (&DAT_0097d090)[param_1 * 0x4d]] + -1;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      puVar1 = &DAT_0097d090 + param_1 * 0x4d;
      do {
        iVar3 = iVar3 + 1;
        *puVar1 = puVar1[1];
        puVar1 = puVar1 + 1;
      } while (iVar3 < (int)(&DAT_0097d08c)[param_1 * 0x4d]);
    }
    (&DAT_0097d08c)[param_1 * 0x4d] = (&DAT_0097d08c)[param_1 * 0x4d] + -1;
    iVar2 = (&DAT_0097d090)[param_1 * 0x4d];
    if (iVar2 < 0) {
      iVar2 = FUN_005ba0e0(-iVar2,uVar4,param_1,0);
    }
    else {
      iVar2 = FUN_005ba910(iVar2,uVar4,param_1);
    }
    if (iVar2 != 0) break;
    iVar2 = (&DAT_0097d08c)[param_1 * 0x4d];
  }
  if ((int)(&DAT_0097d090)[param_1 * 0x4d] < -0x45) {
    FUN_004455f0(0x24);
  }
  FUN_0046aef0((int)(short)(&DAT_0097d040)[param_1 * 0x9a],
               (int)(short)(&DAT_0097d042)[param_1 * 0x9a],2,2);
  return 1;
}

