#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482120(short *param_1,short *param_2,short *param_3,undefined4 param_4,float *param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];
  
  local_7c = (float)(int)*param_1;
  local_78 = (float)(int)param_1[1];
  local_74 = (float)(int)param_1[2];
  local_88 = (float)(int)*param_2;
  local_84 = (float)(int)param_2[1];
  local_80 = (float)(int)param_2[2];
  local_70 = (float)(int)*param_3;
  local_6c = (float)(int)param_3[1];
  local_68 = (float)(int)param_3[2];
  FUN_00430a00(local_58,&local_7c,param_4);
  FUN_00430a00(local_4c,&local_88,param_4);
  FUN_00430a00(local_64,&local_70,param_4);
  fVar2 = (float10)FUN_00480dc0(param_6,local_58,local_4c,local_64,*param_5,&local_a0,&local_94);
  if (((float10)_DAT_004ae018 <= fVar2) && (fVar2 < (float10)*param_5)) {
    *param_7 = local_a0;
    param_7[1] = local_9c;
    param_7[2] = local_98;
    *param_8 = local_94;
    param_8[1] = local_90;
    param_8[2] = local_8c;
    *param_5 = (float)fVar2;
    if (-1 < DAT_0050ccd0) {
      iVar1 = 0;
      if (0 < DAT_0050ccd0) {
        do {
          *(undefined4 *)(DAT_00e229dc + iVar1 * 4) = (&DAT_00e229e0)[iVar1];
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_0050ccd0);
      }
      *(undefined4 *)(DAT_00e229dc + DAT_0050ccd0 * 4) = 0;
      FUN_00430810(local_40,param_4);
      FUN_00430a00(&DAT_00e229d0,&local_a0,local_40);
      FUN_00430980(&DAT_00e229c0,&local_94,local_40);
      return;
    }
  }
  return;
}

