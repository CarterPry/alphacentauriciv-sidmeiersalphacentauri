
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454d10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_a4 [80];
  undefined1 local_54 [80];
  
  iVar2 = 0;
  puVar1 = &DAT_00759e40;
  do {
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,s_techs_tech0_00685090);
    if ((int)puVar1 < 0x759ff8) {
      FUN_00645470(&DAT_009b86a0,&DAT_0068509c);
    }
    FUN_0064fc88(iVar2,local_54,10);
    FUN_00645470(&DAT_009b86a0,local_54);
    FUN_005e3890(&DAT_009b86a0,0,0);
    *puVar1 = 0xd7;
    puVar1[1] = 0xd7;
    puVar1 = puVar1 + 0xb;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x75ad8c);
  iVar2 = 0;
  puVar1 = &DAT_00787218;
  do {
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,s_facs__006850a0);
    if ((0x7877ef < (int)puVar1) && ((int)puVar1 < 0x787d19)) {
      FUN_00645470(&DAT_009b86a0,&DAT_006850a8);
    }
    FUN_00645470(&DAT_009b86a0,&DAT_006850ac);
    if ((int)puVar1 < 0x7873d0) {
      FUN_00645470(&DAT_009b86a0,&DAT_006850b4);
    }
    if ((int)puVar1 < 0x787d19) {
      FUN_0064fc88(iVar2,local_a4,10);
      puVar3 = local_a4;
    }
    else {
      FUN_0064fc88(iVar2 + -0x1f,local_54,10);
      puVar3 = local_54;
    }
    FUN_00645470(&DAT_009b86a0,puVar3);
    FUN_005e3890(&DAT_009b86a0,0,0);
    *puVar1 = 0xd7;
    puVar1[1] = 0xd7;
    puVar1 = puVar1 + 0xb;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x787e20);
  iVar2 = 0;
  puVar1 = &DAT_00759338;
  do {
    DAT_009b86a0 = 0;
    FUN_00645470(&DAT_009b86a0,s_projs_proj0_006850b8);
    if ((int)puVar1 < 0x7594f0) {
      FUN_00645470(&DAT_009b86a0,&DAT_006850c4);
    }
    FUN_0064fc88(iVar2,local_a4,10);
    FUN_00645470(&DAT_009b86a0,local_a4);
    FUN_005e3890(&DAT_009b86a0,0,0);
    *puVar1 = 0xd7;
    puVar1[1] = 0xd7;
    puVar1 = puVar1 + 0xb;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x759e38);
  FUN_005e3890(s_btwrm_pcx_006850c8,0,0);
  DAT_00779218 = 0x60;
  _DAT_0077921c = 0x73;
  FUN_005e3890(s_btisl_pcx_006850d4,0,0);
  DAT_0076dc48 = 0x60;
  _DAT_0076dc4c = 0x73;
  FUN_005e3890(s_btchi_pcx_006850e0,0,0);
  DAT_0078a4b8 = 0x60;
  _DAT_0078a4bc = 0x73;
  FUN_005e3890(s_BTfungtow_pcx_006850ec,0,0);
  DAT_00787e88 = 0x60;
  _DAT_00787e8c = 0x73;
  FUN_005e3890(s_BTsporlnch_pcx_006850fc,0,0);
  DAT_007ac018 = 0x60;
  _DAT_007ac01c = 0x73;
  FUN_005e3890(s_BTsealrk_pcx_0068510c,0,0);
  DAT_00779588 = 0x60;
  _DAT_0077958c = 0x73;
  return;
}

