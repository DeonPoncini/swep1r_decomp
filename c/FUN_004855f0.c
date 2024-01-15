#include "prototype.h"


undefined4 FUN_004855f0(uint param_1)

{
  if (0x3b < param_1) {
    return 0;
  }
  if (((&DAT_0050f0a8)[param_1 * 6] & 1) == 0) {
    return 0;
  }
  (&DAT_0050f0a8)[param_1 * 6] = (&DAT_0050f0a8)[param_1 * 6] | 2;
  FUN_00486140(param_1);
  return 1;
}

