#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00410fd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float local_8;
  
  DAT_004d87c4 = FUN_0048bee0(0x100);
  if (DAT_004d87c4 != 0) {
    puVar1 = &DAT_004d8210;
    for (iVar3 = 0x15c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puVar1 = &DAT_004d7c68;
    for (iVar3 = 0x12a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    PTR_DAT_004b5d74 = (undefined *)&DAT_004d8210;
    puVar1 = &DAT_004d8160;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    FUN_004117e0();
    _DAT_004d8204 = DAT_00ec87c0;
    _DAT_004d8200 = DAT_00ec87c4;
    FUN_00416cc0(DAT_00ec87c0,DAT_00ec87c4,&DAT_004d79f4,&DAT_004d7c58);
    puVar1 = &DAT_00e9d9dc;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0xe9ec5c);
    *(code **)(PTR_DAT_004b5d74 + 0x10) = FUN_00415850;
    FUN_00414e60(PTR_DAT_004b5d74,1);
    local_8 = 0.0;
    iVar3 = (**(code **)(DAT_00ecc420 + 0x2c))();
    iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    while (iVar2 == iVar3) {
      iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    }
    iVar3 = (**(code **)(DAT_00ecc420 + 0x2c))();
    do {
      iVar2 = 0x9c4;
      do {
        local_8 = local_8 - _DAT_004ac3d4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    } while ((uint)(iVar2 - iVar3) < 0x1f);
    if (local_8 * _DAT_004ac3d8 < _DAT_004ac3dc) {
      DAT_004d8bd8 = 0;
    }
    return 1;
  }
  return 0;
}

