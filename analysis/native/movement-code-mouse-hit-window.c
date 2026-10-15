// ev_b0756a97532658ab0c6dcca6d5c4a9207b80e6dffd3a28d38876643b7ac28896

int FUN_005f6f10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  DAT_009b6628 = *param_1;
  DAT_009b662c = *param_2;
  iVar2 = DAT_009b7acc;
  iVar3 = DAT_009b7ac0;
  iVar4 = DAT_009b7ad0;
  while( true ) {
    while (iVar1 = DAT_009b7abc, iVar2 == 0) {
      if (iVar4 == 0) {
        if (DAT_009b7abc == 0) {
          if (iVar3 == 0) goto LAB_005f7133;
          if ((*(byte *)(iVar3 + 0x9c) & 1) != 0) {
            FUN_005ed2d0(param_1,param_2);
            *param_1 = *param_1 + *(int *)(iVar3 + 0x13c);
            *param_2 = *param_2 + *(int *)(iVar3 + 0x140);
            DAT_009b7aa4 = 1;
            iVar2 = DAT_009b7ac0;
            goto LAB_005f712b;
          }
          iVar3 = 0;
          DAT_009b7ac0 = 0;
        }
        else {
          if ((*(byte *)(DAT_009b7abc + 0x9c) & 1) != 0) {
            *param_1 = *param_1 - (*(int *)(DAT_009b7abc + 0x14c) + *(int *)(DAT_009b7abc + 0x13c));
            *param_2 = *param_2 - (*(int *)(iVar1 + 0x150) + *(int *)(iVar1 + 0x140));
            if ((((*(byte *)(iVar1 + 0x98) & 0x20) != 0) && (*(int *)(iVar1 + 0xc4) != 0)) &&
               (FUN_005ed2d0(param_1,param_2), (*(uint *)(iVar1 + 0x98) & 0x8000) != 0)) {
              *param_1 = *param_1 + *(int *)(*(int *)(iVar1 + 0xc4) + 0x13c);
              *param_2 = *param_2 + *(int *)(*(int *)(iVar1 + 0xc4) + 0x140);
            }
            DAT_009b7aa4 = 0;
            iVar2 = DAT_009b7abc;
            goto LAB_005f712b;
          }
          DAT_009b7abc = 0;
        }
      }
      else {
        if ((*(byte *)(iVar4 + 0x9c) & 1) != 0) {
          FUN_005ed2d0(param_1,param_2);
          *param_1 = *param_1 + *(int *)(iVar4 + 0x13c);
          *param_2 = *param_2 + *(int *)(iVar4 + 0x140);
          DAT_009b7aa4 = 1;
          iVar2 = DAT_009b7ad0;
          goto LAB_005f712b;
        }
        iVar4 = 0;
        DAT_009b7ad0 = 0;
      }
    }
    if ((*(byte *)(iVar2 + 0x9c) & 1) != 0) break;
    iVar2 = 0;
    DAT_009b7acc = 0;
  }
  *param_1 = *param_1 - (*(int *)(iVar2 + 0x14c) + *(int *)(iVar2 + 0x13c));
  *param_2 = *param_2 - (*(int *)(iVar2 + 0x150) + *(int *)(iVar2 + 0x140));
  if ((((*(byte *)(iVar2 + 0x98) & 0x20) != 0) && (*(int *)(iVar2 + 0xc4) != 0)) &&
     (FUN_005ed2d0(param_1,param_2), (*(uint *)(iVar2 + 0x98) & 0x8000) != 0)) {
    *param_1 = *param_1 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x13c);
    *param_2 = *param_2 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x140);
  }
  DAT_009b7aa4 = 0;
  iVar2 = DAT_009b7acc;
LAB_005f712b:
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_005f7133:
  iVar2 = DAT_009b7ae0;
  iVar3 = 0;
  if (DAT_009b7ae0 == 0) {
    if (DAT_009b7b34 < 1) {
      return 0;
    }
    puVar5 = &DAT_009b6e48;
    do {
      iVar2 = FUN_005f6ab0(*puVar5,param_1,param_2);
      if (iVar2 != 0) goto LAB_005f7304;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < DAT_009b7b34);
  }
  else {
    *param_1 = *param_1 - (*(int *)(DAT_009b7ae0 + 0x14c) + *(int *)(DAT_009b7ae0 + 0x13c));
    *param_2 = *param_2 - (*(int *)(iVar2 + 0x150) + *(int *)(iVar2 + 0x140));
    if ((((*(byte *)(iVar2 + 0x98) & 0x20) != 0) && (*(int *)(iVar2 + 0xc4) != 0)) &&
       (FUN_005ed2d0(param_1,param_2), (*(uint *)(iVar2 + 0x98) & 0x8000) != 0)) {
      *param_1 = *param_1 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x13c);
      *param_2 = *param_2 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x140);
    }
    *param_1 = *param_1 + *(int *)(iVar2 + 0x13c);
    *param_2 = *param_2 + *(int *)(iVar2 + 0x140);
    iVar2 = FUN_005f6ab0(DAT_009b7ae0,param_1,param_2);
    if (iVar2 != 0) goto LAB_005f7304;
    if (DAT_009b7adc != 0) {
      *param_1 = DAT_009b6628;
      *param_2 = DAT_009b662c;
      iVar2 = DAT_009b7adc;
      FUN_005ed2d0(param_1,param_2);
      *param_1 = *param_1 + *(int *)(iVar2 + 0x13c);
      *param_2 = *param_2 + *(int *)(iVar2 + 0x140);
      iVar2 = FUN_005f6ab0(DAT_009b7adc,param_1,param_2);
    }
    if (iVar2 != 0) goto LAB_005f7304;
    *param_1 = DAT_009b6628;
    *param_2 = DAT_009b662c;
    iVar2 = DAT_009b7ae0;
    *param_1 = *param_1 - (*(int *)(DAT_009b7ae0 + 0x14c) + *(int *)(DAT_009b7ae0 + 0x13c));
    *param_2 = *param_2 - (*(int *)(iVar2 + 0x150) + *(int *)(iVar2 + 0x140));
    if ((((*(byte *)(iVar2 + 0x98) & 0x20) != 0) && (*(int *)(iVar2 + 0xc4) != 0)) &&
       (FUN_005ed2d0(param_1,param_2), (*(uint *)(iVar2 + 0x98) & 0x8000) != 0)) {
      *param_1 = *param_1 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x13c);
      *param_2 = *param_2 + *(int *)(*(int *)(iVar2 + 0xc4) + 0x140);
    }
    DAT_009b7aa4 = 0;
    iVar2 = DAT_009b7ae0;
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_005f7304:
  if (DAT_009b7aa4 == 0) {
    iVar2 = *(int *)(iVar2 + 0xa8);
  }
  return iVar2;
}

