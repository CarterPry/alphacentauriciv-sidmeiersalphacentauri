// REA Evidence: ev_3172cc12e0083436e06f898d5adc73a5f2ad5d14b53883cb7186573af7646cc4
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00527290(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  DAT_0093a934 = 1;
  FUN_005b44d0(param_1);
  FUN_005fcb20();
  FUN_00526030(param_1);
  FUN_005fcb20();
  FUN_00526e70(param_1);
  FUN_005fcb20();
  if (((DAT_009a64c0 & 1) == 0) || ((DAT_009a64c0 & 8) != 0)) {
    FUN_005267b0(param_1);
    FUN_005fcb20();
    FUN_0055f930(param_1);
    FUN_005fcb20();
    FUN_00561080(param_1);
    FUN_005fcb20();
    FUN_005b4790(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    FUN_005fcb20();
    if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)param_1 & 0x1f))) == 0) {
      iVar1 = FUN_0059ee50(param_1);
      if (iVar1 < (int)(&DAT_0096cc00)[param_1 * 0x833]) {
        iVar1 = FUN_005b9f20(DAT_009497e0,param_1);
        if ((iVar1 != 0) && (((byte)DAT_009a649c & 4) != 0)) {
          (&DAT_0096ea5c)[param_1 * 0x833] = DAT_009497d8 + DAT_009a64d4;
          uVar2 = FUN_0059ee50(param_1);
          (&DAT_0096ea60)[param_1 * 0x833] = uVar2;
          iVar1 = FUN_0059ee50(param_1);
          (&DAT_0096cc00)[param_1 * 0x833] = (&DAT_0096cc00)[param_1 * 0x833] - iVar1;
          iVar1 = param_1 * 0x59c;
          DAT_009bbff0 = 0;
          DAT_009bbfec = (&DAT_00946a50)[param_1 * 0x167];
          FUN_00625ec0(0,&DAT_00946a9c + iVar1,0xffffffff,0xffffffff);
          DAT_009bbfec = (&DAT_00946a50)[param_1 * 0x167];
          DAT_009bbff0 = 0;
          FUN_00625ec0(1,&DAT_00946a84 + iVar1,0xffffffff,0xffffffff);
          DAT_009bbfec = (&DAT_00946d4c)[param_1 * 0x167];
          DAT_009bbff0 = (&DAT_00946d50)[param_1 * 0x167];
          FUN_00625ec0(2,&DAT_00946d34 + iVar1,0xffffffff,0xffffffff);
          FUN_00625ec0(3,&DAT_00946d54 + iVar1,0xffffffff,0xffffffff);
          uVar2 = FUN_005c89a0((&DAT_0096ea5c)[param_1 * 0x833]);
          FUN_00625e30(0,uVar2);
          FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_CORNERWARNING_0068ba38,0,s_econwin_sm_pcx_0068ba28,0)
          ;
        }
      }
    }
  }
  if (0 < DAT_009a64cc) {
    puVar3 = &DAT_0097d070;
    iVar1 = DAT_009a64cc;
    do {
      if ((byte)puVar3[-0xb] == param_1) {
        *puVar3 = *puVar3 & 0xbffffffe;
      }
      puVar3 = puVar3 + 0x4d;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = param_1 * 0x20cc;
  (&DAT_0096cc00)[param_1 * 0x833] =
       (&DAT_0096cc00)[param_1 * 0x833] - *(int *)(&DAT_0096cc04 + iVar1);
  *(undefined4 *)(&DAT_0096cc04 + iVar1) = 0;
  if ((int)(&DAT_0096cc00)[param_1 * 0x833] < 0) {
    (&DAT_0096cc00)[param_1 * 0x833] = 0;
  }
  if ((((&DAT_0096da3c)[param_1 * 0x833] == 0) && ((&DAT_0096d238)[iVar1] == '\0')) &&
     ((&DAT_0096d24d)[iVar1] == '\0')) {
    FUN_005b3380(param_1,0);
  }
  DAT_0093a934 = 0;
  _DAT_00945b18 = 0xffffffff;
  _DAT_00945b1c = 0xffffffff;
  if (((DAT_009a64c0 & 1) == 0) || ((DAT_009a64c0 & 8) != 0)) {
    if ((param_1 == DAT_00939284) && ((DAT_009a64c0 & 0x14000) == 0)) {
      iVar1 = FUN_0052c670(param_1,0);
      if ((iVar1 != 0) && ((DAT_009a64c0 & 1) == 0)) {
        DAT_009a64c0 = DAT_009a64c0 | 0x4000;
        FUN_0048c0a0(PTR_s_SCRIPT_00691b0c,s_COUNCILOPEN_0068ba58,0,s_council_sm_pcx_0068ba48,0);
      }
    }
    if (((byte)DAT_009a64e8 & (byte)(1 << ((byte)param_1 & 0x1f))) == 0) {
      FUN_0052c880(param_1);
    }
  }
  if (((DAT_0093f660 == 0) && (((byte)DAT_009a6490 & 2) != 0)) && (param_1 == DAT_00939284)) {
    FUN_005abd20();
  }
  return;
}

