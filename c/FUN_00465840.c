#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465840(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_30;
  int local_28;
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_24[0] = 3;
  local_24[2] = 3;
  local_14 = 3;
  local_c = 3;
  local_4 = 3;
  iVar7 = *(int *)(param_1 + 0x1bc);
  local_28 = 4;
  local_24[1] = 4;
  local_24[3] = 4;
  local_10 = 4;
  local_8 = 4;
  FUN_0044eeb0(param_1 + 0x34,param_2,0);
  pfVar1 = (float *)(param_2 + 0x30);
  iVar6 = 4;
  iVar7 = 4 - iVar7;
  *pfVar1 = *pfVar1 - *(float *)(param_2 + 0x10) * _DAT_004ad4f4;
  pfVar2 = (float *)(param_2 + 0x14);
  iVar8 = 0;
  param_2 = 0;
  local_30 = param_3;
  param_1 = 4;
  *(float *)(iVar5 + 0x34) = *(float *)(iVar5 + 0x34) - *pfVar2 * _DAT_004ad4f4;
  *(float *)(iVar5 + 0x38) = *(float *)(iVar5 + 0x38) - *(float *)(iVar5 + 0x18) * _DAT_004ad4f4;
  if (3 < param_3) {
    piVar9 = &local_28;
    do {
      piVar9 = piVar9 + 1;
      param_3 = param_3 - iVar6;
      iVar8 = iVar8 + 1;
      iVar6 = *piVar9;
      iVar7 = iVar7 + iVar6;
      param_1 = iVar6;
      param_2 = iVar8;
      local_30 = param_3;
    } while (iVar6 <= param_3);
  }
  if (0 < iVar7) {
    param_1 = param_1 - iVar7;
  }
  fVar4 = (float)local_30 * _DAT_004ad2d8;
  fVar3 = ((float)param_1 - _DAT_004ad22c) * _DAT_004ad228 * _DAT_004ad29c;
  FUN_0042fa80(pfVar1,pfVar1,(float)param_2 * _DAT_004ad360,iVar5 + 0x10);
  FUN_0042fa80(pfVar1,pfVar1,fVar3 + fVar4,iVar5);
  return;
}

