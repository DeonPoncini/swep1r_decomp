#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004870d0(param_1,param_3);
  if (iVar1 == 0) {
    DAT_004d5e00 = 1;
    DAT_004d5e04 = iVar1;
    DAT_004d5e08 = FUN_004872e0(param_2);
    if (DAT_004d5e08 == 0) {
      if (DAT_004d5e00 != 0) {
        FUN_00487180();
        DAT_004d5e00 = 0;
      }
      return -0x7fffbffb;
    }
    FUN_0049ef50(&DAT_00e9f380,param_2,0x1f);
    _DAT_00e9f3be = 0;
    iVar1 = 0;
  }
  return iVar1;
}

