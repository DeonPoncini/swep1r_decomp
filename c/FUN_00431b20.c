#include "prototype.h"


void FUN_00431b20(uint *param_1,uint param_2)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  if ((param_2 & 0x4000) != 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_2 == 0xd065) {
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[7] = 0x3f800000;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0x3f800000;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0x3f800000;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
  }
  return;
}

