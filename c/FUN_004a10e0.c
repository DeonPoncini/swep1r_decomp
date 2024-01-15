#include "prototype.h"


undefined4 FUN_004a10e0(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_20 = param_1;
  local_1c = param_2;
  local_14 = 0x42;
  uVar1 = FUN_004a1920(&local_20,param_3,param_4);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}

