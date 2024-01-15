#include "prototype.h"


int FUN_004151a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    if ((*(code **)(param_1 + 0x14) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x14))(param_1,param_2,param_3,param_4), iVar1 != 0)) {
      return iVar1;
    }
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x10))(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  return 0;
}

