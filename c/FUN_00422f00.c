#include "prototype.h"


bool FUN_00422f00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  iVar1 = FUN_00485110(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x28),&param_2);
  if (iVar1 == 0) {
    return false;
  }
  uVar2 = (**(code **)(DAT_00ecc420 + 0x38))(param_1,iVar1,param_2);
  iVar3 = FUN_00485170(*(undefined4 *)(iVar3 + 0x48),iVar1,uVar2);
  return iVar3 != 0;
}

