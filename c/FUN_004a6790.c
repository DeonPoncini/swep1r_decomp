#include "prototype.h"


void FUN_004a6790(undefined2 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined2 uVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_004a6720(uVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}

