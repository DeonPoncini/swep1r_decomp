#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445860(void)

{
  int iVar1;
  undefined local_100 [256];
  
  if (((byte)DAT_0050c048 & 1) != 0) {
    FUN_0049eb80(local_100,s_Version___s_004c178c,s_GNOME_000_004c17c8);
    FUN_00450560(0x1e,0xd2,local_100);
  }
  if (DAT_0050c5f0 == 3) {
    if (_DAT_004aca88 < _DAT_00e9824c) {
      _DAT_00e9824c = _DAT_00e9824c - (float)_DAT_00e22a40 * (float)_DAT_004aca90;
      if (_DAT_00e9824c < _DAT_004aca88) {
        _DAT_00e9824c = 0.0;
      }
    }
    else {
      FUN_00445730();
    }
  }
  else if (DAT_0050c5f0 == 2) {
    _DAT_00e9824c = (float)_DAT_00e22a40 * (float)_DAT_004aca90 + _DAT_00e9824c;
    if (_DAT_004aca8c < _DAT_00e9824c) {
      _DAT_00e9824c = 1.0;
      DAT_0050c5f0 = 1;
    }
  }
  iVar1 = FUN_00450b30(0x4a646765,0);
  if ((*(ushort *)(iVar1 + 6) & 0x1000) == 0) {
    FUN_00462cf0();
  }
  FUN_0042ae00();
  return;
}

