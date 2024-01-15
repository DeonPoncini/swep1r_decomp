#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ec40(undefined4 *param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float10 fVar3;
  
  if (((_DAT_004accac < (float)param_1[1]) && (param_1[8] == 0)) ||
     (((float)param_1[1] < _DAT_004accac && (param_1[9] == 0)))) {
    fVar2 = (float)param_1[1] * (float)_DAT_00e22a40;
    bVar1 = _DAT_004accac <= fVar2;
    param_1[2] = fVar2 + (float)param_1[2];
    if (bVar1) {
      if (_DAT_004accac < fVar2) {
        param_1[9] = 0;
      }
    }
    else {
      param_1[8] = 0;
    }
  }
  if (_DAT_004acca8 <= (float)param_1[2]) {
    do {
      if (param_1[8] != 0) break;
      param_1[2] = (float)param_1[2] - _DAT_004acca8;
      FUN_0044eaa0(*param_1,1,param_1);
    } while (_DAT_004acca8 <= (float)param_1[2]);
  }
  if ((float)param_1[2] < _DAT_004accac) {
    do {
      if (param_1[9] != 0) break;
      param_1[2] = (float)param_1[2] - _DAT_004accb0;
      FUN_0044eaa0(*param_1,2,param_1);
    } while ((float)param_1[2] < _DAT_004accac);
  }
  if ((float)param_1[2] < _DAT_004accac) {
    param_1[2] = 0;
  }
  if (_DAT_004acca8 < (float)param_1[2]) {
    param_1[2] = 0x3f800000;
  }
  FUN_0044e660(*param_1,0xb,param_1[2],param_1 + 4,param_2);
  fVar3 = (float10)FUN_0042f8c0(param_2 + 0xc);
  param_1[3] = (float)fVar3;
  return;
}

