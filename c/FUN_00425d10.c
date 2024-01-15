#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425d10(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];
  
  FUN_00425a60(&local_18,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(local_c,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    local_18 = *(float *)(param_1 + 0xe4) * local_18;
    local_14 = *(float *)(param_1 + 0xe4) * local_14;
    local_10 = *(float *)(param_1 + 0xe4) * local_10;
    FUN_0042fa80(&local_18,&local_18,_DAT_004ac450 - *(float *)(param_1 + 0xe4),local_c);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_00431620(*(int *)(param_1 + 0x124),local_18,local_14,local_10);
  }
  return;
}

