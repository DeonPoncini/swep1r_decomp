#include "prototype.h"


undefined4 FUN_004081c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00ec8740;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

