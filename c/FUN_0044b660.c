#include "prototype.h"


undefined * FUN_0044b660(void)

{
  DAT_0050c6b8 = DAT_0050c6b8 + 1;
  if (0xbff < DAT_0050c6b8) {
    DAT_0050c6b8 = 0;
  }
  return &DAT_00e37c00 + DAT_0050c6b8 * 0x40;
}

