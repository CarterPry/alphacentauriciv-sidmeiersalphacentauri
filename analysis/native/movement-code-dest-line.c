// ev_b123665c5bc1fdb452866a3783da9a9e80c1346f3868a7d19402a60d25f55897

void FUN_00467430(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int local_1c;
  int local_18;
  int local_14;
  uint local_c;
  
  bVar2 = false;
  iVar7 = param_1 >> 1;
  iVar6 = param_3 >> 1;
  if (param_7 == 0) {
    if (*(char *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_2 + iVar7) * 0x2c) ==
        *(char *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_4 + iVar6) * 0x2c)) goto LAB_0046755f;
  }
  else if (param_7 == 1) {
    iVar4 = FUN_004e3a50(param_1,param_2);
    iVar3 = FUN_004e3a50(param_3,param_4);
    if (iVar4 < 0) {
      if (-1 < iVar3) {
        uVar1 = *(undefined1 *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_2 + iVar7) * 0x2c);
        goto LAB_00467512;
      }
      if (*(char *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_2 + iVar7) * 0x2c) ==
          *(char *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_4 + iVar6) * 0x2c)) goto LAB_0046755f;
    }
    else {
      if (iVar3 < 0) {
        uVar1 = *(undefined1 *)(DAT_0094a30c + 3 + (DAT_0068faf0 * param_4 + iVar6) * 0x2c);
        iVar3 = iVar4;
LAB_00467512:
        iVar6 = FUN_0050de50(iVar3,uVar1);
      }
      else {
        iVar6 = FUN_0050e160(iVar4,iVar3);
      }
      if (iVar6 != 0) goto LAB_0046755f;
    }
  }
  else if (param_7 != 2) goto LAB_0046755f;
  bVar2 = true;
LAB_0046755f:
  local_14 = 0;
  do {
    if (bVar2) {
      iVar6 = FUN_00644f3a(param_1 - param_3);
      if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar6)) {
        iVar6 = DAT_00949870 - iVar6;
      }
      iVar7 = FUN_00644f3a(param_2 - param_4);
      DAT_007d3b70 = (iVar7 + iVar6 >> 1) * DAT_00949738;
      FUN_004672c0(param_1,param_2,param_3,param_4,param_7,param_9,param_10,param_11);
      return;
    }
    if (1 < local_14) {
      return;
    }
    FUN_005f1820(0,1);
    local_1c = 0;
    local_18 = -1;
    DAT_007d3b70 = 0;
    iVar6 = param_1;
    iVar7 = param_2;
    do {
      FUN_005f1820(0,1);
      local_c = 0x80;
      if (param_8 == 0) {
        local_c = 0xc0;
      }
      if (((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[param_5 * 0x34] * 0x10] == '\0') &&
         ((DAT_009a6534 < 0 || ((byte)(&DAT_0097d044)[DAT_009a6534 * 0x134] != param_6)))) {
        local_c = local_c | 0x10;
      }
      iVar3 = FUN_00644f3a(iVar6 - param_3);
      if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar3)) {
        iVar3 = DAT_00949870 - iVar3;
      }
      iVar4 = FUN_00644f3a(iVar7 - param_4);
      if (2 < (int)(iVar4 + iVar3 & 0xfffffffeU)) {
        local_18 = FUN_0059a530(iVar6,iVar7,param_3,param_4,param_5,param_6,local_c,local_18);
        if (-1 < local_18) goto LAB_004676a2;
LAB_004678b8:
        bVar2 = true;
        break;
      }
      local_18 = FUN_005a6630(iVar6,iVar7,param_3,param_4);
LAB_004676a2:
      iVar3 = (&DAT_0066ef50)[local_18] + iVar6;
      if ((DAT_0094988c & 1) == 0) {
        if (iVar3 < 0) {
          iVar3 = DAT_00949870 + iVar3;
        }
        else if (DAT_00949870 <= iVar3) {
          iVar3 = iVar3 - DAT_00949870;
        }
      }
      iVar4 = iVar7 + (&DAT_0066ef74)[local_18];
      if (local_14 != 0) {
        if (-1 < param_5) {
          iVar5 = FUN_005c13b0(param_5);
          iVar5 = FUN_00593510(param_5,param_6,iVar6,iVar7,iVar3,iVar4,iVar5 == DAT_00949738);
          DAT_007d3b70 = DAT_007d3b70 + iVar5;
        }
        if ((iVar7 < *(int *)(in_ECX + 0x1dda8)) ||
           (*(int *)(in_ECX + 0x1ddd8) + *(int *)(in_ECX + 0x1ddd0) + *(int *)(in_ECX + 0x1dda8) <=
            iVar7)) {
LAB_0046779f:
          if ((*(int *)(in_ECX + 0x1dda8) <= iVar4) &&
             (iVar4 < *(int *)(in_ECX + 0x1ddd8) + *(int *)(in_ECX + 0x1ddd0) +
                      *(int *)(in_ECX + 0x1dda8))) {
            iVar5 = iVar3;
            if ((DAT_0094988c & 1) == 0) {
              if (iVar3 < *(int *)(in_ECX + 0x1dda4)) {
                iVar5 = DAT_00949870 + iVar3;
              }
              if (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) +
                  *(int *)(in_ECX + 0x1dda4) <= iVar5) {
                iVar5 = iVar5 - DAT_00949870;
              }
            }
            if ((*(int *)(in_ECX + 0x1dda4) <= iVar5) &&
               (iVar5 < *(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) +
                        *(int *)(in_ECX + 0x1dda4))) goto LAB_0046780b;
          }
        }
        else {
          iVar5 = iVar6;
          if ((DAT_0094988c & 1) == 0) {
            if (iVar6 < *(int *)(in_ECX + 0x1dda4)) {
              iVar5 = DAT_00949870 + iVar6;
            }
            if (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + *(int *)(in_ECX + 0x1dda4)
                <= iVar5) {
              iVar5 = iVar5 - DAT_00949870;
            }
          }
          if ((iVar5 < *(int *)(in_ECX + 0x1dda4)) ||
             (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + *(int *)(in_ECX + 0x1dda4)
              <= iVar5)) goto LAB_0046779f;
LAB_0046780b:
          FUN_004672c0(iVar6,iVar7,iVar3,iVar4,param_7,param_9,param_10,param_11);
        }
      }
      if ((iVar3 == param_3) && (iVar4 == param_4)) break;
      if (((*(uint *)(&DAT_0096c9e0 + param_6 * 0x20cc) & 0x200) == 0) &&
         ((((*(byte *)(DAT_0094a30c + 4 + (DAT_0068faf0 * iVar4 + (iVar3 >> 1)) * 0x2c) &
            (byte)(1 << ((byte)param_6 & 0x1f))) == 0 && (((byte)DAT_009a64c0 & 0x80) == 0)) &&
          ((DAT_009a649c & 0x100) == 0)))) {
        bVar2 = true;
      }
      local_1c = local_1c + 1;
      if (DAT_00949870 * 2 < local_1c) goto LAB_004678b8;
      iVar6 = iVar3;
      iVar7 = iVar4;
    } while (!bVar2);
    local_14 = local_14 + 1;
  } while( true );
}

