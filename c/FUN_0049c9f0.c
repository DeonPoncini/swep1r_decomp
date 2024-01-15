#include "prototype.h"


void FUN_0049c9f0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int local_14;
  int local_10;
  float *local_c;
  
  local_10 = *param_2;
  DAT_00dfaa04 = 0;
  DAT_00dfaa1c = param_2[3];
  DAT_00dfaa08 = param_2[4];
  DAT_00dfaa20 = param_2[5];
  DAT_00dfaa18 = (int *)param_2[1];
  DAT_00dfaa24 = (int *)param_2[2];
  DAT_00dfaa14 = *(int *)(param_3 + 0xc);
  DAT_00dfaa0c = *(int *)(param_3 + 0x10);
  DAT_00dfaa10 = *(int *)(param_3 + 0x14);
  param_2 = (int *)0x0;
  if (0 < local_10) {
    iVar10 = 0;
    local_14 = 4;
    param_3 = 0;
    pfVar6 = (float *)(DAT_00dfaa18[local_10 + -1] * 0x10 + DAT_00dfaa20);
    pfVar5 = (float *)(DAT_00dfaa1c + DAT_00dfaa18[local_10 + -1] * 0xc);
    pfVar7 = (float *)(DAT_00dfaa1c + *DAT_00dfaa18 * 0xc);
    pfVar4 = (float *)(DAT_00dfaa08 + *DAT_00dfaa24 * 8);
    pfVar9 = (float *)(*DAT_00dfaa18 * 0x10 + DAT_00dfaa20);
    local_c = (float *)(DAT_00dfaa08 + DAT_00dfaa24[local_10 + -1] * 8);
    do {
      pfVar8 = pfVar4;
      if ((*(float *)(param_1 + 4) <= pfVar5[1]) || (*(float *)(param_1 + 4) <= pfVar7[1])) {
        if (((pfVar5[1] != *(float *)(param_1 + 4)) && (pfVar7[1] != *(float *)(param_1 + 4))) &&
           ((pfVar5[1] < *(float *)(param_1 + 4) || (pfVar7[1] < *(float *)(param_1 + 4))))) {
          fVar3 = (*(float *)(param_1 + 4) - pfVar5[1]) / (pfVar7[1] - pfVar5[1]);
          *(undefined4 *)(DAT_00dfaa14 + 4 + param_3) = *(undefined4 *)(param_1 + 4);
          *(float *)(DAT_00dfaa14 + 8 + param_3) = (pfVar7[2] - pfVar5[2]) * fVar3 + pfVar5[2];
          *(float *)(DAT_00dfaa14 + param_3) = (*pfVar7 - *pfVar5) * fVar3 + *pfVar5;
          *(float *)(DAT_00dfaa0c + (int)param_2 * 8) = (*pfVar8 - *local_c) * fVar3 + *local_c;
          *(float *)(DAT_00dfaa0c + 4 + (int)param_2 * 8) =
               (pfVar8[1] - local_c[1]) * fVar3 + local_c[1];
          *(float *)(DAT_00dfaa10 + iVar10) = (*pfVar9 - *pfVar6) * fVar3 + *pfVar6;
          *(float *)(DAT_00dfaa10 + 4 + iVar10) = (pfVar9[1] - pfVar6[1]) * fVar3 + pfVar6[1];
          param_2 = (int *)((int)param_2 + 1);
          iVar10 = iVar10 + 0x10;
          *(float *)(DAT_00dfaa10 + -8 + iVar10) = (pfVar9[2] - pfVar6[2]) * fVar3 + pfVar6[2];
          param_3 = param_3 + 0xc;
          *(float *)(DAT_00dfaa10 + -4 + iVar10) = (pfVar9[3] - pfVar6[3]) * fVar3 + pfVar6[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 1;
        }
        if (*(float *)(param_1 + 4) <= pfVar7[1]) {
          pfVar6 = (float *)(DAT_00dfaa14 + param_3);
          *pfVar6 = *pfVar7;
          pfVar6[1] = pfVar7[1];
          pfVar6[2] = pfVar7[2];
          *(float *)(DAT_00dfaa0c + (int)param_2 * 8) = *pfVar8;
          *(float *)(DAT_00dfaa0c + 4 + (int)param_2 * 8) = pfVar8[1];
          pfVar6 = (float *)(DAT_00dfaa10 + iVar10);
          *pfVar6 = *pfVar9;
          pfVar6[1] = pfVar9[1];
          pfVar6[2] = pfVar9[2];
          param_3 = param_3 + 0xc;
          pfVar6[3] = pfVar9[3];
          param_2 = (int *)((int)param_2 + 1);
          iVar10 = iVar10 + 0x10;
        }
      }
      piVar1 = (int *)((int)DAT_00dfaa18 + local_14);
      piVar2 = (int *)((int)DAT_00dfaa24 + local_14);
      local_14 = local_14 + 4;
      local_10 = local_10 + -1;
      pfVar6 = pfVar9;
      pfVar5 = pfVar7;
      pfVar7 = (float *)(DAT_00dfaa1c + *piVar1 * 0xc);
      pfVar4 = (float *)(DAT_00dfaa08 + *piVar2 * 8);
      pfVar9 = (float *)(*piVar1 * 0x10 + DAT_00dfaa20);
      local_c = pfVar8;
    } while (local_10 != 0);
  }
  if ((int)param_2 < 3) {
    DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
  }
  return;
}

