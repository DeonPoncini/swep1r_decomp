#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f060(undefined4 *param_1,float param_2,int param_3,short *param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_9c;
  float local_98;
  int local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [12];
  
  bVar2 = false;
  local_7c = 0;
  iVar3 = FUN_0044e620(param_1,0);
  if ((float)(&DAT_00e22a60)[iVar3 * 2] <= _DAT_004adf40) {
    if (param_1[0xb] == 0) {
      local_7c = 1;
      local_90 = _DAT_004adf40;
    }
    else {
      local_90 = (float)(&DAT_00e22a60)[param_1[4] * 2];
    }
    (&DAT_00e22a60)[iVar3 * 2] = local_90;
    local_78 = _DAT_004adf4c / param_2;
    puVar5 = param_1;
    puVar7 = local_30;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_30[2] = 0;
    local_9c = 0.0;
    FUN_0044ed80(local_30,&local_70);
    local_88 = local_40;
    local_84 = local_3c;
    local_80 = local_38;
    local_94 = 0;
    iVar3 = -1;
    do {
      iVar4 = iVar3;
      local_8c = 0.0;
      local_94 = local_94 + 1;
      iVar3 = 1;
      fVar1 = _DAT_004adf4c;
      while (fVar1 < param_2) {
        local_8c = local_8c + local_78;
        FUN_0044eeb0(local_30,&local_70,local_8c);
        fVar8 = (float10)FUN_0042f950(&local_88,&local_40);
        iVar3 = iVar3 + 1;
        local_9c = (float)(fVar8 + (float10)local_9c);
        local_88 = local_40;
        local_84 = local_3c;
        local_80 = local_38;
        local_74 = iVar3;
        fVar1 = (float)iVar3;
      }
      local_30[2] = 0x3f800000;
      FUN_0044ed80(local_30,&local_70);
      iVar3 = FUN_0044e620(local_30,0);
      if (iVar4 == iVar3) {
        bVar2 = true;
        local_98 = 1.0;
        if (DAT_004c7be4 == -2) {
          _DAT_00e25960 = local_70;
          DAT_00e25964 = local_6c;
          DAT_00e25968 = local_68;
          DAT_00e2596c = local_64;
          DAT_00e25970 = local_60;
          DAT_00e25974 = local_5c;
          DAT_00e25978 = local_58;
          DAT_00e2597c = local_54;
          DAT_00e25980 = local_50;
          DAT_00e25984 = local_4c;
          DAT_00e25988 = local_48;
          DAT_00e2598c = local_44;
          DAT_00e25990 = local_40;
          DAT_00e25994 = local_3c;
          DAT_00e25998 = local_38;
          DAT_00e2599c = local_34;
          DAT_004c7be4 = iVar3;
        }
        else {
          DAT_004c7be4 = -3;
        }
      }
      else {
        fVar8 = (float10)FUN_0042f950(&local_88,&local_40);
        local_84 = local_3c;
        local_88 = local_40;
        local_80 = local_38;
        local_9c = (float)(fVar8 + (float10)local_9c);
        if (_DAT_004adf40 <= (float)(&DAT_00e22a60)[iVar3 * 2]) {
          local_98 = (float)(&DAT_00e22a60)[iVar3 * 2];
          bVar2 = true;
        }
        else {
          local_30[2] = 0;
          (&DAT_00e22a60)[iVar3 * 2] = local_9c;
        }
      }
    } while (!bVar2);
    if (local_98 == _DAT_004adf40) {
      local_98 = 1.0;
    }
    if (local_7c != 0) {
      _DAT_004c7be0 = local_9c;
    }
    puVar5 = local_30;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar6 = 0;
    iVar3 = iVar4;
    if (0 < local_94) {
      do {
        iVar4 = FUN_0044e620(local_30,0);
        *(short *)(param_3 + iVar4 * 2) = *param_4;
        fVar1 = ((float)(&DAT_00e22a60)[iVar4 * 2] - local_90) / local_9c;
        fVar1 = fVar1 * local_98 + (_DAT_004adf4c - fVar1) * local_90;
        (&DAT_00e22a60)[iVar4 * 2] = fVar1;
        if (iVar6 != 0) {
          *(float *)(&DAT_00e22a64 + iVar3 * 8) = fVar1 - (float)(&DAT_00e22a60)[iVar3 * 2];
        }
        local_30[2] = 0x3f800000;
        FUN_0044ed80(local_30,&local_70);
        iVar6 = iVar6 + 1;
        local_30[2] = 0;
        iVar3 = iVar4;
      } while (iVar6 < local_94);
    }
    *(float *)(&DAT_00e22a64 + iVar4 * 8) = local_98 - (float)(&DAT_00e22a60)[iVar4 * 2];
    *param_4 = *param_4 + 1;
  }
  return;
}

