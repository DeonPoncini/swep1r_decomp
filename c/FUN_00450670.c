#include "prototype.h"


void FUN_00450670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_100 [256];
  
  iVar1 = __ftol();
  iVar2 = __ftol();
  iVar3 = __ftol();
  if (iVar3 == 100) {
    iVar3 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x3c) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 == 0) {
    FUN_0049eb80(local_100,s__s__2d___2d_004c3e5c,param_8,iVar2,iVar3);
  }
  else {
    FUN_0049eb80(local_100,s__s_d___2d___2d_004c3e68,param_8,iVar1);
  }
  FUN_00450530(param_1,param_2,param_4,param_5,param_6,param_7,local_100);
  return;
}

