#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481520(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  undefined local_4 [4];
  
  pfVar4 = param_2;
  fVar2 = param_2[1];
  fVar3 = *param_2 * *param_2 + param_2[2] * param_2[2] + fVar2 * fVar2;
  if ((_DAT_004adff8 <= fVar3) || (_DAT_004adff8 <= -fVar3)) {
    pfVar1 = param_2 + 3;
    param_2 = (float *)fVar2;
    fVar5 = (float10)FUN_0042f540(*pfVar1);
    fVar2 = (float)fVar5;
    FUN_0042f380(fVar2,&param_2,local_4);
    if (((float)param_2 <= _DAT_004adffc) || (_DAT_004adff8 <= (float)param_2)) {
      param_1[3] = fVar2 + fVar2;
      *param_1 = *pfVar4 / (float)param_2;
      param_1[1] = pfVar4[1] / (float)param_2;
      param_1[2] = pfVar4[2] / (float)param_2;
      FUN_0042f9b0(param_1);
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 1.0;
  param_1[3] = 0.0;
  return;
}

