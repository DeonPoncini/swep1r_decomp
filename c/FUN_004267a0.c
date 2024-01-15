#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004267a0(int param_1,float param_2,float param_3)

{
  if (param_3 < param_2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (param_2 < _DAT_004ac468) {
    param_2 = 0.0;
  }
  if (param_3 < _DAT_004ac468) {
    param_3 = 0.0;
  }
  *(float *)(param_1 + 0xf0) = param_2;
  *(float *)(param_1 + 0xf8) = param_3 - param_2;
  *(float *)(param_1 + 0xf4) = param_3;
  return;
}

