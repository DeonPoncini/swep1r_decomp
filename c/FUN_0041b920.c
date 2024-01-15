#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b920(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004d9418;
  for (iVar1 = 0x4140; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_004e9eb8 = 0;
  return;
}

