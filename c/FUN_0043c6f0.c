#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c6f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined local_c [8];
  float local_4;
  
  iVar3 = 0;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_00449e50();
    DAT_0050c140 = 0;
    _DAT_0050c564 = 3.0;
    FUN_0045c010(&DAT_004c44dc,&DAT_004c44fc,1,0,0);
    FUN_004816b0();
    DAT_0050c428 = __ftol();
  }
  FUN_00440d50(0,0);
  iVar2 = FUN_00450b30(0x456c6d6f,*(undefined4 *)(param_1 + 0x40));
  fVar1 = *(float *)(iVar2 + 0xbc) * _DAT_004ac948;
  if (1 < DAT_0050c140) {
    FUN_00469b90(0xc0533333);
  }
  if ((DAT_0050c140 == 3) && (_DAT_004ac778 < _DAT_0050c564)) {
    *(float *)(param_1 + 0x4c) = fVar1 - _DAT_004ac94c;
    FUN_0042f7d0(&DAT_00e2af90,param_1 + 0x44);
    _DAT_0050c564 = _DAT_0050c564 - _DAT_00e22a50;
  }
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      if ((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) {
        FUN_0044b270((&DAT_00e29900)[*(int *)(param_1 + 0x40)],&DAT_004c457c);
        FUN_00466ec0(iVar2,0);
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
        DAT_00e295a0 = 0.0;
        DAT_004bfedc = 9;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(char *)(param_1 + 0x70));
  }
  if (_DAT_004ac778 < DAT_00e295a0) {
    FUN_00456800(param_1,(int)DAT_0050c428,DAT_00e295a0 * _DAT_004ac8cc);
  }
  if (DAT_004bfedc != 9) {
    if (((DAT_0050c140 == 0) && (_DAT_004ac778 < _DAT_0050c564)) &&
       (_DAT_0050c564 = _DAT_0050c564 - _DAT_00e22a50, _DAT_0050c564 <= _DAT_004ac778)) {
      FUN_0045c010(&DAT_004c44dc,&DAT_004c449c,1,0,0);
      DAT_0050c140 = 1;
    }
    if (DAT_0050c930 == 0) {
      if (DAT_0050c140 == 1) {
        FUN_0044afb0((&DAT_00e29900)[*(int *)(param_1 + 0x40)],local_c);
        local_4 = fVar1 - _DAT_004ac94c;
        FUN_0045c010(&DAT_00e298f0,local_c,1,0,0);
        FUN_0042f7d0(iVar2 + 0x50,&DAT_004c451c);
        *(undefined4 *)(iVar2 + 0x54) = 0xc3a00000;
        if (*(int *)(iVar2 + 8) == 1) {
          uVar4 = 6;
        }
        else {
          uVar4 = 0x14;
        }
        FUN_00466ec0(iVar2,uVar4);
        DAT_0050c140 = 2;
      }
      if ((DAT_0050c930 == 0) && (DAT_0050c140 == 2)) {
        _DAT_0050c564 = 5.0;
        DAT_0050c140 = 3;
      }
    }
    if ((_DAT_0050c564 <= _DAT_004ac778) && (DAT_0050c140 == 3)) {
      FUN_0045c010(&DAT_00e298f0,&DAT_004c449c,1,0,0);
      DAT_0050c140 = 4;
    }
    if (DAT_0050c930 != 0) {
      return;
    }
    if (DAT_0050c140 == 4) {
      FUN_0045c010(&DAT_004c4490,&DAT_00e2af90,1,0,0);
      DAT_0050c140 = 5;
    }
    if (DAT_0050c930 != 0) {
      return;
    }
    if (DAT_0050c140 != 5) {
      return;
    }
  }
  FUN_00454d40(param_1,9);
  return;
}

