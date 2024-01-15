#include "prototype.h"


undefined4 FUN_00414cd0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4);
  *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4) = param_3;
  return uVar1;
}

