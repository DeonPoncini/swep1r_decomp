#include "prototype.h"


void FUN_00454c60(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00e29160;
  for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e29900;
  for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_004258e0();
  return;
}

