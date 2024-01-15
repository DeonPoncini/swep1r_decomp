#include "prototype.h"


bool FUN_00488880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0x1000;
  iVar1 = (**(code **)(*DAT_0052d454 + 0x5c))(DAT_0052d454,&local_10,param_1,param_2);
  return iVar1 != 0;
}

