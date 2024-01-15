#include "prototype.h"


void FUN_0049e8e0(HKEY param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  uint uVar2;
  BYTE *pBVar3;
  DWORD local_4;
  
  RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)param_1,0,s_REG_SZ_004d1d6c,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_4);
  uVar2 = 0xffffffff;
  pBVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  RegSetValueExA(param_1,param_2,0,1,param_3,~uVar2 - 1);
  RegCloseKey(param_1);
  return;
}

