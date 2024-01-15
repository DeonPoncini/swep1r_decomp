#include "prototype.h"


undefined4 FUN_00447630(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (DAT_0050c62c < 1) {
    return 0;
  }
  piVar2 = &DAT_00e90980;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < DAT_0050c62c);
  return 0;
}

