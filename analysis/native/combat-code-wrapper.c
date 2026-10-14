// REA evidence ev_78e32b5bf5761a61f800ac1a7c383a3c508496fe783e9700d67130a14d0010dd

void FUN_00506a60(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = (&DAT_0066ef50)[param_2];
  }
  else {
    iVar1 = (&DAT_0066efbc)[param_2];
  }
  iVar1 = (short)(&DAT_00952828)[param_1 * 0x1a] + iVar1;
  if ((DAT_0094988c & 1) == 0) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + DAT_00949870;
    }
    else if (DAT_00949870 <= iVar1) {
      iVar1 = iVar1 - DAT_00949870;
    }
  }
  if (param_3 == 0) {
    iVar2 = (&DAT_0066ef74)[param_2];
  }
  else {
    iVar2 = (&DAT_0066f440)[param_2];
  }
  FUN_00506af0(param_1,param_2,iVar1,(short)(&DAT_0095282a)[param_1 * 0x1a] + iVar2,param_3,param_4,
               param_5);
  return;
}

