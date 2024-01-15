#include "prototype.h"


void FUN_00487900(void)

{
  if (DAT_00529500 != 0) {
    if (DAT_00529504 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(DAT_00529504);
    }
    DAT_00529504 = 0;
    (**(code **)(DAT_00ecc420 + 0x24))(DAT_00ec9e84);
    if (DAT_0052950c != 0) {
      FUN_00487c90();
      return;
    }
    DAT_00529500 = 0;
  }
  return;
}

