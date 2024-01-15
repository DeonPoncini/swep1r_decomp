#include "prototype.h"


void FUN_004855c0(void)

{
  uint *puVar1;
  uint *puVar2;
  
  DAT_004c8170 = 0;
  DAT_0050fec4 = 0;
  puVar1 = &DAT_0050f0a8;
  do {
    puVar2 = puVar1 + 6;
    *puVar1 = *puVar1 & 0xfffffffd;
    puVar1 = puVar2;
  } while (puVar2 < &DAT_0050f648);
  return;
}

