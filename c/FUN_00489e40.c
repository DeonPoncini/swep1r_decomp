#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489e40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0052e650 != 0) {
    FUN_0048a1c0();
  }
  if (DAT_0052e640 != (int *)0x0) {
    (**(code **)(*DAT_0052e640 + 8))(DAT_0052e640);
  }
  DAT_0052e644 = 0;
  puVar2 = &DAT_0052d570;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0052d870;
  for (iVar1 = 0x368; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0052e640 = (int *)0x0;
  DAT_0052d56c = 0;
  _DAT_0052e64c = 0;
  return;
}

