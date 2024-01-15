#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409380(short param_1)

{
  int iVar1;
  float fVar2;
  
  if (_DAT_004ac34c <= (float)(int)param_1 * _DAT_004b4774) {
    DAT_00ec8578 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 8);
  }
  else {
    DAT_00ec8578 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4) /
                   (_DAT_004ac34c - (float)(int)param_1 * _DAT_004b4774);
  }
  iVar1 = *(int *)(DAT_00df7f2c + 0x48);
  if (*(float *)(iVar1 + 8) <= DAT_00ec8578) {
    FUN_0048fab0(0);
    return;
  }
  fVar2 = *(float *)(iVar1 + 8) - DAT_00ec8578;
  _DAT_00ec8574 = _DAT_004ac34c / fVar2;
  DAT_00ec857c = DAT_00ec8578 - fVar2 * (float)_DAT_004ac350;
  iVar1 = *(int *)(DAT_00df7f2c + 0x48);
  if (DAT_00ec8578 < *(float *)(iVar1 + 4)) {
    DAT_00ec8578 = *(float *)(iVar1 + 4);
  }
  return;
}

