// REA Evidence: ev_8c7ff94180e581701f5e70d9d8d3af312fea7b2595871543d642498e7ee3baf0
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_005b9f90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < 0x59)) {
    iVar1 = FUN_005b9f90((&DAT_0094f37c)[param_1 * 0xb],param_2 + 1);
    iVar2 = FUN_005b9f90((&DAT_0094f380)[param_1 * 0xb],param_2 + 1);
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return param_2;
}

