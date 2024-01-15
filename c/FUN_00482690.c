#include "prototype.h"


void FUN_00482690(int param_1,undefined4 param_2,int param_3,float *param_4,undefined4 param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  float10 fVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + local_1c * 4);
      if (param_3 == 0) {
        uVar2 = FUN_0044c9d0(iVar1,param_2,param_4,param_5,param_6,param_7);
        FUN_00482320(uVar2);
      }
      else {
        psVar4 = *(short **)(iVar1 + 0x34);
        iVar3 = 0;
        if (0 < *(short *)(iVar1 + 0x3a)) {
          do {
            local_c = (float)(int)*psVar4;
            local_8 = (float)(int)psVar4[1];
            local_4 = (float)(int)psVar4[2];
            FUN_00430a00(&local_18,&local_c,param_2);
            fVar5 = (float10)FUN_0042f910(&local_18,param_5);
            if (fVar5 < (float10)*param_4) {
              *param_6 = local_18;
              param_6[1] = local_14;
              param_6[2] = local_10;
              *param_4 = (float)fVar5;
            }
            psVar4 = psVar4 + 8;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(short *)(iVar1 + 0x3a));
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x14));
  }
  return;
}

