#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004804c0(void)

{
  if ((double)CONCAT44(DAT_0050cb74,DAT_0050cb70) <= _DAT_004adf70) {
    DAT_0050cb70 = 0x20000000;
    DAT_0050cb74 = 0x3fb11111;
  }
  _DAT_00e22a50 = (float)(double)CONCAT44(DAT_0050cb74,DAT_0050cb70);
  DAT_00e22a40 = DAT_0050cb70;
  DAT_00e22a44 = DAT_0050cb74;
  _DAT_00e22a38 = 0;
  _DAT_00e22a3c = 0;
  DAT_00e22a30 = 0;
  DAT_0050cb64 = 0;
  if (DAT_0050cb68 == 0) {
    DAT_0050cb60 = timeGetTime();
  }
  return;
}

