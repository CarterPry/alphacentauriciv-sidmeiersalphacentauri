// REA Evidence: ev_3908bc07c956a80709ee9c94aba81870adf7a2d472caf7ed20dc31a72bbfa899
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

bool FUN_005910b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064603f(&DAT_00949870,0xaa4,1,param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_0064603f(DAT_0094a30c,DAT_00949884 * 0x2c,1,param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_0064603f(DAT_0094a310,DAT_0094a29c,1,param_1);
  return iVar1 == 0;
}

