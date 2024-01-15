#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ba20(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = _DAT_004ac58c - (_DAT_004ac57c - param_6) * _DAT_004ac588;
  uVar2 = __ftol();
  uVar3 = __ftol();
  FUN_0042bb00(param_1,uVar2,uVar3);
  uVar2 = __ftol();
  FUN_00428740(param_1,param_7,param_8,param_9,uVar2);
  fVar1 = fVar1 * param_4;
  FUN_004286f0(param_1,fVar1,fVar1);
  FUN_004285d0(param_1,1);
  return;
}

