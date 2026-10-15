// ev_e3632a8c7e7cf344509f8f0330b602084a834da94b167e92f44c6aa8df76ddfd

void FUN_004d6070(int param_1)

{
  FUN_0048af20();
  if ((param_1 < 0) || (DAT_009a64cc <= param_1)) {
    FUN_0048b3f0();
  }
  else {
    if (DAT_00688348 == 0) {
      FUN_0048b8e0((int)(short)(&DAT_0097d040)[param_1 * 0x9a],
                   (int)(short)(&DAT_0097d042)[param_1 * 0x9a],0);
      FUN_0048ae40((int)(short)(&DAT_0097d040)[param_1 * 0x9a],
                   (int)(short)(&DAT_0097d042)[param_1 * 0x9a],
                   (int)(short)(&DAT_0097d040)[param_1 * 0x9a],
                   (int)(short)(&DAT_0097d042)[param_1 * 0x9a],(&DAT_0068f9f0)[DAT_00939284]);
      FUN_0048af30();
      return;
    }
    FUN_0048b630(DAT_00915680,DAT_00915650,(int)(short)(&DAT_0097d040)[param_1 * 0x9a],
                 (int)(short)(&DAT_0097d042)[param_1 * 0x9a],0);
    if (param_1 < DAT_009a64cc) {
      FUN_0048ae40(DAT_00915680,DAT_00915650,(int)(short)(&DAT_0097d040)[param_1 * 0x9a],
                   (int)(short)(&DAT_0097d042)[param_1 * 0x9a],(&DAT_0068f9f0)[DAT_00939284]);
      FUN_0048af30();
      return;
    }
  }
  FUN_0048af30();
  return;
}

