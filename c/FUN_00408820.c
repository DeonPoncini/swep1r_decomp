#include "prototype.h"


void FUN_00408820(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_004b4330;
  puVar3 = &DAT_004b4320;
  puVar4 = &DAT_00ec86a0;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((iVar1 == 0) || (DAT_00ec86b0 = 1, DAT_004b431c == 0)) {
    DAT_00ec86b0 = 0;
  }
  if ((DAT_00ec86b4 == 0) || (DAT_00ec86b4 = 1, DAT_004b431c == 0)) {
    DAT_00ec86b4 = 0;
  }
  return;
}

