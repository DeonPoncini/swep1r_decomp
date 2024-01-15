#include "prototype.h"


void FUN_00414f10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041b380(param_1);
  if (iVar1 != 0) {
    FUN_00414f70(param_1);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00408360(((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + 1) / 2 +
                 *(int *)(param_1 + 0x24),
                 ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + 1) / 2 +
                 *(int *)(param_1 + 0x28));
  }
  return;
}

