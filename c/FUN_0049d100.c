#include "prototype.h"


undefined4 FUN_0049d100(LPCSTR param_1)

{
  LSTATUS LVar1;
  HKEY local_4;
  
  local_4 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_4,param_1,0,4,&stack0x00000008,4);
    if (LVar1 == 0) {
      LVar1 = RegCloseKey(local_4);
      if (LVar1 == 0) {
        return 0;
      }
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}

