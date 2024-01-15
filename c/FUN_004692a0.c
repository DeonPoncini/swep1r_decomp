#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004692a0(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0042f860(&local_c,param_1 + 0x50,param_1 + 0x44);
  local_4 = 0;
  FUN_0042f8c0(&local_c);
  fVar3 = (float10)FUN_0042f560(-local_c,local_8);
  fVar1 = (float)fVar3;
  fVar2 = fVar1 - *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x6c) = fVar1;
  if (fVar2 < _DAT_004ad5b8) {
    fVar2 = fVar2 - _DAT_004ad5bc;
  }
  if (_DAT_004ad5c0 < fVar2) {
    fVar2 = fVar2 - _DAT_004ad5c4;
  }
  if ((fVar2 <= _DAT_004ad598) && (_DAT_004ad5c8 <= fVar2)) {
    *(float *)(param_1 + 0x68) = fVar1;
    return;
  }
  if (fVar2 < _DAT_004ad590) {
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - _DAT_00e22a50 * _DAT_004ad690;
    return;
  }
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - _DAT_00e22a50 * _DAT_004ad694;
  return;
}

