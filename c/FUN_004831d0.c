#include "prototype.h"


void FUN_004831d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  param_1 = param_1 * 0x16c;
  if (DAT_0050c058 != 0) {
    param_2 = 0;
    param_4 = 0x140;
    param_3 = 0;
    param_5 = 0xf0;
  }
  *(undefined4 *)(&DAT_00dfb060 + param_1) = param_2;
  *(undefined4 *)(&DAT_00dfb064 + param_1) = param_3;
  *(undefined4 *)(&DAT_00dfb068 + param_1) = param_4;
  *(undefined4 *)(&DAT_00dfb06c + param_1) = param_5;
  FUN_004830e0(&DAT_00dfb040 + param_1);
  FUN_00482f10(&DAT_00dfb040 + param_1);
  return;
}

