// REA Evidence: ev_b7e30d6d9bf1a836f7d9f4743e2bbd14b790526e213ae8c4b0257a5a7c67b85d
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode, not original source.


void FUN_004e5fe0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int local_8;
  
  local_8 = 0;
  bVar1 = (&DAT_0097d044)[param_1 * 0x134];
  bVar6 = (byte)(1 << (bVar1 & 0x1f));
  if ((((bVar6 & (byte)DAT_009a64e8) == 0) ||
      (uVar2 = (&DAT_0097d078)[param_1 * 0x4d], (uVar2 & 0x80000000) == 0)) || (param_2 == 0)) {
    iVar4 = (&DAT_0097d090)[param_1 * 0x4d];
    uVar3 = FUN_004f81a0(param_1,0,0,0);
    FUN_004e5a60(param_1,uVar3);
    if ((((((bVar6 & (byte)DAT_009a64e8) != 0) &&
          (((&DAT_0097d078)[param_1 * 0x4d] & 0x80000000) != 0)) && (-0x46 < iVar4)) &&
        ((iVar4 = (&DAT_0097d090)[param_1 * 0x4d], iVar4 < -0x45 && (DAT_0093f660 == 0)))) &&
       (((byte)DAT_009a64c0 & 1) == 0)) {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      while( true ) {
        FUN_00625ec0(0,&DAT_0097d053 + param_1 * 0x134,0xffffffff,0xffffffff);
        FUN_00625e50(1,(&DAT_009a4b68)[iVar4 * 0xc],0xffffffff,0xffffffff);
        iVar5 = FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_GOVPROJECT_00689494,0,s_secproj_sm_pcx_00689484
                             ,0);
        if (iVar5 != 3) break;
        FUN_0044cb60(0xb,iVar4);
      }
      if (iVar5 != 0) {
        uVar3 = FUN_004f81a0(-1 - param_1,0,0,0);
        FUN_004e5a60(param_1,uVar3);
        if (1 < iVar5) {
          *(uint *)(DAT_0090ea30 + 0x38) = *(uint *)(DAT_0090ea30 + 0x38) & 0xfffbffff;
          *(uint *)(&DAT_0096cbb0 + (uint)bVar1 * 0x20cc) =
               *(uint *)(&DAT_0096cbb0 + (uint)bVar1 * 0x20cc) & 0xfffbffff;
        }
      }
    }
    return;
  }
  DAT_0090ea44 = 0;
  DAT_0090ea54 = 999999;
  DAT_0090ea48 = 0;
  DAT_0090ea58 = 999999;
  DAT_0090ea4c = 0;
  DAT_0090ea5c = 999999;
  DAT_0090ea50 = 0;
  DAT_0090ea60 = 999999;
  if ((uVar2 & 0xf000000) != 0) {
LAB_004e607f:
    do {
      (&DAT_0097d078)[param_1 * 0x4d] = (&DAT_0097d078)[param_1 * 0x4d] & 0xf1ffffff | 0x1000000;
      DAT_0090ea44 = FUN_004f81a0(param_1,0,0,&DAT_0090ea54);
      (&DAT_0097d078)[param_1 * 0x4d] = (&DAT_0097d078)[param_1 * 0x4d] & 0xf2ffffff | 0x2000000;
      DAT_0090ea48 = FUN_004f81a0(param_1,0,0,&DAT_0090ea58);
      if (DAT_0090ea44 == DAT_0090ea48) {
        local_8 = local_8 + 1;
        if (local_8 < 8) goto LAB_004e607f;
      }
      (&DAT_0097d078)[param_1 * 0x4d] = (&DAT_0097d078)[param_1 * 0x4d] & 0xf4ffffff | 0x4000000;
      DAT_0090ea4c = FUN_004f81a0(param_1,0,0,&DAT_0090ea5c);
      if (((DAT_0090ea44 != DAT_0090ea4c) && (DAT_0090ea48 != DAT_0090ea4c)) ||
         (local_8 = local_8 + 1, 7 < local_8)) {
        (&DAT_0097d078)[param_1 * 0x4d] = (&DAT_0097d078)[param_1 * 0x4d] & 0xf8ffffff | 0x8000000;
        DAT_0090ea50 = FUN_004f81a0(param_1,0,0,&DAT_0090ea60);
        if ((((DAT_0090ea44 != DAT_0090ea50) && (DAT_0090ea48 != DAT_0090ea50)) &&
            (DAT_0090ea4c != DAT_0090ea50)) || (local_8 = local_8 + 1, 7 < local_8))
        goto LAB_004e6198;
      }
    } while( true );
  }
LAB_004e61a1:
  uVar3 = FUN_004f81a0(param_1,0,0,&local_8);
  FUN_004e5a60(param_1,uVar3);
  return;
LAB_004e6198:
  (&DAT_0097d078)[param_1 * 0x4d] = uVar2;
  goto LAB_004e61a1;
}

