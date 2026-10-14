// REA Evidence: ev_7a16b94b0f070f2abba612e46c040ad27616669e0ab69c8845a38ac00e62600e
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_00591130(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0094a30c != 0) {
    FUN_00644ef2(DAT_0094a30c);
  }
  if (DAT_0094a310 != 0) {
    FUN_00644ef2(DAT_0094a310);
  }
  DAT_0094a30c = 0;
  DAT_0094a310 = 0;
  iVar1 = FUN_00646178(&DAT_00949870,0xaa4,1,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  DAT_0094a30c = 0;
  DAT_0094a310 = 0;
  iVar1 = FUN_00590ed0();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00646178(DAT_0094a30c,DAT_00949884 * 0x2c,1,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_00646178(DAT_0094a310,DAT_0094a29c,1,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_00592940();
  return 0;
}

