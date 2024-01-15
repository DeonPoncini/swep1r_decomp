#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004783e0(float param_1)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  iVar5 = (int)param_1;
  if (((*(uint *)((int)param_1 + 0x60) & 0x800000) != 0) ||
     (puVar1 = (uint *)((int)param_1 + 100), param_1 = 1.5, (*puVar1 & 0x2000) != 0)) {
    param_1 = 4.0;
  }
  if ((*(byte *)(*(int *)(iVar5 + 0x1e70) + 8) & 8) == 0) {
    if (*(float *)(iVar5 + 0x18c) <= _DAT_004adcbc) {
      if (_DAT_004add3c <= *(float *)(iVar5 + 0x18c)) {
        if (_DAT_004adcc0 <= *(float *)(iVar5 + 0x1a4)) {
          fVar7 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
        }
        else {
          fVar7 = (float10)FUN_00480650(0x41200000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
      else {
        fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) +
                *(float *)(iVar5 + 0x1a4);
        bVar6 = _DAT_004add40 < *(float *)(iVar5 + 0x18c);
        *(float *)(iVar5 + 0x1a4) = fVar3;
        if ((bVar6) && (fVar3 < *(float *)(iVar5 + 0x18c) * _DAT_004adc60)) {
          fVar7 = (float10)FUN_00480650(0x41a00000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
    }
    else {
      bVar6 = *(float *)(iVar5 + 0x18c) < _DAT_004add38;
      fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) + *(float *)(iVar5 + 0x1a4)
      ;
      *(float *)(iVar5 + 0x1a4) = fVar3;
      fVar4 = _DAT_004adce0;
      if (bVar6) {
        fVar4 = *(float *)(iVar5 + 0x18c) / (_DAT_004adc50 - *(float *)(iVar5 + 0x18c));
      }
      if (fVar4 < fVar3) {
        fVar7 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
      }
    }
    uVar2 = *(uint *)(iVar5 + 0x60);
  }
  else {
    if (*(float *)(iVar5 + 0x18c) <= _DAT_004adcbc) {
      if (_DAT_004add3c <= *(float *)(iVar5 + 0x18c)) {
        fVar7 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
      }
      else {
        fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) +
                *(float *)(iVar5 + 0x1a4);
        bVar6 = _DAT_004add40 < *(float *)(iVar5 + 0x18c);
        *(float *)(iVar5 + 0x1a4) = fVar3;
        if ((bVar6) && (fVar3 < *(float *)(iVar5 + 0x18c) * _DAT_004adc60)) {
          fVar7 = (float10)FUN_00480650(0x41a00000,(float)_DAT_00e22a40);
          *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
        }
      }
    }
    else {
      bVar6 = *(float *)(iVar5 + 0x18c) < _DAT_004add38;
      fVar3 = (float)_DAT_00e22a40 * param_1 * *(float *)(iVar5 + 0x18c) + *(float *)(iVar5 + 0x1a4)
      ;
      *(float *)(iVar5 + 0x1a4) = fVar3;
      fVar4 = _DAT_004adce0;
      if (bVar6) {
        fVar4 = *(float *)(iVar5 + 0x18c) / (_DAT_004adc50 - *(float *)(iVar5 + 0x18c));
      }
      if (fVar4 < fVar3) {
        fVar7 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x84),(float)_DAT_00e22a40);
        *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
      }
    }
    uVar2 = *(uint *)(iVar5 + 0x60);
  }
  if ((uVar2 & 0x200) != 0) {
    fVar7 = (float10)FUN_00480650(*(undefined4 *)(iVar5 + 0x80),(float)_DAT_00e22a40);
    *(float *)(iVar5 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar5 + 0x1a4));
  }
  if (*(float *)(iVar5 + 0x1a4) <= _DAT_004adc48) {
    fVar7 = -((-(float10)*(float *)(iVar5 + 0x1a4) * (float10)*(float *)(iVar5 + 0x7c)) /
             ((float10)*(float *)(iVar5 + 0x78) - (float10)*(float *)(iVar5 + 0x1a4)));
  }
  else {
    fVar7 = ((float10)*(float *)(iVar5 + 0x1a4) * (float10)*(float *)(iVar5 + 0x7c)) /
            ((float10)*(float *)(iVar5 + 0x78) + (float10)*(float *)(iVar5 + 0x1a4));
  }
  fVar7 = fVar7 * (float10)*(float *)(iVar5 + 0x1ac);
  if (_DAT_004add44 <= *(float *)(iVar5 + 0x184)) {
    *(uint *)(iVar5 + 100) = *(uint *)(iVar5 + 100) & 0xf7ffffff;
  }
  else {
    uVar2 = *(uint *)(iVar5 + 100);
    if (((uVar2 & 0x8000000) == 0) &&
       (bVar6 = *(float *)(iVar5 + 0x244) < _DAT_004adc50,
       *(uint *)(iVar5 + 100) = uVar2 | 0x8000000, bVar6)) {
      *(uint *)(iVar5 + 100) = uVar2 | 0x18000000;
    }
    fVar7 = fVar7 * (float10)*(float *)(iVar5 + 0x244);
  }
  fVar7 = fVar7 + (float10)*(float *)(iVar5 + 0x240);
  if (((*(uint *)(iVar5 + 0x60) & 0x4000000) != 0) && (fVar7 < (float10)_DAT_004adcb0)) {
    fVar7 = (float10)_DAT_004adcb0;
  }
  if (((*(uint *)(iVar5 + 0x60) & 0x80) != 0) && (*(float *)(iVar5 + 0x2fc) < _DAT_004add48)) {
    if ((*(uint *)(iVar5 + 100) & 0x2000000) != 0) {
      return fVar7 * (float10)_DAT_004add4c;
    }
    fVar7 = fVar7 * (float10)_DAT_004add50;
  }
  return fVar7;
}

