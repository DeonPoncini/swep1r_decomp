#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044fd50(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  undefined4 local_4;
  
  if (_DAT_004acd14 < _DAT_004c3e40) {
    if (DAT_0050c770 != '\0') {
      if (_DAT_004c3e44 <= _DAT_004acd14) {
        uVar5 = 0xff;
        uVar3 = 0;
        uVar2 = FUN_004816b0(0,0xff);
        uVar4 = __ftol(uVar3,uVar5,uVar2);
        uVar2 = 0;
      }
      else {
        uVar2 = __ftol();
        uVar5 = 0xff;
        uVar4 = 0xff;
        uVar3 = uVar2;
      }
      FUN_0042d950(uVar2,uVar4,uVar3,uVar5);
      uVar3 = __ftol();
      FUN_0042d910(0x1a,uVar3);
      FUN_0042ec50(&DAT_0050c770);
      if (DAT_0050c870 != 0) {
        uVar3 = __ftol(0,0xff);
        FUN_0042d950(0,uVar3);
        FUN_0042d930(&local_4,&local_8);
        FUN_0042d910(local_4,local_8 + 5);
        FUN_0042ec50(&DAT_004b3bd8);
      }
      fVar1 = (float)_DAT_00e22a40 + (float)_DAT_00e22a40;
      _DAT_0050c874 = _DAT_0050c874 - fVar1;
      _DAT_004c3e44 = _DAT_004c3e44 - fVar1;
      if (_DAT_0050c874 < _DAT_004acd14) {
        _DAT_0050c874 = 1.0;
      }
    }
    _DAT_004c3e40 = _DAT_004c3e40 - (float)_DAT_00e22a40;
  }
  return;
}

