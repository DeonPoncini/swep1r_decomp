#include "prototype.h"


void FUN_0041c130(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0041e880();
  FUN_0041e800(param_1);
  iVar1 = FUN_00414d90(0,0x186b4);
  FUN_00417fe0(iVar1,param_1,0);
  uVar2 = FUN_004137d0(iVar1);
  if (6 < uVar2) {
    *(uint *)(iVar1 + 0x504) = uVar2 - 6;
    FUN_00417ca0(iVar1);
  }
  return;
}

