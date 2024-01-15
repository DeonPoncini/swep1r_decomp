#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449d00(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = 0;
  do {
    FUN_004493f0(param_1,iVar1,(int)*(char *)(iVar1 + param_3),
                 (float)(uint)(byte)((char *)(iVar1 + param_3))[param_4 - param_3] * _DAT_004acb88);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  return;
}

