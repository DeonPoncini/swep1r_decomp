#include "prototype.h"


void FUN_00411910(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00416890(param_2);
    *(undefined4 *)(param_2 + 0x14) = 0;
    FUN_00414e60(param_2,1);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_00416840(param_1,param_2);
  }
  return;
}

