#include "prototype.h"


int FUN_004aaea0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
                UINT param_7)

{
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  int cchWideChar;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iStack_18;
  _cpinfo _Stack_14;
  
  if (DAT_00dfb020 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfb020 = 2;
    }
    else {
      DAT_00dfb020 = 1;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_004ab170(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_004ab170(param_5,param_6);
  }
  if (DAT_00dfb020 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,iVar1,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  iStack_18 = DAT_00dfb020;
  if (DAT_00dfb020 == 1) {
    iStack_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_00dfab48;
    }
    if ((iVar1 == 0) || (param_6 == 0)) {
      if (iVar1 == param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < iVar1) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&_Stack_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < iVar1) {
        if (_Stack_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (_Stack_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    cchWideChar = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,iVar1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_0049f270(cchWideChar * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,iVar1,lpWideCharStr,cchWideChar);
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (param_4 = (LPWSTR)FUN_0049f270(iVar1 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar1), iVar4 != 0)) {
      iStack_18 = CompareStringW(param_1,param_2,lpWideCharStr,cchWideChar,param_4,iVar1);
    }
    FUN_0049f200(lpWideCharStr);
    FUN_0049f200(param_4);
  }
  return iStack_18;
}

