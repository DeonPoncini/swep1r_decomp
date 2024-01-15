#include "prototype.h"


undefined4 FUN_004475f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (DAT_0050c628 < 1) {
    return 0;
  }
  piVar2 = &DAT_00e95300;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c628);
  return 0;
}

