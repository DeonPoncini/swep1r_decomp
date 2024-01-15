#include "prototype.h"


void FUN_004502f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00e2be80;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

