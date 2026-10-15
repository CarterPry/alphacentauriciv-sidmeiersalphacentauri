// ev_7ce25fd708cf5bb99fb578e67969a3cb662765e183c983fd19e850a68c089515


bool FUN_005c1a20(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return false;
  }
  if (((((short)(&DAT_0095282a)[param_1 * 0x1a] < 0) ||
       (DAT_00949874 <= (short)(&DAT_0095282a)[param_1 * 0x1a])) ||
      ((short)(&DAT_00952828)[param_1 * 0x1a] < 0)) ||
     (DAT_00949870 <= (short)(&DAT_00952828)[param_1 * 0x1a])) {
    return false;
  }
  if ((byte)(&DAT_00952836)[param_1 * 0x34] != DAT_00939284) {
    return false;
  }
  if (((*(ushort *)(&DAT_00952830 + param_1 * 0x34) & 0x40) != 0) &&
     ((*(ushort *)(&DAT_00952830 + param_1 * 0x34) & 0x400) != 0)) {
    return false;
  }
  iVar1 = FUN_005c1c40(param_1);
  return iVar1 == 0;
}

