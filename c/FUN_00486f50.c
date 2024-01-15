#include "prototype.h"


int FUN_00486f50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puStack_10;
  undefined local_4 [4];
  
  puStack_10 = local_4;
  uVar3 = 0;
  iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,0);
  if (iVar1 == -0x7788ffe2) {
    uVar2 = (**(code **)(DAT_00ecc420 + 0x20))(puStack_10);
    iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,uVar2,&puStack_10);
    if (-1 < iVar1) {
      FUN_004876d0(uVar2,uVar3);
      (**(code **)(DAT_00ecc420 + 0x24))(uVar2);
    }
  }
  return iVar1;
}

