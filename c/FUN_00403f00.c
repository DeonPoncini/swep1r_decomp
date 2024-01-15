#include "prototype.h"


void FUN_00403f00(int param_1)

{
  if (DAT_004b2910 != 0) {
    FUN_00404040(param_1);
    if (*(int *)(param_1 + 0x40) != 0) {
      _IFReleaseProject_4(*(int *)(param_1 + 0x40));
    }
    FUN_00403e10(param_1);
  }
  return;
}

