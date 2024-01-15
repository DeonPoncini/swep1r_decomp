#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bb40(void)

{
  DAT_0050c6f4 = 0;
  DAT_004c3c0c = 1;
  _DAT_0050c6f8 = 0;
  FUN_0042f7b0(&DAT_00e375c0,0x3f800000,0,0);
  FUN_0042f7b0(&DAT_00e375cc + DAT_0050c6f4 * 0x30,0,0x3f800000,0);
  FUN_0042f7b0(&DAT_00e375d8 + DAT_0050c6f4 * 0x30,0,0,0x3f800000);
  FUN_0042f7b0(&DAT_00e375e4 + DAT_0050c6f4 * 0x30,0,0,0);
  return;
}

