#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428660(short param_1,short param_2,short param_3)

{
  if (param_1 == -0xc9) {
    _DAT_004b91bc = (float)(int)param_2;
    _DAT_004b91c0 = (float)(int)param_3;
    return;
  }
  if (-1 < param_1) {
    *(short *)(&DAT_00e9ba60 + param_1 * 0x20) = param_2;
    *(short *)(&DAT_00e9ba62 + param_1 * 0x20) = param_3;
  }
  return;
}

