#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004565e0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_38;
  float local_34;
  int local_30;
  undefined local_2c [4];
  int local_28 [4];
  undefined4 local_18;
  float local_14 [4];
  undefined4 local_4;
  
  local_28[0] = -1;
  local_28[1] = 0xffffffff;
  local_28[2] = 0xffffffff;
  local_28[3] = 0xffffffff;
  local_14[1] = 0.0;
  local_18 = 0xffffffff;
  local_14[2] = 0.0;
  local_14[3] = 0.0;
  local_4 = 0;
  iVar8 = 0;
  local_14[0] = 0.0;
  iVar10 = (&DAT_00e98f40)[param_1 * 0x17];
  iVar4 = (&DAT_00e98f44)[param_1 * 0x17] - iVar10;
  iVar1 = iVar4 + 3;
  local_38 = iVar4 + 2;
  local_30 = local_38;
  if (iVar10 <= (int)(&DAT_00e98f44)[param_1 * 0x17]) {
    pfVar7 = (float *)(&DAT_00e293d4 + iVar10 * 0x18);
    do {
      FUN_0042f380(pfVar7[-2],local_2c,&local_34);
      if (local_34 * pfVar7[-4] <= _DAT_004acf50) {
        local_14[local_38] = *pfVar7;
        local_28[local_38] = (iVar10 - (&DAT_00e98f40)[param_1 * 0x17]) + 0x46;
        local_38 = local_38 + -1;
      }
      else {
        local_14[iVar8] = *pfVar7;
        local_28[iVar8] = (iVar10 - (&DAT_00e98f40)[param_1 * 0x17]) + 0x46;
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar10 + 1;
      pfVar7 = pfVar7 + 6;
    } while (iVar10 <= (int)(&DAT_00e98f44)[param_1 * 0x17]);
  }
  local_28[iVar8] = param_1 + 0x3d;
  local_28[iVar8 + 1] = 0x45;
  if (0 < iVar8 + -1) {
    iVar10 = 1;
    iVar9 = 0;
    iVar11 = iVar10;
    do {
      for (; iVar10 < iVar8; iVar10 = iVar10 + 1) {
        if (*(float *)((int)local_14 + iVar9) < local_14[iVar10]) {
          iVar2 = *(int *)((int)local_28 + iVar9);
          *(int *)((int)local_28 + iVar9) = local_28[iVar10];
          local_28[iVar10] = iVar2;
        }
      }
      iVar10 = iVar11 + 1;
      iVar9 = iVar9 + 4;
      bVar3 = iVar11 < iVar8 + -1;
      iVar11 = iVar10;
    } while (bVar3);
  }
  if (local_38 < local_30) {
    iVar10 = local_38 * 4;
    do {
      local_38 = local_38 + 1;
      for (iVar8 = local_38; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        if (local_14[iVar8] < *(float *)((int)local_14 + iVar10)) {
          iVar11 = *(int *)((int)local_28 + iVar10);
          *(int *)((int)local_28 + iVar10) = local_28[iVar8];
          local_28[iVar8] = iVar11;
        }
      }
      iVar10 = iVar10 + 4;
    } while (local_38 < local_30);
    iVar10 = 0;
    piVar6 = &DAT_00e29160;
  }
  else {
    iVar10 = 0;
    piVar6 = &DAT_00e29160;
  }
  do {
    iVar8 = 0;
    if (0 < iVar1) {
      piVar5 = local_28 + iVar10;
      do {
        if (*(int *)(&DAT_00e29900)[local_28[iVar8]] == *piVar6) {
          iVar8 = *piVar5;
          iVar10 = iVar10 + 1;
          piVar5 = piVar5 + 1;
          *piVar6 = *(int *)(&DAT_00e29900)[iVar8];
          iVar8 = iVar4 + 4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0xe293bc);
  return;
}

