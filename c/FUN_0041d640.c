#include "prototype.h"


undefined4 FUN_0041d640(int param_1)

{
  if (DAT_004d5e00 != 0) {
    FUN_0041b7f0();
    FUN_0041e700(param_1);
    if (*(int *)(&DAT_004ea020 + param_1 * 0xc) != 0) {
      if (*(int *)(&DAT_004ea020 + param_1 * 0xc) != 2) {
        return 0;
      }
      FUN_0041d690(param_1);
    }
  }
  return 1;
}

