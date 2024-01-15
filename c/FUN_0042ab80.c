#include "prototype.h"


void FUN_0042ab80(int param_1)

{
  if (param_1 == 0) {
    DAT_0050c054 = param_1;
    DAT_004b2940 = 1;
    FUN_00445780();
  }
  if (param_1 == 2) {
    if (DAT_0050c064 == 0) {
      DAT_0050c064 = 1;
      DAT_0050c068 = param_1;
      DAT_0050c04c = 1;
    }
    else {
      DAT_0050c064 = 0;
      DAT_0050c04c = DAT_0050c068;
    }
  }
  if (param_1 == 1) {
    if (DAT_0050c064 == 0) {
      DAT_004b2940 = 1;
      DAT_0050c054 = 2;
      FUN_00445780();
    }
    else if (DAT_0050c068 == 2) {
      DAT_004b2940 = 1;
      DAT_0050c054 = 1;
      FUN_00445780();
    }
    else if (DAT_0050c068 == 3) {
      FUN_004240d0();
      FUN_0049ea40(0);
    }
  }
  if ((param_1 == 3) && (DAT_0050c064 == 0)) {
    DAT_0050c064 = 1;
    DAT_0050c068 = param_1;
    DAT_0050c04c = 1;
  }
  if (param_1 == 4) {
    FUN_00429cd0(0);
  }
  return;
}

