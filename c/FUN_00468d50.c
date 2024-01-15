#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468d50(float param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = (int)param_1;
  if (0 < DAT_0050cad4) {
    DAT_0050cad4 = DAT_0050cad4 + -1;
    return;
  }
  pfVar1 = (float *)((int)param_1 + 0x50);
  FUN_0042f860(&local_c,pfVar1,(int)param_1 + 0x44);
  if (*(int *)((int)param_1 + 8) == 2) {
    local_4 = 0;
  }
  fVar7 = (float10)FUN_0042f8c0(&local_c);
  if ((fVar7 <= (float10)_DAT_004ad66c) && (*(int *)((int)param_1 + 0x4c) == -0x3cef0000)) {
    *(undefined4 *)((int)param_1 + 0xa0) = 1;
  }
  if (*(int *)((int)param_1 + 0xa0) == 0) {
    fVar7 = (float10)FUN_0042f560(-local_c,local_8);
    FUN_00468d00(param_1);
    param_1 = (float)fVar7;
  }
  else {
    param_1 = *(float *)((int)param_1 + 0x6c);
  }
  fVar4 = param_1 - *(float *)(iVar6 + 0x68);
  if (fVar4 < _DAT_004ad5b8) {
    fVar4 = fVar4 - _DAT_004ad5bc;
  }
  if (_DAT_004ad5c0 < fVar4) {
    fVar4 = fVar4 - _DAT_004ad5c4;
  }
  fVar5 = _DAT_004ad670;
  if (*(int *)(iVar6 + 0x4c) == -0x3d900000) {
    fVar5 = _DAT_004ad604;
  }
  if ((_DAT_004ad598 < fVar4) || (fVar4 < _DAT_004ad5c8)) {
    fVar5 = fVar5 * fVar4 * _DAT_004ad674;
    bVar3 = fVar5 < _DAT_004ad590;
    *(float *)(iVar6 + 0x98) = fVar5;
    if (bVar3) {
      *(float *)(iVar6 + 0x98) = -fVar5;
    }
    bVar3 = _DAT_004ad590 < *(float *)(iVar6 + 0x98);
    *(undefined4 *)(iVar6 + 0x9c) = 0;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x68);
    *(float *)(iVar6 + 0x74) = fVar4;
    fVar5 = _DAT_00e22a50;
    if (bVar3) {
      *(float *)(iVar6 + 0x9c) = _DAT_00e22a50;
      if (*(float *)(iVar6 + 0x98) < fVar5) {
        *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x98);
      }
      fVar4 = (*(float *)(iVar6 + 0x9c) / *(float *)(iVar6 + 0x98)) * fVar4 +
              *(float *)(iVar6 + 0x68);
      bVar3 = fVar4 < _DAT_004ad5b8;
      *(float *)(iVar6 + 0x68) = fVar4;
      if (bVar3) {
        *(float *)(iVar6 + 0x68) = fVar4 - _DAT_004ad5bc;
      }
      if (_DAT_004ad5c0 < *(float *)(iVar6 + 0x68)) {
        *(float *)(iVar6 + 0x68) = *(float *)(iVar6 + 0x68) - _DAT_004ad5c4;
        return;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar6 + 8);
    *(float *)(iVar6 + 0x68) = param_1;
    if (iVar2 == 2) {
      if (*(int *)(iVar6 + 0xa0) == 0) {
        FUN_00466ec0(iVar6,0x13);
        return;
      }
      FUN_00466ec0(iVar6,0x11);
      return;
    }
    if (iVar2 == 3) {
      if (*(int *)(iVar6 + 0xa0) == 0) {
        FUN_00466ec0(iVar6,0x1e);
        return;
      }
      if (*pfVar1 != _DAT_004c4534) {
        FUN_00466ec0(iVar6,0x1d);
        return;
      }
      FUN_00466ec0(iVar6,0x1f);
      return;
    }
    if (iVar2 == 1) {
      FUN_00466ec0(iVar6,10);
      return;
    }
  }
  return;
}

