
void FUN_00407830(void)

{
  char local_e84 [4];
  char local_e80 [4];
  char local_e7c [4];
  char local_e78 [4];
  undefined1 local_e74 [2268];
  int local_598 [355];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00472776;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004066f0((int)local_e74);
  local_e80[0] = s_movies_logo_wve_0047a3c8[4];
  local_e80[1] = s_movies_logo_wve_0047a3c8[5];
  local_e80[2] = s_movies_logo_wve_0047a3c8[6];
  local_e80[3] = s_movies_logo_wve_0047a3c8[7];
  local_e84[0] = s_movies_logo_wve_0047a3c8[0];
  local_e84[1] = s_movies_logo_wve_0047a3c8[1];
  local_e84[2] = s_movies_logo_wve_0047a3c8[2];
  local_e84[3] = s_movies_logo_wve_0047a3c8[3];
  local_4 = 0;
  local_e7c[0] = s_movies_logo_wve_0047a3c8[8];
  local_e7c[1] = s_movies_logo_wve_0047a3c8[9];
  local_e7c[2] = s_movies_logo_wve_0047a3c8[10];
  local_e7c[3] = s_movies_logo_wve_0047a3c8[0xb];
  local_e78[0] = s_movies_logo_wve_0047a3c8[0xc];
  local_e78[1] = s_movies_logo_wve_0047a3c8[0xd];
  local_e78[2] = s_movies_logo_wve_0047a3c8[0xe];
  local_e78[3] = s_movies_logo_wve_0047a3c8[0xf];
  FUN_00406710(local_e74,local_e84,0x280,0x1e0,0xc);
  local_4 = 1;
  FUN_00407060((int)local_e74);
  local_4 = 0xffffffff;
  FUN_00417510(local_598);
  ExceptionList = local_c;
  return;
}

