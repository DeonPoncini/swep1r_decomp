#include "prototype.h"


undefined4 FUN_0044c9d0(int param_1)

{
  char *_Str1;
  int iVar1;
  
  _Str1 = *(char **)(param_1 + 0x30);
  iVar1 = _strncmp(_Str1,(char *)&PTR_DAT_004c3c14,3);
  if (iVar1 == 0) {
    return *(undefined4 *)(_Str1 + 10);
  }
  return *(undefined4 *)(param_1 + 0x30);
}

