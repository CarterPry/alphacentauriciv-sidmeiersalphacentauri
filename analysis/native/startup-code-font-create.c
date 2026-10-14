
undefined4 FUN_00618f40(int param_1,int param_2,uint param_3)

{
  HFONT h;
  HGDIOBJ h_00;
  undefined4 *in_ECX;
  tagTEXTMETRICA local_74;
  LOGFONTA local_3c;
  
  if (param_1 == 0) {
    return 3;
  }
  if ((*(byte *)(in_ECX + 1) & 1) == 0) {
    *in_ECX = 0xffffffff;
    in_ECX[4] = 0;
    in_ECX[3] = 0;
    in_ECX[6] = 0;
    in_ECX[7] = 0;
    if ((HGDIOBJ)in_ECX[2] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)in_ECX[2]);
      in_ECX[2] = 0;
    }
    if ((LPCSTR)in_ECX[9] != (LPCSTR)0x0) {
      RemoveFontResourceA((LPCSTR)in_ECX[9]);
      if (in_ECX[9] != 0) {
        FUN_00644ef2(in_ECX[9]);
      }
      in_ECX[9] = 0;
    }
  }
  else {
    in_ECX[4] = 0;
    in_ECX[3] = 0;
    in_ECX[6] = 0;
    in_ECX[7] = 0;
    if ((HGDIOBJ)in_ECX[2] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)in_ECX[2]);
      in_ECX[2] = 0;
    }
  }
  local_3c.lfHeight = -param_2;
  local_3c.lfWidth = 0;
  local_3c.lfEscapement = 0;
  local_3c.lfUnderline = (byte)(param_3 >> 2) & 1;
  local_3c.lfWeight = -(uint)((param_3 & 1) != 0) & 700;
  local_3c.lfItalic = (byte)(param_3 >> 1) & 1;
  local_3c.lfOrientation = 0;
  local_3c.lfStrikeOut = '\0';
  local_3c.lfCharSet = '\0';
  local_3c.lfOutPrecision = '\a';
  local_3c.lfClipPrecision = '\0';
  local_3c.lfQuality = '\0';
  local_3c.lfPitchAndFamily = '\0';
  local_3c.lfFaceName[0] = '\0';
  FUN_00645470(local_3c.lfFaceName,param_1);
  h = CreateFontIndirectA(&local_3c);
  in_ECX[2] = h;
  if (h == (HFONT)0x0) {
    return 0xd;
  }
  SelectObject(DAT_009bb488,h);
  GetTextMetricsA(DAT_009bb488,&local_74);
  in_ECX[3] = local_74.tmExternalLeading + local_74.tmHeight;
  in_ECX[6] = local_74.tmAscent;
  in_ECX[4] = local_74.tmAscent - local_74.tmInternalLeading;
  in_ECX[5] = local_74.tmInternalLeading;
  in_ECX[7] = local_74.tmDescent;
  h_00 = GetStockObject(0xd);
  SelectObject(DAT_009bb488,h_00);
  return 0;
}

