#include "prototype.h"


void FUN_0044eeb0(float *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  float local_30 [12];
  
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_1;
    param_1 = param_1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  local_30[2] = local_30[2] + param_3;
  local_30[1] = 0.0;
  FUN_0044ed80(local_30,param_2);
  return;
}

