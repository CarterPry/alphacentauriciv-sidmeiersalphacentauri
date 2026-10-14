
undefined4
FUN_005e39a0(int param_1,char param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar3 = param_5;
  if ((param_1 != 0) && (iVar2 = FUN_005e3373(), iVar2 != 0)) {
    if ((in_ECX[10] == 0) && (in_ECX[1] != 0)) {
      DAT_009b6618 = DAT_009b6618 - in_ECX[5] * in_ECX[4];
      if (in_ECX[1] != 0) {
        FUN_00644ef2(in_ECX[1]);
      }
      in_ECX[1] = 0;
    }
    if (*in_ECX != 0) {
      FUN_00644ef2(*in_ECX);
      *in_ECX = 0;
    }
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    in_ECX[7] = 0;
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[10] = 0;
    if ((((param_5 != 0) && (param_6 != 0)) && (param_3 + param_5 <= *(int *)(param_1 + 0x80))) &&
       (param_4 + param_6 <= -*(int *)(param_1 + 0x84))) {
      *(char *)(in_ECX + 2) = param_2;
      in_ECX[6] = param_5;
      in_ECX[7] = param_6;
      iVar2 = FUN_005e33f3(param_3,param_4);
      if (iVar2 == 0) {
        FUN_005e34a3(1);
        return 7;
      }
      param_5 = 0;
      iVar1 = *(int *)(param_1 + 0x4a8);
      in_ECX[9] = 0;
      if (0 < param_6) {
        do {
          iVar5 = 0;
          if (0 < iVar3) {
            do {
              if (*(char *)(iVar5 + iVar2) != param_2) goto LAB_005e3af4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          iVar2 = iVar2 + iVar1;
          in_ECX[9] = in_ECX[9] + 1;
          param_5 = param_5 + 1;
        } while (param_5 < param_6);
      }
LAB_005e3af4:
      FUN_005fd2b0();
      if (in_ECX[9] == param_6) {
        FUN_005e34a3(2);
        return 9;
      }
      FUN_005e34a3(1);
      local_8 = FUN_005e33f3(param_3,param_4 + param_6 + -1);
      param_5 = 0;
      in_ECX[5] = param_6 - in_ECX[9];
      if (0 < param_6) {
        local_8 = local_8 + -1;
        iVar2 = iVar3;
        do {
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            if (*(char *)(local_8 + iVar2) != param_2) goto LAB_005e3b9d;
          }
          local_8 = local_8 - iVar1;
          in_ECX[5] = in_ECX[5] + -1;
          param_5 = param_5 + 1;
          iVar2 = iVar3;
        } while (param_5 < param_6);
      }
LAB_005e3b9d:
      if (in_ECX[5] == 0) {
        FUN_005e34a3(2);
        return 9;
      }
      FUN_005fd2b0();
      FUN_005e34a3(1);
      iVar2 = FUN_005e33f3(param_3,in_ECX[9] + param_4);
      param_5 = in_ECX[5];
      in_ECX[8] = iVar3;
      if (0 < param_5) {
        do {
          iVar5 = 0;
          if (0 < iVar3) {
            do {
              if (*(char *)(iVar5 + iVar2) != param_2) break;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          if (iVar5 < in_ECX[8]) {
            in_ECX[8] = iVar5;
          }
          iVar2 = iVar2 + iVar1;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      FUN_005fd2b0();
      FUN_005e34a3(1);
      param_5 = FUN_005e33f3(param_3,in_ECX[9] + param_4);
      local_4 = in_ECX[5];
      local_8 = iVar3;
      if (0 < local_4) {
        do {
          iVar2 = 0;
          for (iVar5 = iVar3; (0 < iVar5 && (*(char *)(param_5 + -1 + iVar5) == param_2));
              iVar5 = iVar5 + -1) {
            iVar2 = iVar2 + 1;
          }
          if (iVar2 < local_8) {
            local_8 = iVar2;
          }
          param_5 = param_5 + iVar1;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      FUN_005e34a3(1);
      local_8 = (iVar3 - in_ECX[8]) - local_8;
      in_ECX[4] = local_8;
      if (local_8 == 0) {
        FUN_005e34a3(1);
        return 9;
      }
      in_ECX[1] = 0;
      if (param_7 != 0) {
        iVar3 = FUN_006353c0(in_ECX[5] * local_8);
        in_ECX[1] = iVar3;
        if (iVar3 != 0) {
          in_ECX[10] = 1;
        }
      }
      FUN_005fd2b0();
      if (in_ECX[1] == 0) {
        iVar3 = FUN_005d4510(in_ECX[4] * in_ECX[5]);
        in_ECX[1] = iVar3;
        if (iVar3 == 0) {
          if (*in_ECX != 0) {
            FUN_00644ef2(*in_ECX);
            *in_ECX = 0;
          }
          in_ECX[3] = 0;
          in_ECX[4] = 0;
          in_ECX[5] = 0;
          in_ECX[6] = 0;
          in_ECX[7] = 0;
          in_ECX[8] = 0;
          in_ECX[9] = 0;
          in_ECX[10] = 0;
          FUN_005e34a3(1);
          return 4;
        }
        in_ECX[10] = 0;
      }
      DAT_009b6618 = DAT_009b6618 + in_ECX[4] * in_ECX[5];
      iVar5 = FUN_005e33f3(in_ECX[8] + param_3,in_ECX[9] + param_4);
      iVar3 = in_ECX[1];
      FUN_005fd2b0();
      iVar2 = in_ECX[5];
      if (iVar2 != 0) {
        iVar4 = in_ECX[4];
        do {
          FUN_00645930(iVar3,iVar5,iVar4);
          iVar4 = in_ECX[4];
          iVar3 = iVar3 + iVar4;
          iVar5 = iVar5 + iVar1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      in_ECX[3] = in_ECX[4];
      FUN_005e34a3(2);
      return 0;
    }
  }
  return 3;
}

