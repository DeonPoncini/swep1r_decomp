#include "prototype.h"


void FUN_00416fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004d7c68;
  do {
    if (*piVar1 == 0) {
      (&DAT_004d7c68)[iVar2 * 2] = param_1;
      (&DAT_004d7c6c)[iVar2 * 2] = param_2;
      (&DAT_004d79f8)[iVar2] = param_3;
      return;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8110);
  return;
}

