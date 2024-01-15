#include "prototype.h"


void FUN_00436860(int param_1)

{
  if (DAT_004c4000 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (DAT_004bfedc == -1)) {
    FUN_00436fa0(param_1);
    return;
  }
  FUN_004368a0(param_1);
  return;
}

