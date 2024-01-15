#include "prototype.h"


void FUN_00488030(void)

{
  if (DAT_0052d440 != 0) {
    FUN_004899a0();
  }
  if (DAT_00529510 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00529510);
    DAT_00529510 = (HGDIOBJ)0x0;
  }
  DAT_0052d440 = 0;
  return;
}

