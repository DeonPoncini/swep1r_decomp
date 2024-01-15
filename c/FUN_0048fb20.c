#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0048fb20(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc428 + 0x20))(100);
  *(undefined4 **)(param_1 + 0x48) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    fVar2 = _DAT_004af7ac;
    if ((_DAT_004af7ac <= param_2) && (fVar2 = _DAT_004af7b0, param_2 <= _DAT_004af7b0)) {
      fVar2 = param_2;
    }
    *(float *)(param_1 + 0x38) = fVar2;
    *puVar3 = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 8) = param_5;
    *(undefined4 *)(param_1 + 0x40) = param_6;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x870) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x874) = 0x3dcccccd;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    FUN_0048fc90(param_1,1);
    return 1;
  }
  return 0;
}

