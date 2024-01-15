#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046cf00(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (((uVar1 & 0x20) == 0) || (*(int *)(*(int *)(param_1 + 0x1e70) + 0xc) == 0)) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) != 0) {
        FUN_0046bb70(param_1);
        if ((*(uint *)(param_1 + 100) & 0x4000000) != 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x400;
          FUN_0046ab10(param_1);
        }
        if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
          FUN_0046b430(param_1);
        }
      }
    }
    else {
      if (((byte)uVar1 & 0xf) != 2) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec8);
    }
  }
  else {
    FUN_0046bec0(param_1);
  }
  if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
    FUN_0046ce30(param_1);
  }
  if ((*(byte *)(param_1 + 0x60) & 0x80) != 0) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x1ac) * *(float *)(param_1 + 0x18c);
  }
  if (_DAT_004ad750 < *(float *)(param_1 + 0x264)) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x22c);
  fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x22c);
  *(float *)(param_1 + 0x1f0) = fVar3;
  if (fVar2 < fVar3) {
    *(float *)(param_1 + 0x1f0) = fVar2;
  }
  if (-fVar2 <= *(float *)(param_1 + 0x1f0)) {
    return;
  }
  *(float *)(param_1 + 0x1f0) = -fVar2;
  return;
}

