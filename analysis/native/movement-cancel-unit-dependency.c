// ev_456a757053fb643bf391459cfafe4c4d0224b52cad938c0a72391823003c0472


undefined4 FUN_005c1c40(int param_1)

{
  int iVar1;
  
  if ((((((&DAT_0094a379)
          [(uint)(byte)(&DAT_009ab88c)[(short)(&DAT_00952832)[param_1 * 0x1a] * 0x34] * 0x90] ==
          '\0') && ((&DAT_00952839)[param_1 * 0x34] == '\x01')) &&
       (-1 < (short)(&DAT_0095283c)[param_1 * 0x1a])) &&
      (((&DAT_0094a379)
        [(uint)(byte)(&DAT_009ab88c)
                     [(short)(&DAT_00952832)[(short)(&DAT_0095283c)[param_1 * 0x1a] * 0x1a] * 0x34]
         * 0x90] == '\x02' &&
       (((iVar1 = DAT_0094a30c +
                  ((short)(&DAT_0095282a)[param_1 * 0x1a] * DAT_0068faf0 +
                  ((int)(short)(&DAT_00952828)[param_1 * 0x1a] >> 1)) * 0x2c,
         (*(byte *)(iVar1 + 8) & 1) == 0 || (7 < (*(byte *)(iVar1 + 2) & 0xf))) ||
        ((*(byte *)(iVar1 + 2) & 0xf) == 0)))))) && ((*(uint *)(iVar1 + 8) & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}

