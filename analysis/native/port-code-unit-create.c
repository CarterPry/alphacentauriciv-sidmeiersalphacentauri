// REA Evidence: ev_aa72eb59bfe424ae93a178ffd8742207a01839de15976456424e845a25b33681
// Target SHA-256: 573fd44cf18392da7cd048e2d8c24a8e130034364f374647e34e79a6c621d6f4
// Static Ghidra pseudocode; generated names/types are not original source.

int FUN_005c03d0(int param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar6 = param_3;
  iVar3 = DAT_009a64c8;
  if (0x7ff < DAT_009a64c8) {
    return -1;
  }
  DAT_009a64c8 = DAT_009a64c8 + 1;
  FUN_006262f0(s_Adding_Vehicle__v_who_v2__00691d98,iVar3,param_2,param_1);
  if ((byte)(&DAT_009ab892)[param_1 * 0x34] < 8) {
    (&DAT_0096da38)[param_2 * 0x833] = (&DAT_0096da38)[param_2 * 0x833] + 1;
  }
  iVar12 = param_2 * 0x20cc;
  (&DAT_0096d238)[param_1 + iVar12] = (&DAT_0096d238)[param_1 + iVar12] + '\x01';
  FUN_005c02d0(iVar3,param_1,param_2);
  iVar4 = FUN_004e3b80(param_3,param_4);
  if ((&DAT_009ab892)[param_1 * 0x34] == '\f') {
    if ((DAT_009a64c0 & 0x40000) != 0) {
      (&DAT_00952830)[iVar3 * 0x34] = (&DAT_00952830)[iVar3 * 0x34] | 0x20;
    }
  }
  else if (((-1 < iVar4) && ((byte)(&DAT_0097d044)[iVar4 * 0x134] == param_2)) &&
          ((&DAT_00952856)[iVar3 * 0x1a] = (short)iVar4, DAT_00689374 == iVar4)) {
    DAT_00689374 = -1;
  }
  FUN_005c0080(iVar3,param_3,param_4);
  FUN_005b6260(iVar3,1);
  if ((((-1 < *(int *)(&DAT_0096cdd0 + iVar12)) &&
       (pbVar1 = (byte *)(DAT_0094a30c + (DAT_0068faf0 * param_4 + ((int)param_3 >> 1)) * 0x2c),
       0x5f < (*pbVar1 & 0xe0))) &&
      (((byte)(&DAT_009ab892)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] < 3 ||
       ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] == 0xb)))) &&
     (uVar11 = (uint)pbVar1[3],
     *(byte *)(DAT_0094a30c + 3 +
              (*(int *)(&DAT_0096cdd4 + iVar12) * DAT_0068faf0 +
              (*(int *)(&DAT_0096cdd0 + iVar12) >> 1)) * 0x2c) == uVar11)) {
    param_3 = 0xffffffff;
    bVar2 = 0;
    uVar5 = 1;
    do {
      if (((uVar5 != param_2) && (((&DAT_0096c9f8)[(uVar5 + param_2 * 0x833) * 4] & 0x10) != 0)) &&
         (bVar2 < (byte)(&DAT_0096db5c)[uVar11 + iVar12])) {
        param_3 = uVar5;
        bVar2 = (&DAT_0096db5c)[uVar11 + iVar12];
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 8);
    if (-1 < (int)param_3) {
      FUN_004e3d50(iVar6,param_4,param_3,uVar11,0xffffffff,0xffffffff);
      iVar4 = *(int *)(&DAT_0096cdd4 + iVar12);
      iVar6 = FUN_00644f3a(iVar6 - *(int *)(&DAT_0096cdd0 + iVar12));
      if (((DAT_0094988c & 1) == 0) && (DAT_0068faf0 < iVar6)) {
        iVar6 = DAT_00949870 - iVar6;
      }
      uVar7 = FUN_00644f3a(param_4 - iVar4);
      iVar4 = FUN_00644f3a(iVar6);
      iVar8 = FUN_00644f3a(uVar7);
      iVar6 = iVar4;
      if (iVar4 <= iVar8) {
        iVar6 = iVar8;
      }
      iVar10 = iVar4;
      if (iVar8 <= iVar4) {
        iVar10 = iVar8;
      }
      if (DAT_0090ea04 < iVar6 - (((iVar4 + iVar8 >> 1) - iVar10) + 1 >> 1)) {
        return iVar3;
      }
    }
    uVar5 = ((uint)(byte)(&DAT_0096db5c)[uVar11 + iVar12] << 1) / 3;
    if (uVar5 < 3) {
      uVar5 = 3;
    }
    else if (8 < uVar5) {
      uVar5 = 8;
    }
    if (((&DAT_0096e35c)[uVar11 + iVar12] == '\a') &&
       (uVar9 = (int)((&DAT_0096da4c)[param_2 * 0x833] * 2 +
                     ((&DAT_0096da4c)[param_2 * 0x833] * 2 >> 0x1f & 0x3fffffU)) >> 0x16,
       (int)uVar9 <= (int)uVar5)) {
      uVar5 = uVar9;
    }
    iVar6 = FUN_0050ba30((&DAT_0096da58)[param_2 * 0x833]);
    if ((&DAT_0096da54)[param_2 * 0x833] - iVar6 < (int)uVar5) {
      iVar6 = FUN_0057d2e0((&DAT_009ab88d)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34],param_2);
      iVar4 = FUN_0057d270((&DAT_009ab88e)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34],param_2);
      if (((&DAT_0094a379)
           [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] * 0x90] == '\0'
          ) && (iVar8 = FUN_005bf1f0((int)(short)(&DAT_00952832)[iVar3 * 0x1a],0x10), iVar8 == 0)) {
        if ((&DAT_009ab892)[(short)(&DAT_00952832)[iVar3 * 0x1a] * 0x34] == '\v') {
          if ((*(byte *)(&DAT_0096da58 + param_2 * 0x833) & 2) == 0) {
            uVar11 = (&DAT_0095282c)[iVar3 * 0xd];
            (&DAT_0096da54)[param_2 * 0x833] = (&DAT_0096da54)[param_2 * 0x833] + 1;
            (&DAT_0096da58)[param_2 * 0x833] = (&DAT_0096da58)[param_2 * 0x833] | 2;
            (&DAT_0095282c)[iVar3 * 0xd] = uVar11 | 0x40000;
            return iVar3;
          }
        }
        else {
          if (iVar6 < iVar4) {
            if ((*(byte *)(&DAT_0096da58 + param_2 * 0x833) & 1) != 0) {
              return iVar3;
            }
            if ((&DAT_0096e35c)[uVar11 + iVar12] == '\a') {
              return iVar3;
            }
          }
          else if ((&DAT_0096e35c)[uVar11 + iVar12] != '\a') {
            uVar11 = ((uint)(byte)(&DAT_0096db5c)[uVar11 + iVar12] << 1) / 3;
            if (uVar11 < 3) {
              uVar11 = 3;
            }
            else if (8 < uVar11) {
              uVar11 = 8;
            }
            if ((uVar11 == 0xffffffff) || (iVar12 = _rand(), iVar12 % (int)(uVar11 + 2) == 0)) {
              (&DAT_0095282c)[iVar3 * 0xd] = (&DAT_0095282c)[iVar3 * 0xd] | 0x20000;
              return iVar3;
            }
          }
          iVar12 = (&DAT_0096da54)[param_2 * 0x833];
          (&DAT_0095282c)[iVar3 * 0xd] = (&DAT_0095282c)[iVar3 * 0xd] | 0x40000;
          (&DAT_0096da54)[param_2 * 0x833] = iVar12 + 1;
          if (iVar6 < iVar4) {
            (&DAT_0096da58)[param_2 * 0x833] = (&DAT_0096da58)[param_2 * 0x833] | 1;
          }
        }
      }
    }
  }
  return iVar3;
}

