#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426290(int param_1,float param_2,undefined4 param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar2 = *(float *)(param_1 + 0x114) - param_2;
  bVar1 = fVar2 < _DAT_004ac468;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x20000000;
  *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xdc);
  if (bVar1) {
    fVar2 = -fVar2;
  }
  fVar3 = (float)_DAT_00e22a40;
  *(float *)(param_1 + 0x114) = param_2;
  *(float *)(param_1 + 0xe4) = (fVar2 - fVar3) / *(float *)(param_1 + 0xdc);
  uVar4 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  uVar4 = __ftol();
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0x114) = param_3;
  uVar4 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  FUN_00426330(param_1);
  return;
}

