#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bc20(void)

{
  int iVar1;
  float *pfVar2;
  
  DAT_004c3c0c = 0;
  _DAT_0050c6f8 = 1;
  iVar1 = DAT_0050c6f4 * 0x30;
  pfVar2 = (float *)(&DAT_00e375c0 + iVar1);
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375e4 + iVar1) = *(float *)(&DAT_00e375e4 + iVar1) - _DAT_0050c6e8;
    *(float *)(&DAT_00e375e8 + iVar1) = *(float *)(&DAT_00e375e8 + iVar1) - _DAT_0050c6ec;
    *(float *)(&DAT_00e375ec + iVar1) = *(float *)(&DAT_00e375ec + iVar1) - _DAT_0050c6f0;
  }
  _DAT_00e37480 =
       *pfVar2 * _DAT_00e37580 +
       *(float *)(&DAT_00e375c8 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37590;
  _DAT_00e37484 =
       *pfVar2 * _DAT_00e37584 +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37594;
  _DAT_00e37488 =
       *pfVar2 * _DAT_00e37588 +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37598;
  _DAT_00e3748c =
       *pfVar2 * _DAT_00e3758c +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e3759c;
  _DAT_00e37490 =
       *(float *)(&DAT_00e375d4 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37580 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37590;
  _DAT_00e37494 =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37584 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37594;
  _DAT_00e37498 =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37588 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37598;
  _DAT_00e3749c =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e3758c +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e3759c;
  _DAT_00e374a0 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37590 +
       *(float *)(&DAT_00e375e0 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37580;
  _DAT_00e374a4 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37594 +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37584;
  _DAT_00e374a8 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37598 +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37588;
  _DAT_00e374ac =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e3759c +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e3758c;
  _DAT_00e374b0 =
       *(float *)(&DAT_00e375ec + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37590 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37580 + DAT_00e375b0;
  _DAT_00e374b4 =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37594 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37584 + _DAT_00e375b4;
  _DAT_00e374b8 =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37598 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37588 + _DAT_00e375b8;
  _DAT_00e374bc =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e3759c +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e3758c + _DAT_00e375bc;
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375e4 + iVar1) = _DAT_0050c6e8 + *(float *)(&DAT_00e375e4 + iVar1);
    *(float *)(&DAT_00e375e8 + iVar1) = _DAT_0050c6ec + *(float *)(&DAT_00e375e8 + iVar1);
    *(float *)(&DAT_00e375ec + iVar1) = _DAT_0050c6f0 + *(float *)(&DAT_00e375ec + iVar1);
  }
  FUN_0044bbe0();
  return;
}

