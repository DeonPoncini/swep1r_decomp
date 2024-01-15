#include "prototype.h"


void FUN_004819b0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10 [4];
  
  *param_2 = 0x3f800000;
  param_2[5] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[0xf] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  iVar8 = *param_1;
  puVar9 = param_2;
  while (iVar8 != 0) {
    uVar4 = FUN_00431770(*param_1);
    if ((uVar4 & 0x8000) != 0) {
      puVar2 = (undefined4 *)*param_1;
      if (uVar4 == 0xd065) {
        puVar9 = puVar2;
      }
      local_40 = puVar2[7];
      local_3c = puVar2[8];
      local_38 = puVar2[9];
      local_30 = puVar2[10];
      local_2c = puVar2[0xb];
      local_28 = puVar2[0xc];
      local_20 = puVar2[0xd];
      local_1c = puVar2[0xe];
      local_18 = puVar2[0xf];
      local_10[0] = (float)puVar2[0x10];
      local_10[1] = (float)puVar2[0x11];
      local_10[2] = (float)puVar2[0x12];
      local_34 = 0;
      local_24 = 0;
      local_14 = 0;
      local_10[3] = 1.0;
      if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
        iVar8 = 3;
        pfVar5 = local_10;
        pfVar6 = (float *)(puVar2 + 0xd);
        pfVar7 = (float *)(puVar9 + 0x13);
        do {
          iVar8 = iVar8 + -1;
          fVar3 = -(pfVar6[-6] * (float)puVar9[0x13]) + *pfVar5;
          *pfVar5 = fVar3;
          fVar3 = -(pfVar6[-3] * (float)puVar9[0x14]) + fVar3;
          *pfVar5 = fVar3;
          fVar3 = -(*pfVar6 * (float)puVar9[0x15]) + fVar3;
          *pfVar5 = fVar3;
          *pfVar5 = *pfVar7 + fVar3;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar8 != 0);
      }
      FUN_0042fb70(param_2,&local_40,param_2);
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar8 = *piVar1;
  }
  return;
}

