#include "prototype.h"


void FUN_004816f0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if (param_3 != 0) {
    iVar6 = FUN_00431770(param_3);
    FUN_0044bb10(&local_84,param_4);
    if (iVar6 != 0x5064) {
      if ((iVar6 < 0xd064) || (0xd065 < iVar6)) {
        if (param_1 != param_3) {
          return;
        }
        param_2[1] = local_80;
        param_2[2] = local_7c;
        param_2[3] = local_78;
        param_2[4] = local_74;
        param_2[5] = local_70;
        param_2[6] = local_6c;
        param_2[7] = local_68;
        param_2[8] = local_64;
        param_2[9] = local_60;
        *param_2 = local_84;
        param_2[10] = local_5c;
        param_2[0xb] = local_58;
        param_2[0xc] = local_54;
        param_2[0xd] = local_50;
        param_2[0xe] = local_4c;
        param_2[0xf] = local_48[0];
        return;
      }
      iVar9 = local_4;
      if (iVar6 == 0xd065) {
        iVar9 = param_3;
      }
      local_48[1] = *(float *)(undefined4 *)(param_3 + 0x1c);
      local_48[2] = *(float *)(param_3 + 0x20);
      local_48[3] = *(float *)(param_3 + 0x24);
      local_34 = *(undefined4 *)(param_3 + 0x28);
      local_30 = *(undefined4 *)(param_3 + 0x2c);
      local_2c = *(float *)(param_3 + 0x30);
      pfVar7 = (float *)(param_3 + 0x34);
      local_24 = *(undefined4 *)(param_3 + 0x34);
      local_20 = *(undefined4 *)(param_3 + 0x38);
      local_1c = *(undefined4 *)(param_3 + 0x3c);
      local_38 = 0;
      local_14 = *(undefined4 *)(param_3 + 0x40);
      local_10 = *(undefined4 *)(param_3 + 0x44);
      local_c = *(undefined4 *)(param_3 + 0x48);
      local_28 = 0;
      local_18 = 0;
      local_8 = 0x3f800000;
      if ((*(byte *)(param_3 + 0xc) & 0x10) != 0) {
        iVar6 = 3;
        pfVar8 = (float *)(iVar9 + 0x4c);
        do {
          pfVar1 = pfVar7 + -3;
          fVar4 = *pfVar7;
          pfVar2 = pfVar7 + -6;
          pfVar3 = (float *)(((int)&local_2c - (int)(undefined4 *)(param_3 + 0x1c)) + (int)pfVar7);
          pfVar7 = pfVar7 + 1;
          iVar6 = iVar6 + -1;
          *pfVar3 = *pfVar8 + -(*pfVar2 * *(float *)(iVar9 + 0x4c)) +
                              -(*pfVar1 * *(float *)(iVar9 + 0x50)) +
                              -(fVar4 * *(float *)(iVar9 + 0x54)) + *pfVar3;
          pfVar8 = pfVar8 + 1;
        } while (iVar6 != 0);
      }
      FUN_0042fb70(&local_84,(undefined4 *)((int)register0x00000010 + -0x44),param_4);
    }
    if (param_1 == param_3) {
      *param_2 = local_84;
      param_2[1] = local_80;
      param_2[2] = local_7c;
      param_2[3] = local_78;
      param_2[4] = local_74;
      param_2[5] = local_70;
      param_2[6] = local_6c;
      param_2[7] = local_68;
      param_2[8] = local_64;
      param_2[9] = local_60;
      param_2[10] = local_5c;
      param_2[0xb] = local_58;
      param_2[0xc] = local_54;
      param_2[0xd] = local_50;
      param_2[0xe] = local_4c;
      param_2[0xf] = local_48[0];
    }
    iVar6 = FUN_00431780(param_3);
    iVar9 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = *(int *)(*(int *)(param_3 + 0x18) + iVar9 * 4);
        if (iVar5 != 0) {
          FUN_004816f0(param_1,param_2,iVar5,&local_84);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
  }
  return;
}

