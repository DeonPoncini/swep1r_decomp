#include "prototype.h"


undefined4 FUN_0049d180(LPCSTR param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD DStack_8;
  undefined4 uStack_4;
  
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    DStack_8 = 4;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)&uStack_4,
                             &DStack_8);
    if (LVar1 == 0) {
      RegCloseKey(local_c);
      return uStack_4;
    }
    RegCloseKey(local_c);
  }
  return param_2;
}

