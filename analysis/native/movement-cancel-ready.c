// ev_a7171b2ad977224f2ae44507a96f5db13090e05c5b8a7c92a7f43fdd2dc71b72


void FUN_00510f50(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *(undefined4 *)(in_ECX + 0x23bf8) = 0;
  FUN_0046ae00();
  if (*(int *)(in_ECX + 0x23d18) == 0) {
    uVar6 = *(undefined4 *)(in_ECX + 0x23bdc);
  }
  else {
    uVar6 = 0xffffffff;
  }
  iVar7 = FUN_00510ce0(uVar6);
  *(int *)(in_ECX + 0x23bdc) = iVar7;
  *(undefined4 *)(in_ECX + 0x23d18) = 0;
  if (iVar7 < 0) {
    return;
  }
  if (DAT_00939288 == 0) {
    return;
  }
  if (((&DAT_00952839)[iVar7 * 0x34] == '\0') || ('\x17' < (char)(&DAT_00952839)[iVar7 * 0x34])) {
    sVar3 = (&DAT_0095282a)[iVar7 * 0x1a];
    sVar4 = (&DAT_00952828)[iVar7 * 0x1a];
    *(undefined4 *)(in_ECX + 0x23bf8) = 0;
    if (*(int *)(in_ECX + 0x23c00) != 0) {
      *(undefined4 *)(in_ECX + 0x23c00) = 0;
      FUN_0046a550(1);
    }
    FUN_0046ad60();
    FUN_005109b0((int)sVar4,(int)sVar3);
    FUN_00458900(0);
    FUN_004b9ea0();
    FUN_0046fb10();
    if (((DAT_009a6490 & 0x80000) == 0) ||
       ((((&DAT_00952839)[*(int *)(in_ECX + 0x23bdc) * 0x34] == '\0' &&
         (((&DAT_0095282c)[*(int *)(in_ECX + 0x23bdc) * 0xd] & 0x200) == 0)) &&
        (((&DAT_0095282c)[*(int *)(in_ECX + 0x23bdc) * 0xd] & 0x1000200) != 0x1000200)))) {
      iVar7 = *(int *)(in_ECX + 0x23bdc);
      iVar7 = FUN_005108a0((int)(short)(&DAT_00952828)[iVar7 * 0x1a],
                           (int)(short)(&DAT_0095282a)[iVar7 * 0x1a],(&DAT_00952836)[iVar7 * 0x34]);
      if (iVar7 == 0) {
        iVar11 = (int)(short)(&DAT_0095282a)[*(int *)(in_ECX + 0x23bdc) * 0x1a];
        iVar7 = (int)(short)(&DAT_00952828)[*(int *)(in_ECX + 0x23bdc) * 0x1a];
        if (((((iVar11 < 0) || (DAT_00949874 <= iVar11)) ||
             ((iVar7 < 0 ||
              ((DAT_00949870 <= iVar7 ||
               (bVar1 = *(byte *)(DAT_0094a30c + (DAT_0068faf0 * iVar11 + (iVar7 >> 1)) * 0x2c),
               (bVar1 & 0xe0) < 0x61)))))) ||
            (*(int *)(in_ECX + 0x1dda8) + 3 <= (int)((iVar11 - (uint)(bVar1 >> 5)) + 3))) &&
           ((*(int *)(in_ECX + 0x1dda8) + 3 <= iVar11 &&
            (iVar11 < *(int *)(in_ECX + 0x1ddd8) + *(int *)(in_ECX + 0x1ddd0) + -3 +
                      *(int *)(in_ECX + 0x1dda8))))) {
          iVar9 = iVar7;
          if ((DAT_0094988c & 1) == 0) {
            if (iVar7 < *(int *)(in_ECX + 0x1dda4) + 3) {
              iVar9 = iVar7 + DAT_00949870;
            }
            if (*(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + -3 +
                *(int *)(in_ECX + 0x1dda4) <= iVar9) {
              iVar9 = iVar9 - DAT_00949870;
            }
          }
          if ((*(int *)(in_ECX + 0x1dda4) + 3 <= iVar9) &&
             (iVar9 < *(int *)(in_ECX + 0x1ddd4) + *(int *)(in_ECX + 0x1ddcc) + -3 +
                      *(int *)(in_ECX + 0x1dda4))) goto LAB_005111a6;
        }
        FUN_0046b1f0(iVar7,iVar11,1);
      }
    }
LAB_005111a6:
    FUN_00460dd0(*(undefined4 *)(in_ECX + 0x23bdc));
    FUN_005fd120();
    (&DAT_00952852)[*(int *)(in_ECX + 0x23bdc) * 0x34] = 0;
  }
  iVar11 = FUN_004e3a50((int)(short)(&DAT_00952828)[*(int *)(in_ECX + 0x23bdc) * 0x1a],
                        (int)(short)(&DAT_0095282a)[*(int *)(in_ECX + 0x23bdc) * 0x1a]);
  iVar7 = *(int *)(in_ECX + 0x23bdc);
  if ((((((&DAT_00952839)[iVar7 * 0x34] == '\0') &&
        (uVar5 = (&DAT_0095282c)[iVar7 * 0xd], (uVar5 & 0x200) == 0)) &&
       ((uVar5 & 0x1000200) != 0x1000200)) && (((uVar5 & 0x4000) == 0 && (-1 < iVar11)))) &&
     ((-1 < (short)(&DAT_0097d150)
                   [(uint)(byte)(&DAT_0094a379)
                                [(uint)(byte)(&DAT_009ab88c)
                                             [(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] * 0x90] +
                    iVar11 * 0x9a] &&
      (iVar9 = (int)(short)(&DAT_0097d150)
                           [(uint)(byte)(&DAT_0094a379)
                                        [(uint)(byte)(&DAT_009ab88c)
                                                     [(short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34] *
                                         0x90] + iVar11 * 0x9a], iVar9 != iVar11)))) {
    (&DAT_00952839)[iVar7 * 0x34] = 0x18;
    (&DAT_0095283c)[*(int *)(in_ECX + 0x23bdc) * 0x1a] = (&DAT_0097d040)[iVar9 * 0x9a];
    (&DAT_00952844)[*(int *)(in_ECX + 0x23bdc) * 0x1a] = (&DAT_0097d042)[iVar9 * 0x9a];
  }
  iVar7 = *(int *)(in_ECX + 0x23bdc) * 0x34;
  if ((((byte)(&DAT_00952836)[iVar7] == DAT_00939284) &&
      ((*(ushort *)(&DAT_00952830 + iVar7) & 0x1000) != 0)) &&
     (((&DAT_00952839)[iVar7] == '\0' &&
      (((&DAT_0095282c)[*(int *)(in_ECX + 0x23bdc) * 0xd] & 0x200) == 0)))) {
    *(ushort *)(&DAT_00952830 + iVar7) = *(ushort *)(&DAT_00952830 + iVar7) & 0xefff;
    iVar7 = *(int *)(in_ECX + 0x23bdc);
    iVar11 = (short)(&DAT_00952832)[iVar7 * 0x1a] * 0x34;
    iVar9 = (uint)(byte)(&DAT_009ab88c)[iVar11] * 0x90;
    cVar2 = (&DAT_0094a379)[iVar9];
    if (cVar2 == '\0') {
      if (((&DAT_009ab88c)[iVar11] == 0) &&
         ((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar11] * 0x10] != '\0')) {
        iVar8 = (int)(short)(&DAT_0095282a)[iVar7 * 0x1a];
        iVar10 = (int)(short)(&DAT_00952828)[iVar7 * 0x1a];
        uVar6 = 0x40;
      }
      else {
        iVar10 = (int)(short)(&DAT_00952828)[iVar7 * 0x1a];
        iVar8 = (int)(short)(&DAT_0095282a)[iVar7 * 0x1a];
        if ((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar11] * 0x10] == '\0') {
          uVar6 = 0x42;
        }
        else {
          uVar6 = 0x41;
        }
      }
    }
    else if (cVar2 == '\x01') {
      iVar10 = (int)(short)(&DAT_00952828)[iVar7 * 0x1a];
      iVar8 = (int)(short)(&DAT_0095282a)[iVar7 * 0x1a];
      if ((&DAT_0094ae68)[(uint)(byte)(&DAT_009ab88d)[iVar11] * 0x10] == '\0') {
        uVar6 = 0x46;
      }
      else {
        uVar6 = 0x45;
      }
    }
    else {
      if (cVar2 != '\x02') goto LAB_00511456;
      if ((&DAT_0094a37a)[iVar9] == '\0') {
        iVar8 = (int)(short)(&DAT_0095282a)[iVar7 * 0x1a];
        iVar10 = (int)(short)(&DAT_00952828)[iVar7 * 0x1a];
        uVar6 = 0x43;
      }
      else {
        iVar8 = (int)(short)(&DAT_0095282a)[iVar7 * 0x1a];
        iVar10 = (int)(short)(&DAT_00952828)[iVar7 * 0x1a];
        if ((&DAT_0094a37a)[iVar9] == '\x01') {
          uVar6 = 0x44;
        }
        else {
          uVar6 = 0x47;
        }
      }
    }
    FUN_00446960(uVar6,iVar10,iVar8);
  }
LAB_00511456:
  FUN_00446d10(*(undefined4 *)(in_ECX + 0x23bdc));
  FUN_005fd120();
  return;
}

