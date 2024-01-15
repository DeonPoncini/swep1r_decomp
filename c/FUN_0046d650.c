#include "prototype.h"


int FUN_0046d650(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  while (((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0 &&
         (*(float *)(iVar1 + 0x114) < *(float *)(iVar1 + 0x108)))) {
    iVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (iVar1 == 0) {
      return iVar1;
    }
  }
  return 1;
}

