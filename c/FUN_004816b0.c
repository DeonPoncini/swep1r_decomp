#include "prototype.h"


int FUN_004816b0(void)

{
  int iVar1;
  
  if (DAT_0050cb80 == '\0') {
    DAT_0050cb7c = 0x2750250;
    DAT_0050cb80 = '\x01';
  }
  iVar1 = DAT_0050cb7c * 0x41c64e6d + 0x3039;
  DAT_0050cb7c = iVar1;
  if (iVar1 != -0x80000000) {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    return iVar1;
  }
  return 0;
}

