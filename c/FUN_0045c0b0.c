#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c0b0(int param_1)

{
  float fVar1;
  undefined local_18 [12];
  undefined local_c [12];
  
  FUN_0042f7d0(local_18,&DAT_00e298f0);
  FUN_0042f7d0(local_c,&DAT_00e2af90);
  if (DAT_004c4004 != 0) {
    _DAT_0050c8b4 = _DAT_00e2b470 - _DAT_00e2b410;
    _DAT_0050c8c4 = _DAT_00e2b474 - _DAT_00e2b414;
    _DAT_0050c8e4 = _DAT_00e2b478 - _DAT_00e2b418;
    _DAT_0050c8b8 = _DAT_00e29b90 - _DAT_00e2aeb0;
    _DAT_0050c8b0 = _DAT_00e29b94 - _DAT_00e2aeb4;
    _DAT_0050c8bc = _DAT_00e29b98 - _DAT_00e2aeb8;
    _DAT_0050c8e0 = _DAT_004acf50;
    DAT_0050c8c0 = _DAT_004ad118;
    if ((((_DAT_0050c8b4 < _DAT_004ad1d0) && (_DAT_004ad1d4 < _DAT_0050c8b4)) &&
        (_DAT_0050c8c4 < _DAT_004ad1d0)) &&
       ((_DAT_004ad1d4 < _DAT_0050c8c4 && (*(int *)(param_1 + 0x38) == 1)))) {
      DAT_0050c8c0 = 0.3;
    }
    DAT_004c4004 = 0;
  }
  if (DAT_0050c8c0 <= _DAT_0050c8e0) {
    DAT_0050c930 = 5;
    if (*(int *)(param_1 + 8) == 8) {
      DAT_0050c930 = 0;
    }
    DAT_004c4004 = 1;
    if (DAT_0050c940 != 0) {
      DAT_0050c940 = 0;
      DAT_0050c934 = (uint)(DAT_0050c934 == 0);
      if (((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 0x34) != 3)) &&
         (DAT_0050c934 != 0)) {
        DAT_0050c468 = 1;
      }
    }
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
    if ((DAT_004bfedc != -1) && (DAT_0050c468 == 0)) {
      DAT_0050c934 = 0;
      return;
    }
  }
  else {
    _DAT_0050c8e0 = _DAT_0050c8e0 + _DAT_00e22a50;
    if (DAT_0050c8c0 < _DAT_0050c8e0) {
      _DAT_0050c8e0 = DAT_0050c8c0;
    }
    fVar1 = _DAT_0050c8e0 / DAT_0050c8c0;
    _DAT_00e2af90 = (_DAT_00e2b470 - _DAT_00e2b410) * fVar1 + _DAT_00e2b410;
    _DAT_00e2af94 = (_DAT_00e2b474 - _DAT_00e2b414) * fVar1 + _DAT_00e2b414;
    _DAT_00e2af98 = (_DAT_00e2b478 - _DAT_00e2b418) * fVar1 + _DAT_00e2b418;
    if (DAT_0050c930 != 3) {
      _DAT_00e298f0 = (_DAT_00e29b90 - _DAT_00e2aeb0) * fVar1 + _DAT_00e2aeb0;
      _DAT_00e298f4 = (_DAT_00e29b94 - _DAT_00e2aeb4) * fVar1 + _DAT_00e2aeb4;
      _DAT_00e298f8 = (_DAT_00e29b98 - _DAT_00e2aeb8) * fVar1 + _DAT_00e2aeb8;
      return;
    }
  }
  return;
}

