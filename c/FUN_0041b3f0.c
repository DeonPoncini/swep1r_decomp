#include "prototype.h"


int * FUN_0041b3f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = FUN_0041b380(piVar2);
      if ((iVar1 != 0) && (param_1 != piVar2)) {
        return piVar2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return piVar2;
}

