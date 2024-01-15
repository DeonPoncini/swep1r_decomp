#include "prototype.h"


void FUN_0047e790(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = -1;
  if (0 < DAT_0050cb54) {
    piVar3 = &DAT_00e25ac0;
    do {
      if (iVar1 != -1) {
        return;
      }
      if (*piVar3 == param_1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < DAT_0050cb54);
  }
  return;
}

