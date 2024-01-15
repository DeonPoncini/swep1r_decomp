#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b520(int param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];
  
  uVar4 = FUN_00445660(5);
  if (_DAT_004adca0 < *(float *)(param_1 + 0x1a0)) {
    FUN_00445640(5,uVar4 | 4);
  }
  uVar5 = FUN_00445660(3);
  FUN_00445640(3,*(undefined4 *)(param_1 + 0x26c));
  local_24 = *(float *)(param_1 + 0x2cc);
  local_20 = *(float *)(param_1 + 0x2d0);
  local_1c = *(float *)(param_1 + 0x2d4);
  uVar7 = *(uint *)(param_1 + 0x60) >> 0x19 & 1;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xdfffffff;
  FUN_0047b0c0(param_1);
  if (uVar7 == 0) {
    fVar8 = (float10)FUN_00479e10(param_1,&local_24,param_1 + 0x16c,local_c,param_1 + 0x2e4);
  }
  else {
    FUN_0042fa50(local_c,0x3f800000,param_1 + 0x40);
    fVar8 = (float10)FUN_0047a200(param_1,&local_24,param_1 + 0x16c,local_c,param_1 + 0x2e4);
  }
  pfVar6 = (float *)(param_1 + 0x2e4);
  local_18 = local_24 - *(float *)(param_1 + 0x16c);
  local_14 = local_20 - *(float *)(param_1 + 0x170);
  local_10 = local_1c - *(float *)(param_1 + 0x174);
  *(float *)(param_1 + 0x2cc) = local_24;
  fVar1 = *(float *)(param_1 + 0x1a0);
  *(float *)(param_1 + 0x2d0) = local_20;
  *(float *)(param_1 + 0x2d4) = local_1c;
  if ((*(uint *)(param_1 + 0x60) & 0x5000) == 0) {
    if ((uVar7 == 0) && ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0)) {
      fVar9 = (float10)FUN_0042f750(&local_18);
    }
    else {
      fVar9 = (float10)FUN_0042f8c0(&local_18);
    }
    *(float *)(param_1 + 0x1a0) = (float)(fVar9 / (float10)_DAT_00e22a40);
    if (*(float *)(param_1 + 0x38) * local_10 +
        *(float *)(param_1 + 0x34) * local_14 + *(float *)(param_1 + 0x30) * local_18 <
        _DAT_004adc48) {
      *(float *)(param_1 + 0x1a0) = -*(float *)(param_1 + 0x1a0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  uVar2 = *(uint *)(param_1 + 100);
  if ((uVar2 & 0x4000) != 0) {
    bVar3 = *(float *)(param_1 + 0x1a0) < _DAT_004adcb4;
    *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x310) - (float)_DAT_00e22a40;
    if (bVar3) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
    if (*(float *)(param_1 + 0x310) < _DAT_004adc48) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
  }
  if (((*(byte *)(param_1 + 0x60) & 0x80) == 0) || ((uVar2 & 0x4000000) != 0)) {
    FUN_0047b000(param_1,fVar1,fVar1 - *(float *)(param_1 + 0x1a0));
  }
  else {
    *(uint *)(param_1 + 100) = uVar2 & 0xefffffff;
  }
  fVar1 = _DAT_004adc48;
  if (((*(uint *)(param_1 + 0x60) & 0x40000) != 0) &&
     (*(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffbffff,
     fVar1 < *(float *)(param_1 + 0x1a4))) {
    if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x7c)) {
      fVar1 = _DAT_004adc48;
      if (_DAT_004adc48 <= *(float *)(param_1 + 0x1a0)) {
        fVar1 = (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x1a0)) /
                (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x1a0));
      }
      if (fVar1 < *(float *)(param_1 + 0x1a4)) {
        *(float *)(param_1 + 0x1a4) = fVar1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a4) = 0x3f7fbe77;
    }
  }
  FUN_004788c0(param_1);
  if (uVar7 == 0) {
    if (((((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc < (float)_DAT_004adc90
         ) || ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) ||
       ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
      FUN_00477ad0(param_1,local_c,(float)fVar8,pfVar6);
    }
    *pfVar6 = *pfVar6 - *(float *)(param_1 + 0x2d8);
    *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2ec) = *(float *)(param_1 + 0x2ec) - *(float *)(param_1 + 0x2e0);
  }
  if (((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) && (uVar7 == 0)) {
    FUN_00477c30(param_1,&local_24,pfVar6);
  }
  else {
    FUN_0047a610(param_1,&local_24);
  }
  FUN_00476ea0(param_1);
  FUN_0047a3a0(param_1,&local_24);
  if (_DAT_004adc48 < *(float *)(param_1 + 0x308)) {
    *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x308) - (float)_DAT_00e22a40;
  }
  if (_DAT_004adc48 < *(float *)(param_1 + 0x30c)) {
    *(float *)(param_1 + 0x30c) = *(float *)(param_1 + 0x30c) - (float)_DAT_00e22a40;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if ((uVar2 & 0x2000) == 0) {
    if ((((uVar2 & 0x4000) != 0) && ((uVar2 & 0x80) != 0)) &&
       (*(float *)(param_1 + 0x30c) <= _DAT_004adc48)) {
      *(undefined4 *)(param_1 + 0x30c) = 0x40400000;
      *(uint *)(param_1 + 0x60) = uVar2 & 0xffffbfff | 0x2000;
    }
  }
  else if (*(float *)(param_1 + 0x30c) <= _DAT_004adc48) {
    *(uint *)(param_1 + 0x60) = uVar2 & 0xffffdfff;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x200000;
  }
  if (((uVar7 == 0) && ((*(uint *)(param_1 + 0x60) & 0x4000000) != 0)) &&
     ((float)fVar8 < _DAT_004adcf4)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfbffffff;
  }
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    FUN_0040b150(0,0);
  }
  FUN_00445640(5,uVar4);
  FUN_00445640(3,uVar5);
  return;
}

