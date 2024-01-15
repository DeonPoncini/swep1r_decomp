#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00487d20(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0052d438 == 0) {
    puVar2 = &DAT_00ec8ca0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00ec8da0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00529578;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0052d438 = 1;
    DAT_0052d444 = 0;
    iVar1 = DirectDrawEnumerateA(&LAB_00488d70,0);
    if (iVar1 != 0) {
      return 0;
    }
    DAT_0052951c = 0x280;
    _DAT_00529520 = 0x1e0;
  }
  return 1;
}

