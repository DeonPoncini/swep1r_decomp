#include "prototype.h"


void FUN_00487e80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_0052d438 == 1) && (DAT_0052d43c != 0)) {
    if (DAT_0052d440 != 0) {
      FUN_00488030();
    }
    FUN_00488d10();
    DAT_00529514 = 0;
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
    DAT_0052d448 = 0;
    PTR_FUN_004c86b8 = FUN_00423cb0;
    DAT_0052d43c = 0;
  }
  return;
}

