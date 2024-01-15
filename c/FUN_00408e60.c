#include "prototype.h"


undefined4 FUN_00408e60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00445b60(param_1);
  puVar2 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(8);
  uVar3 = (**(code **)(DAT_00ecc420 + 0x20))(param_2);
  *puVar2 = uVar3;
  puVar2[1] = (&DAT_00ec8700)[iVar1];
  (&DAT_00ec8700)[iVar1] = puVar2;
  return *puVar2;
}

