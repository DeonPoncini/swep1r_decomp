#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484d90(int *param_1,float param_2)

{
  uint uVar1;
  
  if (DAT_0050d548 != 0) {
    uVar1 = FUN_00485040(param_1);
    if ((uVar1 & 0x20) != 0) {
      param_2 = param_2 * _DAT_004c7d7c;
    }
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

