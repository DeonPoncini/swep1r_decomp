#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469c30(int param_1,float param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  DAT_00e295b0 = 0;
  DAT_00e295b4 = 0;
  DAT_00e295b8 = (uint)(0 < DAT_00e295d0);
  DAT_00e295bc = (uint)(DAT_00e295d0 < DAT_00e295cc + -1);
  if (((&DAT_0050c908)[param_1] & 0x20000) != 0) {
    if (DAT_00e295d0 < DAT_00e295cc + -1) {
      DAT_00e295b4 = 1;
      if ((_DAT_00e295d8 == _DAT_004ad590) || (((&DAT_0050c918)[param_1] & 0x20000) != 0)) {
        bVar1 = true;
        DAT_00e295e0 = 1;
        _DAT_00e295d8 = 0.6;
        if (0 < DAT_00e295dc) {
          _DAT_00e295d8 = _DAT_004ad588 / param_2;
        }
      }
    }
    else if (DAT_00e295a0 == _DAT_004ad670) {
      FUN_00440550(0x4b);
    }
  }
  if (((&DAT_0050c908)[param_1] & 0x10000) != 0) {
    if (DAT_00e295d0 < 1) {
      if (DAT_00e295a0 == _DAT_004ad670) {
        FUN_00440550(0x4b);
      }
    }
    else {
      DAT_00e295b0 = 1;
      if ((_DAT_00e295d8 == _DAT_004ad590) || (((&DAT_0050c918)[param_1] & 0x10000) != 0)) {
        bVar1 = true;
        DAT_00e295e0 = -1;
        _DAT_00e295d8 = 0.6;
        if (DAT_00e295dc < 0) {
          _DAT_00e295d8 = _DAT_004ad588 / param_2;
        }
      }
    }
  }
  iVar3 = DAT_00e295d0;
  iVar2 = DAT_00e295b0;
  if ((DAT_00e295b0 != 0) || (DAT_00e295b4 != 0)) {
    (&DAT_0050c918)[param_1] = (&DAT_0050c918)[param_1] & 0xfffffffc;
  }
  if (bVar1) {
    if (DAT_00e295dc * DAT_00e295e0 < 0) {
      DAT_00e295dc = 0;
    }
    DAT_00e295d0 = iVar3 + DAT_00e295e0;
    DAT_00e295dc = DAT_00e295dc + DAT_00e295e0;
    FUN_00440550(0x58);
    iVar2 = DAT_00e295b0;
    iVar3 = DAT_00e295d0;
  }
  if ((DAT_00e295b4 == 0) && (iVar2 == 0)) {
    DAT_00e295dc = 0;
  }
  if (((DAT_00e295d4 == iVar3) && (iVar2 == 0)) && (DAT_00e295b4 == 0)) {
    if (param_3 != 0) {
      FUN_00469b90(param_2 * _DAT_004ad6ec);
      return;
    }
  }
  else {
    FUN_00469b90(param_2 * _DAT_004ad6f0);
    if (DAT_00e295a0 == _DAT_004ad590) {
      DAT_00e295d4 = DAT_00e295d0;
    }
  }
  return;
}

