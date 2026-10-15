// ev_733be95d108c3dd580af618bed9d15483b53e46db3a48d1b94b262fc2e7e8dc7

void FUN_005171d0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_0093f660 != 0) && (param_2 != 0x61)) {
    if (DAT_0093a938 != 0) {
      return;
    }
    if (DAT_0093e944 != 0) {
      return;
    }
    if ((DAT_0093e8ec & 1 << ((byte)DAT_00939284 & 0x1f)) != 0) {
      return;
    }
  }
  switch(param_1) {
  case 0x42:
    uVar5 = 0xe;
    goto LAB_0051750b;
  case 0x45:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
    uVar5 = 0xd;
    goto LAB_00517512;
  case 0x46:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
    uVar5 = 4;
    goto LAB_00517512;
  case 0x47:
    FUN_004d7de0(*(undefined4 *)(in_ECX + 0x23bdc));
    break;
  case 0x48:
    FUN_004d24c0(*(undefined4 *)(in_ECX + 0x23bdc),10);
    break;
  case 0x49:
    FUN_004d61a0(*(undefined4 *)(in_ECX + 0x23bdc),0xfffffffd,0);
    break;
  case 0x4c:
    FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),0xb);
    break;
  case 0x50:
    piVar4 = &DAT_007d3c3c;
    uVar1 = *(uint *)(DAT_007d3c3c + 0x1dd70);
    do {
      iVar3 = *piVar4;
      if ((iVar3 != 0) && ((piVar4 == &DAT_007d3c3c || (*(int *)(iVar3 + 0x1dd74) != 0)))) {
        if ((uVar1 & 0x400000) == 0) {
          *(uint *)(iVar3 + 0x1dd70) = *(uint *)(iVar3 + 0x1dd70) | 0x400000;
          FUN_00467970(1);
        }
        else {
          *(uint *)(iVar3 + 0x1dd70) = *(uint *)(iVar3 + 0x1dd70) & 0xffbfffff;
          FUN_0046a550(1);
        }
      }
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0x7d3c5c);
    break;
  case 0x55:
    FUN_004d04e0(*(undefined4 *)(in_ECX + 0x23bdc));
    break;
  case 0x61:
    if (DAT_0093e944 == 0) {
      FUN_004d2f00((int)(short)(&DAT_00952828)[*(int *)(in_ECX + 0x23bdc) * 0x1a],
                   (int)(short)(&DAT_0095282a)[*(int *)(in_ECX + 0x23bdc) * 0x1a],1);
    }
    break;
  case 0x62:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
    iVar2 = (short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34;
    if ((((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar2] * 0x90] == '\x02') &&
        ((&DAT_009ab892)[iVar2] != '\b')) &&
       ((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar2] * 0x10] != '\0')) {
      FUN_004d8a70(iVar3,10);
    }
    else if (((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar2] * 0x10] == '\0') ||
            ((&DAT_0094a379)[(uint)(byte)(&DAT_009ab88c)[iVar2] * 0x90] == '\x02')) {
      if ((&DAT_009ab892)[iVar2] == '\t') {
        uVar5 = 0xe;
        goto LAB_00517512;
      }
      FUN_004cf7c0(iVar3);
    }
    else {
      FUN_004d5d30(iVar3);
    }
    break;
  case 0x66:
    iVar3 = FUN_005c0db0((int)(short)(&DAT_00952832)[*(int *)(in_ECX + 0x23bdc) * 0x1a],1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(in_ECX + 0x23bdc);
      uVar5 = 0;
      goto LAB_00517512;
    }
    FUN_004d9170(*(undefined4 *)(in_ECX + 0x23bdc));
    break;
  case 0x67:
    FUN_004d61a0(*(undefined4 *)(in_ECX + 0x23bdc),0x18,0);
    break;
  case 0x68:
    FUN_004d24c0(*(undefined4 *)(in_ECX + 0x23bdc),0);
    break;
  case 0x69:
    FUN_004d7f60(*(undefined4 *)(in_ECX + 0x23bdc));
    break;
  case 0x6c:
    FUN_004d2220(*(undefined4 *)(in_ECX + 0x23bdc),0);
    break;
  case 0x6e:
    uVar5 = 0xc;
    goto LAB_0051750b;
  case 0x6f:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
    if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] != '\n') {
      uVar5 = 9;
      goto LAB_00517512;
    }
    FUN_004d8fa0(iVar3);
    break;
  case 0x70:
    FUN_004d7ee0(*(undefined4 *)(in_ECX + 0x23bdc));
    break;
  case 0x71:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
    uVar5 = 0xf;
    goto LAB_00517512;
  case 0x72:
    uVar5 = 5;
