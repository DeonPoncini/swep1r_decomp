#include "prototype.h"


void FUN_00411770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004d8168;
  do {
    if (*piVar1 == 0) {
      (&DAT_004d8168)[iVar2 * 4] = param_1;
      (&DAT_004d8160)[iVar2 * 4] = param_2;
      (&DAT_004d8164)[iVar2 * 4] = param_2;
      (&DAT_004d816c)[iVar2 * 4] = param_3;
      return;
    }
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8208);
  return;
}

