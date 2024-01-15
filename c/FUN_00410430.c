#include "prototype.h"


void FUN_00410430(void)

{
  int iVar1;
  
  iVar1 = FUN_00485880(0x58,0);
  if ((iVar1 != 0) && (DAT_004d79e8 == 0)) {
    FUN_00440550(0x46);
    FUN_00410480(s_snap__004b5c44);
    DAT_004d79e8 = 1;
    return;
  }
  DAT_004d79e8 = 0;
  return;
}

