#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427880(void)

{
  float fVar1;
  float10 fVar2;
  float local_4;
  
  FUN_00449d70(_DAT_004ac478 - (float)(uint)DAT_0050b704._3_1_ * _DAT_004ac474);
  fVar2 = (float10)FUN_004456a0();
  local_4 = (float)((float10)_DAT_004ac478 - fVar2 * (float10)_DAT_004ac4b4);
  fVar2 = (float10)FUN_004456a0();
  if ((float10)_DAT_004ac47c < fVar2) {
    local_4 = _DAT_004ac4b8;
  }
  local_4 = local_4 * _DAT_0050b6e4;
  _DAT_0050b6ec = __ftol();
  _DAT_0050b6f4 = _DAT_0050b6f4 + (float)_DAT_00e22a40;
  fVar1 = (float)(uint)(DAT_004b8748 == 0x22);
  if ((_DAT_0050b6f0 <= _DAT_004ac47c) ||
     (_DAT_0050b6f0 = _DAT_0050b6f0 - (float)_DAT_00e22a40, _DAT_004ac47c < _DAT_0050b6f0)) {
LAB_0042797a:
    if (fVar1 == 0.0) goto LAB_00427a0e;
  }
  else if (fVar1 == 0.0) {
    local_4 = 1.0;
    _DAT_0050b6f0 = fVar1;
    FUN_00426c80(DAT_004b8748,7,0x3e800000,0x3f800000,0);
    goto LAB_0042797a;
  }
  if ((_DAT_0050b6f0 <= _DAT_004ac47c) &&
     (fVar2 = (float10)FUN_004456a0(), fVar2 == (float10)_DAT_004ac47c)) {
    if (_DAT_004ac4bc <= _DAT_0050b6f4) {
      DAT_004b8748 = -1;
    }
    else {
      local_4 = (_DAT_004ac4bc - _DAT_0050b6f4) * _DAT_004ac4c0;
      if (_DAT_004ac478 < local_4) {
        local_4 = 1.0;
      }
      FUN_00426c80(DAT_004b8748,7,0x3e800000,local_4,1);
    }
  }
LAB_00427a0e:
  if (DAT_0050b6e0 == 1) {
    _DAT_0050b6e4 = 1.0;
    if (-1 < DAT_004b8744) {
      FUN_00426c80(DAT_004b8744,7,0x3e800000,local_4,1);
    }
    FUN_004277f0(3,DAT_004b8744);
  }
  else if ((1 < DAT_0050b6e0) && (DAT_0050b6e0 < 4)) {
    _DAT_0050b6e4 = _DAT_0050b6e8 * (float)_DAT_00e22a40 + _DAT_0050b6e4;
    if (_DAT_0050b6e4 <= _DAT_004ac47c) {
      FUN_004277f0(0,0xffffffff);
    }
    else if (-1 < DAT_004b8744) {
      FUN_00426c80(DAT_004b8744,7,0x3e800000,local_4,1);
      return;
    }
  }
  return;
}

