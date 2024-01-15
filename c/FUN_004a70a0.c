#include "prototype.h"


undefined4 FUN_004a70a0(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined local_c [12];
  
  uVar1 = param_1[5];
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = FUN_004a6fc0(&local_18);
    if (iVar2 == 0) {
      FUN_004a6fb0(&local_18);
      uVar3 = 2;
      goto LAB_004a7221;
    }
  }
  else {
    FUN_004a6f90(local_c,&local_18);
    iVar2 = FUN_004a6ef0(&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_004a6fb0(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_004a7221;
    }
    if (iVar5 <= iVar2) {
      FUN_004a6f90(&local_18,local_c);
      FUN_004a6fe0(&local_18,iVar2 - iVar5);
      FUN_004a6ef0(&local_18,param_3[2]);
      FUN_004a6fe0(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_004a7221;
    }
    if (*param_3 <= iVar5) {
      FUN_004a6fb0(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_004a6fe0(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_004a7221;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_004a6fe0(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_004a7221:
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}

