// REA Evidence: ev_0e340fb7c87af1abb56f18b024df3b8eb1b8a88b6ed5397e7ee45d0df3bfdf44

undefined4 FUN_005a9c10(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char local_10c [256];
  int local_c;
  int local_8;
  
  pcVar3 = param_1;
  local_8 = 0;
  pcVar1 = _strchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_0064fd20(pcVar1 + 1,PTR_DAT_00691b34);
    if (iVar2 == 0) {
      local_8 = 1;
    }
  }
  iVar2 = FUN_00634bb0(pcVar3,&DAT_00690db8);
  if (iVar2 == 0) {
    return 1;
  }
  uVar6 = 2;
  local_c = iVar2;
  FUN_0057d1f0(local_10c,iVar2);
  pcVar3 = s_TERRAN_00690dbc;
  if (local_8 == 0) {
    pcVar3 = s_TERRANMAP_00690dc4;
  }
  iVar4 = _strcmp(local_10c,pcVar3);
  if (iVar4 == 0) {
    uVar6 = 3;
    iVar4 = FUN_00646178(&param_1,4,1,iVar2);
    if ((iVar4 != 0) && ((int)((-(uint)(local_8 != 0) & 0x51) + 5) <= (int)param_1)) {
      piVar7 = &DAT_007d3c40;
      do {
        iVar4 = *piVar7;
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1dd74) != 0)) {
          *(undefined4 *)(iVar4 + 0x1dd74) = 0;
          FUN_00470f70();
        }
        piVar7 = piVar7 + 1;
      } while ((int)piVar7 < 0x7d3c5c);
      DAT_00939294 = 0;
      uVar6 = 4;
      iVar4 = FUN_005a9280(iVar2,0,local_8);
      if (iVar4 == 0) {
        iVar2 = 0;
        DAT_009a64cc = 0;
        DAT_009a64c8 = 0;
        DAT_00939288 = 0;
        DAT_0093928c = 0xffffffff;
        if (0 < DAT_00949884) {
          puVar5 = (uint *)(DAT_0094a30c + 8);
          do {
            *(undefined1 *)(puVar5 + -1) = 0;
            iVar2 = iVar2 + 1;
            *puVar5 = *puVar5 & 0xfffffffc;
            puVar5 = puVar5 + 0xb;
          } while (iVar2 < DAT_00949884);
        }
        DAT_00689374 = 0xffffffff;
        puVar8 = &DAT_0068fb20;
        puVar9 = &DAT_0068fb4c;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar6 = 0;
        FUN_0059a220();
        iVar2 = local_c;
      }
    }
  }
  FUN_00645598(iVar2);
  return uVar6;
}

