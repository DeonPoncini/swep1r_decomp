#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476ea0(int param_1)

{
  float fVar1;
  byte *pbVar2;
  uint uVar3;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = 1.0;
  local_8 = 1.0;
  local_c = 0.0;
  if (((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) &&
     (*(float *)(param_1 + 0x1a0) < _DAT_004adcb0)) {
    local_c = _DAT_004adcb0 - *(float *)(param_1 + 0x1a0);
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xff63fb1e;
  if ((*(int *)(param_1 + 0x140) != 0) &&
     (pbVar2 = (byte *)FUN_004318b0(*(int *)(param_1 + 0x140)), pbVar2 != (byte *)0x0)) {
    uVar3 = *(uint *)(param_1 + 0x26c) & ~*(uint *)(pbVar2 + 0x34);
    *(uint *)(param_1 + 0x26c) = uVar3;
    *(uint *)(param_1 + 0x26c) =
         (uint)(uint3)((uint3)((uint)*(undefined4 *)(pbVar2 + 0x38) >> 8) | (uint3)(uVar3 >> 8)) <<
         8;
    if ((*pbVar2 & 0x10) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x80;
    }
    if ((*pbVar2 & 0x20) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x400;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x2000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x4000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x80000;
    }
    if ((((*(uint *)(pbVar2 + 0x2c) & 0x20000) != 0) && ((*(byte *)(param_1 + 0x60) & 0x80) != 0))
       && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x800000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x8000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x100000;
    }
    if ((((DAT_0050c048 & 0x2000) != 0) && ((DAT_00e98eb0 & 0x100) != 0)) &&
       (((byte)DAT_00e98e90 & 0x80) != 0)) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) ^ 0x2000000;
    }
    if ((pbVar2[0x2c] & 1) != 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2000000;
    }
    if (((pbVar2[0x2c] & 2) != 0) && ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0)) {
      *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x16c);
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x170);
      *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x174);
      *(undefined4 *)(param_1 + 0x228) = 0x40400000;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfdffffff | 0x4000000;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 4) != 0) {
      local_c = 200.0;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 8) != 0) {
      local_8 = 0.75;
      if ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
      }
    }
    if ((pbVar2[0x2c] & 0x10) != 0) {
      local_8 = 0.1;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x20) != 0) {
      local_4 = 0.2;
    }
    if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
      local_4 = 1.0;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x400) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1;
    }
    if (*(int *)(pbVar2 + 0x3c) != 0) {
      FUN_00476ac0(param_1,*(int *)(pbVar2 + 0x3c));
    }
    if (((*(uint *)(pbVar2 + 0x2c) & 0x1000) != 0) && (DAT_00ec86a0 == 1)) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40;
    }
    if ((*(uint *)(pbVar2 + 0x2c) & 0x20000000) != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20;
    }
  }
  if (DAT_0050cb48 != 0) {
    FUN_00476ac0(param_1,DAT_0050cb48);
  }
  if (local_c <= *(float *)(param_1 + 0x240)) {
    if ((local_c < *(float *)(param_1 + 0x240)) &&
       (fVar1 = *(float *)(param_1 + 0x240) - (float)_DAT_00e22a40 * (float)_DAT_004adcc8,
       *(float *)(param_1 + 0x240) = fVar1, fVar1 < local_c)) {
      *(float *)(param_1 + 0x240) = local_c;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * (float)_DAT_004adcc8 + *(float *)(param_1 + 0x240);
    *(float *)(param_1 + 0x240) = fVar1;
    if (local_c < fVar1) {
      *(float *)(param_1 + 0x240) = local_c;
    }
  }
  if (local_8 <= *(float *)(param_1 + 0x244)) {
    if ((local_8 < *(float *)(param_1 + 0x244)) &&
       (fVar1 = *(float *)(param_1 + 0x244) - (float)_DAT_00e22a40 * (float)_DAT_004adcd0,
       *(float *)(param_1 + 0x244) = fVar1, fVar1 < local_8)) {
      *(float *)(param_1 + 0x244) = local_8;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * (float)_DAT_004adcd0 + *(float *)(param_1 + 0x244);
    *(float *)(param_1 + 0x244) = fVar1;
    if (local_8 < fVar1) {
      *(float *)(param_1 + 0x244) = local_8;
    }
  }
  if (local_4 <= *(float *)(param_1 + 0x248)) {
    if ((local_4 < *(float *)(param_1 + 0x248)) &&
       (fVar1 = *(float *)(param_1 + 0x248) - (float)_DAT_00e22a40 * (float)_DAT_004adcd0,
       *(float *)(param_1 + 0x248) = fVar1, fVar1 < local_4)) {
      *(float *)(param_1 + 0x248) = local_4;
    }
  }
  else {
    fVar1 = (float)_DAT_00e22a40 * (float)_DAT_004adcd0 + *(float *)(param_1 + 0x248);
    *(float *)(param_1 + 0x248) = fVar1;
    if (local_4 < fVar1) {
      *(float *)(param_1 + 0x248) = local_4;
    }
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if ((((((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc < (float)_DAT_004adc90)
       || ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) ||
      ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) &&
     (((*(uint *)(param_1 + 100) & 0x80000) != 0 && ((*(uint *)(param_1 + 100) & 0x200) == 0)))) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
  }
  return;
}

