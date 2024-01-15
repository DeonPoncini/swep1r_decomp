#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490550(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8,float param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float *local_8;
  
  iVar3 = param_8 + -1;
  if (-1 < iVar3) {
    pfVar9 = (float *)(iVar3 * 0x10 + param_7);
    local_8 = (float *)((int)param_5 + iVar3 * 0xc);
    iVar7 = (int)param_5 - param_4;
    pfVar6 = (float *)(param_4 + 8 + iVar3 * 0xc);
    local_14 = param_8;
    local_10 = iVar7;
    do {
      iVar3 = 0x5c;
      pfVar8 = pfVar9;
      do {
        iVar3 = iVar3 + 4;
        *pfVar8 = *(float *)(DAT_00df7f2c + -4 + iVar3);
        pfVar8 = pfVar8 + 1;
      } while (iVar3 < 0x68);
      pfVar9[3] = 1.0;
      iVar3 = param_3 + -1;
      if (-1 < iVar3) {
        param_5 = (int *)(param_1 + iVar3 * 4);
        pfVar8 = (float *)(param_2 + 8 + iVar3 * 0xc);
        local_c = param_3;
        do {
          iVar3 = *param_5;
          if (*(int *)(iVar3 + 4) == 0) {
            fVar2 = *pfVar6 * *pfVar8 + pfVar6[-1] * pfVar8[-1] + pfVar6[-2] * pfVar8[-2];
            if (_DAT_004af7d0 < fVar2) {
              pfVar5 = (float *)(iVar3 + 0x18);
              iVar3 = 3;
              pfVar4 = pfVar9;
              do {
                fVar1 = *pfVar5;
                pfVar5 = pfVar5 + 1;
                iVar3 = iVar3 + -1;
                *pfVar4 = fVar1 * fVar2 + *pfVar4;
                pfVar4 = pfVar4 + 1;
              } while (iVar3 != 0);
            }
          }
          else if (*(int *)(iVar3 + 4) == 1) {
            local_24 = pfVar8[-2] - *local_8;
            local_20 = pfVar8[-1] - *(float *)(iVar7 + -4 + (int)pfVar6);
            local_1c = *pfVar8 - *(float *)(iVar7 + (int)pfVar6);
            fVar2 = SQRT(local_1c * local_1c + local_20 * local_20 + local_24 * local_24);
            if (fVar2 < *(float *)(iVar3 + 0x28)) {
              local_18 = fVar2;
              FUN_00492440(&local_24);
              fVar1 = *pfVar6 * local_1c + pfVar6[-1] * local_20 + pfVar6[-2] * local_24;
              if (_DAT_004af7d0 < fVar1) {
                fVar2 = fVar2 * param_9;
                *pfVar9 = (*(float *)(iVar3 + 0x18) - fVar2) * fVar1 + *pfVar9;
                pfVar9[1] = (*(float *)(iVar3 + 0x1c) - fVar2) * fVar1 + pfVar9[1];
                pfVar9[2] = (*(float *)(iVar3 + 0x20) - fVar2) * fVar1 + pfVar9[2];
              }
            }
          }
          iVar3 = 4;
          pfVar5 = pfVar9;
          do {
            iVar3 = iVar3 + -1;
            *pfVar5 = *(float *)((param_6 - param_7) + (int)pfVar5) * *pfVar5;
            pfVar5 = pfVar5 + 1;
          } while (iVar3 != 0);
          param_5 = param_5 + -1;
          pfVar8 = pfVar8 + -3;
          local_c = local_c + -1;
          iVar7 = local_10;
        } while (local_c != 0);
      }
      pfVar6 = pfVar6 + -3;
      local_8 = local_8 + -3;
      pfVar9 = pfVar9 + -4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

