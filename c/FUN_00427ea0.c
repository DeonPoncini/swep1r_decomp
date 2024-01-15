#include "prototype.h"


void FUN_00427ea0(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_2 != 3) {
      DAT_004b9090 = (int)*(short *)((int)&PTR_DAT_004b8750 + param_2 * 2 + param_1 * 6);
      DAT_004b8744 = DAT_004b9090;
      return;
    }
    if (param_1 == 1) {
      DAT_004b9090 = 0x92;
      DAT_004b8744 = 0x92;
      return;
    }
    if (param_1 == 4) {
      DAT_004b9090 = 0x96;
      DAT_004b8744 = 0x96;
      return;
    }
  }
  else {
    DAT_004b8744 = DAT_004b9090;
  }
  return;
}

