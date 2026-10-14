// REA Evidence: ev_d2d251ada8c49552e9a3d07889bad1bb3816f72990bcff03437acd848ae265ab
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_005bfe90(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  
  if ((((param_2 < 0) || (DAT_00949874 <= param_2)) || (param_1 < 0)) ||
     ((DAT_00949870 <= param_1 ||
      ((*(byte *)(DAT_0094a30c + 8 + (DAT_0068faf0 * param_2 + (param_1 >> 1)) * 0x2c) & 2) != 0))))
  {
    iVar1 = 0;
    psVar3 = &DAT_00952828;
    if (0 < DAT_009a64c8) {
      do {
        if ((*psVar3 == param_1) && (psVar3[1] == param_2)) {
          if (iVar1 < 0) {
            return -1;
          }
          sVar2 = (&DAT_0095285a)[iVar1 * 0x1a];
          if (-1 < sVar2) {
            do {
              iVar1 = (int)sVar2;
              sVar2 = (&DAT_0095285a)[iVar1 * 0x1a];
            } while (-1 < sVar2);
            return iVar1;
          }
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        psVar3 = psVar3 + 0x1a;
      } while (iVar1 < DAT_009a64c8);
    }
    if ((((-1 < param_2) && (param_2 < DAT_00949874)) && (-1 < param_1)) && (param_1 < DAT_00949870)
       ) {
      if (DAT_009b228c == 0) {
        FUN_006262f0(s_Vehicle_Bit_Error__x__y__00691d70,param_1,param_2,0);
      }
      if ((((DAT_009a64c0 & 0x40) != 0) || ((DAT_009a64c0 & 0x1000) != 0)) || (DAT_0093f660 != 0)) {
        if (DAT_009b228c != 0) {
          return -1;
        }
        DAT_009b228c = 1;
      }
      FUN_00532a90();
    }
  }
  return -1;
}

