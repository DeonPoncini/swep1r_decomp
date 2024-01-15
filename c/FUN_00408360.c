#include "prototype.h"


void FUN_00408360(int param_1,int param_2)

{
  if (DAT_00ec86c4 == 0x200) {
    SetCursorPos((param_1 << 9) / 0x280,(param_2 * DAT_00ec85e8) / 0x1e0);
    return;
  }
  SetCursorPos(param_1,param_2);
  return;
}

