// REA Evidence: ev_097db9bbcfe7f7386697a841a581d375c105f357aef4c4c8b9ba04775aa0295a
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_005fd740(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *DAT_009b7cf0;
  pcVar2 = DAT_009b7cfc;
  while ((cVar1 != '\0' && (*DAT_009b7cf0 != ','))) {
    *pcVar2 = *DAT_009b7cf0;
    pcVar2 = pcVar2 + 1;
    DAT_009b7cf0 = DAT_009b7cf0 + 1;
    cVar1 = *DAT_009b7cf0;
  }
  *pcVar2 = '\0';
  if (*DAT_009b7cf0 != '\0') {
    DAT_009b7cf0 = DAT_009b7cf0 + 1;
  }
  FUN_006007b0(DAT_009b7cfc);
  FUN_00628950(DAT_009b7cfc);
  return;
}

