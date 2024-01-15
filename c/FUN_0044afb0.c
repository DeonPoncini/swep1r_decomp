#include "prototype.h"


void FUN_0044afb0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined local_80 [16];
  undefined local_70 [32];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_40 [52];
  undefined4 local_c;
  
  if (param_1 == (int *)0x0) {
    FUN_0042f7b0(param_2,0,0,0);
    return;
  }
  iVar1 = param_1[1];
  if (*param_1 == 0) {
    FUN_0042f7b0(param_2,0,0,0);
    return;
  }
  FUN_004316a0(*param_1,local_80);
  *param_2 = local_50;
  param_2[1] = local_4c;
  param_2[2] = local_48;
  if (iVar1 != 0) {
    FUN_004316a0(iVar1,local_40);
    FUN_0042fa80(param_2,param_2,local_c,local_70);
  }
  return;
}

