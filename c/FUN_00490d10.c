#include "prototype.h"


void FUN_00490d10(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  undefined local_30 [48];
  
  FUN_00492930(local_30,param_2 + 0x9c);
  FUN_00492f40(local_30,*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c));
  iVar2 = *(int *)(param_2 + 0x8c);
  if (iVar2 != 0) {
    local_3c = -*(float *)(iVar2 + 0x9c);
    local_38 = -*(float *)(iVar2 + 0xa0);
    local_34 = -*(float *)(iVar2 + 0xa4);
    FUN_00493160(local_30,&local_3c);
  }
  FUN_00492b70(*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c),param_3,local_30);
  if (*(int *)(param_2 + 0x90) != 0) {
    iVar2 = *(int *)(param_2 + 0x94);
    uVar1 = 0;
    if (*(int *)(param_2 + 0x90) != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x24) + *(int *)(iVar2 + 0x80) * 4) == 0) {
          FUN_00490d10(param_1,iVar2,*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c));
        }
        iVar2 = *(int *)(iVar2 + 0x98);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_2 + 0x90));
    }
  }
  return;
}

