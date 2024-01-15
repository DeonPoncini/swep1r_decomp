#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049d060(HKEY param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  HKEY local_4;
  
  local_4 = (HKEY)0x0;
  _DAT_00dfaa3c = 1;
  DAT_00dfaa40 = param_2;
  DAT_00dfaa44 = param_1;
  LVar1 = RegCreateKeyExA(param_1,param_2,0,&DAT_004d55cc,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_4,(LPDWORD)&param_2);
  if (LVar1 == 0) {
    LVar1 = RegCloseKey(local_4);
    if (LVar1 == 0) {
      return 0;
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}

