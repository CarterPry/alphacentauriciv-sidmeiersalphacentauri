// REA Evidence: ev_8c71a2e07d1023dbd72be54300c7b1d668b9090e417470a6a8c726c55579208c
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_00591d60(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_2 + (param_1 >> 1)) * 0x2c);
  if (param_4 != 0) {
    *puVar1 = *puVar1 | param_3;
    return;
  }
  *puVar1 = *puVar1 & ~param_3;
  return;
}

