#include "prototype.h"


void FUN_00430810(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_58 [3];
  undefined local_4c [12];
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar5 = FUN_004304c0(param_1,param_2,local_4c);
  if (iVar5 != 0) {
    iVar5 = 0;
    do {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      *(undefined4 *)((int)local_58 + iVar5) = 0x3f800000;
      FUN_00430730(param_1,local_4c,local_58);
      puVar7 = local_58;
      puVar6 = (undefined4 *)((int)local_40 + iVar5);
      iVar8 = 3;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0xc);
    *param_1 = local_40[0];
    param_1[1] = local_40[1];
    param_1[2] = local_40[2];
    param_1[4] = local_30;
    param_1[0xf] = 1.0;
    param_1[5] = local_2c;
    param_1[6] = local_28;
    param_1[8] = local_20;
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[9] = local_1c;
    param_1[0xb] = 0.0;
    param_1[10] = local_18;
    fVar1 = *(float *)(param_2 + 0x34);
    fVar2 = *(float *)(param_2 + 0x30);
    fVar4 = *(float *)(param_2 + 0x38);
    param_1[0xc] = -(fVar2 * local_40[0] + fVar4 * local_20 + fVar1 * local_30);
    param_1[0xd] = -(fVar2 * local_40[1] + fVar4 * local_1c + fVar1 * local_2c);
    param_1[0xe] = -(fVar2 * local_40[2] + fVar4 * local_18 + fVar1 * local_28);
  }
  return;
}

