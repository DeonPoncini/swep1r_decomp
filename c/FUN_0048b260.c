#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048b260(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_40 [5];
  float local_2c;
  float local_18;
  undefined4 local_14;
  float local_8;
  
  if (ABS(param_4 - param_3) < (float)_DAT_004aee98) {
    return 0x80070057;
  }
  fVar4 = (float10)fsin((float10)param_1 * (float10)_DAT_004aeea0);
  if (ABS(fVar4) < (float10)_DAT_004aee98) {
    return 0x80070057;
  }
  fVar5 = (float10)fcos((float10)param_1 * (float10)_DAT_004aeea0);
  pfVar3 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  local_18 = param_4 / (param_4 - param_3);
  local_40[0] = param_2 * (float)(fVar5 / fVar4);
  local_2c = (float)(fVar5 / fVar4);
  local_8 = -(local_18 * param_3);
  local_14 = _DAT_004aeea4;
  uVar1 = (**(code **)(*DAT_0052e644 + 100))(DAT_0052e644,3,local_40);
  return uVar1;
}

