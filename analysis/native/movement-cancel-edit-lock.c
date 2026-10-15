// ev_9491923f1b969c667fa9840ec33b9c34ea6c3f5492e00afb5c0db59c6b312798


undefined4 FUN_004e1f40(void)

{
  ushort uVar1;
  
  if ((DAT_009a64c0 & 0x40) == 0) {
    return 0;
  }
  uVar1 = GetKeyState(0x91);
  if (((uVar1 & 1) == 0) && ((DAT_009a64c0 & 0x8000000) == 0)) {
    return 0;
  }
  return 1;
}

