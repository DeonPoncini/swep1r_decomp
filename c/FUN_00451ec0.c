#include "prototype.h"


void FUN_00451ec0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((iVar1 != 2) && (iVar1 != 1)) {
    *(int *)(param_1 + 0x7c) = iVar1;
    return;
  }
  FUN_00451d60(param_1,iVar1);
  return;
}

