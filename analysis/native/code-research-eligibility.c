// REA Evidence: ev_c9181bb030e19544ee3200ef391928cccc514c39f840dc7c020bda6af949af4e
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_005bac20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2;
  if (0 < param_2) {
    if (param_1 == -1) {
      return 0;
    }
    if ((-1 < param_1) && (param_1 < 0x58)) {
      if ((-2 < (int)(&DAT_0094f37c)[param_1 * 0xb]) &&
         (((-2 < (int)(&DAT_0094f380)[param_1 * 0xb] || ((&DAT_0094f37c)[param_1 * 0xb] == -1)) &&
          (((&DAT_009a6670)[param_1] & (byte)(1 << (bVar3 & 0x1f))) != 0)))) {
        return 0;
      }
    }
  }
  if ((param_1 < 0x59) &&
     ((DAT_009a6488 != 0 ||
      (((((param_1 != 0x4e && (param_1 != 0x4f)) &&
         ((param_1 != 0x50 && ((param_1 != 0x51 && (param_1 != 0x52)))))) && (param_1 != 0x53)) &&
       (((param_1 != 0x54 && (param_1 != 0x55)) && (param_1 != 0x56)))))))) {
    iVar1 = (&DAT_0094f37c)[param_1 * 0xb];
    if (((-2 < iVar1) && (iVar2 = (&DAT_0094f380)[param_1 * 0xb], -2 < iVar2)) && (0 < param_2)) {
      if (iVar1 != -1) {
        if (iVar1 < 0) {
          return 0;
        }
        if (0x57 < iVar1) {
          return 0;
        }
        if ((int)(&DAT_0094f37c)[iVar1 * 0xb] < -1) {
          return 0;
        }
        if (((int)(&DAT_0094f380)[iVar1 * 0xb] < -1) && ((&DAT_0094f37c)[iVar1 * 0xb] != -1)) {
          return 0;
        }
        if (((&DAT_009a6670)[iVar1] & (byte)(1 << (bVar3 & 0x1f))) == 0) {
          return 0;
        }
      }
      if (iVar2 == -1) {
        return 1;
      }
      if ((-1 < iVar2) && (iVar2 < 0x58)) {
        if ((-2 < (int)(&DAT_0094f37c)[iVar2 * 0xb]) &&
           (((-2 < (int)(&DAT_0094f380)[iVar2 * 0xb] || ((&DAT_0094f37c)[iVar2 * 0xb] == -1)) &&
            (((&DAT_009a6670)[iVar2] & (byte)(1 << (bVar3 & 0x1f))) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

