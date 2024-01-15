#include "prototype.h"


void FUN_004a1710(uint param_1)

{
  if ((0x4d45f7 < param_1) && (param_1 < 0x4d4859)) {
    FUN_004a1670(((int)(param_1 - 0x4d45f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

