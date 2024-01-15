#include "prototype.h"


undefined4 FUN_004207e0(void)

{
  int iVar1;
  
  if (DAT_004eb394 == 0) {
    iVar1 = FUN_00486ad0();
    if (iVar1 != 0) {
      return 0;
    }
    DAT_004eb394 = 1;
  }
  return 1;
}

