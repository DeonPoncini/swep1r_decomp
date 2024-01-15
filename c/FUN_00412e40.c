#include "prototype.h"


void FUN_00412e40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004d8160;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (PTR_DAT_004b5d74 != (undefined *)0x0) {
    FUN_00414d00(PTR_DAT_004b5d74);
  }
  PTR_DAT_004b5d74 = (undefined *)0x0;
  FUN_00417090();
  if (DAT_004d87c4 != 0) {
    FUN_0048c050(DAT_004d87c4);
    DAT_004d87c4 = 0;
  }
  return;
}

