#include "prototype.h"


void FUN_004475d0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = &DAT_00e93860;
  do {
    if (param_1 < *puVar1) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xe952f0);
  return;
}

