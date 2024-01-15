#include "prototype.h"


void FUN_00408220(void)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_004b4314 < 1) {
    FUN_004285d0(0xf9,0);
  }
  else {
    iVar1 = FUN_004082e0(&local_4,&local_8);
    if (iVar1 != 0) {
      FUN_00428660(0xf9,local_4,local_8);
      FUN_004286f0(0xf9,0x3f800000,0x3f800000);
      FUN_00428740(0xf9,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      FUN_004285d0(0xf9,1);
      FUN_004287e0(0xf9,0x800);
      FUN_004287e0(0xf9,0x10000);
      return;
    }
  }
  return;
}

