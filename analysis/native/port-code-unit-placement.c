// REA Evidence: ev_03fc28482af3a12e32b1ecc167e90fe26e100ecf5e8f3db97749f84cc95b3271
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c0080(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005bfe90(param_2,param_3);
  (&DAT_00952858)[param_1 * 0x1a] = (short)iVar1;
  (&DAT_0095285a)[param_1 * 0x1a] = 0xffff;
  (&DAT_00952828)[param_1 * 0x1a] = (short)param_2;
  (&DAT_0095282a)[param_1 * 0x1a] = (short)param_3;
  _DAT_009b2280 = 0xffffffff;
  if (iVar1 < 0) {
    if (param_3 < 0) {
      _DAT_009b2280 = 0xffffffff;
      return param_1;
    }
    if ((((param_3 < DAT_00949874) && (-1 < param_2)) && (param_2 < DAT_00949870)) &&
       ((*(byte *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_3 + (param_2 >> 1)) * 0x2c) & 1) == 0))
    {
      FUN_00591b10(param_2,param_3,(&DAT_00952836)[param_1 * 0x34]);
    }
  }
  else {
    (&DAT_0095285a)[iVar1 * 0x1a] = (short)param_1;
  }
  if (((-1 < param_3) && (param_3 < DAT_00949874)) && ((-1 < param_2 && (param_2 < DAT_00949870))))
  {
    if (((&DAT_00952836)[param_1 * 0x34] == '\0') ||
       ((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] ==
        '\x02')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x100000;
    }
    FUN_00591d60(param_2,param_3,uVar2 | 2,1);
    return param_1;
  }
  return param_1;
}

