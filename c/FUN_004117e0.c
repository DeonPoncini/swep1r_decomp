#include "prototype.h"


void FUN_004117e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004d8110;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d87a4 = 0;
  return;
}

