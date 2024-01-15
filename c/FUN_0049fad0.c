#include "prototype.h"


void FUN_0049fad0(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    do {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

