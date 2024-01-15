#include "prototype.h"


int FUN_00404a20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00486d40(param_1);
  if (iVar1 == 0) {
    DAT_004d5e08 = FUN_004872e0(param_1 + 0x18);
    if (DAT_004d5e08 == 0) {
      FUN_00487180();
      return -0x7fffbffb;
    }
    DAT_004d5e00 = 1;
    iVar1 = 0;
  }
  return iVar1;
}

