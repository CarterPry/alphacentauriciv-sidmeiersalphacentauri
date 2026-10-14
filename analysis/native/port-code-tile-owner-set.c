// REA Evidence: ev_82f43eb70d5b12082c71e0f49c35f3c669516f9a419a441f143d73ae3533dbac
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_00591b10(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0068faf0 * param_2 + (param_1 >> 1);
  iVar1 = DAT_0094a30c + iVar2 * 0x2c;
  *(byte *)(iVar1 + 2) =
       *(byte *)(iVar1 + 2) ^ (*(byte *)(DAT_0094a30c + 2 + iVar2 * 0x2c) ^ param_3) & 0xf;
  return;
}

