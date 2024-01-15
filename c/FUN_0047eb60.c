#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eb60(int param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined local_40 [16];
  float local_30;
  float local_2c;
  float local_28;
  float local_10;
  float local_c;
  float local_8;
  
  bVar3 = false;
  FUN_0044ed80(param_1,local_40);
  do {
    bVar2 = true;
    if (local_8 * local_28 + local_c * local_2c + local_10 * local_30 <
        local_30 * *param_2 + local_2c * param_2[1] + local_28 * param_2[2]) {
      fVar1 = *(float *)(param_1 + 8);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - _DAT_004adf50;
      FUN_0044ed80(param_1,local_40);
      bVar2 = fVar1 == *(float *)(param_1 + 8);
      bVar3 = true;
    }
  } while (!bVar2);
  if (!bVar3) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - _DAT_004adf54;
    FUN_0044ed80(param_1,local_40);
    do {
      bVar3 = true;
      if (local_30 * *param_2 + local_2c * param_2[1] + local_28 * param_2[2] <
          local_8 * local_28 + local_c * local_2c + local_10 * local_30) {
        fVar1 = *(float *)(param_1 + 8);
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - _DAT_004adf54;
        FUN_0044ed80(param_1,local_40);
        if (fVar1 != *(float *)(param_1 + 8)) {
          bVar3 = false;
        }
      }
    } while (!bVar3);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - _DAT_004adf50;
    FUN_0044ed80(param_1,local_40);
  }
  return;
}

