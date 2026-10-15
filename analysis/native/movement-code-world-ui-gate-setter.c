// ev_4ebbdba227a72596b6f8c60122adb68f13fda00e7d8223209a1af9a9bebd3ef2

void FUN_004c49a0(int param_1)

{
  int *in_ECX;
  
  if ((DAT_00939ed8 & 8) == 0) {
    DAT_00939f08 = DAT_007af51c;
    DAT_00939f0c = DAT_007af520;
    DAT_00939f14 = DAT_007af528;
    DAT_00939ed8 = DAT_00939ed8 | 8;
    DAT_00939f10 = DAT_007af524;
  }
  DAT_0090d938 = 1;
  in_ECX[0x8e6f] = 0;
  in_ECX[0x8e70] = 0;
  in_ECX[0x8e73] = 0;
  in_ECX[0x8e74] = 0;
  in_ECX[0x7ca9] = 1;
  if (param_1 != 0) {
    FUN_00462870(1);
  }
  FUN_00470a90(1,0);
  in_ECX[0x8e6f] = 8;
  FUN_005d50a0(&DAT_00939f08,0,0x20,&DAT_007ae820,0,0);
  (**(code **)(*in_ECX + 4))(0);
  return;
}

