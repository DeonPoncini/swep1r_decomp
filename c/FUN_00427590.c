#include "prototype.h"


int FUN_00427590(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int local_20 [8];
  
  local_20[0] = param_3;
  iVar1 = FUN_00427110(param_1,param_2,param_3);
  uVar2 = (uint)(iVar1 != -1);
  local_20[uVar2] = param_4;
  iVar1 = FUN_00427110(param_1,param_2,param_4);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_5;
  iVar1 = FUN_00427110(param_1,param_2,param_5);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_6;
  iVar1 = FUN_00427110(param_1,param_2,param_6);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_7;
  iVar1 = FUN_00427110(param_1,param_2,param_7);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 != 0) {
    FUN_004816b0();
    iVar1 = __ftol();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = local_20[iVar1 % (int)uVar2];
    FUN_00427410(param_1,param_2,iVar1,param_8);
  }
  return iVar1;
}

