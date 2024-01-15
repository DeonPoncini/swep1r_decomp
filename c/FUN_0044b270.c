#include "prototype.h"


void FUN_0044b270(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined local_c0 [16];
  undefined local_b0 [32];
  undefined local_90 [16];
  undefined local_80 [64];
  undefined local_40 [52];
  float local_c;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      FUN_004316a0(iVar1,local_80);
      FUN_0044bb10(local_c0,local_80);
      FUN_0042f7d0(local_90,param_2);
      if (iVar2 == 0) {
        FUN_00431640(iVar1,local_c0);
        return;
      }
      FUN_004316a0(iVar2,local_40);
      FUN_0042fa80(local_90,local_90,-local_c,local_b0);
      FUN_00431640(iVar1,local_c0);
    }
  }
  return;
}