LAB_0051750b:
    iVar3 = *(int *)(in_ECX + 0x23bdc);
LAB_00517512:
    FUN_004d3470(iVar3,uVar5);
  }
  switch(param_2) {
  case 0x20:
    FUN_004d0450(*(undefined4 *)(in_ECX + 0x23bdc));
  default:
    goto switchD_00517530_caseD_21;
  case 0x2e:
    uVar6 = 8;
    goto LAB_0051759d;
  case 0x2f:
    FUN_004d8f40(*(undefined4 *)(in_ECX + 0x23bdc));
    goto switchD_00517530_caseD_21;
  case 0x5b:
    uVar5 = *(undefined4 *)(in_ECX + 0x23bdc);
    uVar6 = 0x11;
    break;
  case 0x5d:
    uVar5 = *(undefined4 *)(in_ECX + 0x23bdc);
    uVar6 = 0x10;
    break;
  case 0x5f:
    uVar6 = 0x12;
    goto LAB_0051759d;
  case 100:
    FUN_004d52a0(*(undefined4 *)(in_ECX + 0x23bdc));
    goto switchD_00517530_caseD_21;
  case 0x6b:
    uVar5 = *(undefined4 *)(in_ECX + 0x23bdc);
    uVar6 = 7;
    break;
  case 0x6d:
    uVar6 = 2;
LAB_0051759d:
    uVar5 = *(undefined4 *)(in_ECX + 0x23bdc);
    break;
  case 0x73:
    uVar5 = *(undefined4 *)(in_ECX + 0x23bdc);
    uVar6 = 3;
  }
  FUN_004d3470(uVar5,uVar6);
switchD_00517530_caseD_21:
  if (param_3 < 0x30047) {
    if (param_3 == 0x30046) {
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),6);
      return;
    }
    if (param_3 < 0x20053) {
      if (param_3 == 0x20052) {
        FUN_004d7be0(*(undefined4 *)(in_ECX + 0x23bdc),0x1b);
        return;
      }
      if (param_3 == 0x20044) {
        FUN_004d7cf0(*(undefined4 *)(in_ECX + 0x23bdc));
        return;
      }
      if (param_3 == 0x20046) {
        FUN_004d3470(*(undefined4 *)(in_ECX + 0x23bdc),0xb);
        return;
      }
      if (param_3 == 0x20048) {
        FUN_004d7de0(*(undefined4 *)(in_ECX + 0x23bdc));
        return;
      }
    }
    else {
      if (param_3 == 0x20054) {
        FUN_004d7be0(*(undefined4 *)(in_ECX + 0x23bdc),0x1c);
        return;
      }
      if (param_3 == 0x20055) {
        FUN_004d06c0(*(undefined4 *)(in_ECX + 0x23bdc));
        return;
      }
      if (param_3 == 0x30041) {
        iVar3 = *(int *)(in_ECX + 0x23bdc);
        if (((&DAT_0094a379)
             [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90] ==
             '\x02') &&
           ((&DAT_0094ae68)
            [(uint)(byte)(&DAT_009ab88d)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x10] !=
            '\0')) {
          FUN_004d8a70(iVar3,0xc);
          return;
        }
        FUN_004d8a70(iVar3,3);
        return;
      }
    }
  }
  else {
    switch(param_3) {
    case 0x3004d:
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),5);
      return;
    case 0x3004f:
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),7);
      return;
    case 0x30052:
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),1);
      return;
    case 0x30053:
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),4);
      return;
    case 0x30054:
      FUN_004d8a70(*(undefined4 *)(in_ECX + 0x23bdc),2);
      return;
    case 0x30055:
      FUN_004d26a0(*(undefined4 *)(in_ECX + 0x23bdc));
    }
  }
  return;
}

