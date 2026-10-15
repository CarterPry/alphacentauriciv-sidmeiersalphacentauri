// ev_242cdbdccb780332dcbd1522156e8ef6b40e9b46828b8fec5196da7b56ba883c

void FUN_0046ec10(undefined4 param_1,undefined4 param_2)

{
  SHORT SVar1;
  ushort uVar2;
  int in_ECX;
  
  if (DAT_0090d938 == 0) {
    return;
  }
  if (*(int *)(in_ECX + -0x3cec) != 0) {
    FUN_004b4a20(0);
  }
  *(undefined4 *)(in_ECX + -0x3cf0) = 0;
  *(undefined4 *)(in_ECX + -0x3cec) = 0;
  *(undefined4 *)(in_ECX + -0x3ce0) = 0;
  *(undefined4 *)(in_ECX + -0x3ce8) = 0;
  *(undefined4 *)(in_ECX + -0x3c60) = 0xffffffff;
  *(undefined4 *)(in_ECX + -0x3ce4) = 0;
  if (DAT_009393c0 == 0) {
    SVar1 = GetAsyncKeyState(0x10);
    if (((((char)((ushort)SVar1 >> 8) != '\0') &&
         (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) != '\0')) ||
        ((uVar2 = GetKeyState(0x91), (uVar2 & 1) != 0 &&
         (SVar1 = GetAsyncKeyState(0x11), (char)((ushort)SVar1 >> 8) == '\0')))) &&
       (((byte)DAT_009a64c0 & 0x40) != 0)) {
      *(undefined4 *)(in_ECX + -0x3ce0) = 2;
      *(undefined4 *)(in_ECX + -0x3cd8) = 0xffffffff;
      *(undefined4 *)(in_ECX + -0x3cdc) = 0xffffffff;
      if (DAT_009b7abc == 0) {
        DAT_009b7ac0 = 0;
        DAT_009b7abc = *(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX;
      }
      (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + -0x21a6c) + 4) + -0x21a6c + in_ECX) + 0x44))
                (param_1,param_2);
      return;
    }
    GetAsyncKeyState(0x11);
    return;
  }
  return;
}

