#include "prototype.h"


void FUN_0048c050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      FUN_0048c020(param_1[1] + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *param_1);
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1[1]);
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}

