#include "prototype.h"


void FUN_00414420(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = param_2;
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((param_2 == 0) || (FUN_00418b70(param_1), uVar3 == 0)) {
      uVar4 = *(uint *)(iVar2 + 0x20) & 0xfffdffff;
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0x20) | 0x20000;
    }
    *(uint *)(iVar2 + 0x20) = uVar4;
    if ((uVar4 & 0x40000) == 0) {
      if ((uVar4 & 0x10000) == 0) {
        iVar5 = (uVar3 != 0) + 0x3f6;
      }
      else {
        iVar5 = (uVar3 != 0) + 0x3f2;
      }
    }
    else {
      iVar5 = (uVar3 != 0) + 0x3f4;
    }
    FUN_00417120(iVar5,&param_1,&param_2);
    if ((iVar5 == 0x3f7) || (iVar5 == 0x3f6)) {
      local_10 = (*(int *)(iVar2 + 0x2c) - param_1) + -3;
      local_8 = *(int *)(iVar2 + 0x2c) + -3;
    }
    else {
      local_10 = *(int *)(iVar2 + 0x24) + 3;
      local_8 = *(int *)(iVar2 + 0x24) + 2 + param_1;
    }
    local_c = *(int *)(iVar2 + 0x28) +
              (((*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x28)) - param_2) + 1 >> 1);
    local_4 = local_c + -1 + param_2;
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar6 = FUN_00413b90(iVar2,0,&local_10,iVar5,0,0,0);
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 0x400;
    }
    FUN_00412fb0(*(undefined4 *)(iVar2 + 0xc),0,iVar5,&local_10,1,0);
    if (uVar3 != (uVar1 & 0x20000)) {
      FUN_004151a0(*(undefined4 *)(iVar2 + 8),5000,*(undefined4 *)(iVar2 + 0x1c),uVar3);
    }
  }
  return;
}

