#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004859a0(float param_1,undefined4 *param_2)

{
  _DAT_004c817c = param_1;
  _DAT_004c8180 = (float)param_2;
  if ((DAT_0050f528 & 1) != 0) {
    param_2 = &param_1;
    param_1 = (float)(int)ROUND(ROUND(param_1 * _DAT_004ae2dc));
    FUN_00486970(0x30,-(int)param_1,param_1,0);
  }
  if ((DAT_0050f540 & 1) != 0) {
    param_2 = &param_1;
    param_1 = (float)(int)ROUND(ROUND(_DAT_004c8180 * _DAT_004ae2e0));
    FUN_00486970(0x31,-(int)param_1,param_1,0);
  }
  return;
}

