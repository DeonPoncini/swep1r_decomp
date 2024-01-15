#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  DAT_0050c494 = DAT_0050c494 + 1;
  if (0x1e < DAT_0050c494) {
    DAT_0050c494 = 0;
  }
  uVar1 = FUN_00411480(1);
  FUN_00414e60(uVar1);
  iVar2 = FUN_00411800();
  if (iVar2 == 0) {
    FUN_00411820(0xb);
  }
  *(undefined *)(param_1 + 0x6c) = DAT_0050c450;
  if (DAT_0050c44c == 0) {
    if (DAT_0050c488 == 0) {
      DAT_0050c488 = 1;
      FUN_00459150(param_1);
    }
    if (DAT_004c4000 != 0) {
      DAT_004c4000 = 0;
      DAT_0050c944 = 1;
      FUN_00426910();
      _DAT_004c0014 = 30.0;
      _DAT_0050c21c = 0xffffffff;
      _DAT_0050c1d8 = 2.0;
      _DAT_0050c1dc = 1.0;
      _DAT_0050c1e0 = 1.0;
      _DAT_0050c220 = 0xffffffff;
      _DAT_0050c218 = 0xff020100;
      DAT_0050c490 = '\x03';
      iVar2 = FUN_00440de0(1);
      if (iVar2 != 0) {
        iVar2 = (int)DAT_0050c490;
        DAT_0050c490 = DAT_0050c490 + '\x01';
        (&DAT_0050c218)[iVar2] = 3;
      }
    }
    _DAT_0050c1d8 = _DAT_0050c1d8 - _DAT_00e22a50;
    if (_DAT_0050c1d8 <= _DAT_004ac778) {
      _DAT_0050c1d8 = 0.0;
    }
    if ((_DAT_0050c1d8 <= _DAT_004ac778) &&
       (_DAT_0050c1dc = _DAT_0050c1dc - _DAT_00e22a50, _DAT_0050c1dc <= _DAT_004ac778)) {
      _DAT_0050c1dc = 0.0;
    }
    if ((_DAT_0050c1dc <= _DAT_004ac788) &&
       (_DAT_0050c1e0 = _DAT_0050c1e0 - _DAT_00e22a50 * _DAT_004ac760,
       _DAT_0050c1e0 <= _DAT_004ac778)) {
      _DAT_0050c1e0 = 0.0;
    }
    if (DAT_0050c944 == 0) {
      if (_DAT_004c0014 <= _DAT_004ac778) {
        _DAT_004c0014 = 30.0;
        *(undefined4 *)(param_1 + 100) = 2;
        DAT_0050c944 = -1;
      }
      FUN_004277f0(1,0);
    }
    iVar2 = FUN_00411810();
    if (((*(int *)(iVar2 + 0x1c) == 0xb) && (((byte)DAT_0050c908 & 4) != 0)) &&
       (((byte)DAT_0050c918 & 0x80) != 0)) {
      *(bool *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) == '\0';
      DAT_0050c454 = param_1;
    }
    cVar5 = 'P';
    if (*(char *)(param_1 + 0x51) != '\0') {
      cVar5 = 'M';
    }
    if (*(int *)(iVar2 + 0x1c) != 0xb) {
      cVar5 = (*(byte *)(iVar2 + 0x1c) & 1) + 0x4e;
    }
    if (*(int *)(iVar2 + 0x1c) == 0x81) {
      cVar5 = 'N';
    }
    FUN_00428660(cVar5,0,0);
    FUN_004286f0(cVar5,0x3f000000,0x3f800000);
    if (*(char *)(param_1 + 0x51) != '\0') {
      FUN_004286f0(cVar5,0x3f800000,0x3f800000);
    }
    FUN_004285d0(cVar5,1);
    FUN_00428740(cVar5,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004287e0(cVar5,0x10000);
    FUN_004286f0(cVar5,0x3f800000,0x3f800000);
    uVar1 = FUN_00414d90(iVar2,0x272a);
    FUN_00414e60(uVar1,0);
    uVar3 = FUN_00414d90(iVar2,0x272b);
    FUN_00414e60(uVar3,0);
    if (*(char *)(param_1 + 0x51) == '\0') {
      uVar4 = __ftol();
      FUN_00428660(0x52,0xc,uVar4);
      FUN_004285d0(0x52,1);
      FUN_00428740(0x52,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004287e0(0x52,0x10000);
      uVar4 = __ftol();
      FUN_00428660(0x53,0x9b,uVar4);
      FUN_004285d0(0x53,1);
      FUN_00428740(0x53,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      if (_DAT_0050c1d8 <= _DAT_004ac778) {
        FUN_00414e60(uVar1,1);
      }
      FUN_004287e0(0x53,0x10000);
      FUN_00428660(0x51,0xe,0x33);
      FUN_004285d0(0x51,1);
      uVar1 = __ftol();
      FUN_00428740(0x51,0xffffffff,0xffffffff,0xffffffff,uVar1);
      FUN_004287e0(0x51,0x10000);
      uVar1 = __ftol(0x46);
      FUN_00428660(0x54,uVar1);
      FUN_004285d0(0x54,1);
      FUN_00428740(0x54,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      if (_DAT_0050c1e0 <= _DAT_004ac778) {
        FUN_00414e60(uVar3,1);
      }
      FUN_004287e0(0x54,0x10000);
    }
    return;
  }
  DAT_0050c44c = 0;
  *(undefined *)(param_1 + 0x70) = 1;
  DAT_004bfedc = 0x12;
  DAT_0050c944 = 0xffffffff;
  return;
}

