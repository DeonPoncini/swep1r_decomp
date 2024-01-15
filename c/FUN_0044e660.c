#include "prototype.h"


void FUN_0044e660(short *param_1,byte param_2,float param_3,int *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined *puVar10;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_8 = param_3;
  local_c = param_3 * param_3;
  local_4 = 0x3f800000;
  local_10 = local_c * param_3;
  if (*param_1 == 0) {
    FUN_00430ab0(&local_20,&local_10,&DAT_004c3c38);
    iVar4 = *(int *)(param_1 + 6);
    pfVar9 = (float *)(iVar4 + 0x10 + *param_4 * 0x54);
    pfVar8 = (float *)(iVar4 + 0x10 + param_4[1] * 0x54);
    pfVar7 = (float *)(iVar4 + 0x10 + param_4[2] * 0x54);
    pfVar6 = (float *)(iVar4 + 0x10 + param_4[3] * 0x54);
  }
  else {
    FUN_00430ab0(&local_20,&local_10,&DAT_004c3cf8);
    iVar4 = *(int *)(param_1 + 6) + *param_4 * 0x54;
    pfVar9 = (float *)(iVar4 + 0x10);
    pfVar8 = (float *)(iVar4 + 0x34);
    iVar4 = *(int *)(param_1 + 6) + param_4[1] * 0x54;
    pfVar7 = (float *)(iVar4 + 0x28);
    pfVar6 = (float *)(iVar4 + 0x10);
  }
  if ((param_2 & 1) != 0) {
    *param_5 = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[1] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[2] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  if ((param_2 & 8) != 0) {
    if (*param_1 == 1) {
      param_5[0xb] = 1.0;
      param_5[9] = 0.0;
      param_5[10] = 0.0;
    }
    else {
      iVar5 = *(int *)(param_1 + 6);
      pfVar1 = (float *)(iVar5 + 0x1c + *param_4 * 0x54);
      pfVar2 = (float *)(iVar5 + 0x1c + param_4[1] * 0x54);
      iVar4 = iVar5 + 0x1c + param_4[2] * 0x54;
      iVar3 = iVar5 + 0x1c + param_4[3] * 0x54;
      param_5[9] = *(float *)(iVar5 + 0x1c + param_4[3] * 0x54) * local_14 +
                   *pfVar1 * local_20 +
                   *(float *)(iVar5 + 0x1c + param_4[2] * 0x54) * local_18 + *pfVar2 * local_1c;
      param_5[10] = pfVar2[1] * local_1c +
                    *(float *)(iVar4 + 4) * local_18 +
                    pfVar1[1] * local_20 + *(float *)(iVar3 + 4) * local_14;
      param_5[0xb] = *(float *)(iVar3 + 8) * local_14 +
                     pfVar2[2] * local_1c + *(float *)(iVar4 + 8) * local_18 + pfVar1[2] * local_20;
    }
  }
  if ((param_2 & 2) != 0) {
    if (*param_1 == 0) {
      puVar10 = &DAT_004c3c78;
    }
    else {
      puVar10 = &DAT_004c3d38;
    }
    FUN_00430ab0(&local_20,&local_10,puVar10);
    param_5[3] = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[4] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[5] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  if ((param_2 & 4) != 0) {
    if (*param_1 == 0) {
      puVar10 = &DAT_004c3cb8;
    }
    else {
      puVar10 = &DAT_004c3d78;
    }
    FUN_00430ab0(&local_20,&local_10,puVar10);
    param_5[6] = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[7] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[8] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  return;
}

