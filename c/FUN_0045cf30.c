#include "prototype.h"


void FUN_0045cf30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (&DAT_00e29900)[param_1];
  (&DAT_00e29900)[param_1] = (&DAT_00e29900)[param_2];
  (&DAT_00e29900)[param_2] = uVar1;
  return;
}

