// REA Evidence: ev_36c9d4ac3b3e48c7df84357acbbeb9a3c243d9e450effe1d90bc6bb64523610a
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

void FUN_005c02d0(int param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = 4;
  iVar2 = param_1 * 0x34;
  (&DAT_00952828)[param_1 * 0x1a] = 0xfffc;
  (&DAT_0095282a)[param_1 * 0x1a] = 0xfffc;
  (&DAT_00952837)[iVar2] = 0;
  (&DAT_00952834)[param_1 * 0x1a] = 0;
  *(undefined2 *)(&DAT_00952830 + iVar2) = 0;
  (&DAT_00952836)[iVar2] = (char)param_3;
  (&DAT_00952832)[param_1 * 0x1a] = param_2;
  (&DAT_00952858)[param_1 * 0x1a] = 0xffff;
  (&DAT_0095285a)[param_1 * 0x1a] = 0xffff;
  (&DAT_0095283a)[iVar2] = 0;
  (&DAT_0095283b)[iVar2] = 0;
  (&DAT_00952839)[iVar2] = 0;
  puVar3 = &DAT_00952844 + param_1 * 0x1a;
  do {
    puVar3[-4] = 0xffff;
    *puVar3 = 0xffff;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  (&DAT_0095282c)[param_1 * 0xd] = 0;
  (&DAT_00952850)[iVar2] = 0;
  (&DAT_00952838)[iVar2] = 0;
  (&DAT_0095284e)[iVar2] = 0;
  (&DAT_0095284d)[iVar2] = 0;
  (&DAT_00952852)[iVar2] = 0;
  (&DAT_00952853)[iVar2] = 0;
  cVar1 = (&DAT_00946f28)[param_3 * 0x59c];
  (&DAT_0095284f)[iVar2] = 0;
  (&DAT_00952856)[param_1 * 0x1a] = 0xffff;
  (&DAT_0095284c)[iVar2] = cVar1 + '\x01';
  (&DAT_00952851)[iVar2] = 2;
  (&DAT_00952854)[iVar2] = 0;
  (&DAT_00952855)[iVar2] = 0;
  return;
}

