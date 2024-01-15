#include "prototype.h"


void FUN_00488d10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0052d454 != (int *)0x0) {
    iVar1 = *DAT_0052d454;
    uVar2 = FUN_0048c780(8);
    (**(code **)(iVar1 + 0x50))(DAT_0052d454,uVar2);
    (**(code **)(*DAT_0052d454 + 0x4c))(DAT_0052d454);
    (**(code **)(*DAT_0052d454 + 8))(DAT_0052d454);
    DAT_0052d454 = (int *)0x0;
  }
  DAT_004c86bc = 8;
  DAT_0052d44c = 0;
  return;
}

