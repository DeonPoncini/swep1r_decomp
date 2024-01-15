#include "prototype.h"


LPCWSTR FUN_004aae20(void)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  LPSTR lpMultiByteStr;
  LPCWSTR *ppWVar2;
  
  lpWideCharStr = *DAT_00dfaa9c;
  ppWVar2 = DAT_00dfaa9c;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return (LPCWSTR)0x0;
  }
  while (((iVar1 = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0),
          iVar1 != 0 && (lpMultiByteStr = (LPSTR)FUN_0049f270(iVar1), lpMultiByteStr != (LPSTR)0x0))
         && (iVar1 = WideCharToMultiByte(1,0,*ppWVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                         (LPBOOL)0x0), iVar1 != 0))) {
    FUN_004ab1a0(lpMultiByteStr,0);
    lpWideCharStr = ppWVar2[1];
    ppWVar2 = ppWVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return lpWideCharStr;
    }
  }
  return (LPCWSTR)0xffffffff;
}

