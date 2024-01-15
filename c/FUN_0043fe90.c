#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fe90(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = _DAT_004aca10;
  if (DAT_00e295c0 == 0) {
    fVar1 = _DAT_004aca14;
  }
  _DAT_0050c57c = fVar1 * _DAT_00e22a50 + _DAT_0050c57c;
  if (_DAT_004ac7a4 < _DAT_0050c57c) {
    _DAT_0050c57c = 254.0;
  }
  if (_DAT_0050c57c < _DAT_004ac778) {
    _DAT_0050c57c = 0.0;
  }
  fVar1 = _DAT_004aca10;
  if (DAT_00e295c4 == 0) {
    fVar1 = _DAT_004aca14;
  }
  _DAT_0050c580 = fVar1 * _DAT_00e22a50 + _DAT_0050c580;
  if (_DAT_004ac7a4 < _DAT_0050c580) {
    _DAT_0050c580 = 254.0;
  }
  if (_DAT_0050c580 < _DAT_004ac778) {
    _DAT_0050c580 = 0.0;
  }
  FUN_004285d0(0xb2,1);
  FUN_00428660(0xb2,param_1 + -0x1b,param_2 + -0xb);
  FUN_00428740(0xb2,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xb1,1);
  FUN_00428660(0xb1,param_1 + -0x14,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xb1,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb5,1);
  FUN_00428660(0xb5,param_1 + -0x1b,param_3 + 0xf + param_2);
  FUN_00428740(0xb5,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xb4,1);
  FUN_00428660(0xb4,param_1 + -0x14,param_3 + 0x17 + param_2);
  uVar2 = __ftol();
  FUN_00428740(0xb4,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb7,1);
  FUN_00428660(0xb7,param_1 + -0x11,param_2 + 0x12);
  FUN_00428740(0xb7,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004286f0(0xb7,0x3f800000,(float)param_3 * _DAT_004aca18);
  if ((DAT_00e295c4 != 0) && ((DAT_0050c908 & 0x8000) != 0)) {
    FUN_004285d0(0xb6,1);
    FUN_00428660(0xb6,param_1 + -0x20,param_3 + -0x13 + param_2);
    FUN_00428740(0xb6,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  if ((DAT_00e295c0 != 0) && ((DAT_0050c908 & 0x4000) != 0)) {
    FUN_004285d0(0xb3,1);
    FUN_00428660(0xb3,param_1 + -0x20,param_2 + -0x11);
    FUN_00428740(0xb3,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  return;
}

