#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fce0(int param_1,undefined4 param_2,int param_3,int param_4,float param_5,float param_6
                 ,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar2 = param_6;
  fVar1 = param_5;
  local_24 = 0x43230000;
  local_20 = 0x433e0000;
  local_1c = 0x41880000;
  local_c = 0x43230000;
  local_8 = 0x433e0000;
  local_4 = 0x41880000;
  local_18 = 0;
  local_14 = 0x437f0000;
  local_10 = 0;
  if (param_5 == param_6) {
    FUN_0042f380(_DAT_0050c8f4 * _DAT_004ac7b0,&param_5,&param_6);
    param_5 = (param_5 - _DAT_004ac85c) * (float)_DAT_004ac7c0;
    FUN_0042fac0(&local_24,param_5,&local_c,(float)_DAT_004ac918 - param_5,&local_18);
  }
  if ((*(int *)(param_1 + 8) == 3) && (*(int *)(param_1 + 0x10) == 1)) {
    if ((fVar1 == 0.0) && (fVar2 == 0.0)) {
      uVar3 = __ftol(0xffffffff);
      uVar3 = __ftol(uVar3);
      uVar3 = __ftol(uVar3);
      FUN_00428740(0x82,uVar3);
    }
    if ((fVar1 == 1.401298e-45) && (fVar2 == 1.401298e-45)) {
      uVar3 = __ftol(0xffffffff);
      uVar3 = __ftol(uVar3);
      uVar3 = __ftol(uVar3);
      FUN_00428740(0x83,uVar3);
    }
  }
  if (fVar1 == fVar2) {
    uVar3 = __ftol(0xffffffff,param_7);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00450530(param_2,(int)fVar2 * param_4 + param_3,uVar3);
    return;
  }
  FUN_00450530(param_2,(int)fVar2 * param_4 + param_3,0x32,0xffffffff,0xffffffff,0xffffffff,param_7)
  ;
  return;
}

