#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482ee0(int param_1)

{
  *(float *)(param_1 + 0x154) =
       ((_DAT_004ae08c / *(float *)(param_1 + 0x134) - _DAT_004ae090) * *(float *)(param_1 + 0x150)
       - _DAT_004ae088) * *(float *)(param_1 + 0x148);
  return;
}

