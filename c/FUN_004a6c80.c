#include "prototype.h"


uint FUN_004a6c80(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004a6ce0();
  uVar1 = param_2 & param_1 | ~param_2 & uVar1;
  FUN_004a6d80(uVar1);
  return uVar1;
}

