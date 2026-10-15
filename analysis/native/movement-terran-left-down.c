// ev_3ec479c6c59180ea02d8af1a486f00399f04107f36577b2009f63c316a1935ef

void FUN_0047b790(undefined4 param_1,undefined4 param_2)

{
  SHORT SVar1;
  ushort uVar2;
  int iVar3;
  int in_ECX;
  int local_c;
  int local_8;
  
  if (DAT_0091763c != 0) {
    FUN_00522fc0();
    *(undefined4 *)(in_ECX + -0x3cf0) = 0;
    *(undefined4 *)(in_ECX + -0x3cec) = 0;
    *(undefined4 *)(in_ECX + -0x3ce0) = 0;
    *(undefined4 *)(in_ECX + -0x3c60) = 0xffffffff;
    *(undefined4 *)(in_ECX + -0x3ce4) = 0;
    *(undefined4 *)(in_ECX + -0x3ce8) = 0;
    if ((DAT_00944600 == 0) && (*(int *)(in_ECX + -0x3cf4) == 0)) {
      if (DAT_00943210 == 0) {
        SVar1 = GetAsyncKeyState(0x10);
        if (((((char)((ushort)SVar1 >> 8) != '\0') &&
             (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) != '\0')) ||
            ((uVar2 = GetKeyState(0x91), (uVar2 & 1) != 0 &&
             (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) == '\0')))) &&
           (((byte)DAT_00959fc8 & 0x40) != 0)) {
          FUN_005c38a0();
          *(undefined4 *)(in_ECX + -0x3ce0) = 1;
          *(undefined4 *)(in_ECX + -0x3cd8) = 0xffffffff;
          *(undefined4 *)(in_ECX + -0x3cdc) = 0xffffffff;
          if (DAT_009bffa4 == 0) {
            DAT_009bffa8 = 0;
            DAT_009bffa4 = *(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX;
          }
          (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX) +
                      0x44))(param_1,param_2);
          return;
        }
        SVar1 = GetAsyncKeyState(0x11);
        if ((((char)((ushort)SVar1 >> 8) == '\0') && (iVar3 = FUN_004f78f0(), iVar3 == 0)) &&
           (((DAT_009430d8 != 0 && ((*(uint *)(in_ECX + -0x3cfc) & 0x40000) == 0)) ||
            ((((iVar3 = FUN_0046fa70(param_1,param_2,&local_c,&local_8), iVar3 == 0 &&
               (-1 < local_8)) && (local_8 < DAT_009b8afc)) &&
             ((-1 < local_c && (local_c < DAT_009b8af8)))))))) {
          if ((*(uint *)(in_ECX + -0x3cfc) & 0x40000) != 0) {
            iVar3 = FUN_004f9520(local_c,local_8,DAT_009430d4);
            *(int *)(in_ECX + -0x3c48) = iVar3;
            if (iVar3 < 0) {
              return;
            }
          }
          DAT_006ab4c4 = *(undefined4 *)(in_ECX + -0x3cf4);
          SVar1 = GetAsyncKeyState(0x10);
          if (((char)((ushort)SVar1 >> 8) != '\0') && (((byte)DAT_00959fc8 & 0x40) == 0)) {
            FUN_005231b0(3);
            return;
          }
          FUN_0062fe60(FUN_005231b0,3,(-(uint)(DAT_009430d8 != 0) & 0xfffffd65) + 1000,5);
        }
      }
      else if (DAT_00943210 == 8) {
        *(undefined4 *)(in_ECX + -0x3cec) = 1;
        if (DAT_009bffa4 == 0) {
          DAT_009bffa8 = 0;
          DAT_009bffa4 = *(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX;
        }
        FUN_005ee070(9);
        FUN_00606850(0);
        (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX) + 0x44)
        )(param_1,param_2);
        return;
      }
    }
  }
  return;
}

