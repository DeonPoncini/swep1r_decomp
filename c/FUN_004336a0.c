#include "prototype.h"


void FUN_004336a0(void)

{
  if (DAT_0050c454 == 0) {
    FUN_00454d40(0,1);
  }
  else if (*(int *)(DAT_0050c454 + 8) != 1) {
    FUN_00454d40(DAT_0050c454,1);
    return;
  }
  return;
}

