// REA Evidence: ev_db0128dab262e010af01777066e8c3d1ed4fc3529885855c932575c567f5c623
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

bool FUN_005b9f20(int param_1,int param_2)

{
  if (0 < param_2) {
    if (param_1 == -1) {
      return true;
    }
    if ((-1 < param_1) && (param_1 < 0x58)) {
      if ((-2 < (int)(&DAT_0094f37c)[param_1 * 0xb]) &&
         ((-2 < (int)(&DAT_0094f380)[param_1 * 0xb] || ((&DAT_0094f37c)[param_1 * 0xb] == -1)))) {
        return ((&DAT_009a6670)[param_1] & (byte)(1 << ((byte)param_2 & 0x1f))) != 0;
      }
    }
  }
  return false;
}

