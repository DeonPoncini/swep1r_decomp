#include "prototype.h"


void FUN_004a2300(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_004a22b0(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}

