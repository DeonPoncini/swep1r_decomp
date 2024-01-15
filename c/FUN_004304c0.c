#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004304c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_28;
  float *local_24;
  float *local_20;
  int local_18;
  float local_c [3];
  
  local_20 = local_c;
  iVar9 = 0;
  pfVar11 = param_2;
  do {
    iVar7 = 0;
    local_28 = 0.0;
    pfVar6 = pfVar11;
    do {
      *(float *)(((int)param_1 - (int)param_2) + (int)pfVar6) = *pfVar6;
      fVar1 = *pfVar6;
      if (*pfVar6 < _DAT_004ac678) {
        fVar1 = -fVar1;
      }
      if (local_28 < fVar1) {
        if (fVar1 == _DAT_004ac678) {
          return 0;
        }
        *local_20 = _DAT_004ac67c / fVar1;
        local_28 = fVar1;
      }
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar7 < 3);
    iVar9 = iVar9 + 1;
    pfVar11 = pfVar11 + 4;
    local_20 = local_20 + 1;
  } while (iVar9 < 3);
  iVar7 = 0;
  iVar9 = (int)param_3 - (int)param_1;
  local_20 = param_1;
  local_24 = param_1;
  pfVar11 = param_1;
  while( true ) {
    iVar10 = 0;
    pfVar6 = param_1;
    pfVar4 = pfVar11;
    if (0 < iVar7) {
      do {
        fVar1 = *pfVar4;
        pfVar3 = pfVar11;
        pfVar5 = pfVar6;
        iVar8 = iVar10;
        if (0 < iVar10) {
          do {
            iVar8 = iVar8 + -1;
            fVar1 = fVar1 - *pfVar3 * *pfVar5;
            pfVar3 = pfVar3 + 4;
            pfVar5 = pfVar5 + 1;
          } while (iVar8 != 0);
        }
        *pfVar4 = fVar1;
        iVar10 = iVar10 + 1;
        pfVar6 = pfVar6 + 4;
        pfVar4 = pfVar4 + 4;
      } while (iVar10 < iVar7);
    }
    local_28 = 0.0;
    if (iVar7 < 3) {
      param_3 = (float *)(((int)local_c - (int)param_1) + (int)pfVar11);
      pfVar6 = local_20;
      pfVar4 = local_24;
      iVar10 = iVar7;
      do {
        fVar1 = *pfVar6;
        pfVar3 = pfVar11;
        pfVar5 = pfVar4;
        iVar8 = iVar7;
        if (0 < iVar7) {
          do {
            iVar8 = iVar8 + -1;
            fVar1 = fVar1 - *pfVar3 * *pfVar5;
            pfVar3 = pfVar3 + 4;
            pfVar5 = pfVar5 + 1;
          } while (iVar8 != 0);
        }
        bVar2 = fVar1 < _DAT_004ac678;
        *pfVar6 = fVar1;
        if (bVar2) {
          fVar1 = -fVar1;
        }
        if (local_28 <= fVar1 * *param_3) {
          local_28 = fVar1 * *param_3;
          local_18 = iVar10;
        }
        iVar10 = iVar10 + 1;
        pfVar4 = pfVar4 + 4;
        pfVar6 = pfVar6 + 4;
        param_3 = param_3 + 1;
      } while (iVar10 < 3);
    }
    if (iVar7 != local_18) {
      pfVar4 = param_1 + local_18 * 4;
      iVar10 = 3;
      pfVar6 = local_24;
      do {
        fVar1 = *pfVar4;
        *pfVar4 = *pfVar6;
        pfVar4 = pfVar4 + 1;
        *pfVar6 = fVar1;
        iVar10 = iVar10 + -1;
        pfVar6 = pfVar6 + 1;
      } while (iVar10 != 0);
      local_c[local_18] = *(float *)(((int)local_c - (int)param_1) + (int)pfVar11);
    }
    *(int *)(iVar9 + (int)pfVar11) = local_18;
    if (*local_20 == _DAT_004ac678) break;
    if (iVar7 != 2) {
      fVar1 = _DAT_004ac67c / *local_20;
      if (iVar7 + 1 < 3) {
        iVar10 = 3 - (iVar7 + 1);
        pfVar6 = (float *)((int)param_1 * -3 + 0x10 + (int)pfVar11 * 4 + iVar7 * 4);
        do {
          iVar10 = iVar10 + -1;
          *pfVar6 = *pfVar6 * fVar1;
          pfVar6 = pfVar6 + 4;
        } while (iVar10 != 0);
      }
    }
    iVar7 = iVar7 + 1;
    local_24 = local_24 + 4;
    pfVar11 = pfVar11 + 1;
    local_20 = local_20 + 5;
    if (2 < iVar7) {
      return 1;
    }
  }
  return 0;
}

