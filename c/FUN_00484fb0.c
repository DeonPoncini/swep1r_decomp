#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484fb0(int *param_1,float param_2)

{
  if ((DAT_0050d548 != 0) && (param_1 != (int *)0x0)) {
    if (param_2 < _DAT_004ae190) {
      param_2 = 0.0;
    }
    else if (_DAT_004ae194 < param_2) {
      (**(code **)(*param_1 + 0xb8))(param_1,0x41200000);
      return;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  }
  return;
}

