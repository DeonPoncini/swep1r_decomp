#include "prototype.h"


undefined4 FUN_0041b9a0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = &DAT_004e991c;
  while ((param_1 != piVar1[-1] || (param_2 != *piVar1))) {
    piVar1 = piVar1 + 2;
    if ((int *)((int)&DAT_004e9d18 + 3) < piVar1) {
      (&DAT_004e9918)[DAT_004e9ec0 * 2] = param_1;
      (&DAT_004e991c)[DAT_004e9ec0 * 2] = param_2;
      DAT_004e9ec0 = DAT_004e9ec0 + 1;
      if (0x7f < DAT_004e9ec0) {
        DAT_004e9ec0 = 0;
      }
      return 0;
    }
  }
  return 1;
}

