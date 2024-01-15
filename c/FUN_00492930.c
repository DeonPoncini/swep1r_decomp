#include "prototype.h"


void FUN_00492930(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_004af880;
  puVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[9] = *param_2;
  param_1[10] = param_2[1];
  param_1[0xb] = param_2[2];
  return;
}

