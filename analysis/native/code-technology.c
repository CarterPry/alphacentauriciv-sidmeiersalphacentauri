// REA Evidence: ev_cabe6860d0f93a5a8f773106524463eb302940e363953d75be5a46c6bdaf56dd
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_00585e30(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *_Dest;
  undefined4 *puVar5;
  int iVar6;
  char *local_8;
  
  iVar1 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_TECHNOLOGY_0068f2f0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = 0;
  _Dest = &DAT_0094f360;
  do {
    FUN_005fd570();
    FUN_005fd670();
    FUN_005fd670();
    _strncpy(_Dest,DAT_009b7d04,8);
    iVar6 = 0;
    _Dest[7] = '\0';
    if (0x94f360 < (int)_Dest) {
      local_8 = &DAT_0094f360;
      do {
        iVar2 = _strcmp(_Dest,local_8);
        if (iVar2 == 0) {
          FUN_00625e30(0,iVar1);
          FUN_00625e30(1,iVar6);
          FUN_00625ec0(0,_Dest,0xffffffff,0xffffffff);
          FUN_00625ec0(1,&DAT_009b8398,0xffffffff,0xffffffff);
          FUN_00625ec0(2,DAT_009b7d00,0xffffffff,0xffffffff);
          FUN_005bf310(s_DUPLICATETECH_0068f2fc,0);
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 0x2c;
      } while (iVar6 < iVar1);
    }
    _Dest = _Dest + 0x2c;
    iVar1 = iVar1 + 1;
  } while ((int)_Dest < 0x9502ac);
  iVar1 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_TECHNOLOGY_0068f30c);
  if (iVar1 != 0) {
    return 1;
  }
  puVar5 = &DAT_0094f378;
  DAT_00949730 = 0;
  DAT_00949734 = 0;
  do {
    FUN_005fd570();
    uVar3 = FUN_005fd6d0();
    puVar5[-7] = uVar3;
    FUN_005fd670();
    uVar3 = FUN_005fd740();
    *puVar5 = uVar3;
    uVar3 = FUN_005fd740();
    puVar5[-2] = uVar3;
    uVar3 = FUN_005fd740();
    puVar5[-1] = uVar3;
    uVar3 = FUN_005fd740();
    puVar5[-3] = uVar3;
    uVar3 = FUN_005fd670();
    uVar3 = FUN_00584d60(uVar3);
    puVar5[1] = uVar3;
    uVar3 = FUN_005fd670();
    uVar3 = FUN_00584d60(uVar3);
    puVar5[2] = uVar3;
    uVar4 = FUN_005fd7a0();
    puVar5[-8] = uVar4;
    if (((-2 < (int)puVar5[1]) && (-2 < (int)puVar5[2])) &&
       (DAT_00949730 = DAT_00949730 + 1, (uVar4 & 4) != 0)) {
      DAT_00949734 = DAT_00949734 + 1;
    }
    puVar5 = puVar5 + 0xb;
  } while ((int)puVar5 < 0x9502c4);
  return 0;
}

