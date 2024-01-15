#include "prototype.h"


int FUN_004aab70(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPSTR lpLCData;
  
  if (DAT_00dfb014 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfb014 = 2;
    }
    else {
      DAT_00dfb014 = 1;
    }
  }
  if (DAT_00dfb014 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_00dfb014 != 2) {
    return DAT_00dfb014;
  }
  if (param_5 == 0) {
    param_5 = DAT_00dfab48;
  }
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPSTR)FUN_0049f270(iVar1);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_0049f200(lpLCData);
    return 0;
  }
  return 0;
}

