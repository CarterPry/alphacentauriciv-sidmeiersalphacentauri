// ev_f5b8ffde285df4ded664e55fc8a4f26c4b3ab698d167a9e16b2f18951870913a

void FUN_0046ed30(undefined4 param_1,undefined4 param_2)

{
  SHORT SVar1;
  ushort uVar2;
  int iVar3;
  int in_ECX;
  int local_c;
  int local_8;
  
  if (DAT_0090d938 != 0) {
    FUN_0050ef50();
    *(undefined4 *)(in_ECX + -0x3cf0) = 0;
    *(undefined4 *)(in_ECX + -0x3cec) = 0;
    *(undefined4 *)(in_ECX + -0x3ce0) = 0;
    *(undefined4 *)(in_ECX + -0x3c60) = 0xffffffff;
    *(undefined4 *)(in_ECX + -0x3ce4) = 0;
    *(undefined4 *)(in_ECX + -0x3ce8) = 0;
    if ((DAT_0093a938 == 0) && (*(int *)(in_ECX + -0x3cf4) == 0)) {
      if (DAT_009393c0 == 0) {
        SVar1 = GetAsyncKeyState(0x10);
        if (((((char)((ushort)SVar1 >> 8) != '\0') &&
             (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) != '\0')) ||
            ((uVar2 = GetKeyState(0x91), (uVar2 & 1) != 0 &&
             (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) == '\0')))) &&
           (((byte)DAT_009a64c0 & 0x40) != 0)) {
          FUN_005abf20();
          *(undefined4 *)(in_ECX + -0x3ce0) = 1;
          *(undefined4 *)(in_ECX + -0x3cd8) = 0xffffffff;
          *(undefined4 *)(in_ECX + -0x3cdc) = 0xffffffff;
          if (DAT_009b7abc == 0) {
            DAT_009b7ac0 = 0;
            DAT_009b7abc = *(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX;
          }
          (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX) +
                      0x44))(param_1,param_2);
          return;
        }
        SVar1 = GetAsyncKeyState(0x11);
        if ((((char)((ushort)SVar1 >> 8) == '\0') && (iVar3 = FUN_004e1f40(), iVar3 == 0)) &&
           (((DAT_00939288 != 0 && ((*(uint *)(in_ECX + -0x3cfc) & 0x40000) == 0)) ||
            ((((iVar3 = FUN_00463040(param_1,param_2,&local_c,&local_8), iVar3 == 0 &&
               (-1 < local_8)) && (local_8 < DAT_00949874)) &&
             ((-1 < local_c && (local_c < DAT_00949870)))))))) {
          if ((*(uint *)(in_ECX + -0x3cfc) & 0x40000) != 0) {
            iVar3 = FUN_004e3c60(local_c,local_8,DAT_00939284);
            *(int *)(in_ECX + -0x3c48) = iVar3;
            if (iVar3 < 0) {
              return;
            }
          }
          DAT_0068a5cc = *(undefined4 *)(in_ECX + -0x3cf4);
          SVar1 = GetAsyncKeyState(0x10);
          if (((char)((ushort)SVar1 >> 8) != '\0') && (((byte)DAT_009a64c0 & 0x40) == 0)) {
            FUN_0050f170(3);
            return;
          }
          FUN_00616350(FUN_0050f170,3,(-(uint)(DAT_00939288 != 0) & 0xfffffd65) + 1000,5);
        }
      }
      else if (DAT_009393c0 == 8) {
        *(undefined4 *)(in_ECX + -0x3cec) = 1;
        if (DAT_009b7abc == 0) {
          DAT_009b7ac0 = 0;
          DAT_009b7abc = *(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX;
        }
        FUN_005d5250(9);
        FUN_005ed9d0(0);
        (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX) + 0x44)
        )(param_1,param_2);
        return;
      }
    }
  }
  return;
}

