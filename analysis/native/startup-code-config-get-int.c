
void FUN_0059db40(LPCSTR param_1,undefined4 param_2,int param_3)

{
  undefined1 local_54 [80];
  
  DAT_009b86a0 = 0;
  FUN_0064fc88(param_2,local_54,10);
  FUN_00645470(&DAT_009b86a0,local_54);
  if (param_3 == 0) {
    GetPrivateProfileStringA
              (PTR_s_Alpha_Centauri_006900d0,param_1,&DAT_009b86a0,DAT_009b7d00,0x100,
               PTR_s___Alpha_Centauri_Ini_006900cc);
  }
  else {
    FUN_00645460(DAT_009b7d00,&DAT_009b86a0);
  }
  DAT_009b7cf0 = DAT_009b7cf8;
  FUN_00645da7(DAT_009b7cf8);
  return;
}

