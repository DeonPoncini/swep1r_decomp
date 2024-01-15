#include "prototype.h"


void FUN_0042c380(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined param_6,undefined param_7,undefined param_8)

{
  if ((((-1 < param_1) && (param_1 < 2)) && (-1 < param_2)) && (param_2 < 8)) {
    param_2 = param_2 + param_1 * 8;
    *(undefined4 *)(&DAT_00e99780 + param_2 * 4) = param_5;
    (&DAT_004b94e0)[param_2] = param_3;
    *(undefined4 *)(&DAT_00e9a440 + param_2 * 4) = param_4;
    (&DAT_00e9a6a0)[param_2 * 3] = param_6;
    (&DAT_00e9a6a1)[param_2 * 3] = param_7;
    (&DAT_00e9a6a2)[param_2 * 3] = param_8;
  }
  return;
}

