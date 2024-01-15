#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425de0(int param_1)

{
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [64];
  undefined local_40 [64];
  
  FUN_00425a60(&local_b0,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425a60(local_98,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    local_b0 = *(float *)(param_1 + 0xe4) * local_b0;
    local_ac = *(float *)(param_1 + 0xe4) * local_ac;
    local_a8 = *(float *)(param_1 + 0xe4) * local_a8;
    FUN_0042fa80(&local_b0,&local_b0,_DAT_004ac450 - *(float *)(param_1 + 0xe4),local_98);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_004316a0(*(int *)(param_1 + 0x124),local_80);
    FUN_00480730(local_80,local_a4,local_40,local_8c);
    FUN_00480850(local_80,local_a4,local_40,&local_b0);
    FUN_00431640(*(undefined4 *)(param_1 + 0x124),local_80);
  }
  return;
}

