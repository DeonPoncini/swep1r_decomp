#include "prototype.h"


undefined4 FUN_0048b500(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (((param_1[1] == 0x400) && (0xf < (uint)param_1[3])) && ((uint)param_1[3] < (uint)param_2[3])
       ) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *param_1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
    }
    return 1;
  }
  return 0;
}

