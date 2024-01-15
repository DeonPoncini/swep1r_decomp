#include "prototype.h"


void FUN_00416840(undefined *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = (int)param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(int **)(param_1 + 0xc) = param_2;
    return;
  }
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = iVar2;
  }
  *(int **)(iVar1 + 4) = param_2;
  *param_2 = iVar1;
  return;
}

