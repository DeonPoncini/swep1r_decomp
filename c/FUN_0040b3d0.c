#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b3d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = *(float *)(DAT_004d78a8 + 0x1a0) / _DAT_004d7898;
  if ((((_DAT_004d7780 == _DAT_004ac398) || (DAT_004d78ac == 0)) || (DAT_004d78a0 != 0)) &&
     (iVar3 = FUN_00409ee0(0,0xffffffff,0xffffffff,0xffffffff,0), iVar3 != 0)) {
    DAT_004d78ac = 1;
    DAT_004d78a0 = 0;
  }
  fVar2 = _DAT_004d78b4 - fVar1;
  if (fVar2 < _DAT_004ac390) {
    fVar2 = -fVar2;
  }
  _DAT_004b4dd0 = (uint)(_DAT_004ac3b0 < fVar2);
  if (_DAT_004b4dd0 == 0) {
    if (DAT_004d78b8 == 0) {
      if ((_DAT_004d7898 <= fVar1) || (fVar1 == _DAT_004d7770)) {
        _DAT_004b4dd0 = 1;
        DAT_004d78b8 = _DAT_004b4dd0;
      }
      else {
        _DAT_004b4dd0 = 0;
        DAT_004d78b8 = _DAT_004b4dd0;
      }
    }
  }
  else {
    DAT_004d78b8 = 0;
  }
  fVar2 = _DAT_004d78b4;
  if (_DAT_004b4dd0 != 0) {
    __ftol();
    iVar3 = __ftol();
    if ((*(uint *)(DAT_004d78a8 + 0x60) & 0x800000) == 0) {
      if (_DAT_004ac3b8 <= (float)iVar3) {
        iVar4 = DAT_004d78c0 - iVar3;
        if (iVar4 < 0) {
          iVar4 = iVar3 - DAT_004d78c0;
        }
        if (iVar4 < 500) {
          iVar3 = DAT_004d78c0;
        }
      }
      else {
        iVar3 = 500;
      }
    }
    else {
      iVar3 = 0x251c;
    }
    FUN_0040a330(0,iVar3);
    fVar2 = fVar1;
    DAT_004d78c0 = iVar3;
    if (DAT_004d78b0 == 0) {
      iVar3 = __ftol();
      iVar4 = DAT_004d78bc - iVar3;
      if (iVar4 < 0) {
        iVar4 = iVar3 - DAT_004d78bc;
      }
      if (iVar4 < 10) {
        iVar3 = DAT_004d78bc;
      }
      DAT_004d78bc = iVar3;
      FUN_00409ee0(0x17,DAT_004d78bc,0xffffffff,0xffffffff,0);
    }
  }
  _DAT_004d78b4 = fVar2;
  _DAT_004d7780 = fVar1;
  return;
}

