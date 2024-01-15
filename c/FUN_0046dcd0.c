#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046dcd0(float param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  fVar2 = _DAT_004ad968;
  if (*(float *)((int)param_1 + 0x2fc) < _DAT_004ad968) {
    fVar2 = *(float *)((int)param_1 + 0x2fc) * _DAT_004ad9b0;
  }
  if (*(float *)((int)param_1 + 0x1a0) < _DAT_004ad9b4) {
    fVar2 = _DAT_004ad968;
  }
  fVar4 = *(float *)((int)param_1 + 0x204) * _DAT_004ad9b8;
  bVar1 = fVar4 < _DAT_004ad968;
  fVar2 = (fVar2 - *(float *)((int)param_1 + 0x19b8)) * _DAT_004ad964 +
          *(float *)((int)param_1 + 0x19b8);
  fVar3 = -fVar4;
  *(float *)((int)param_1 + 0x19b8) = fVar2;
  if ((bVar1) || (_DAT_004ad9bc < fVar4)) {
    param_1 = 0.0;
  }
  else {
    param_1 = fVar4;
    if (_DAT_004ad958 < fVar4) {
      param_1 = _DAT_004ad9bc - fVar4;
    }
  }
  fVar4 = _DAT_004ad968;
  if (((_DAT_004ad968 <= fVar3) && (fVar3 <= _DAT_004ad9bc)) &&
     (fVar4 = fVar3, _DAT_004ad958 < fVar3)) {
    fVar4 = _DAT_004ad9bc - fVar3;
  }
  fVar4 = fVar4 * _DAT_004ad95c - _DAT_004ad9c0;
  fVar3 = fVar2 * _DAT_004ad9c4;
  if (*(int *)(*(int *)(iVar5 + 0x344) + 4) != 0) {
    FUN_00431390(iVar5 + 0x390,(param_1 * _DAT_004ad95c - _DAT_004ad9c0) * fVar2,0x3f800000,0,0,
                 iVar5 + 0x390);
    *(float *)(iVar5 + 0x3c8) = fVar3 + *(float *)(iVar5 + 0x3c8);
  }
  if (*(int *)(*(int *)(iVar5 + 0x344) + 8) != 0) {
    FUN_00431390(iVar5 + 0x3d0,fVar4 * fVar2,0x3f800000,0,0,iVar5 + 0x3d0);
    *(float *)(iVar5 + 0x408) = fVar3 + *(float *)(iVar5 + 0x408);
  }
  return;
}

