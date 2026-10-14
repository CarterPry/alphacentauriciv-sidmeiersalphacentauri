// REA Evidence: ev_e287b06e7de6f8a9e4f0e21160f0af7f52e774d271a6fa4720fbf3822b8d2361
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a94f0(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_10c [256];
  undefined4 local_c;
  DWORD local_8;
  
  if (DAT_0093a95c != 0) {
    DAT_0093a9b4 = DAT_0093a9b4 + 1;
  }
  local_8 = timeGetTime();
  if (((DAT_009a649c & 0x400) != 0) && (DAT_0093f660 == 0)) {
    FUN_00538fb0(local_8);
  }
  DAT_009a6810 = 0xc;
  if ((DAT_009a649c & 0x400) != 0) {
    _DAT_0093f798 = 0;
    DAT_009a64c0 = DAT_009a64c0 | 0x10000000;
  }
  if (DAT_0093a95c != 0) {
    DAT_009a681c = DAT_009a681c | 0x20;
    DAT_009a64c0 = DAT_009a64c0 | 0x10000000;
    _DAT_0093f798 = 0;
  }
  if (DAT_0093f660 != 0) {
    DAT_009a64c0 = DAT_009a64c0 | 0x10000000;
    _DAT_0093f798 = DAT_0093d4f8;
    FUN_00645930(&DAT_0093e978,&DAT_0093d4fc,0xce0);
  }
  local_10c[0] = '\0';
  FUN_00645470(local_10c,param_1);
  pcVar1 = _strchr(local_10c,0x2e);
  if (pcVar1 == (char *)0x0) {
    FUN_00645470(local_10c,&DAT_00690d80);
    FUN_00645470(local_10c,PTR_DAT_00691b34);
  }
  iVar2 = FUN_00634bb0(local_10c,&DAT_00690d84);
  if (iVar2 == 0) {
    return 1;
  }
  iVar4 = 2;
  FUN_0057d240(s_TERRAN_00690d88,iVar2);
  local_c = 0x56;
  iVar3 = FUN_0064603f(&local_c,4,1,iVar2);
  if (iVar3 != 0) {
    iVar4 = 3;
    iVar3 = FUN_005a6ac0(iVar2,1);
    if (iVar3 == 0) {
      iVar3 = FUN_0064603f(&local_8,4,1,iVar2);
      if (iVar3 != 0) {
        iVar4 = 0;
      }
    }
  }
  FUN_00645598(iVar2);
  if (iVar4 != 0) {
    FUN_00646950(local_10c);
  }
  return iVar4;
}

