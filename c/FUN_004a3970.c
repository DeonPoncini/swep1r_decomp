#include "prototype.h"


BOOL FUN_004a3970(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6
                 )

{
  BOOL BVar1;
  int cbMultiByte;
  LPCSTR lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  int local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_00dfab6c == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_00dfab6c = 2;
    }
    else {
      DAT_00dfab6c = 1;
    }
  }
  if (DAT_00dfab6c != 1) {
    local_4 = DAT_00dfab6c;
    if (DAT_00dfab6c == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_00dfab48;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = (LPCSTR)FUN_004a8cc0(1,cbMultiByte);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_0049f270(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_00dfab38;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_0049f4e0(param_4,lpCharType,param_3 * 2);
        }
      }
      FUN_0049f200(lpMultiByteStr);
      FUN_0049f200(lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}

