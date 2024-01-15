#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046aec0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  
  fVar1 = _DAT_004ad750;
  if (((*(float *)(param_1 + 0x58) <= *(float *)(param_3 + 8)) &&
      (fVar1 = _DAT_004ad7a0, (*(uint *)(param_1 + 100) & 0x200) == 0)) && (param_4 != 0)) {
    fVar1 = *(float *)(param_1 + 0x184);
  }
  if (fVar1 <= _DAT_004ad7a4) {
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2fc) = 0xbf800000;
  return;
}

