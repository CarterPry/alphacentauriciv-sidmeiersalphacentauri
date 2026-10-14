
/* WARNING: Removing unreachable block (ram,0x0058f1f5) */

undefined4 FUN_0058f040(void)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00660be2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00646829(s_saves_0068f9bc);
  FUN_00646829(s_saves_auto_0068f9c4);
  FUN_00646829(&DAT_0068f9d0);
  FUN_00646829(s_scenarios_0068f9d8);
  DAT_0068f21c = 1;
  FUN_00626450(0);
  uVar1 = FUN_0059db40(s_Language_0068f9e4,0,0);
  FUN_00627100(uVar1);
  FUN_004ba220();
  FUN_006168f0(0xc320);
  iVar2 = FUN_00616a00();
  if (iVar2 == 0) {
    DAT_009b86a0 = 0;
    uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x198));
    FUN_00645470(&DAT_009b86a0,uVar1);
    if (DAT_009bc054 != 2) {
      CharUpperA(&DAT_009b86a0);
    }
    FUN_00601910(&DAT_009b86a0);
    DAT_009b86a0 = 0;
    uVar1 = FUN_006169a0(*(undefined4 *)(DAT_009b90f8 + 0x194));
    FUN_00645470(&DAT_009b86a0,uVar1);
    CharUpperA(&DAT_009b86a0);
    FUN_006018a0(&DAT_009b86a0);
    FUN_00455e80();
    FUN_00588aa0();
    puVar4 = &DAT_007d3c40;
    do {
      pvVar3 = operator_new(0x22480);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_004626e0(1);
      }
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      local_8 = 0xffffffff;
    } while ((int)puVar4 < 0x7d3c5c);
    DAT_00933420 = DAT_00933420 & 0xfffff73f;
    DAT_007d3c3c = &DAT_009156b0;
    FUN_00459680(0);
    FUN_004219e0();
    FUN_0051d890(0);
    FUN_005c9860(&DAT_0093cd90,(int)&DAT_009156b0 + *(int *)(DAT_009156b0 + 4),&DAT_006f107c);
    FUN_00471d50();
    FUN_00429300();
    FUN_004595c0();
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}

