#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043e330(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = false;
  DAT_004c4008 = 0;
  if (_DAT_0050c570 < _DAT_004ac790) {
    _DAT_0050c570 = _DAT_0050c570 - _DAT_00e22a50 * _DAT_004ac9c0;
  }
  else {
    DAT_004c02a8 = DAT_004c02a8 + -1;
    bVar1 = DAT_004c02a8 < 1;
    _DAT_0050c570 = 255.0;
  }
  if (_DAT_004ac790 < _DAT_0050c570) {
    DAT_004c02a8 = 3;
    _DAT_0050c570 = 255.0;
  }
  uVar2 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar2);
  if (bVar1) {
    _DAT_0050c570 = 0.0;
    if (DAT_004bfedc != -1) {
      if (((DAT_004bfedc == 1) && (*(int *)(param_1 + 8) == 0x12)) &&
         (iVar3 = FUN_00450b30(0x456c6d6f,*(undefined4 *)(param_1 + 0x40)), iVar3 != 0)) {
        FUN_00466ec0(iVar3,0);
      }
      DAT_0050c944 = 1;
      DAT_0050c940 = 0;
      FUN_00426910(1);
      thunk_FUN_00449e30();
      FUN_0044e560();
      FUN_00454d40(param_1,DAT_004bfedc);
      return 0;
    }
    FUN_004285d0(0xffffff99,0);
    DAT_004c4008 = 1;
    DAT_0050c944 = 0;
    FUN_00426910(1);
    thunk_FUN_00449e30();
    FUN_0044e560();
    return 1;
  }
  return 0;
}

