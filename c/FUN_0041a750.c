#include "prototype.h"


void FUN_0041a750(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  bVar1 = false;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x20) & 0x10000) == 0) {
      FUN_00417120(5000,&param_1,&local_38);
      local_30 = *(int *)(iVar2 + 0x24);
      local_2c = *(int *)(iVar2 + 0x28);
      local_28 = param_1 + -1 + local_30;
      local_24 = local_38 + -1 + local_2c;
      FUN_00417120(5000,&param_1,&local_38);
      local_18 = *(int *)(iVar2 + 0x548) + *(int *)(iVar2 + 0x24);
      local_1c = *(int *)(iVar2 + 0x28);
      local_20 = local_18 - param_1;
      local_18 = local_18 + -1;
      local_14 = local_38 + -1 + local_1c;
      FUN_00417120(0x1389,&param_1,&local_38);
      local_c = *(int *)(iVar2 + 0x28);
      local_10 = local_28 + 1;
      local_8 = local_20 + -1;
      local_4 = local_38 + -1 + local_c;
    }
    else {
      FUN_00417120(5000,&param_1,&local_38);
      local_30 = *(int *)(iVar2 + 0x24);
      local_2c = *(int *)(iVar2 + 0x28);
      local_28 = param_1 + -1 + local_30;
      local_24 = local_38 + -1 + local_2c;
      FUN_00417120(5000,&param_1,&local_38);
      local_20 = *(int *)(iVar2 + 0x24);
      local_14 = *(int *)(iVar2 + 0x548) + *(int *)(iVar2 + 0x28);
      local_1c = local_14 - local_38;
      local_14 = local_14 + -1;
      local_18 = param_1 + -1 + local_20;
      FUN_00417120(0x1389,&param_1,&local_38);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = local_24 + 1;
      local_8 = param_1 + -1 + local_10;
      local_4 = local_1c + -1;
    }
    uVar4 = param_3;
    uVar3 = param_2;
    local_34 = 0;
    iVar5 = FUN_004172c0(&local_30,param_2,param_3);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x20000) == 0) {
        bVar1 = true;
      }
      else {
        local_34 = 1;
      }
    }
    iVar5 = FUN_004172c0(&local_20,uVar3,uVar4);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x20000) == 0) {
        local_34 = 1;
      }
      else {
        bVar1 = true;
      }
    }
    FUN_004172c0(&local_10,uVar3,uVar4);
    if (bVar1) {
      FUN_0041a640(iVar2,0x6d);
    }
    if (local_34 != 0) {
      FUN_0041a640(iVar2,0x6b);
    }
  }
  return;
}

