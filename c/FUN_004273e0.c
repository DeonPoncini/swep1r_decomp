#include "prototype.h"


undefined4 FUN_004273e0(int param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_004b85e0;
  do {
    if (*psVar1 == param_1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x4b85e6);
  return 0;
}

