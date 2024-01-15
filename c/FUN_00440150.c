#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440150(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = _DAT_004aca10;
  if (DAT_00e295b8 == 0) {
    fVar1 = _DAT_004aca14;
  }
  _DAT_0050c584 = fVar1 * _DAT_00e22a50 + _DAT_0050c584;
  if (_DAT_004ac7a4 < _DAT_0050c584) {
    _DAT_0050c584 = 254.0;
  }
  if (_DAT_0050c584 < _DAT_004ac778) {
    _DAT_0050c584 = 0.0;
  }
  fVar1 = _DAT_004aca10;
  if (DAT_00e295bc == 0) {
    fVar1 = _DAT_004aca14;
  }
  _DAT_0050c588 = fVar1 * _DAT_00e22a50 + _DAT_0050c588;
  if (_DAT_004ac7a4 < _DAT_0050c588) {
    _DAT_0050c588 = 254.0;
  }
  if (_DAT_0050c588 < _DAT_004ac778) {
    _DAT_0050c588 = 0.0;
  }
  FUN_004285d0(0xae,1);
  FUN_00428660(0xae,0x13,param_2 + -0xe);
  FUN_00428740(0xae,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xad,1);
  FUN_00428660(0xad,0x16,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xad,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xab,1);
  FUN_00428660(0xab,0x10b,param_2 + -0xe);
  FUN_00428740(0xab,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xaa,1);
  FUN_00428660(0xaa,0x112,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xaa,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb0,1);
  FUN_00428660(0xb0,0x30,param_2 + -4);
  FUN_00428740(0xb0,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004286f0(0xb0,0x42920000,0x3f800000);
  if (DAT_00e295b4 != 0) {
    FUN_004285d0(0xac,1);
    FUN_00428660(0xac,0xe8,param_2 + -0x13);
    FUN_00428740(0xac,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  if (DAT_00e295b0 != 0) {
    FUN_004285d0(0xaf,1);
    FUN_00428660(0xaf,0xc,param_2 + -0x13);
    FUN_00428740(0xaf,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  return;
}

