#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00490aa0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  float fVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 & 1) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = *(int *)(param_3 + 0xc) - 1;
    param_1[7] = *(int *)(param_3 + 0x10) - 1;
  }
  else {
    param_1[4] = param_4;
    param_1[5] = param_5;
    param_1[6] = param_6;
    param_1[7] = param_7;
  }
  fVar1 = (float)((param_1[7] - param_1[5]) + 1) * _DAT_004af900;
  param_1[2] = (uint)((float)param_1[4] + (float)((param_1[6] - param_1[4]) + 1) * _DAT_004af900);
  param_1[3] = (uint)((float)param_1[5] + fVar1);
  return 1;
}

