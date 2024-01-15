#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d4e0(void)

{
  undefined local_40 [64];
  
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c214 = 12.0;
    DAT_0050c1d0 = 0;
    FUN_0042f7b0(&DAT_0050c2d0,0,0x44960000,0x42480000);
    FUN_0042f7b0(&DAT_0050c2dc,0,0,0);
    FUN_0044afb0(DAT_00e299d0,&DAT_00e2af90);
    _DAT_00e2af98 = 0xc2c20000;
    FUN_0042f7d0(&DAT_00e298f0,&DAT_00e2af90);
    _DAT_00e298f4 = _DAT_00e298f4 - _DAT_004ac8b4;
    FUN_00426c80(0xa1,7,0x3e800000,0x3f4ccccd,0);
  }
  if ((_DAT_0050c214 <= (float)_DAT_004ac9a0) && (DAT_0050c1d0 == 0)) {
    DAT_0050c1d0 = 1;
    FUN_0042f7d0(&DAT_00e2b410,&DAT_00e2af90);
    FUN_0042f7b0(&DAT_00e2b470,0,0,0);
    FUN_0042f7d0(&DAT_00e2aeb0,&DAT_00e298f0);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_00e298f0);
    _DAT_00e29b90 = _DAT_00e29b90 - _DAT_004ac8b4;
    DAT_0050c930 = 1;
  }
  _DAT_0050c2d4 = _DAT_0050c2d4 - _DAT_00e22a50 * _DAT_004ac79c;
  if (DAT_00e2993c != 0) {
    FUN_00431060(local_40,&DAT_0050c2d0);
    FUN_004337e0(DAT_00e2993c,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,0,0);
    if (*(int *)(DAT_00e2993c + 0xec) != 0) {
      FUN_00431a50(*(int *)(DAT_00e2993c + 0xec),2,3,0x10,2);
    }
  }
  if (DAT_0050c944 != -1) {
    if ((_DAT_0050c214 < _DAT_004ac778) ||
       (_DAT_0050c214 = _DAT_0050c214 - _DAT_00e22a50, _DAT_004ac778 < _DAT_0050c214)) {
      if ((DAT_004d6b48 == 0) && (DAT_004d6b44 == 0)) {
        return;
      }
      _DAT_0050c214 = 0.0;
    }
    DAT_0050c944 = 0xffffffff;
    DAT_004bfedc = 5;
    return;
  }
  return;
}

