// REA Evidence: ev_244c3fa5b91a3b21277788fb741bd828787ae9ccb6d697d050dc581b7479cbcc
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_005bdc10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_10 = -999;
  local_14 = -1;
  local_c = 0;
  local_8 = &DAT_0094f380;
  do {
    iVar1 = FUN_005bac20(local_c,param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcbe0(local_c,param_1,0);
      if ((DAT_009a649c & 0x200) != 0) {
        if ((((byte)DAT_009a64e8 & (byte)(1 << ((byte)param_1 & 0x1f))) != 0) &&
           (((*(int *)(&DAT_0096cdc0 + param_1 * 0x20cc) != 0 ||
             (*(int *)(&DAT_0096cdc8 + param_1 * 0x20cc) != 0)) && (local_c == DAT_009ab8ce)))) {
          return local_c;
        }
        if (((int)local_8 < 0x94f380) || (0x9502cb < (int)local_8)) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_005b9f90(local_8[-1],1);
          iVar3 = FUN_005b9f90(*local_8,1);
          if (iVar2 <= iVar3) {
            iVar2 = iVar3;
          }
        }
        iVar1 = (iVar1 << 8) / iVar2;
      }
      if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)param_1 & 0x1f))) == 0) {
        if (iVar1 < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = _rand();
          iVar2 = iVar2 % (iVar1 + 1);
        }
      }
      else {
        iVar2 = FUN_00625810(0,iVar1 + 1);
      }
      if (local_10 < iVar2) {
        local_14 = local_c;
        local_10 = iVar2;
      }
    }
    local_c = local_c + 1;
    local_8 = local_8 + 0xb;
    if (0x9502cb < (int)local_8) {
      return local_14;
    }
  } while( true );
}

