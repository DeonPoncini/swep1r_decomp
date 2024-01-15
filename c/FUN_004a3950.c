#include "prototype.h"


undefined4 FUN_004a3950(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00dfab68 != (code *)0x0) {
    iVar1 = (*DAT_00dfab68)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

