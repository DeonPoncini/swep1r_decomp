#include "prototype.h"


void FUN_0048dce0(void)

{
  if (DAT_006930c8 != 0) {
    FUN_0048a300();
    switch(DAT_00ecc430) {
    case 0:
      break;
    case 1:
    case 2:
      FUN_0048e4c0(DAT_006930c8,&DAT_005330c0);
      break;
    default:
      FUN_0048df30(DAT_006930c8,&DAT_005330c0,&LAB_0048e640);
    }
    DAT_00deb0e8 = DAT_00deb0e8 + DAT_006930c8;
    DAT_006930c8 = 0;
    DAT_00deb0f0 = 0;
    DAT_00deb0f4 = 0;
    DAT_00deb0f8 = 0;
    FUN_0048a330();
  }
  return;
}

