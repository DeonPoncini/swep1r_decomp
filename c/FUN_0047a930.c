#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a930(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  fVar1 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 0x50);
  if (_DAT_00e2711c - _DAT_00e27128 < fVar1) {
    uVar3 = 0x800000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e2711c) && (_DAT_00e27118 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x400000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27118) && (_DAT_00e27114 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x200000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27114) && (_DAT_00e27110 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x100000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27110) && (_DAT_00e2710c - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x80000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e2710c) && (_DAT_00e27108 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x40000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27108) && (_DAT_00e27104 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x20000;
  }
  if (fVar1 < _DAT_00e27128 + _DAT_00e27104) {
    uVar3 = uVar3 | 0x10000;
  }
  uVar4 = 0;
  if (_DAT_00e270d8 - _DAT_00e27124 < fVar2) {
    uVar4 = (int)uVar3 >> 8;
  }
  if ((fVar2 < _DAT_00e27124 + _DAT_00e270d8) && (_DAT_00e270d4 - _DAT_00e27124 < fVar2)) {
    uVar4 = uVar4 | uVar3;
  }
  if (fVar2 < _DAT_00e27124 + _DAT_00e270d4) {
    uVar4 = uVar4 | uVar3 << 8;
  }
  *(uint *)(param_1 + 0x26c) = uVar4;
  return;
}

