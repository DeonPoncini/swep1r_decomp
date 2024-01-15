#include "prototype.h"


undefined4 FUN_004a0ec0(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_004a3dc0();
    *puVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}

