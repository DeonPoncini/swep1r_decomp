#include "prototype.h"


void FUN_0042a9f0(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    FUN_00429d90(&DAT_0050c040,param_2,0x3f800000,0,6);
    return;
  case 1:
    if (((byte)DAT_0050c048 & 4) != 0) {
      DAT_0050ca28 = (uint)(DAT_0050ca28 == 0);
      return;
    }
    break;
  case 2:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c707c,param_2,0x3a83126f,0x3e4ccccd,0x40000000);
      return;
    }
    break;
  case 3:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7080,param_2,0x3f000000,0x40000000,0x43480000);
      return;
    }
    break;
  case 4:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7bb8,param_2,0x3f800000,0x41a00000,0x447a0000);
      return;
    }
    break;
  case 5:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7bbc,param_2,0x3f800000,0x41a00000,0x43fa0000);
      return;
    }
    break;
  case 6:
    if (((byte)DAT_0050c048 & 0x10) != 0) {
      DAT_0050ca24 = (uint)(DAT_0050ca24 == 0);
      return;
    }
    break;
  case 7:
    if (((byte)DAT_0050c048 & 0x20) != 0) {
      if ((DAT_00e996dc & 0x4000) != 0) {
        DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
        return;
      }
      DAT_00e996dc = DAT_00e996dc | 0x4000;
    }
  }
  return;
}

