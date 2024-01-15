#include "prototype.h"


void FUN_00488310(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    if (param_1[0x16] != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1[0x16]);
      param_1[0x16] = 0;
    }
  }
  else if ((*param_1 == 1) && (piVar1 = (int *)param_1[0x18], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x18] = 0;
    (**(code **)(DAT_00ecc420 + 0x24))(param_1);
    return;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}

