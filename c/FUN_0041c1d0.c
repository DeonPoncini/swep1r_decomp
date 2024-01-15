#include "prototype.h"


void FUN_0041c1d0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = timeGetTime();
  if (DAT_004d5e00 != 0) {
    DVar1 = DAT_004eb230;
    if (DAT_004eb230 + DAT_004b6718 < DVar2) {
      if (DAT_004eb1e0 != 0) {
        FUN_0041da00();
      }
      DVar1 = DVar2;
      if (DAT_004eb1e4 != 0) {
        FUN_00420d10();
      }
    }
    DAT_004eb230 = DVar1;
    if (DAT_004eb1dc != 0) {
      FUN_0041e880();
      FUN_0041e920();
    }
    if (DAT_00ea0250 != 0) {
      DAT_004d6b44 = 0;
      DAT_004d6b48 = 0;
      DAT_004d6b40 = 0;
      DAT_00e98eb0 = 0;
      FUN_00405cf0(0xffffffff);
    }
  }
  return;
}

