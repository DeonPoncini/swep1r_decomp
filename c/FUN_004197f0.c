#include "prototype.h"


void FUN_004197f0(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    param_1[2] = 0x14;
    *param_1 = 0x14;
    param_1[3] = 0x1a;
    param_1[1] = 0x1a;
  }
  return;
}

