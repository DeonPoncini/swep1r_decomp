#include "prototype.h"


undefined4 FUN_0049d250(LPCSTR param_1,BYTE *param_2)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  BYTE *pBVar4;
  HKEY local_4;
  
  local_4 = (HKEY)0x0;
  LVar2 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_4);
  if (LVar2 == 0) {
    uVar3 = 0xffffffff;
    pBVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      BVar1 = *pBVar4;
      pBVar4 = pBVar4 + 1;
    } while (BVar1 != '\0');
    LVar2 = RegSetValueExA(local_4,param_1,0,1,param_2,~uVar3 - 1);
    if (LVar2 == 0) {
      LVar2 = RegCloseKey(local_4);
      if (LVar2 == 0) {
        return 0;
      }
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}

