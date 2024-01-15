#include "prototype.h"


uint FUN_0048fad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x878);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0048fb20(uVar1,param_1,param_2,param_3,param_4,param_5);
  return -(uint)(iVar2 != 0) & uVar1;
}

