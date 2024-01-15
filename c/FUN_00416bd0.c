#include "prototype.h"


void FUN_00416bd0(void)

{
  int local_8;
  int local_4;
  
  local_8 = DAT_00ec875c;
  local_4 = DAT_00ec8764;
  FUN_00416cc0(DAT_00ec875c,DAT_00ec8764,&local_8,&local_4);
  if (local_8 != DAT_004d79f4) {
    if ((local_8 < 0) && (DAT_004d79f4 < 0)) {
      FUN_00416d70(0x25,local_8 == -2);
    }
    if (((local_8 != DAT_004d79f4) && (0 < local_8)) && (0 < DAT_004d79f4)) {
      FUN_00416d70(0x27,local_8 == 1);
    }
  }
  if (local_4 != DAT_004d7c58) {
    if ((local_4 < 0) && (DAT_004d7c58 < 0)) {
      FUN_00416d70(0x26,local_4 == -2);
    }
    if (((local_4 != DAT_004d7c58) && (0 < local_4)) && (0 < DAT_004d7c58)) {
      FUN_00416d70(0x28,local_4 == 1);
    }
  }
  DAT_004d79f4 = local_8;
  DAT_004d7c58 = local_4;
  return;
}

