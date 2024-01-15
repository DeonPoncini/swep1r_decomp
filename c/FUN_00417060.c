#include "prototype.h"


void FUN_00417060(int param_1)

{
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_00417060(*(int *)(param_1 + 0xc));
      }
      FUN_00412f60(param_1);
      param_1 = *(int *)(param_1 + 4);
    } while (param_1 != 0);
  }
  return;
}

