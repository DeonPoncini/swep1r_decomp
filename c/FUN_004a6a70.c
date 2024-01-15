#include "prototype.h"


byte FUN_004a6a70(uint param_1)

{
  if (DAT_00ecd600 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

