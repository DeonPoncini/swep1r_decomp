#include "prototype.h"


int FUN_004aade0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return param_3;
  }
  iVar1 = FUN_004aaea0(DAT_00dfae94,1,param_1,param_3,param_2,param_3,DAT_00dfae90);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}

