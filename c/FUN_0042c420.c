#include "prototype.h"


void FUN_0042c420(int param_1,undefined4 *param_2,undefined4 param_3)

{
  (&DAT_00e9a840)[param_1] = param_3;
  param_1 = param_1 * 0xc;
  *(undefined4 *)(&DAT_00e9a4a0 + param_1) = *param_2;
  *(undefined4 *)(&DAT_00e9a4a4 + param_1) = param_2[1];
  *(undefined4 *)(&DAT_00e9a4a8 + param_1) = param_2[2];
  return;
}

