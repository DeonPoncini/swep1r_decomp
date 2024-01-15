#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429330(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_c;
  
  local_c = -1.0;
  uVar2 = FUN_004318d0(1);
  uVar3 = FUN_004318d0(2);
  uVar4 = FUN_00431770(uVar2);
  uVar5 = FUN_00431770(uVar3);
  iVar6 = param_1;
  if ((uVar4 & 1) != 0) {
    iVar6 = FUN_004318b0(uVar2);
    local_c = (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x4c)) *
              (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x4c)) +
              (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x48)) *
              (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x48)) +
              (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x44)) *
              (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x44));
  }
  if ((uVar5 & 1) == 0) {
    fVar1 = -1.0;
    iVar7 = param_1;
  }
  else {
    iVar7 = FUN_004318b0(uVar3);
    fVar1 = (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x4c)) *
            (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x4c)) +
            (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x48)) *
            (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x48)) +
            (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x44)) *
            (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x44));
  }
  if ((_DAT_004ac4f0 <= fVar1) && (fVar1 <= local_c)) {
    FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x14);
    return;
  }
  if (_DAT_004ac4f0 <= local_c) {
    FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x14);
    return;
  }
  FUN_004313d0(param_1);
  return;
}

