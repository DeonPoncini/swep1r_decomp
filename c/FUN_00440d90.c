#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_00440d90(void)

{
  if ((DAT_004c1770 != 0) || ((DAT_00e996dc & 0x1000) != 0)) {
    _DAT_00e98ef4 = 0;
    _DAT_00e98ee4 = 0;
    DAT_00e98ee0 = 0;
    _DAT_00e98ee8 = 0;
    DAT_00e98ee2 = 0;
    _DAT_00e98eec = 0;
    _DAT_00e98ef0 = 0;
  }
  DAT_004c1770 = 0;
  return &DAT_00e98ee0;
}

