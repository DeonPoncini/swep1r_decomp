#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004813a0(float *param_1,float *param_2,float param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined local_1c [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = param_2;
  param_2 = (float *)(*param_2 * *param_1 +
                     param_2[3] * param_1[3] + param_2[1] * param_1[1] + param_2[2] * param_1[2]);
  if ((float)param_2 < _DAT_004adfe8) {
    local_10 = -*param_1;
    local_c = -param_1[1];
    local_8 = -param_1[2];
    local_4 = -param_1[3];
    FUN_004813a0(&local_10,pfVar3,param_3,param_4);
    return;
  }
  if (_DAT_004adfec < (float)param_2) {
    param_2 = (float *)0x3f800000;
  }
  fVar6 = (float10)FUN_0042f540(param_2);
  fVar2 = (float)fVar6;
  if ((float10)_DAT_004adff0 < fVar6) {
    FUN_0042f380(fVar2,&param_2,local_1c);
    local_18 = (float)param_2;
    FUN_0042f380((_DAT_004adfec - param_3) * fVar2,&param_2,local_1c);
    local_14 = (float)param_2 / local_18;
    FUN_0042f380(fVar2 * param_3,&param_2,local_1c);
    param_3 = (float)param_2 / local_18;
  }
  else {
    local_14 = _DAT_004adfec - param_3;
  }
  iVar4 = (int)param_1 - (int)pfVar3;
  param_4 = param_4 - (int)pfVar3;
  iVar5 = 4;
  do {
    pfVar1 = (float *)(iVar4 + (int)pfVar3);
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar5 = iVar5 + -1;
    *(float *)(param_4 + -4 + (int)pfVar3) = param_3 * fVar2 + *pfVar1 * local_14;
  } while (iVar5 != 0);
  return;
}

