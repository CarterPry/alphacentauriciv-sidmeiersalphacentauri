
undefined4 FUN_00614d90(void)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  
  if (DAT_009b90a8 != (undefined1 *)0x0) {
    FUN_00644ef2(DAT_009b90a8);
    DAT_009b90a8 = (undefined1 *)0x0;
  }
  iVar1 = FUN_005fd550(s_jackal_006971d4,s_FILEWIN_006971cc);
  if (iVar1 != 0) {
    return 6;
  }
  _Str = (char *)FUN_005fd570();
  if (_Str == (char *)0x0) {
    return 1;
  }
  if (DAT_009b90a8 != (undefined1 *)0x0) {
    FUN_00644ef2(DAT_009b90a8);
    DAT_009b90a8 = (undefined1 *)0x0;
  }
  sVar2 = _strlen(_Str);
  DAT_009b90a8 = (undefined1 *)FUN_005d4510(sVar2 + 1);
  if (DAT_009b90a8 == (undefined1 *)0x0) {
    return 4;
  }
  *DAT_009b90a8 = 0;
  FUN_00645470(DAT_009b90a8,_Str);
  return 0;
}

