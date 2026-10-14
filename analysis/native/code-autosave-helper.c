// REA Evidence: ev_b00eeeedd8309d5944fe09af463e4fb6a3985b1c9b73cc6c9c1b22a92156b067
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_00646950(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_0064a9c3(DVar2);
    return 0xffffffff;
  }
  return 0;
}

