#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004903d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x870) = param_2;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x874) = param_3;
  if (*(int *)(param_1 + 0x6c) != 0) {
    piVar3 = (int *)(param_1 + 0x70);
    do {
      iVar1 = *piVar3;
      if (*(float *)(iVar1 + 0x28) == _DAT_004af7c4) {
        *(float *)(iVar1 + 0x28) = *(float *)(param_1 + 0x870) * _DAT_004af7c8;
      }
      if (*(float *)(iVar1 + 0x2c) == _DAT_004af7c4) {
        *(float *)(iVar1 + 0x2c) = *(float *)(param_1 + 0x874) * _DAT_004af7cc;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x6c));
  }
  return;
}

