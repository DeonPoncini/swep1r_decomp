#include "prototype.h"


void FUN_00409270(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00ec8660;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x44) = 0;
  return;
}

