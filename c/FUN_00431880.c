#include "prototype.h"


uint FUN_00431880(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (((param_1 != (uint *)0x0) && (param_2 == 1)) &&
     (uVar1 = ((int)(char)*param_1 & 8U) >> 3, (*param_1 & 0x40) != 0)) {
    uVar1 = (uVar1 != 0) + 2;
  }
  return uVar1;
}

