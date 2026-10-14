// REA Evidence: ev_63e3b51bd1f707eb7de53a5492d5653a39f34eb23618a1af93cc5d338289c98d
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

undefined4 FUN_00586f30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_BONUSNAMES_0068f324);
  if (iVar2 == 0) {
    FUN_005fd570();
    iVar2 = 0;
    puVar7 = &DAT_009461a8;
    do {
      uVar3 = FUN_005fd670();
      FUN_00645460(puVar7,uVar3);
      iVar2 = iVar2 + 1;
      if (7 < iVar2) {
        iVar2 = 0;
        FUN_005fd570();
      }
      puVar7 = puVar7 + 0x18;
    } while ((int)puVar7 < 0x946580);
    if (DAT_009a6488 == 0) {
      pcVar9 = s_FACTIONS_0068f33c;
    }
    else {
      pcVar9 = s_NEWFACTIONS_0068f330;
    }
    iVar2 = FUN_005fd550(PTR_s_ALPHAX_00691afc,pcVar9);
    if (iVar2 == 0) {
      puVar7 = &DAT_00947008;
      do {
        FUN_005fd570();
        uVar3 = FUN_005fd670();
        FUN_00645460(puVar7 + -0x18,uVar3);
        uVar3 = FUN_005fd670();
        FUN_00645460(puVar7,uVar3);
        puVar7 = puVar7 + 0x59c;
      } while ((int)puVar7 < 0x94974c);
      if (DAT_009a6488 != 0) {
        FUN_0059dbd0();
      }
      local_c = 0xe;
      iVar2 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_CUSTOMFACTIONS_0068f348);
      if (iVar2 == 0) {
        FUN_005fd570();
        pcVar9 = (char *)FUN_005fd670();
        cVar1 = *pcVar9;
        local_c = 0xe;
        while (cVar1 != '\0') {
          local_c = local_c + 1;
          FUN_005fd570();
          pcVar9 = (char *)FUN_005fd670();
          cVar1 = *pcVar9;
        }
      }
      local_8 = 1;
      pcVar9 = &DAT_00946ff0;
      do {
        iVar2 = _strcmp(pcVar9,s_JENN282_0068f358);
        if (iVar2 == 0) {
          do {
            iVar4 = _rand();
            iVar4 = iVar4 % local_c;
            iVar2 = iVar4 >> 0x1f;
            iVar5 = iVar4 / 7 + iVar2;
            iVar6 = iVar5 - iVar2;
            if (iVar5 == iVar2) {
              iVar2 = FUN_005fd550(PTR_s_ALPHAX_00691afc,s_FACTIONS_0068f360);
joined_r0x005870d0:
              if (iVar2 != 0) {
                return 1;
              }
            }
            else {
              if (iVar6 == 1) {
                pcVar10 = s_NEWFACTIONS_0068f36c;
LAB_0058709b:
                iVar2 = FUN_005fd550(PTR_s_ALPHAX_00691afc,pcVar10);
                goto joined_r0x005870d0;
              }
              if (iVar6 == 2) {
                pcVar10 = s_CUSTOMFACTIONS_0068f378;
                goto LAB_0058709b;
              }
            }
            iVar4 = iVar4 % 7;
            FUN_005fd570();
            iVar2 = iVar4;
            if (0 < iVar4) {
              do {
                FUN_005fd570();
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            uVar3 = FUN_005fd670();
            FUN_00645460(pcVar9,uVar3);
            FUN_00645460(pcVar9 + 0x18,pcVar9);
            iVar2 = 1;
            do {
              if ((local_8 != iVar2) &&
                 (iVar5 = _strcmp(pcVar9,&DAT_00946a54 + iVar2 * 0x59c), iVar5 == 0)) {
                iVar4 = -1;
                iVar2 = 8;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 8);
            if ((iVar4 != -1) && (pcVar9 != &DAT_00946a54)) {
              FUN_00586090(pcVar9 + -4,0);
              FUN_00453710(local_8);
            }
          } while (iVar4 == -1);
        }
        pcVar9 = pcVar9 + 0x59c;
        local_8 = local_8 + 1;
        if (0x949733 < (int)pcVar9) {
          iVar2 = 1;
          puVar8 = &DAT_00946fec;
          do {
            if (puVar8 != &DAT_00946a50) {
              FUN_00586090(puVar8,0);
              FUN_00453710(iVar2);
            }
            puVar8 = puVar8 + 0x167;
            iVar2 = iVar2 + 1;
          } while ((int)puVar8 < 0x949730);
          return 0;
        }
      } while( true );
    }
  }
  return 1;
}

