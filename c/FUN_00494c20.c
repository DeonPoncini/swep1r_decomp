#include "prototype.h"


uint FUN_00494c20(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < *(int *)(param_1 + 0x10)) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x18) < param_2) {
    uVar1 = 0x10;
  }
  if (param_3 < *(int *)(param_1 + 0x14)) {
    return uVar1 | 0x1000;
  }
  if (*(int *)(param_1 + 0x1c) < param_3) {
    uVar1 = uVar1 | 0x100;
  }
  return uVar1;
}

