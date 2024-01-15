#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490750(int *param_1,float *param_2,int param_3,int param_4,float *param_5,int param_6,
                 float param_7,float *param_8)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar5 = param_8;
  *param_8 = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  if (param_3 != 0) {
    param_8 = (float *)param_1;
    do {
      iVar1 = (int)*param_8;
      if (*(int *)(iVar1 + 8) != 0) {
        if (*(int *)(iVar1 + 4) == 0) {
          local_c = *param_2;
          local_8 = param_2[1];
          local_4 = param_2[2];
          FUN_00492440(&local_c);
          fVar3 = local_c * *param_5 + param_5[2] * local_4 + param_5[1] * local_8;
          if (_DAT_004af7d0 < fVar3) {
            *pfVar5 = *(float *)(iVar1 + 0x18) * fVar3 + *pfVar5;
            pfVar5[1] = *(float *)(iVar1 + 0x1c) * fVar3 + pfVar5[1];
            pfVar5[2] = *(float *)(iVar1 + 0x20) * fVar3 + pfVar5[2];
          }
        }
        else if (*(int *)(iVar1 + 4) == 1) {
          piVar2 = *(int **)(param_4 + 0x14);
          local_c = *param_2 - *(float *)(param_6 + *piVar2 * 0xc);
          local_8 = param_2[1] - *(float *)(param_6 + 4 + *piVar2 * 0xc);
          local_4 = param_2[2] - *(float *)(param_6 + 8 + *piVar2 * 0xc);
          fVar6 = (float10)FUN_0048ec50(param_2,param_5,param_6 + *piVar2 * 0xc);
          if (fVar6 < (float10)*(float *)(iVar1 + 0x28)) {
            FUN_00492440(&local_c);
            fVar3 = local_c * *param_5 + param_5[2] * local_4 + param_5[1] * local_8;
            if (_DAT_004af7d0 < fVar3) {
              fVar4 = (float)fVar6 * param_7;
              *pfVar5 = (*(float *)(iVar1 + 0x18) - fVar4) * fVar3 + *pfVar5;
              pfVar5[1] = (*(float *)(iVar1 + 0x1c) - fVar4) * fVar3 + pfVar5[1];
              pfVar5[2] = (*(float *)(iVar1 + 0x20) - fVar4) * fVar3 + pfVar5[2];
            }
          }
        }
      }
      param_8 = param_8 + 1;
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

