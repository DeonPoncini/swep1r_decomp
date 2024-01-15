#include "prototype.h"


void FUN_0048c020(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(DAT_00ecc420 + 0x24))(iVar2);
    iVar2 = iVar1;
  }
  return;
}

