#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00490c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  DAT_00ecc434 = param_3;
  _DAT_00ecc42c = param_4;
  if (DAT_00ecc430 != 0) {
    switch(*param_1) {
    case 0:
    case 2:
    case 3:
      return (undefined4 *)0x0;
    case 1:
      puVar1 = (undefined4 *)FUN_0048efe0(param_1,param_2);
      return puVar1;
    case 4:
      puVar1 = (undefined4 *)FUN_004945e0(param_1,param_2);
      return puVar1;
    case 5:
      puVar1 = (undefined4 *)FUN_00494330(param_1,param_2);
      return puVar1;
    case 6:
      param_1 = (undefined4 *)FUN_00493e80(param_1,param_2);
    }
    return param_1;
  }
  return (undefined4 *)0x0;
}

