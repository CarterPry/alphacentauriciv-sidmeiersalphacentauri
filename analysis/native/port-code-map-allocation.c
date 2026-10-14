// REA Evidence: ev_4d8afffb48cc79eadb4b5a8f846edd253779f08ba94d897c58912a25f55e442a
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_00590ed0(void)

{
  undefined4 uVar1;
  
  DAT_009b86a0 = 0;
  FUN_00645470(&DAT_009b86a0,s_maps__0068fb84);
  uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0xa90));
  FUN_00645470(&DAT_009b86a0,uVar1);
  FUN_00645470(&DAT_009b86a0,&DAT_0068fb8c);
  FUN_00645460(&DAT_0094a2bc,&DAT_009b86a0);
  FUN_00645470(&DAT_0094a2bc,PTR_DAT_00691b3c);
  DAT_0068faf0 = DAT_00949870 / 2;
  DAT_00949884 = DAT_0068faf0 * DAT_00949874;
  DAT_00949888 = FUN_006290e0(DAT_00949884);
  DAT_0094a30c = 0;
  DAT_0094a30c = FUN_005d4510(DAT_00949884 * 0x2c);
  if (DAT_0094a30c != 0) {
    DAT_0094a294 = (DAT_00949870 + 4) / 5;
    DAT_0094a298 = (DAT_00949874 + 4) / 5;
    DAT_0094a29c = ((DAT_0094a294 + 1) / 2) * DAT_0094a298;
    DAT_0094a310 = FUN_005d4510(DAT_0094a29c);
    if (DAT_0094a310 != 0) {
      FUN_00471240();
      return 0;
    }
    if (DAT_0094a30c == 0) {
      DAT_0094a30c = 0;
      DAT_0094a310 = 0;
      return 1;
    }
    FUN_00644ef2(DAT_0094a30c);
  }
  if (DAT_0094a310 != 0) {
    FUN_00644ef2(DAT_0094a310);
  }
  DAT_0094a30c = 0;
  DAT_0094a310 = 0;
  return 1;
}

