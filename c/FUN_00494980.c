#include "prototype.h"


undefined4 FUN_00494980(float param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = (int)param_1;
  uVar5 = FUN_00494c20(param_1,*param_2,*param_3);
  uVar6 = FUN_00494c20(param_1,*param_4,*param_5);
  if ((uVar5 == 0) && (uVar6 == 0)) {
    return 1;
  }
  if ((uVar5 & uVar6) == 0) {
    param_1 = (float)*param_2;
    local_8 = (float)*param_3;
    local_c = (float)*param_4;
    local_10 = (float)*param_5;
    bVar1 = param_1 != local_c;
    if (local_8 == local_10) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    do {
      uVar7 = uVar5;
      if (uVar5 == 0) {
        uVar7 = uVar6;
      }
      fVar2 = param_1;
      if ((uVar7 & 0x1000) == 0) {
        if ((uVar7 & 0x100) == 0) {
          if ((uVar7 & 0x10) == 0) {
            if (bVar3) {
              local_14 = local_8;
            }
            else {
              local_14 = ((float)*(int *)(iVar4 + 0x10) - param_1) *
                         ((local_10 - local_8) / (local_c - param_1)) + local_8;
            }
            fVar2 = (float)*(int *)(iVar4 + 0x10);
          }
          else if (bVar3) {
            fVar2 = (float)*(int *)(iVar4 + 0x18);
            local_14 = local_8;
          }
          else {
            local_14 = ((float)*(int *)(iVar4 + 0x18) - param_1) *
                       ((local_10 - local_8) / (local_c - param_1)) + local_8;
            fVar2 = (float)*(int *)(iVar4 + 0x18);
          }
        }
        else if (bVar1) {
          fVar2 = ((float)*(int *)(iVar4 + 0x1c) - local_8) *
                  ((local_c - param_1) / (local_10 - local_8)) + param_1;
          local_14 = (float)*(int *)(iVar4 + 0x1c);
        }
        else {
          local_14 = (float)*(int *)(iVar4 + 0x1c);
        }
      }
      else if (bVar1) {
        local_14 = (float)*(int *)(iVar4 + 0x14);
        fVar2 = ((float)*(int *)(iVar4 + 0x14) - local_8) *
                ((local_c - param_1) / (local_10 - local_8)) + param_1;
      }
      else {
        local_14 = (float)*(int *)(iVar4 + 0x14);
      }
      if (uVar7 == uVar5) {
        local_8 = local_14;
        uVar5 = FUN_00494c20(iVar4,(int)ROUND(ROUND(fVar2)),(int)ROUND(ROUND(local_14)));
        param_1 = fVar2;
      }
      else {
        local_10 = local_14;
        uVar6 = FUN_00494c20(iVar4,(int)ROUND(ROUND(fVar2)),(int)ROUND(ROUND(local_14)));
        local_c = fVar2;
      }
      if ((uVar5 == 0) && (uVar6 == 0)) {
        *param_2 = (int)ROUND(ROUND(param_1));
        *param_3 = (int)ROUND(ROUND(local_8));
        *param_4 = (int)ROUND(ROUND(local_c));
        *param_5 = (int)ROUND(ROUND(local_10));
        return 1;
      }
    } while ((uVar5 & uVar6) == 0);
  }
  return 0;
}

