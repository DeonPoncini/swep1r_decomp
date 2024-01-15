#include "prototype.h"


undefined4 FUN_00420fc0(void)

{
  int iVar1;
  
  iVar1 = FUN_00450aa0(0x48616e67,0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x70) = 1;
    *(undefined *)(iVar1 + 0x71) = (undefined)DAT_004eb3b8;
  }
  return 1;
}

