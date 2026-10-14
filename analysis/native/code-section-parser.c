// REA Evidence: ev_496a806c87ad9e326b0f99c17c86d43ccbd317ee0e3bcfee0ad456f4fc3109f8
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_005fda00(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  undefined *puVar4;
  undefined1 local_50 [80];
  
  bVar1 = false;
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x154) != 0) {
      bVar1 = true;
      goto LAB_005fdad0;
    }
    iVar3 = FUN_00634bb0();
    *(int *)(in_ECX + 0x154) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    FUN_00645460();
    pcVar2 = _strchr(in_ECX,0x2e);
    if (pcVar2 == (char *)0x0) {
      FUN_00645470();
    }
    if (*(int *)(in_ECX + 0x154) != 0) {
      FUN_00645598(*(int *)(in_ECX + 0x154));
      in_ECX[0x154] = '\0';
      in_ECX[0x155] = '\0';
      in_ECX[0x156] = '\0';
      in_ECX[0x157] = '\0';
    }
    iVar3 = FUN_00634bb0();
    *(int *)(in_ECX + 0x154) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
  }
  FUN_00645460(in_ECX + 0x50,&DAT_009b8398);
LAB_005fdad0:
  if (param_2 != 0) {
    FUN_00645460(local_50,&DAT_00696e84);
    FUN_00645470(local_50,param_2);
    puVar4 = &DAT_009b7d08;
    do {
      if ((*(int *)(puVar4 + 0x100) != 0) && (iVar3 = FUN_005fe120(in_ECX,param_2), -1 < iVar3)) {
        FUN_00626250(s_Seeking_to_00696e88,param_2,iVar3,0,0);
        FUN_00647330(*(undefined4 *)(in_ECX + 0x154),iVar3,0);
        bVar1 = true;
        break;
      }
      puVar4 = puVar4 + 0x118;
    } while ((int)puVar4 < 0x9b8168);
    do {
      if ((*(byte *)(*(int *)(in_ECX + 0x154) + 0xc) & 0x10) != 0) {
        if (!bVar1) goto LAB_005fdbc4;
        bVar1 = false;
        FUN_006472cc(*(int *)(in_ECX + 0x154));
      }
      iVar3 = FUN_0064726a(*(undefined4 *)(in_ECX + 0x158),0x1ff,*(undefined4 *)(in_ECX + 0x154));
      if (iVar3 == 0) {
LAB_005fdbc4:
        if (*(int *)(in_ECX + 0x154) != 0) {
          FUN_00645598(*(int *)(in_ECX + 0x154));
          in_ECX[0x154] = '\0';
          in_ECX[0x155] = '\0';
          in_ECX[0x156] = '\0';
          in_ECX[0x157] = '\0';
        }
        return 1;
      }
      FUN_00600820(*(undefined4 *)(in_ECX + 0x158));
      FUN_006007b0(*(undefined4 *)(in_ECX + 0x158));
      iVar3 = FUN_0064fd20(local_50,*(undefined4 *)(in_ECX + 0x158));
    } while (iVar3 != 0);
    *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(in_ECX + 0x158);
  }
  return 0;
}

