#include "prototype.h"


void FUN_00425ba0(undefined4 *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [16];
  
  iVar1 = param_4 + 1;
  if (*(float *)(*(int *)(param_2 + 0x11c) + iVar1 * 4) < param_3) {
    param_4 = param_4 * 0x10;
    *param_1 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(param_2 + 0x120));
    param_1[1] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x14 + param_4);
    param_1[2] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x18 + param_4);
    param_1[3] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x1c + param_4);
    return;
  }
  if (param_3 <= *(float *)(*(int *)(param_2 + 0x11c) + param_4 * 4)) {
    param_4 = param_4 * 0x10;
    *param_1 = *(undefined4 *)(*(int *)(param_2 + 0x120) + param_4);
    param_1[1] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 4 + param_4);
    param_1[2] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 8 + param_4);
    param_1[3] = *(undefined4 *)(*(int *)(param_2 + 0x120) + 0xc + param_4);
    return;
  }
  fVar4 = (float10)FUN_00425980(param_2,param_3,param_4);
  iVar3 = *(int *)(param_2 + 0x120);
  local_50 = *(undefined4 *)(param_4 * 0x10 + iVar3);
  iVar2 = param_4 * 0x10 + iVar3;
  local_4c = *(undefined4 *)(iVar2 + 4);
  local_48 = *(undefined4 *)(iVar2 + 8);
  local_44 = *(undefined4 *)(iVar2 + 0xc);
  local_40 = *(undefined4 *)(iVar1 * 0x10 + iVar3);
  local_3c = *(undefined4 *)(iVar2 + 0x14);
  local_38 = *(undefined4 *)(iVar2 + 0x18);
  local_34 = *(undefined4 *)(iVar2 + 0x1c);
  FUN_00481620(local_20,&local_50);
  FUN_00481620(local_30,&local_40);
  FUN_004813a0(local_20,local_30,(float)fVar4,local_10);
  FUN_00481520(param_1,local_10);
  return;
}

