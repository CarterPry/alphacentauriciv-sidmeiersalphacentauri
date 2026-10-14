
int FUN_00604590(void)

{
  size_t sVar1;
  
  DAT_009b8d98 = DAT_009bb484;
  DAT_009b8da8 = DAT_009bb484;
  if (DAT_009b8d84 != (undefined1 *)0x0) {
    FUN_00644ef2(DAT_009b8d84);
    DAT_009b8d84 = (undefined1 *)0x0;
  }
  sVar1 = _strlen(s_Cancel_00697008);
  DAT_009b8d84 = (undefined1 *)FUN_005d4510(sVar1 + 1);
  if (DAT_009b8d84 != (undefined1 *)0x0) {
    *DAT_009b8d84 = 0;
    FUN_00645470(DAT_009b8d84,s_Cancel_00697008);
  }
  if (DAT_009b8d80 != (undefined1 *)0x0) {
    FUN_00644ef2(DAT_009b8d80);
    DAT_009b8d80 = (undefined1 *)0x0;
  }
  sVar1 = _strlen(&DAT_00697010);
  DAT_009b8d80 = (undefined1 *)FUN_005d4510(sVar1 + 1);
  if (DAT_009b8d80 != (undefined1 *)0x0) {
    *DAT_009b8d80 = 0;
    FUN_00645470(DAT_009b8d80,&DAT_00697010);
  }
  DAT_009bc074 = (*(code *)PTR_FUN_00696ecc)();
  if (DAT_009bc074 != 0) {
    DAT_009bc078 = (*(code *)PTR_FUN_00696ecc)();
    return (-(uint)(DAT_009bc078 != 0) & 0xfffffffc) + 4;
  }
  return 4;
}

