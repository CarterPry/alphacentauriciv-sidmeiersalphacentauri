// ev_ffcccd489717bdfb9a7fd01f12879edf4e7a7c455d511e630d028ee7cbe946a5


void FUN_00511480(int param_1)

{
  int in_ECX;
  
  if ((DAT_00939288 != 0) || (param_1 != 0)) {
    FUN_00446b40(0x1e);
    *(undefined4 *)(in_ECX + 0x23bd8) = 0;
    *(undefined4 *)(in_ECX + 0x23bf8) = 1;
    *(undefined4 *)(in_ECX + 0x23bfc) = 1;
    if (*(int *)(in_ECX + 0x23c00) != 0) {
      *(undefined4 *)(in_ECX + 0x23c00) = 0;
      FUN_0046a550(1);
    }
    FUN_0046ae00();
    FUN_00458900(0);
    FUN_004b9ea0();
    FUN_0046fb10();
    FUN_00460dd0(*(undefined4 *)(in_ECX + 0x23bdc));
  }
  return;
}

