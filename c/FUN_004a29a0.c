#include "prototype.h"


int FUN_004a29a0(LCID param_1,uint param_2,LPCSTR param_3,LPCWSTR param_4,LPWSTR param_5,int param_6
                ,UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  
  if (DAT_00dfab5c == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfab5c = 2;
    }
    else {
      DAT_00dfab5c = 1;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_004ab170(param_3,param_4);
  }
  if (DAT_00dfab5c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,iVar1,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_00dfab5c != 1) {
    return DAT_00dfab5c;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_00dfab48;
  }
  iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,iVar1,(LPWSTR)0x0,0);
  if (iVar2 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_0049f270(iVar2 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar1 = MultiByteToWideChar(param_7,1,param_3,iVar1,lpWideCharStr,iVar2);
  if ((iVar1 != 0) &&
     (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,(LPWSTR)0x0,0), iVar1 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_0049f270(iVar1 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,param_4,iVar1), iVar2 == 0))
      goto LAB_004a2ba8;
      if (param_6 == 0) {
        iVar1 = WideCharToMultiByte(param_7,0x220,param_4,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar2 = iVar1;
      }
      else {
        iVar1 = WideCharToMultiByte(param_7,0x220,param_4,iVar1,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar2 = iVar1;
      }
    }
    else {
      if (param_6 == 0) goto LAB_004a2b0f;
      if (param_6 < iVar1) goto LAB_004a2ba8;
      iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar2,param_5,param_6);
    }
    if (iVar2 != 0) {
LAB_004a2b0f:
      FUN_0049f200(lpWideCharStr);
      FUN_0049f200(param_4);
      return iVar1;
    }
  }
LAB_004a2ba8:
  FUN_0049f200(lpWideCharStr);
  FUN_0049f200(param_4);
  return 0;
}

