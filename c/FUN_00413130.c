#include "prototype.h"


int FUN_00413130(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  iVar4 = 0;
  iVar2 = 0;
  local_c = 0;
  iVar3 = 0;
  iVar1 = FUN_00416d90(param_1,param_3,0xffffffff,0,0,0,0,FUN_00415850,param_4);
  if (param_2 != (int *)0x0) {
    local_c = param_2[1];
    iVar2 = *param_2;
    iVar3 = param_2[2];
    iVar4 = param_2[3];
  }
  FUN_00414b40(iVar1,(iVar3 - iVar2) + 1,(iVar4 - local_c) + 1);
  FUN_00414b60(iVar1,iVar2,local_c);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return iVar1;
}

