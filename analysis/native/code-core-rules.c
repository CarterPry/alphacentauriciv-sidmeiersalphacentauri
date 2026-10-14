// REA Evidence: ev_2b4906b7608d882042b9799311da49784169b1ae811e49afde97b1343b78d186
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00585170(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_RULES_0068f2d8);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_00949738 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_0094973c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,1000);
  DAT_00949748 = FUN_00422f00(uVar2);
  DAT_0094974c = FUN_005fd740();
  if (DAT_0094974c < 1) {
    DAT_0094974c = 1;
  }
  else if (1000 < DAT_0094974c) {
    DAT_0094974c = 1000;
  }
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,8);
  DAT_00949744 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,500);
  DAT_00949740 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_00949750 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_00949754 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,1000);
  DAT_00949758 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_0094975c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffffff,0);
  DAT_00949760 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_00949764 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_00949768 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_0094976c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_00949770 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,500);
  DAT_00949790 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,500);
  DAT_00949794 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,500);
  DAT_00949798 = FUN_00422f00(uVar2);
  piVar3 = &DAT_009497a8;
  do {
    FUN_005fd570();
    uVar2 = FUN_005fd740(1,1000);
    iVar1 = FUN_00422f00(uVar2);
    piVar3[-3] = iVar1;
    iVar1 = FUN_005fd740();
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (1000 < iVar1) {
      iVar1 = 1000;
    }
    *piVar3 = iVar1;
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x9497b4);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,1000);
  DAT_009497b4 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497b8 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497bc = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497c0 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497c4 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497f4 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497f8 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949804 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497e4 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497e8 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497ec = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497f0 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_009497fc = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949800 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949808 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_0094980c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949810 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949814 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949818 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_0094981c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949820 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0xffffff9c,1000);
  DAT_00949824 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_0094982c = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,2);
  DAT_00949828 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,1000);
  DAT_00949830 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,1000);
  DAT_009497cc = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_009497d0 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(0,100);
  DAT_009497d4 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd740(1,100);
  DAT_009497d8 = FUN_00422f00(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_00949774 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_00949778 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_0094977c = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_00949780 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_00949784 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_00949788 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_0094978c = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_009497c8 = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_009497dc = FUN_00584d60(uVar2);
  FUN_005fd570();
  uVar2 = FUN_005fd670();
  DAT_009497e0 = FUN_00584d60(uVar2);
  FUN_005fd570();
  DAT_00949834 = FUN_005fd740();
  if (DAT_00949834 < -1) {
    DAT_00949834 = -1;
  }
  else if (1 < DAT_00949834) {
    DAT_00949834 = 1;
  }
  FUN_005fd570();
  DAT_00949838 = FUN_005fd740();
  if (DAT_00949838 < -1) {
    DAT_00949838 = -1;
  }
  else if (1 < DAT_00949838) {
    DAT_00949838 = 1;
  }
  FUN_005fd570();
  DAT_0094983c = FUN_005fd740();
  if (DAT_0094983c < -1) {
    DAT_0094983c = -1;
  }
  else if (1 < DAT_0094983c) {
    DAT_0094983c = 1;
  }
  FUN_005fd570();
  DAT_00949840 = FUN_005fd740();
  if (DAT_00949840 < 10) {
    DAT_00949840 = 10;
  }
  else if (100 < DAT_00949840) {
    DAT_00949840 = 100;
  }
  FUN_005fd570();
  DAT_00949844 = FUN_005fd740();
  if (DAT_00949844 < 10) {
    DAT_00949844 = 10;
  }
  else if (100 < DAT_00949844) {
    DAT_00949844 = 100;
  }
  FUN_005fd570();
  DAT_00949848 = FUN_005fd740();
  if (DAT_00949848 < 10) {
    DAT_00949848 = 10;
  }
  else if (100 < DAT_00949848) {
    DAT_00949848 = 100;
  }
  FUN_005fd570();
  DAT_0094984c = FUN_005fd740();
  if (DAT_0094984c < 0) {
    DAT_0094984c = 0;
  }
  else if (1000 < DAT_0094984c) {
    DAT_0094984c = 1000;
  }
  DAT_00949850 = FUN_005fd740();
  if (DAT_00949850 < 1) {
    DAT_00949850 = 1;
  }
  else if (1000 < DAT_00949850) {
    DAT_00949850 = 1000;
  }
  FUN_005fd570();
  DAT_00949854 = FUN_005fd740();
  if (DAT_00949854 < 0) {
    DAT_00949854 = 0;
  }
  else if (999999 < DAT_00949854) {
    DAT_00949854 = 999999;
  }
  FUN_005fd570();
  DAT_00949858 = FUN_005fd740();
  if (DAT_00949858 < 0) {
    DAT_00949858 = 0;
  }
  else if (999999 < DAT_00949858) {
    DAT_00949858 = 999999;
  }
  FUN_005fd570();
  DAT_0094985c = FUN_005fd740();
  if (DAT_0094985c < 0) {
    DAT_0094985c = 0;
  }
  else if (999999 < DAT_0094985c) {
    DAT_0094985c = 999999;
  }
  FUN_005fd570();
  DAT_00949860 = FUN_005fd740();
  if (DAT_00949860 < -1) {
    DAT_00949860 = -1;
  }
  else if (1 < DAT_00949860) {
    DAT_00949860 = 1;
  }
  FUN_005fd570();
  DAT_00949864 = FUN_005fd740();
  if (DAT_00949864 < 1) {
    DAT_00949864 = 1;
  }
  else if (999 < DAT_00949864) {
    DAT_00949864 = 999;
  }
  FUN_005fd570();
  DAT_00949868 = FUN_005fd740();
  if (DAT_00949868 < 1) {
    DAT_00949868 = 1;
  }
  else if (999 < DAT_00949868) {
    DAT_00949868 = 999;
  }
  iVar1 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_WORLDBUILDER_0068f2e0);
  if (iVar1 == 0) {
    FUN_005fd570();
    DAT_009502a8 = FUN_005fd740();
    if (DAT_009502a8 < 0x32) {
      DAT_009502a8 = 0x32;
    }
    else if (4000 < DAT_009502a8) {
      DAT_009502a8 = 4000;
    }
    FUN_005fd570();
    DAT_009502ac = FUN_005fd740();
    if (DAT_009502ac < 0) {
      DAT_009502ac = 0;
    }
    else if (2000 < DAT_009502ac) {
      DAT_009502ac = 2000;
    }
    FUN_005fd570();
    DAT_009502b0 = FUN_005fd740();
    if (DAT_009502b0 < 5) {
      DAT_009502b0 = 5;
    }
    else if (1000 < DAT_009502b0) {
      DAT_009502b0 = 1000;
    }
    FUN_005fd570();
    DAT_009502b4 = FUN_005fd740();
    if (DAT_009502b4 < 5) {
      DAT_009502b4 = 5;
    }
    else if (1000 < DAT_009502b4) {
      DAT_009502b4 = 1000;
    }
    FUN_005fd570();
    DAT_009502b8 = FUN_005fd740();
    if (DAT_009502b8 < 0) {
      DAT_009502b8 = 0;
    }
    else if (100 < DAT_009502b8) {
      DAT_009502b8 = 100;
    }
    FUN_005fd570();
    DAT_009502bc = FUN_005fd740();
    if (DAT_009502bc < 0) {
      DAT_009502bc = 0;
    }
    else if (100 < DAT_009502bc) {
      DAT_009502bc = 100;
    }
    FUN_005fd570();
    DAT_009502c0 = FUN_005fd740();
    if (DAT_009502c0 < 0) {
      DAT_009502c0 = 0;
    }
    else if (500 < DAT_009502c0) {
      DAT_009502c0 = 500;
    }
    FUN_005fd570();
    DAT_009502c4 = FUN_005fd740();
    if (DAT_009502c4 < 0) {
      DAT_009502c4 = 0;
    }
    else if (500 < DAT_009502c4) {
      DAT_009502c4 = 500;
    }
    FUN_005fd570();
    DAT_009502c8 = FUN_005fd740();
    if (DAT_009502c8 < 0) {
      DAT_009502c8 = 0;
    }
    else if (100 < DAT_009502c8) {
      DAT_009502c8 = 100;
    }
    FUN_005fd570();
    DAT_009502cc = FUN_005fd740();
    if (DAT_009502cc < 0) {
      DAT_009502cc = 0;
    }
    else if (100 < DAT_009502cc) {
      DAT_009502cc = 100;
    }
    FUN_005fd570();
    DAT_009502d0 = FUN_005fd740();
    if (DAT_009502d0 < 1) {
      DAT_009502d0 = 1;
    }
    else if (0x40 < DAT_009502d0) {
      DAT_009502d0 = 0x40;
    }
    FUN_005fd570();
    DAT_009502d4 = FUN_005fd740();
    if (DAT_009502d4 < 1) {
      DAT_009502d4 = 1;
    }
    else if (0x40 < DAT_009502d4) {
      DAT_009502d4 = 0x40;
    }
    FUN_005fd570();
    DAT_009502d8 = FUN_005fd740();
    if (DAT_009502d8 < 1) {
      DAT_009502d8 = 1;
    }
    else if (0x40 < DAT_009502d8) {
      DAT_009502d8 = 0x40;
    }
    FUN_005fd570();
    DAT_009502dc = FUN_005fd740();
    if (DAT_009502dc < 1) {
      DAT_009502dc = 1;
    }
    else if (0x40 < DAT_009502dc) {
      DAT_009502dc = 0x40;
    }
    FUN_005fd570();
    DAT_009502e0 = FUN_005fd740();
    if (DAT_009502e0 < 1) {
      DAT_009502e0 = 1;
    }
    else if (100 < DAT_009502e0) {
      DAT_009502e0 = 100;
    }
    FUN_005fd570();
    DAT_009502e4 = FUN_005fd740();
    if (DAT_009502e4 < 0) {
      DAT_009502e4 = 0;
    }
    else if (0x14 < DAT_009502e4) {
      DAT_009502e4 = 0x14;
    }
    FUN_005fd570();
    DAT_009502e8 = FUN_005fd740();
    if (DAT_009502e8 < 0) {
      DAT_009502e8 = 0;
    }
    else if (0x14 < DAT_009502e8) {
      DAT_009502e8 = 0x14;
    }
    FUN_005fd570();
    DAT_009502ec = FUN_005fd740();
    if (DAT_009502ec < 0) {
      DAT_009502ec = 0;
    }
    else if (8 < DAT_009502ec) {
      DAT_009502ec = 8;
    }
    FUN_005fd570();
    DAT_009502f0 = FUN_005fd740();
    if (DAT_009502f0 < -100) {
      DAT_009502f0 = -100;
    }
    else if (100 < DAT_009502f0) {
      DAT_009502f0 = 100;
    }
    FUN_005fd570();
    DAT_009502f4 = FUN_005fd740();
    if (DAT_009502f4 < -100) {
      DAT_009502f4 = -100;
    }
    else if (100 < DAT_009502f4) {
      DAT_009502f4 = 100;
    }
    FUN_005fd570();
    DAT_009502f8 = FUN_005fd740();
    if (DAT_009502f8 < -100) {
      DAT_009502f8 = -100;
    }
    else if (100 < DAT_009502f8) {
      DAT_009502f8 = 100;
    }
    FUN_005fd570();
    _DAT_009502fc = FUN_005fd740();
    if (_DAT_009502fc < -100) {
      _DAT_009502fc = -100;
    }
    else if (100 < _DAT_009502fc) {
      _DAT_009502fc = 100;
    }
    FUN_005fd570();
    DAT_00950300 = FUN_005fd740();
    if (DAT_00950300 < 0) {
      DAT_00950300 = 0;
    }
    else if (100 < DAT_00950300) {
      DAT_00950300 = 100;
    }
    FUN_005fd570();
    DAT_00950304 = FUN_005fd740();
    if (DAT_00950304 < -100) {
      DAT_00950304 = -100;
    }
    else if (100 < DAT_00950304) {
      DAT_00950304 = 100;
    }
    FUN_005fd570();
    DAT_00950308 = FUN_005fd740();
    if (DAT_00950308 < 0) {
      DAT_00950308 = 0;
    }
    else if (5 < DAT_00950308) {
      DAT_00950308 = 5;
    }
    FUN_005fd570();
    puVar4 = &DAT_0095030c;
    do {
      uVar2 = FUN_005fd740();
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x950320);
    FUN_005fd570();
    DAT_00950320 = FUN_005fd740();
    if (DAT_00950320 < 1) {
      DAT_00950320 = 1;
    }
    else if (500 < DAT_00950320) {
      DAT_00950320 = 500;
      return 0;
    }
    return 0;
  }
  return 1;
}

