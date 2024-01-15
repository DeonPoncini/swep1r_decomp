#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004787f0(int param_1)

{
  float10 fVar1;
  
  if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
    if (_DAT_004adc48 < *(float *)(param_1 + 0x1a8)) {
      fVar1 = (float10)FUN_00480650(0x40a00000,(float)_DAT_00e22a40);
      *(float *)(param_1 + 0x1a8) = (float)(fVar1 * (float10)*(float *)(param_1 + 0x1a8));
    }
    if (*(float *)(param_1 + 0x1a8) < _DAT_004add54) {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
  }
  else {
    *(float *)(param_1 + 0x1a8) = (float)_DAT_00e22a40 * _DAT_004add20 + *(float *)(param_1 + 0x1a8)
    ;
  }
  if ((*(uint *)(param_1 + 0x60) & 0x200) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  if (_DAT_004adc48 < *(float *)(param_1 + 0x1a8)) {
    return ((float10)*(float *)(param_1 + 0x1a8) * (float10)*(float *)(param_1 + 0x88)) /
           ((float10)*(float *)(param_1 + 0x1a8) - (float10)_DAT_004add58);
  }
  return (float10)_DAT_004adc48;
}

