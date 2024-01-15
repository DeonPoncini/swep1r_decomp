#include "prototype.h"


void FUN_0042c3e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004b94e0;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  DAT_004b94c8 = 0xffffffff;
  DAT_004b94cc = 0xffffffff;
  return;
}

