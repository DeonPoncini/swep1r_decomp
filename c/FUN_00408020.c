#include "prototype.h"


undefined4 FUN_00408020(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004b38b8;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_004b38f8);
  return 0;
}

