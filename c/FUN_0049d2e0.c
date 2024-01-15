#include "prototype.h"


undefined4 FUN_0049d2e0(LPCSTR param_1,LPBYTE param_2,DWORD param_3,char *param_4)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD DStack_8;
  DWORD DStack_4;
  
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    DStack_8 = param_3;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,&DStack_4,param_2,&DStack_8);
    if (LVar1 == 0) {
      LVar1 = RegCloseKey(local_c);
      if (LVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_4 != (char *)0x0) {
    _strncpy((char *)param_2,param_4,param_3 - 1);
    param_2[param_3 - 1] = '\0';
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return 1;
}

