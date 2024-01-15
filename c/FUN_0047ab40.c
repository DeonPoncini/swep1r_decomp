#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ab40(int param_1)

{
  float fVar1;
  float10 fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = FUN_00445660(5);
  if (_DAT_004adca0 < *(float *)(param_1 + 0x1a0)) {
    FUN_00445640(5,uVar3 | 4);
  }
  if (DAT_0050cb40 != 0) {
    FUN_0047a930(param_1);
  }
  uVar4 = FUN_00445660(3);
  FUN_00445640(3,*(undefined4 *)(param_1 + 0x26c));
  _DAT_00e270e0 = *(undefined4 *)(param_1 + 0x1f8);
  bVar7 = (*(uint *)(param_1 + 0x60) & 0x2000000) == 0;
  if (bVar7) {
    FUN_004764a0(param_1);
    FUN_00476390(param_1 + 0x30,param_1 + 0x20,param_1 + 0x194,param_1 + 0x2e4);
  }
  else {
    FUN_0042fa50(param_1 + 0x194,0xbf800000,param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  pfVar6 = (float *)(param_1 + 0x2e4);
  bVar7 = !bVar7;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x58);
  *(float *)(param_1 + 0x2d8) = *pfVar6;
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x2ec);
  iVar5 = FUN_0046a9c0(param_1);
  if (iVar5 == 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
      if (bVar7) goto LAB_0047acc7;
      fVar1 = *(float *)(param_1 + 0x208);
      if (*(float *)(param_1 + 0x208) < _DAT_004adc48) {
        fVar1 = -fVar1;
      }
      fVar1 = (_DAT_004adc50 - fVar1 * _DAT_004adc60) * *(float *)(param_1 + 0x1f0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1f0) * _DAT_004adc60;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1f0) * _DAT_004add6c;
  }
  *(float *)(param_1 + 0x1f0) = fVar1;
LAB_0047acc7:
  if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
    FUN_0044ae40(param_1 + 0x1ec,pfVar6,*(undefined4 *)(param_1 + 0x1f0),
                 *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 500),
                 *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x1f8));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1f0) * _DAT_004adc60;
    *(float *)(param_1 + 0x1f0) = fVar1;
    FUN_0044ae40(param_1 + 0x1ec,pfVar6,fVar1,
                 *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1fc));
    if (*(float *)(param_1 + 0x1f8) <= _DAT_004adc48) {
      if (*(float *)(param_1 + 0x1f8) < _DAT_004adc48) {
        *pfVar6 = *(float *)(param_1 + 0x1f8) + *pfVar6;
      }
    }
    else {
      *pfVar6 = *(float *)(param_1 + 0x1f8) + *pfVar6;
    }
  }
  fVar8 = (float10)FUN_00480650(0x3fc00000,(float)_DAT_00e22a40);
  fVar8 = fVar8 * (float10)*(float *)(param_1 + 500);
  fVar2 = (float10)_DAT_004adc60;
  *(float *)(param_1 + 500) = (float)fVar8;
  if ((fVar8 < fVar2) && (-fVar8 < (float10)_DAT_004adc60)) {
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (bVar7) {
    fVar1 = *(float *)(param_1 + 0x22c) * (float)_DAT_00e22a40;
    if (*(float *)(param_1 + 0x220) <= *(float *)(param_1 + 0x224)) {
      fVar1 = *(float *)(param_1 + 0x70) * fVar1 + *(float *)(param_1 + 0x220);
      *(float *)(param_1 + 0x220) = fVar1;
      if (*(float *)(param_1 + 0x224) < fVar1) {
        *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x224);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x70) * fVar1;
      *(float *)(param_1 + 0x220) = fVar1;
      if (fVar1 < *(float *)(param_1 + 0x224)) {
        *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x224);
      }
    }
  }
  FUN_00478d80(param_1,(undefined4 *)(param_1 + 0x16c),&local_c,param_1 + 0x30);
  if (bVar7) {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20000000;
    *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x2cc) = local_c;
  *(undefined4 *)(param_1 + 0x50) = local_c;
  *(undefined4 *)(param_1 + 0x2d0) = local_8;
  *(undefined4 *)(param_1 + 0x2d4) = local_4;
  *(undefined4 *)(param_1 + 0x54) = local_8;
  *(undefined4 *)(param_1 + 0x58) = local_4;
  FUN_00445640(5,uVar3);
  FUN_00445640(3,uVar4);
  return;
}

