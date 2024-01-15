#include "prototype.h"


int FUN_00450e70(int param_1,float *param_2,float param_3,int param_4,int param_5,float *param_6,
                int param_7,int param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_1c;
  int local_18;
  
  iVar11 = 0;
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  local_1c = 0;
  puVar10 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return iVar11;
    }
    if (((*piVar1 == param_1) || (param_1 == 0x416c6c21)) && ((*(byte *)(piVar1 + 1) & 1) != 0)) {
      iVar12 = piVar1[4];
      local_18 = 0;
      if (0 < piVar1[2]) {
        do {
          if (((*(ushort *)(iVar12 + 6) & 0x100) == 0) && (iVar12 != param_4)) {
            fVar4 = *(float *)(iVar12 + 0x50) - *param_2;
            fVar2 = *(float *)(iVar12 + 0x54) - param_2[1];
            fVar5 = *(float *)(iVar12 + 0x58) - param_2[2];
            fVar3 = fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4;
            if (fVar3 < param_3) {
              iVar13 = 0;
              pfVar7 = param_6;
              if (0 < iVar11) {
                do {
                  if (fVar3 <= *pfVar7) break;
                  iVar13 = iVar13 + 1;
                  pfVar7 = pfVar7 + 1;
                } while (iVar13 < iVar11);
              }
              if (iVar13 < param_5) {
                if (iVar11 < param_5) {
                  local_1c = iVar11 + 1;
                  iVar8 = iVar11;
                  iVar11 = local_1c;
                }
                else {
                  iVar8 = param_5 + -1;
                }
                if (iVar13 < iVar8) {
                  pfVar7 = param_6 + iVar8;
                  iVar9 = iVar8 - iVar13;
                  puVar6 = (undefined4 *)(param_7 + iVar8 * 0xc);
                  do {
                    *(undefined4 *)((param_8 - (int)param_6) + (int)pfVar7) =
                         *(undefined4 *)((param_8 - (int)param_6) + -4 + (int)pfVar7);
                    *pfVar7 = pfVar7[-1];
                    *puVar6 = puVar6[-3];
                    puVar6[1] = puVar6[-2];
                    puVar6[2] = puVar6[-1];
                    pfVar7 = pfVar7 + -1;
                    iVar9 = iVar9 + -1;
                    puVar6 = puVar6 + -3;
                    iVar11 = local_1c;
                  } while (iVar9 != 0);
                }
                param_6[iVar13] = fVar3;
                *(int *)(param_8 + iVar13 * 4) = iVar12;
                *(float *)(param_7 + iVar13 * 0xc) = fVar4;
                iVar13 = param_7 + iVar13 * 0xc;
                *(float *)(iVar13 + 4) = fVar2;
                *(float *)(iVar13 + 8) = fVar5;
              }
            }
          }
          iVar12 = iVar12 + piVar1[3];
          local_18 = local_18 + 1;
        } while (local_18 < piVar1[2]);
      }
    }
    piVar1 = *(int **)(puVar10 + 4);
    puVar10 = puVar10 + 4;
  } while( true );
}

