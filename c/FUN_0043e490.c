#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043e490(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = false;
  if ((_DAT_004c02ac == _DAT_004ac790) || (0 < DAT_004c02b4)) {
    FUN_00428740(0xffffff99,0,0,0,0xffffffff);
    DAT_004c02b4 = DAT_004c02b4 + -1;
    if (0 < DAT_004c02b4) {
      return 0;
    }
  }
  if (_DAT_004ac778 < _DAT_004c02ac) {
    _DAT_004c02ac = _DAT_004c02ac - _DAT_00e22a50 * _DAT_004ac9c4;
  }
  else {
    DAT_004c02b0 = DAT_004c02b0 + -1;
    bVar1 = DAT_004c02b0 < 1;
    _DAT_004c02ac = 0.0;
  }
  if (_DAT_004c02ac < _DAT_004ac778) {
    DAT_004c02b0 = 3;
    _DAT_004c02ac = 0.0;
  }
  uVar2 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar2);
  if (!bVar1) {
    return 0;
  }
  FUN_004285d0(0xffffff99,0);
  _DAT_004c02ac = 255.0;
  DAT_004c02b4 = 3;
  DAT_004c4008 = 1;
  DAT_0050c944 = 0;
  return 1;
}

