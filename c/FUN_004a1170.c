#include "prototype.h"


undefined4 FUN_004a1170(undefined *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = param_2 * 2;
  uVar1 = FUN_004a5dc0(&local_20,param_3,&stack0x00000010);
  local_1c = local_1c + -1;
  if (local_1c < 0) {
    FUN_004a17f0(0,&local_20);
  }
  else {
    *local_20 = 0;
    local_20 = local_20 + 1;
  }
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}

