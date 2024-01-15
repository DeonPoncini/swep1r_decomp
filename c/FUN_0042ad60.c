#include "prototype.h"


void FUN_0042ad60(void)

{
  int iVar1;
  
  if (DAT_0050c070 == -2) {
    iVar1 = 3;
    do {
      iVar1 = iVar1 + -1;
      DAT_0050c07c = 0xffffffff;
    } while (iVar1 != 0);
  }
  DAT_0050c04c = DAT_0050c070;
  DAT_0050c054 = 0;
  DAT_00e9a9b4 = 0;
  iVar1 = FUN_00450b30(0x4a646765,0);
  if ((*(ushort *)(iVar1 + 6) & 0x1000) != 0) {
    DAT_0050c07c = 0;
    (&DAT_00e9a9c0)[DAT_00e9a9b4] = 0;
    return;
  }
  DAT_0050c064 = 0;
  DAT_0050c04c = 0;
  DAT_0050c07c = 2;
  (&DAT_00e9a9c0)[DAT_00e9a9b4] = 2;
  return;
}

