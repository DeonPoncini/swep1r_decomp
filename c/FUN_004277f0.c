#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004277f0(undefined4 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    DAT_0050b6e0 = 0;
    DAT_004b8744 = 0xffffffff;
    return;
  case 1:
    DAT_0050b6e0 = 1;
    iVar1 = FUN_00450b00(0x54657374);
    if (iVar1 < 1) {
      DAT_004b8744 = 0x8f;
      return;
    }
    break;
  case 2:
    DAT_0050b6e0 = 2;
    _DAT_0050b6e8 = 0xbe4ccccd;
    return;
  case 3:
    DAT_0050b6e0 = 3;
    _DAT_0050b6e8 = 0xc0000000;
  }
  return;
}

