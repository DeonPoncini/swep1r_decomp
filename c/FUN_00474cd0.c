#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474cd0(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (DAT_0050ca28 == 0) {
    if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && ((*(uint *)(param_1 + 100) & 0x2000000) == 0)
       ) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
      fVar2 = _DAT_004adbdc;
      fVar1 = *(float *)(param_1 + 0xa0) * param_3 + *(float *)(param_1 + 0x288 + param_2 * 4);
      *(float *)(param_1 + 0x288 + param_2 * 4) = fVar1;
      if (fVar2 < fVar1) {
        *(undefined4 *)(param_1 + 0x288 + param_2 * 4) = 0x3f800000;
      }
      *(uint *)(param_1 + 0x2a0 + param_2 * 4) = *(uint *)(param_1 + 0x2a0 + param_2 * 4) | 1;
      if (*(float *)(param_1 + 0x270 + param_2 * 4) < *(float *)(param_1 + 0x288 + param_2 * 4)) {
        *(undefined4 *)(param_1 + 0x270 + param_2 * 4) =
             *(undefined4 *)(param_1 + 0x288 + param_2 * 4);
      }
      *(float *)(param_1 + 0x2c4) = param_3 + *(float *)(param_1 + 0x2c4);
    }
  }
  return;
}

