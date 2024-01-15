#include "prototype.h"


void FUN_004457d0(void)

{
  int iVar1;
  
  if (DAT_0050c5f0 == 0) {
    iVar1 = FUN_00450b30(0x4a646765,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00450b30(0x4a646765,0);
      if ((*(ushort *)(iVar1 + 6) & 0x1000) == 0) {
        iVar1 = FUN_00462d40();
        if (iVar1 != 0) {
          FUN_004456b0();
          return;
        }
      }
      else if (((((byte)DAT_0050c048 & 1) != 0) &&
               (((DAT_00e98eb0 & 0x200) != 0 || ((DAT_00e98eb4 & 0x200) != 0)))) &&
              ((DAT_0050c5f0 == 1 || ((DAT_00e98e90 & 0x400) != 0)))) {
        FUN_004456b0();
        return;
      }
    }
  }
  return;
}

