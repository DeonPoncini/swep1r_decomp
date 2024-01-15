#include "prototype.h"


int FUN_0041b3c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    do {
      iVar1 = FUN_0041b380(iVar2);
      if ((iVar1 != 0) && (param_1 != iVar2)) {
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  return iVar2;
}

