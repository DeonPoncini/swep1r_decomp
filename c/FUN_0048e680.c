#include "prototype.h"


int FUN_0048e680(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00deb108 != (code *)0x0) {
    iVar1 = (*DAT_00deb108)(param_1);
    return iVar1;
  }
  iVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x94);
  if (iVar1 != 0) {
    iVar2 = FUN_0048e6d0(param_1,iVar1);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  FUN_0048eac0(iVar1);
  return 0;
}

