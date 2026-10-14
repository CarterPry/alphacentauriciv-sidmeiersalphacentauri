// REA Evidence: ev_4afbf9de2bcbfff70f8cacb58b62d073f54189a77544632edf4e7c0b3a8c2b2e
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_005b44d0(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 4;
  iVar4 = param_1 * 0x20cc;
  puVar2 = (undefined4 *)(&DAT_0096cc18 + iVar4);
  do {
    *puVar2 = puVar2[-4];
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_0096cc08 + iVar4;
  FUN_005b4210(puVar1,&DAT_0096cc2c + iVar4,param_1,0,0);
  FUN_005b4210(puVar1,&DAT_0096cc58 + iVar4,param_1,0,0);
  FUN_005b4210(puVar1,&DAT_0096cc84 + iVar4,param_1,1,0);
  *(undefined4 *)(&DAT_0096cc28 + iVar4) = 0;
  return;
}

