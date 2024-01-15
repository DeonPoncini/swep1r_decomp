#include "prototype.h"


int FUN_00413520(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  local_4 = 0;
  iVar1 = FUN_00416d90(param_1,param_2,param_4,0,param_5,param_6,0,&LAB_00416130,0);
  if (param_3 != (int *)0x0) {
    local_4 = param_3[3];
    iVar4 = *param_3;
    iVar2 = param_3[1];
    iVar3 = param_3[2];
  }
  FUN_00414b40(iVar1,(iVar3 - iVar4) + 1,(local_4 - iVar2) + 1);
  FUN_00414b60(iVar1,iVar4,iVar2);
  FUN_00419830(iVar1,0,0);
  FUN_004197f0(&local_20,0);
  *(int *)(iVar1 + 0x50c) = iVar4 + local_20;
  *(int *)(iVar1 + 0x510) = iVar2 + local_1c;
  *(undefined4 *)(iVar1 + 0x508) = param_5;
  *(undefined4 *)(iVar1 + 0x524) = 5;
  *(int *)(iVar1 + 0x514) = iVar3 - local_18;
  *(int *)(iVar1 + 0x518) = local_4 - local_14;
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 5;
  return iVar1;
}

