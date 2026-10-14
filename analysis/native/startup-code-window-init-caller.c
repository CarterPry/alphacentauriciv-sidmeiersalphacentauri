
int FUN_0062d3a0(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    iVar1 = 3;
  }
  else {
    DAT_009bc4b0 = param_4;
    FUN_005febb0(param_4 & 2);
    DAT_009b8174 = param_1;
    FUN_005fe330();
    FUN_005fe460();
    iVar1 = FUN_005f01f0(param_3);
    if (iVar1 == 0) {
      FUN_005fe460();
      if ((param_4 & 4) != 0) {
        FUN_005f2c40(param_5,param_6,param_7,1);
        ShowWindow(DAT_009b7b28,5);
        FUN_005efd20(0);
      }
      iVar1 = FUN_005df570();
      if (iVar1 == 0) {
        iVar1 = FUN_0060fc60();
        if (iVar1 == 0) {
          iVar1 = FUN_006339a0();
          if (iVar1 == 0) {
            iVar1 = FUN_0060e4d0();
            if (iVar1 == 0) {
              FUN_006074b0(param_2,0,0);
              iVar1 = FUN_006195b0(param_2);
              if (iVar1 == 0) {
                iVar1 = FUN_00604590();
                if (iVar1 == 0) {
                  iVar1 = FUN_00614d90();
                  if (iVar1 == 0) {
                    iVar1 = FUN_0063ce20();
                    if (iVar1 == 0) {
                      DAT_009b7af4 = DAT_009bb484;
                      FUN_0063b940();
                      iVar1 = FUN_0063b910();
                      if (iVar1 == 0) {
                        iVar1 = FUN_006168f0(0x8000);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        iVar1 = FUN_00616880();
                        if (iVar1 == 0) {
                          DAT_009bc4b0 = DAT_009bc4b0 | 1;
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

