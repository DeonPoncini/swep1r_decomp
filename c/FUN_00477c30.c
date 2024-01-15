#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477c30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_108 = *(float *)(param_1 + 0x20);
  pfVar1 = (float *)(param_1 + 0x20);
  pfVar2 = (float *)(param_1 + 0x30);
  local_104 = *(float *)(param_1 + 0x24);
  local_100 = *(float *)(param_1 + 0x28);
  local_f8 = *pfVar2;
  local_f4 = *(float *)(param_1 + 0x34);
  local_f0 = *(float *)(param_1 + 0x38);
  local_e8 = *(float *)(param_1 + 0x40);
  local_e4 = *(float *)(param_1 + 0x44);
  local_e0 = *(float *)(param_1 + 0x48);
  if (((((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc < (float)_DAT_004adc90)
      || ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)
     ) {
    local_114 = -local_f8;
    local_110 = local_f4;
    fVar5 = (float10)FUN_00480670(local_114 * local_114 + local_f4 * local_f4);
    if (fVar5 < (float10)_DAT_004adcbc) {
      local_114 = -local_e8;
      local_110 = local_e4;
      fVar5 = (float10)FUN_00480670(local_114 * local_114 + local_e4 * local_e4);
    }
    local_110 = (float)((float10)local_110 / fVar5);
    local_114 = (float)((float10)local_114 / fVar5);
    FUN_00431150(&local_40,param_3[2],local_f8,local_f4,local_f0);
    FUN_0042f380(param_3[1],&local_84,&local_10c);
    local_88 = local_114 * local_114;
    fVar3 = local_10c * local_88 + local_110 * local_110;
    local_b4 = local_10c * local_110 * local_110 + local_88;
    local_c4 = (_DAT_004adc50 - local_10c) * local_114 * local_110;
    local_b0 = local_110 * local_84;
    local_c0 = -(local_114 * local_84);
    local_a8 = -local_c0;
    local_a4 = -local_b0;
    local_80 = local_38 * local_a8 + local_3c * local_c4 + local_40 * fVar3;
    local_7c = local_38 * local_a4 + local_3c * local_b4 + local_40 * local_c4;
    local_78 = local_10c * local_38 + local_3c * local_b0 + local_40 * local_c0;
    local_70 = local_28 * local_a8 + local_2c * local_c4 + local_30 * fVar3;
    local_6c = local_28 * local_a4 + local_2c * local_b4 + local_30 * local_c4;
    local_68 = local_10c * local_28 + local_2c * local_b0 + local_30 * local_c0;
    local_60 = local_18 * local_a8 + local_1c * local_c4 + local_20 * fVar3;
    local_5c = local_18 * local_a4 + local_1c * local_b4 + local_20 * local_c4;
    local_58 = local_10c * local_18 + local_1c * local_b0 + local_20 * local_c0;
    FUN_0042f380(*param_3,&local_11c,&local_118);
    local_c8 = local_118 * local_80 - local_11c * local_7c;
    local_c4 = local_11c * local_80 + local_118 * local_7c;
    local_b8 = local_118 * local_70 - local_11c * local_6c;
    local_b4 = local_11c * local_70 + local_118 * local_6c;
    local_a8 = local_118 * local_60 - local_11c * local_5c;
    fVar3 = local_11c * local_60 + local_118 * local_5c;
    *pfVar1 = local_100 * local_a8 + local_104 * local_b8 + local_108 * local_c8;
    *(float *)(param_1 + 0x24) = local_100 * fVar3 + local_104 * local_b4 + local_108 * local_c4;
    *(float *)(param_1 + 0x28) = local_100 * local_58 + local_104 * local_68 + local_108 * local_78;
    *pfVar2 = local_f0 * local_a8 + local_f4 * local_b8 + local_f8 * local_c8;
    *(float *)(param_1 + 0x34) = local_f0 * fVar3 + local_f4 * local_b4 + local_f8 * local_c4;
    *(float *)(param_1 + 0x38) = local_f0 * local_58 + local_f4 * local_68 + local_f8 * local_78;
    *(float *)(param_1 + 0x40) = local_e0 * local_a8 + local_e4 * local_b8 + local_e8 * local_c8;
    *(float *)(param_1 + 0x44) = local_e0 * fVar3 + local_e4 * local_b4 + local_e8 * local_c4;
    *(float *)(param_1 + 0x48) = local_e0 * local_58 + local_e4 * local_68 + local_e8 * local_78;
  }
  else {
    FUN_0042f380(*param_3,&local_11c,&local_118);
    *pfVar1 = local_118 * local_108 - local_11c * local_104;
    *(float *)(param_1 + 0x24) = local_118 * local_104 + local_11c * local_108;
    *pfVar2 = local_118 * local_f8 - local_11c * local_f4;
    *(float *)(param_1 + 0x34) = local_118 * local_f4 + local_11c * local_f8;
    *(float *)(param_1 + 0x28) = local_100;
    *(float *)(param_1 + 0x40) = local_118 * local_e8 - local_11c * local_e4;
    *(float *)(param_1 + 0x38) = local_f0;
    *(float *)(param_1 + 0x48) = local_e0;
    *(float *)(param_1 + 0x44) = local_118 * local_e4 + local_11c * local_e8;
  }
  iVar4 = *(int *)(param_1 + 0x1e6c) + -1;
  *(int *)(param_1 + 0x1e6c) = iVar4;
  if (iVar4 < 0) {
    FUN_0042f9b0(pfVar1);
    FUN_0042f9b0(pfVar2);
    FUN_0042f9b0(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1e6c) = 8;
  }
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  return;
}

