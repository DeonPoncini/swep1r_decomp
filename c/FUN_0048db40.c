#include "prototype.h"


void FUN_0048db40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00b6b0e8;
  for (iVar1 = 0x5000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00deb0ec = 0;
  return;
}

