#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00490450(int param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (0x80 < *(uint *)(param_1 + 0x6c)) {
    return 0;
  }
  *param_2 = *(uint *)(param_1 + 0x6c);
  *(uint **)(param_1 + 0x70 + *(int *)(param_1 + 0x6c) * 4) = param_2;
  puVar1 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0x6c) + 0x34) * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  if ((float)param_2[10] == _DAT_004af7c4) {
    fVar2 = (float10)FUN_00490930(param_2 + 6);
    param_2[10] = (uint)(float)(fVar2 / (float10)*(float *)(param_1 + 0x870));
  }
  if ((float)param_2[0xb] == _DAT_004af7c4) {
    fVar2 = (float10)FUN_00490930(param_2 + 6);
    param_2[0xb] = (uint)(float)(fVar2 / (float10)*(float *)(param_1 + 0x874));
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return 1;
}

