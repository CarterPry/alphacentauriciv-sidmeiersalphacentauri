// REA Evidence: ev_41771bf25ca3b6ea70cfc7468a1e92609fa7ffb059862aa902f9d2a4f04ac783
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined * FUN_006005d0(undefined *param_1)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA local_140;
  
  if (param_1 != (undefined *)0x0) {
    if (param_1 == &DAT_009b8398) {
      return &DAT_009b8398;
    }
    if (param_1[1] == ':') {
      DAT_009b8398 = 0;
      FUN_00645470(&DAT_009b8398,param_1);
      pvVar1 = FindFirstFileA(&DAT_009b8398,&local_140);
      FindClose(pvVar1);
      return (undefined *)(-(uint)(pvVar1 != (HANDLE)0xffffffff) & 0x9b8398);
    }
    if (DAT_009b8298 != '\0') {
      DAT_009b8398 = 0;
      FUN_00645470(&DAT_009b8398,&DAT_009b8298);
      FUN_00645470(&DAT_009b8398,param_1);
      pvVar1 = FindFirstFileA(&DAT_009b8398,&local_140);
      FindClose(pvVar1);
      if (pvVar1 != (HANDLE)0xffffffff) {
        return &DAT_009b8398;
      }
    }
    DAT_009b8398 = 0;
    FUN_00645470(&DAT_009b8398,&DAT_009b8498);
    FUN_00645470(&DAT_009b8398,param_1);
    pvVar1 = FindFirstFileA(&DAT_009b8398,&local_140);
    FindClose(pvVar1);
    if (pvVar1 != (HANDLE)0xffffffff) {
      return &DAT_009b8398;
    }
    if (DAT_009b8198 != '\0') {
      DAT_009b8398 = 0;
      FUN_00645470(&DAT_009b8398,&DAT_009b8198);
      FUN_00645470(&DAT_009b8398,param_1);
      pvVar1 = FindFirstFileA(&DAT_009b8398,&local_140);
      if (pvVar1 != (HANDLE)0xffffffff) {
        FindClose(pvVar1);
        return &DAT_009b8398;
      }
    }
  }
  return (undefined *)0x0;
}

