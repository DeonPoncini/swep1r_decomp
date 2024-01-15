#include "prototype.h"


void FUN_0044eaa0(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  
  if ((short)param_2 == 1) {
    *(undefined4 *)(param_3 + 0x24) = 0;
    if (*(int *)(param_3 + 0x20) == 0) {
      if (*param_1 == 0) {
        iVar6 = *(int *)(param_3 + 0x1c);
      }
      else {
        iVar6 = *(int *)(param_3 + 0x14);
      }
      sVar5 = *(short *)(*(int *)(param_1 + 6) + iVar6 * 0x54);
      if (sVar5 == 0) {
        param_2 = -1;
        *(undefined4 *)(param_3 + 0x20) = 1;
        *(undefined4 *)(param_3 + 8) = 0x3f800000;
      }
      else {
        if (*(int *)(param_3 + 0x28) < (int)sVar5) {
          sVar5 = *(short *)(param_3 + 0x28);
        }
        else {
          sVar5 = (short)(*(int *)(param_3 + 0x28) % (int)sVar5);
        }
        uVar4 = (uint)sVar5;
        param_2 = (int)*(short *)(*(int *)(param_1 + 6) + iVar6 * 0x54 + 4 + uVar4 * 2);
        uVar7 = *(int *)(param_3 + 0x2c) >> 1;
        if (*param_1 == 0) {
          *(uint *)(param_3 + 0x2c) = uVar7 | uVar4 << 2;
        }
        else {
          *(uint *)(param_3 + 0x2c) = uVar7 | uVar4;
        }
      }
    }
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x14);
      if (*param_1 != 0) {
        *(int *)(param_3 + 0x14) = param_2;
        return;
      }
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x1c);
      *(int *)(param_3 + 0x1c) = param_2;
      return;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x24) == 0) {
      iVar1 = *(int *)(param_3 + 0x10);
      iVar6 = *(int *)(param_1 + 6) + iVar1 * 0x54;
      sVar5 = *(short *)(*(int *)(param_1 + 6) + 2 + iVar1 * 0x54);
      if (sVar5 == 0) {
        param_2 = -1;
        *(undefined4 *)(param_3 + 0x24) = 1;
        *(undefined4 *)(param_3 + 8) = 0;
      }
      else {
        iVar2 = *(int *)(param_3 + 0x28);
        if (iVar2 < sVar5) {
          sVar5 = *(short *)(iVar6 + 8 + iVar2 * 2);
        }
        else {
          sVar5 = *(short *)(iVar6 + 8 + (iVar2 % (int)sVar5) * 2);
        }
        param_2 = (int)sVar5;
        if (*param_1 == 0) {
          *(uint *)(param_3 + 0x2c) = (*(uint *)(param_3 + 0x2c) & 3) << 1;
        }
        else {
          *(undefined4 *)(param_3 + 0x2c) = 0;
        }
        if (iVar1 != *(short *)(*(int *)(param_1 + 6) + 4 + param_2 * 0x54)) {
          *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 1;
        }
      }
    }
    if (*(int *)(param_3 + 0x24) == 0) {
      if (*param_1 == 0) {
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x14);
      }
      uVar3 = *(undefined4 *)(param_3 + 0x10);
      *(int *)(param_3 + 0x10) = param_2;
      *(undefined4 *)(param_3 + 0x14) = uVar3;
    }
  }
  return;
}

