#include "prototype.h"


undefined4 FUN_00417010(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004d7c6c;
  do {
    if (*piVar1 == param_1) {
      return (&DAT_004d7c68)[iVar2 * 2];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8114);
  return 0;
}

