#include "prototype.h"


undefined4 FUN_00414e80(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  do {
    if ((*(byte *)(param_1 + 0x20) & 0x40) == 0) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 8);
  } while (param_1 != 0);
  return 1;
}

