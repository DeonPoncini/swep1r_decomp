#include "prototype.h"


undefined4 FUN_0049f1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a3040();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004a2e70(param_1,param_2,param_3,iVar1);
  FUN_004a1780(iVar1);
  return uVar2;
}

