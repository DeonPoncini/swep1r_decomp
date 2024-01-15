#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004764a0(int param_1)

{
  *(float *)(param_1 + 400) = _DAT_004c2590 * _DAT_004adc4c;
  *(undefined4 *)(param_1 + 0x194) = DAT_004c2598;
  *(undefined4 *)(param_1 + 0x198) = DAT_004c259c;
  *(undefined4 *)(param_1 + 0x19c) = DAT_004c25a0;
  return;
}

