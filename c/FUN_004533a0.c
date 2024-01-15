#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004533a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_c0 [48];
  float local_90;
  float local_8c;
  float local_88;
  undefined local_80 [48];
  float local_50;
  float local_48;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 != 0) {
    FUN_0044bb10(local_c0,iVar2 + 0x20);
    local_88 = *(float *)(iVar2 + 0x250) + local_88;
    puVar1 = (undefined4 *)(param_1 + 0x84);
    puVar7 = (undefined4 *)(iVar2 + 0xac);
    puVar8 = puVar1;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_0044ed80(puVar1,param_1 + 0xb4);
    FUN_0044eeb0(puVar1,local_40,0xbc23d70a);
    local_10 = local_10 - *(float *)(param_1 + 0xe4);
    local_c = local_c - *(float *)(param_1 + 0xe8);
    local_8 = local_8 - *(float *)(param_1 + 0xec);
    fVar3 = local_8 * local_8 + local_c * local_c + local_10 * local_10;
    fVar4 = _DAT_004acda0;
    if (((float)_DAT_004aced0 < fVar3) &&
       (fVar4 = ((local_8 * local_88 + local_c * local_8c + local_10 * local_90) -
                (local_c * *(float *)(param_1 + 0xe8) +
                local_10 * *(float *)(param_1 + 0xe4) + local_8 * *(float *)(param_1 + 0xec))) /
                fVar3, _DAT_004acdc0 < fVar4)) {
      fVar4 = _DAT_004acdc0;
    }
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - fVar4 * _DAT_004aced8;
    FUN_0044ed80(puVar1,param_1 + 0xb4);
    FUN_0044bb10(local_80,param_1 + 0xb4);
    local_48 = local_88 - (float)_DAT_004acee0;
    local_50 = local_50 - (float)_DAT_004acee8;
    FUN_0044bb10(param_1 + 0x20,local_80);
    FUN_0044bb10(local_80,*(int *)(param_1 + 0xf4) + 0x20);
    FUN_0044bb10(param_1 + 0x108,local_80);
    *(undefined4 *)(param_1 + 0x2b0) = 0x42700000;
    return;
  }
  uVar5 = FUN_00450aa0(0x54657374,0);
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  return;
}

