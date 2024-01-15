#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432b80(int param_1,byte **param_2)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  float local_10 [4];
  
  iVar3 = *(int *)(param_1 + 0x54);
  pfVar4 = *(float **)(param_1 + 0x58);
  iVar9 = *(int *)(param_1 + 0x74);
  pbVar10 = *param_2;
  local_10[3] = 1.0;
  local_10[2] = 1.0;
  local_10[1] = 1.0;
  local_10[0] = 1.0;
  if (pbVar10 != (byte *)0x0) {
    iVar11 = *(int *)(pbVar10 + 0xc);
    if (iVar11 != 0) {
      if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
        local_10[0] = (float)(uint)*(byte *)(iVar11 + 0x22) * _DAT_004ac730;
        local_10[1] = (float)(uint)*(byte *)(iVar11 + 0x23) * _DAT_004ac730;
        local_10[2] = (float)(uint)*(byte *)(iVar11 + 0x24) * _DAT_004ac730;
      }
      if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
        local_10[3] = (float)(uint)*(byte *)(iVar11 + 0x25) * _DAT_004ac730;
      }
    }
    if (((*pbVar10 & 0x11) == 0) && ((*(byte *)(param_1 + 0x88) & 4) == 0)) {
      if (iVar9 != 0) {
        pbVar10 = param_2[0xd] + 0xc;
        pfVar5 = pfVar4;
        param_1 = iVar9;
        do {
          uVar7 = 0;
          pfVar6 = pfVar5;
          pfVar8 = local_10;
          do {
            pbVar1 = pbVar10 + uVar7;
            uVar7 = uVar7 + 1;
            pfVar5 = pfVar6 + 1;
            fVar2 = (float)(uint)*pbVar1 * *pfVar8 * _DAT_004ac730;
            *(float *)((iVar3 - (int)pfVar4) + -4 + (int)pfVar5) = fVar2;
            *pfVar6 = fVar2;
            pfVar6 = pfVar5;
            pfVar8 = pfVar8 + 1;
          } while (uVar7 < 4);
          pbVar10 = pbVar10 + 0x10;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
        return;
      }
    }
    else if (iVar9 != 0) {
      pbVar10 = param_2[0xd] + 0xf;
      pfVar5 = pfVar4 + 3;
      param_2 = (byte **)iVar9;
      do {
        pfVar8 = local_10;
        pfVar6 = pfVar5 + -3;
        iVar9 = iVar3 - (int)pfVar4;
        iVar11 = 4;
        do {
          fVar2 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *(float *)((int)pfVar6 + iVar9) = fVar2;
          *pfVar6 = fVar2;
          pfVar6 = pfVar6 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if ((*(byte *)(param_1 + 0x88) & 4) != 0) {
          fVar2 = (float)(uint)*pbVar10 * local_10[3] * _DAT_004ac730;
          *(float *)((int)pfVar5 + iVar9) = fVar2;
          *pfVar5 = fVar2;
        }
        pbVar10 = pbVar10 + 0x10;
        pfVar5 = pfVar5 + 4;
        param_2 = (byte **)((int)param_2 + -1);
      } while (param_2 != (byte **)0x0);
    }
  }
  return;
}

