#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477ad0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = param_1;
  fVar4 = *(float *)(param_1 + 0x94) * _DAT_004add20;
  fVar3 = (*(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x94)) *
          _DAT_004adc5c;
  if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
    *(float *)(param_4 + 8) = *(float *)(param_4 + 8) - *(float *)(param_1 + 0x200);
  }
  FUN_004764e0(param_1,param_2,param_1 + 0x30,param_1 + 0x20,param_1 + 0x194,param_3,fVar4,fVar3,
               param_4);
  if (((*(uint *)(param_1 + 100) & 0x400) == 0) &&
     (*(float *)(param_4 + 8) = *(float *)(param_1 + 0x200) + *(float *)(param_4 + 8),
     (*(uint *)(param_1 + 100) & 0x400) == 0)) {
    pbVar1 = (byte *)(param_1 + 0x60);
    fVar3 = *(float *)(param_1 + 0x200);
    pfVar2 = (float *)(param_1 + 0x200);
    param_1 = 0x43960000;
    if ((*pbVar1 & 0x80) == 0) {
      param_1 = 0x428c0000;
    }
    FUN_0044af50(pfVar2,*(undefined4 *)(iVar5 + 0x1ec),*(undefined4 *)(iVar5 + 0x1f0),
                 *(undefined4 *)(iVar5 + 0x74),param_1);
    *(float *)(param_4 + 8) = *(float *)(param_4 + 8) - (*pfVar2 - fVar3) * _DAT_004adcc0;
    if (((*(uint *)(iVar5 + 100) & 0x400) == 0) && (*(float *)(iVar5 + 0x208) != _DAT_004adc48)) {
      fVar3 = *(float *)(iVar5 + 0x208);
      if (*(float *)(iVar5 + 0x208) < _DAT_004adc48) {
        fVar3 = -fVar3;
      }
      *(float *)(param_4 + 8) =
           (*(float *)(iVar5 + 0x208) * _DAT_004add34 - *(float *)(param_4 + 8)) * fVar3 +
           *(float *)(param_4 + 8);
    }
  }
  *(undefined4 *)(iVar5 + 0x204) = *(undefined4 *)(param_4 + 8);
  return;
}

