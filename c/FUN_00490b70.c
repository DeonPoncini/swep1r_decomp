#include "prototype.h"


uint FUN_00490b70(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x40);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00490ba0(uVar1,param_1);
  return -(uint)(iVar2 != 0) & uVar1;
}

