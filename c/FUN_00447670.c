#include "prototype.h"


undefined4 FUN_00447670(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (DAT_0050c630 < 1) {
    return 0;
  }
  piVar2 = &DAT_00e68280;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c630);
  return 0;
}

