// REA Evidence: ev_09200a3630f33eac5678174faedb1d8f947171985f17683cc3c9afdba84d4f54
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_004bf4b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 local_e4 [20];
  undefined4 local_94;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puVar1 = (undefined4 *)(in_ECX + 0x10c);
  if (*(int *)(in_ECX + 0x10c) != 0) {
    return 1;
  }
  local_8 = in_ECX;
  FUN_005dfb50(0);
  FUN_005efd20(0);
  puVar5 = (undefined4 *)(in_ECX + 0x108);
  iVar3 = DirectDrawCreate(0,puVar5,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = (**(code **)(*(int *)*puVar5 + 0x50))((int *)*puVar5,DAT_009b7b28,0x11);
  if (iVar3 != 0) {
    return 1;
  }
  (*(code *)**(undefined4 **)*puVar5)((undefined4 *)*puVar5,&DAT_0066fc38,puVar1);
  (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
  iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,param_1,param_2,0x10,0,0);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,param_1,param_2,0x18,0,0);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,param_1,param_2,0x20,0,0);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,param_1,param_2,8,0,0);
        if (iVar3 != 0) {
          FUN_004bf400();
          return 0x12;
        }
      }
    }
  }
  _memset(&local_80,0,0x6c);
  local_80 = 0x6c;
  local_7c = 0x21;
  local_6c = 1;
  local_18 = 0x218;
  (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,&local_80,&local_c,0);
  local_10 = 4;
  iVar4 = (**(code **)(*local_c + 0x30))(local_c,&local_10,&local_14);
  iVar3 = local_8;
  if (iVar4 != 0) {
    FUN_004bf400();
    return 1;
  }
  puVar5 = (undefined4 *)(local_8 + 0x110);
  (**(code **)*local_c)(local_c,&DAT_0066fc28,puVar5);
  (**(code **)*local_14)(local_14,&DAT_0066fc28,(undefined4 *)(iVar3 + 0x114));
  iVar4 = (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,0,local_8 + 0x118,0);
  if (iVar4 != 0) {
    return 0x12;
  }
  piVar2 = *(int **)(iVar3 + 0x114);
  local_e4[0] = 100;
  local_94 = 0;
  (**(code **)(*piVar2 + 0x14))(piVar2,0,0,0,0x1000400,local_e4);
  piVar2 = (int *)*puVar5;
  (**(code **)(*piVar2 + 0x14))(piVar2,0,0,0,0x1000400,local_e4);
  return 0;
}

