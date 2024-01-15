#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043da90(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 8) == 7) {
      return 0;
    }
    if (*(int *)(param_1 + 8) == 4) {
      return 0;
    }
    _DAT_00e99358 = -300.0;
    DAT_0050c468 = 1;
    DAT_004bfedc = -1;
    bVar2 = false;
  }
  if ((DAT_0050c468 != 0) && (bVar2)) {
    _DAT_00e99358 =
         _DAT_00e99358 -
         (float)(int)DAT_0050c468 * _DAT_00e22a50 * _DAT_004ac848 * (float)_DAT_004ac9b0;
    bVar2 = _DAT_00e99358 <= _DAT_004ac848;
    if (bVar2) {
      _DAT_00e99358 = -300.0;
    }
    bVar1 = (float)param_3 <= _DAT_00e99358;
    if (bVar1) {
      _DAT_00e99358 = (float)param_3;
    }
    if ((((bVar1 || bVar2) && (DAT_0050c468 = 0, DAT_004bfedc != -1)) && (DAT_0050c944 == 0)) &&
       (DAT_0050c930 == 0)) {
      FUN_00454d40(param_1,DAT_004bfedc);
      return 1;
    }
  }
  return 0;
}

