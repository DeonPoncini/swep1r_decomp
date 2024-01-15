#include "prototype.h"


int FUN_0041b260(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  iVar2 = 0;
  iVar3 = 0;
  local_c = 0;
  iVar4 = 0;
  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,0,0,0,0,0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  if (param_3 != (int *)0x0) {
    local_c = param_3[1];
    iVar3 = *param_3;
    iVar4 = param_3[2];
    iVar2 = param_3[3];
  }
  FUN_00414b40(iVar1,(iVar4 - iVar3) + 1,(iVar2 - local_c) + 1);
  FUN_00414b60(iVar1,iVar3,local_c);
  FUN_00419830(iVar1,param_4,0);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 8;
  return iVar1;
}

