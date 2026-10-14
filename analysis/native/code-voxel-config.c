// REA Evidence: ev_244ed0d993a04fa881eced2211efe5e1de2c12b56247338146d03b391e9743a6
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006185a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UINT UVar5;
  int iVar6;
  int iVar7;
  int in_stack_00002194;
  int in_stack_00002198;
  int in_stack_0000219c;
  int in_stack_000021a0;
  void *in_stack_0000323c;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xffffffff;
  local_8 = &LAB_006632e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00645550();
  FUN_00600860();
  local_c = &LAB_00618e10;
  local_8 = &LAB_00618e20;
  local_4 = &LAB_00618e30;
  cVar1 = FUN_006392e0(&local_c,1);
  if ((cVar1 != '\0') && ((DAT_009c0830 == 0 || (5 < DAT_009c0830)))) {
    FUN_00601bf0(s_jackal_00697228,s_CAVIAR_INVALIDCPU_00697214,0xffffffff,0,0,0);
    DAT_009b86a0 = 0;
    if ((-2 < in_stack_0000219c + -1) &&
       (iVar2 = FUN_00644f3a(0xffffffff), in_stack_00002198 = in_stack_00002194,
       iVar2 <= in_stack_0000219c)) {
      iVar2 = FUN_00644f3a(0xffffffff);
      if (0 < iVar2) {
        do {
          in_stack_00002198 = *(int *)(in_stack_00002198 + 0x10);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      in_stack_000021a0 = in_stack_0000219c + -1;
    }
    iVar2 = 0;
    if (0 < in_stack_0000219c) {
      do {
        if (in_stack_00002194 != 0) {
          in_stack_00002198 = *(int *)(in_stack_00002198 + 0xc);
          in_stack_000021a0 = in_stack_000021a0 + 1;
          if (in_stack_000021a0 == in_stack_0000219c) {
            in_stack_000021a0 = 0;
          }
        }
        if (in_stack_00002198 == 0) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_00402530();
          uVar4 = *(undefined4 *)(iVar3 + 4);
        }
        FUN_00645470(&DAT_009b86a0,uVar4);
        FUN_00645470(&DAT_009b86a0,&DAT_00682820);
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_stack_0000219c);
    }
  }
  UVar5 = GetPrivateProfileIntA
                    (s_PREFERENCES_00697260,s_ForceOldVoxelAlgorithm_00697248,0,
                     s___Alpha_Centauri_ini_00697230);
  if (UVar5 == 0) {
    WritePrivateProfileStringA
              (s_PREFERENCES_006972a0,s_ForceOldVoxelAlgorithm_00697288,&DAT_00697284,
               s___Alpha_Centauri_ini_0069726c);
  }
  else {
    DAT_009c0830 = 1;
  }
  iVar2 = FUN_005d7670(0x100,0x100,0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_005d7670(0x100,0x100,0,0);
    if (iVar2 == 0) {
      DAT_009b9100 = FUN_005d4510(0x20000);
      if (DAT_009b9100 != 0) {
        FUN_005dfb50(9);
        FUN_005dfb50(0);
        FUN_0063af60(DAT_009b9100,0xffff,0x10000);
        _DAT_009bb44c = DAT_009b9100;
        _DAT_009bb45c = DAT_009b95b0;
        _DAT_009bb448 = DAT_009b915c;
        _DAT_009bb454 = 0x100;
        _DAT_009bb458 = 0x100;
        DAT_009bb468 = 1;
        _DAT_009bb450 = DAT_009b9704;
        _DAT_009bb464 = DAT_009b9b58;
        _DAT_009bb460 = 0x100;
        DAT_009bb478 = FUN_006393c0(0,&DAT_009b9c38,&DAT_009b9c38,&DAT_009bb448,0x80);
        if (DAT_009bb478 == 0) {
          FUN_004064d0();
          ExceptionList = in_stack_0000323c;
          return 0x17;
        }
        *(undefined1 **)(DAT_009bb478 + 0x58) = &LAB_00618da0;
        *(undefined4 *)(DAT_009bb478 + 0x38) = 0;
        *(undefined4 *)(DAT_009bb478 + 0x3c) = 0;
        *(undefined4 *)(DAT_009bb478 + 0x40) = 0xff;
        *(undefined4 *)(DAT_009bb478 + 0x44) = 0xff;
        iVar7 = 0;
        *(undefined4 *)(DAT_009bb478 + 0x48) = 0x100;
        *(undefined4 *)(DAT_009bb478 + 0x4c) = 0x100;
        iVar2 = 0;
        iVar3 = DAT_009b9100;
        do {
          iVar6 = iVar2 + 4;
          *(int *)(iVar2 + *(int *)(DAT_009bb478 + 0x60)) = iVar3;
          iVar3 = iVar3 + 0x100;
          *(int *)(iVar2 + *(int *)(DAT_009bb478 + 100)) = iVar7;
          iVar7 = iVar7 + 0x100;
          iVar2 = iVar6;
        } while (iVar6 < 0x400);
        DAT_009b9690 = 0;
        DAT_009b9698 = 0;
        DAT_009b969c = 0;
        DAT_009b9694 = 0;
        _DAT_009bb438 = 0;
        _DAT_009bb440 = 0;
        _DAT_009bb444 = 0;
        _DAT_009bb43c = 0;
        FUN_004064d0();
        ExceptionList = in_stack_0000323c;
        return 0;
      }
      FUN_00600f00();
      FUN_005fa870();
      FUN_00406af0();
      FUN_00406820();
      FUN_00406820();
      FUN_005e3820();
      FUN_00406880();
      FUN_00406880();
    }
    else {
      FUN_00600f00();
      FUN_005fa870();
      FUN_00406910();
      FUN_00608e10();
      FUN_005d4dd0();
      FUN_00406820();
      FUN_00406820();
      FUN_005e3820();
      FUN_00406880();
      FUN_00406880();
    }
  }
  else {
    FUN_00600f00();
    FUN_005fa870();
    FUN_00406910();
    FUN_00608e10();
    FUN_005d4dd0();
    FUN_00406820();
    FUN_00406820();
    FUN_005e3820();
    FUN_00406880();
    FUN_00406880();
  }
  FUN_005d45b0();
  FUN_005d4dd0();
  ExceptionList = in_stack_0000323c;
  return 4;
}

