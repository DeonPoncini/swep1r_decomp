#include "prototype.h"


void FUN_0048ba20(int param_1)

{
  if (DAT_0052e630 == 0) {
    DAT_0052e634 = param_1;
    DAT_0052e630 = param_1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    *(int *)(DAT_0052e634 + 0x90) = param_1;
    *(int *)(param_1 + 0x8c) = DAT_0052e634;
    *(undefined4 *)(param_1 + 0x90) = 0;
    DAT_0052e634 = param_1;
  }
  DAT_0052e62c = DAT_0052e62c + 1;
  *(int *)(DAT_0052e618 + 0x138) = *(int *)(DAT_0052e618 + 0x138) - *(int *)(param_1 + 0x84);
  return;
}

