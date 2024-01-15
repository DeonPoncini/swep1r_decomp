#include "prototype.h"


void FUN_004258e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00e9edc0;
  for (iVar1 = 300; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0050b5ec = 0;
  return;
}

