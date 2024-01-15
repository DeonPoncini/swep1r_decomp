#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493b80(undefined4 param_1,uint *param_2,int *param_3,float *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint local_8;
  
  puVar8 = param_2;
  DAT_00df7f80 = param_2[5];
  DAT_00df7f7c = param_3[5];
  uVar2 = param_2[6];
  iVar9 = 0;
  if ((uVar2 != 0) && (local_8 = 0, DAT_00df7f78 = uVar2, *param_2 != 0)) {
    param_2 = (uint *)0x0;
    do {
      iVar3 = *(int *)(puVar8[1] + local_8 * 4);
      iVar4 = *(int *)(puVar8[2] + local_8 * 4);
      iVar10 = iVar3 * 0x10;
      fVar6 = *(float *)(DAT_00df7f80 + iVar10) + *(float *)(DAT_00df7f78 + iVar9);
      fVar7 = _DAT_004af968;
      if ((_DAT_004af968 <= fVar6) && (fVar7 = fVar6, _DAT_004af96c < fVar6)) {
        fVar7 = _DAT_004af96c;
      }
      iVar12 = local_8 * 8;
      *(float *)(DAT_00df7f7c + iVar9) = fVar7;
      uVar2 = puVar8[4];
      iVar5 = param_3[4];
      *(undefined4 *)(iVar12 + iVar5) = *(undefined4 *)(uVar2 + iVar4 * 8);
      ((undefined4 *)(iVar12 + iVar5))[1] = *(undefined4 *)(uVar2 + 4 + iVar4 * 8);
      fVar6 = *(float *)(DAT_00df7f80 + 4 + iVar10) + *(float *)(DAT_00df7f78 + 4 + iVar9);
      fVar7 = _DAT_004af968;
      if ((_DAT_004af968 <= fVar6) && (fVar7 = fVar6, _DAT_004af96c < fVar6)) {
        fVar7 = _DAT_004af96c;
      }
      *(float *)(DAT_00df7f7c + 4 + iVar9) = fVar7;
      puVar1 = (undefined4 *)(puVar8[3] + iVar3 * 0xc);
      puVar11 = (undefined4 *)(param_3[3] + (int)param_2);
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      puVar11[2] = puVar1[2];
      fVar6 = *(float *)(DAT_00df7f80 + 8 + iVar10) + *(float *)(DAT_00df7f78 + 8 + iVar9);
      fVar7 = _DAT_004af968;
      if ((_DAT_004af968 <= fVar6) && (fVar7 = fVar6, _DAT_004af96c < fVar6)) {
        fVar7 = _DAT_004af96c;
      }
      *(float *)(DAT_00df7f7c + 8 + iVar9) = fVar7;
      *(float *)(param_3[4] + iVar12) = *param_4 + *(float *)(param_3[4] + iVar12);
      *(float *)(iVar12 + 4 + param_3[4]) = *(float *)(iVar12 + 4 + param_3[4]) + param_4[1];
      fVar6 = *(float *)(DAT_00df7f80 + 0xc + iVar10) + *(float *)(DAT_00df7f78 + 0xc + iVar9);
      fVar7 = _DAT_004af968;
      if ((_DAT_004af968 <= fVar6) && (fVar7 = fVar6, _DAT_004af96c < fVar6)) {
        fVar7 = _DAT_004af96c;
      }
      local_8 = local_8 + 1;
      *(float *)(DAT_00df7f7c + 0xc + iVar9) = fVar7;
      param_2 = (uint *)((int)param_2 + 0xc);
      iVar9 = iVar9 + 0x10;
    } while (local_8 < *puVar8);
  }
  if (*DAT_00df7f2c == 1) {
    iVar9 = FUN_0049c810(param_1,puVar8);
    *param_3 = iVar9;
    if (iVar9 != 0) {
      iVar9 = FUN_0049c9f0(param_1,puVar8,param_3);
      *param_3 = iVar9;
      return;
    }
  }
  else {
    iVar9 = FUN_0049b7d0(param_1,param_3[3],param_3[4],DAT_00df7f7c,*puVar8);
    *param_3 = iVar9;
  }
  return;
}

