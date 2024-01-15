#include "prototype.h"


undefined4 FUN_0049eb80(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = 0x7fffffff;
  uVar1 = FUN_004a1920(&local_20,param_2,&stack0x0000000c);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}

