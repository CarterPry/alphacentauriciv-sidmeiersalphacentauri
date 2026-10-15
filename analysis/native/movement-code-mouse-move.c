// ev_ef93731bf73f16416e6d7bd809d225968fa64053afa645c50695d16997e6b0f0

void FUN_0046f000(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  int in_ECX;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_6c [80];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((((DAT_007f67c4 != 0) || (DAT_0093a934 != 0)) || (DAT_0093a938 != 0)) ||
       ((DAT_0090d938 == 0 || (*(int *)(in_ECX + -0x3cf4) != 0)))) ||
      ((iVar3 = FUN_00463040(param_1,param_2,&local_10,&local_8), iVar3 != 0 ||
       ((local_8 < 0 || (DAT_00949874 <= local_8)))))) ||
     ((local_10 < 0 || (DAT_00949870 <= local_10)))) {
    return;
  }
  if (*(int *)(in_ECX + -0x3ce0) != 0) {
    FUN_0046b510(local_10,local_8,*(int *)(in_ECX + -0x3ce0) == 2);
    return;
  }
  iVar3 = FUN_005105c0(local_10,local_8);
  if (iVar3 == 0) {
    if ((*(int *)(in_ECX + -0x2b20) == 0) && (*(int *)(in_ECX + -0x2b1c) == 0x7f00)) {
      return;
    }
    FUN_005ec7c0(0x7f00);
    *(undefined4 *)(in_ECX + -0x2b1c) = 0x7f00;
    *(undefined4 *)(in_ECX + -0x2b20) = 0;
    return;
  }
  if (*(int *)(in_ECX + -0x3cec) == 0) goto LAB_0046f601;
  DAT_007f67c4 = 1;
  FUN_005fcb20();
  DAT_007f67c4 = 0;
  if ((*(int *)(in_ECX + -0x3c60) == local_10) && (*(int *)(in_ECX + -0x3c5c) == local_8))
  goto LAB_0046f601;
  FUN_005d5250(9);
  *(int *)(in_ECX + -0x3c60) = local_10;
  *(int *)(in_ECX + -0x3c5c) = local_8;
  iVar3 = DAT_0093928c;
  if (DAT_0093928c < 0) {
    FUN_005f1820(0,1);
    *(undefined4 *)(in_ECX + -0x3c58) = 10;
    *(int *)(in_ECX + -0x3c88) = (int)(short)(&DAT_0097d040)[*(int *)(in_ECX + -0x3c48) * 0x9a];
    *(int *)(in_ECX + -0x3c74) = (int)(short)(&DAT_0097d042)[*(int *)(in_ECX + -0x3c48) * 0x9a];
    *(int *)(in_ECX + -0x3c84) = local_8;
    *(undefined4 *)(in_ECX + -0x3c54) = 2;
    *(undefined4 *)(in_ECX + -0x3c50) = 0;
    *(undefined4 *)(in_ECX + -0x3c4c) = 1;
    FUN_00467430(*(undefined4 *)(in_ECX + -0x3c88),*(undefined4 *)(in_ECX + -0x3c74),
                 *(undefined4 *)(in_ECX + -0x3c84),*(undefined4 *)(in_ECX + -0x3c70),
                 *(undefined4 *)(in_ECX + -0x3c58),DAT_00939284,*(undefined4 *)(in_ECX + -0x3c54),
                 *(undefined4 *)(in_ECX + -0x3c50),3,5,1);
  }
  else {
    local_c = DAT_0093928c * 0x34;
    *(int *)(in_ECX + -0x3c58) = (int)(short)(&DAT_00952832)[DAT_0093928c * 0x1a];
    bVar8 = DAT_009393c0 == 8;
    *(uint *)(in_ECX + -0x3c50) = (uint)bVar8;
    if (bVar8 == 0) {
      if (DAT_009393c0 == 1) {
        if (((&DAT_0095282c)[iVar3 * 0xd] & 0x2000000) != 0) goto LAB_0046f17a;
        (&DAT_0095283c)[iVar3 * 0x1a] = (short)local_10;
        (&DAT_00952844)[iVar3 * 0x1a] = (undefined2)local_8;
        (&DAT_0095283a)[local_c] = 0;
      }
    }
    else {
LAB_0046f17a:
      (&DAT_0095283c)[(uint)(byte)(&DAT_0095283a)[local_c] + iVar3 * 0x1a] = (short)local_10;
      (&DAT_00952844)[(uint)(byte)(&DAT_0095283a)[local_c] + iVar3 * 0x1a] = (undefined2)local_8;
    }
    *(uint *)(in_ECX + -0x3c54) =
         (uint)(byte)(&DAT_0094a379)
                     [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] *
                      0x90];
    iVar5 = 0;
    while( true ) {
      if ((*(int *)(in_ECX + -0x3c50) == 0) || ((&DAT_0095283a)[local_c] == '\0')) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
      if ((int)((byte)(&DAT_0095283a)[local_c] + 1 + iVar7) <= iVar5) break;
      FUN_005f1820(0,1);
      if (iVar5 == 0) {
        sVar1 = *(short *)((int)&DAT_00952828 + local_c);
      }
      else {
        sVar1 = *(short *)(&DAT_0095283a + (iVar5 + iVar3 * 0x1a) * 2);
      }
      local_14 = (int)sVar1;
      if (iVar5 == 0) {
        sVar1 = *(short *)((int)&DAT_0095282a + local_c);
      }
      else {
        sVar1 = *(short *)(&DAT_00952842 + (iVar5 + iVar3 * 0x1a) * 2);
      }
      local_1c = (int)sVar1;
      local_18 = iVar5 + 1;
      iVar7 = local_18 % (int)((byte)(&DAT_0095283a)[local_c] + 2);
      if (iVar7 == 0) {
        sVar1 = *(short *)((int)&DAT_00952828 + local_c);
      }
      else {
        sVar1 = *(short *)(&DAT_0095283a + (iVar7 + iVar3 * 0x1a) * 2);
      }
      if (iVar7 == 0) {
        sVar2 = *(short *)((int)&DAT_0095282a + local_c);
      }
      else {
        sVar2 = *(short *)(&DAT_00952842 + (iVar7 + iVar3 * 0x1a) * 2);
      }
      *(int *)(in_ECX + -0x3c88 + iVar5 * 4) = local_14;
      *(int *)(in_ECX + -0x3c74 + iVar5 * 4) = local_1c;
      *(int *)(in_ECX + -0x3c84 + iVar5 * 4) = (int)sVar1;
      *(int *)(in_ECX + -0x3c70 + iVar5 * 4) = (int)sVar2;
      *(int *)(in_ECX + -0x3c4c) = local_18;
      FUN_00467430(local_14,local_1c,(int)sVar1,(int)sVar2,*(undefined4 *)(in_ECX + -0x3c58),
                   DAT_00939284,*(undefined4 *)(in_ECX + -0x3c54),*(undefined4 *)(in_ECX + -0x3c50),
                   3,5,1);
      iVar5 = local_18;
    }
  }
  DAT_009b86a0 = 0;
  if (DAT_009393c0 == 8) {
    uVar4 = *(undefined4 *)(DAT_009b90f8 + 0x668);
  }
  else if (*(int *)(in_ECX + -0x3ce8) == 0) {
    uVar4 = *(undefined4 *)(DAT_009b90f8 + 0x66c);
  }
  else {
    uVar4 = *(undefined4 *)(DAT_009b90f8 + 0x6c4);
  }
  uVar4 = FUN_006169a0(uVar4);
  FUN_00645470(&DAT_009b86a0,uVar4);
  FUN_00645470(&DAT_009b86a0,&DAT_00682820);
  FUN_00592250(&DAT_009b86a0,local_10,local_8,0,2,0);
  FUN_00645470(&DAT_009b86a0,&DAT_00682e94);
  uVar4 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x670));
  FUN_00645470(&DAT_009b86a0,uVar4);
  FUN_00645470(&DAT_009b86a0,&DAT_006863a0);
  FUN_0064fc88(DAT_007d3b70 / DAT_00949738,local_6c,10);
  FUN_00645470(&DAT_009b86a0,local_6c);
  if (DAT_007d3b70 % DAT_00949738 != 0) {
    FUN_00645470(&DAT_009b86a0,&DAT_00682820);
    FUN_0064fc88(DAT_007d3b70 % DAT_00949738,local_6c,10);
    FUN_00645470(&DAT_009b86a0,local_6c);
    FUN_00645470(&DAT_009b86a0,&DAT_006863a4);
    FUN_0064fc88(DAT_00949738,local_6c,10);
    FUN_00645470(&DAT_009b86a0,local_6c);
  }
  FUN_005dacb0(0x9f,0x41,1,1);
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar4 = FUN_005882f0(0xc,1,0,0,0);
  FUN_005dac70(uVar4,uVar9,uVar10,uVar11);
  iVar3 = *(int *)(&DAT_00915b74 + *(int *)(DAT_009156b0 + 4));
  iVar5 = FUN_005dc790(&DAT_009b86a0);
  param_2 = DAT_00933468 + param_2;
  sVar6 = _strlen(&DAT_009b86a0);
  FUN_005dcea0(&DAT_009b86a0,param_1 - (iVar5 * param_1) / iVar3,param_2,sVar6);
LAB_0046f601:
  FUN_005d5890();
  return;
}

