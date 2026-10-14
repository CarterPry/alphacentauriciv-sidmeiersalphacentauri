
void FUN_00453a70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_10;
  undefined *local_c;
  int local_8;
  
  FUN_005d7de0(s_interface_pcx_00685014,0,10,0xec);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0xf7,0x47,0xf,0x13,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x107,0x47,0xf,0x13,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x267,0x212,0x10,0xf,0);
  iVar6 = 0x216;
  puVar4 = &DAT_00788038;
  do {
    FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar6,0x219,7,0xd,0);
    puVar4 = puVar4 + 0x2c;
    iVar6 = iVar6 + 8;
  } while ((int)puVar4 < 0x7880bc);
  local_8 = 0xe5;
  iVar6 = 0;
  puVar5 = &DAT_0078d52c;
  local_c = &DAT_0075c218;
  do {
    iVar3 = 0x21;
    iVar2 = local_8 + 0x20;
    do {
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3 + -0x20,local_8,6,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3,local_8,6,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3 + -0x20,iVar2,6,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3,iVar2,6,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3 + -0x19,local_8,0x18,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3 + -0x19,iVar2,0x18,6,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3 + -0x20,local_8 + 7,6,0x18,0);
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar3,local_8 + 7,6,0x18,0);
      FUN_005d7670(0x18,0x18,0,0);
      FUN_005dff00(local_c,iVar3 + -0x19,local_8 + 7,0,0,0x18,0x18);
      puVar5[-1] = &DAT_007ac290 + iVar6;
      *puVar5 = &DAT_0076dc98 + iVar6;
      puVar5[1] = &DAT_0078ae58 + iVar6;
      puVar5[2] = &DAT_0078cc60 + iVar6;
      puVar5[3] = &DAT_00779cb0 + iVar6;
      puVar5[4] = &DAT_007a6978 + iVar6;
      puVar5[5] = &DAT_0078e0a0 + iVar6;
      puVar5[6] = &DAT_0075b950 + iVar6;
      iVar1 = FUN_005e2210(0,0);
      if (iVar1 == 9) {
        puVar5[7] = 0;
        FUN_005d7470();
      }
      else {
        puVar5[7] = local_c;
      }
      puVar5[8] = 7;
      iVar3 = iVar3 + 0x27;
      iVar6 = iVar6 + 0x2c;
      local_c = local_c + 0x588;
      puVar5 = puVar5 + 10;
    } while (iVar3 < 0x96);
    local_8 = local_8 + 0x27;
  } while ((int)local_c < 0x76dc30);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x128,0x2c7,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x166,0x2c7,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x1a4,0x2c7,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x128,0x2f4,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x1a4,0x2f4,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x128,0x321,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x166,0x321,0x3d,0x2c,0);
  FUN_005e39a0(&DAT_00798668,DAT_00696d14,0x1a4,0x321,0x3d,0x2c,0);
  FUN_005d7670(0x3d,0x2c,0,0);
  FUN_005dff00(&DAT_0077aa70,0x166,0x2f4,0,0,0x3d,0x2c);
  iVar6 = 0x8c;
  do {
    FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar6,0x25,7,0xd,0);
    iVar6 = iVar6 + 8;
  } while (iVar6 < 0xa4);
  iVar6 = 0x187;
  puVar4 = &DAT_00822610;
  do {
    iVar2 = 0x236;
    local_10 = 3;
    do {
      FUN_005e39a0(&DAT_00798668,DAT_00696d14,iVar6,iVar2,0x1c,0x22,0);
      iVar2 = iVar2 + 0x23;
      puVar4 = puVar4 + 0x2c;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    iVar6 = iVar6 + 0x1d;
  } while ((int)puVar4 < 0x822718);
  FUN_005d7470();
  return;
}

