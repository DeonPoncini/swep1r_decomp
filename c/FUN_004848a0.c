#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004848a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0050d548 != (int *)0x0) {
    return 0;
  }
  FUN_0049e940();
  iVar1 = FUN_0049e970(0,&DAT_0050d548,0,0x80);
  if ((iVar1 < 0) || (DAT_0050d548 == (int *)0x0)) {
    DAT_004c7d80 = 0;
    DAT_0050d550 = 0;
    if (iVar1 < 0) {
      DAT_0050d548 = (int *)0x0;
      return 0;
    }
  }
  else {
    DAT_0050d550 = 1;
  }
  _DAT_0050d520 = 0x24;
  (**(code **)(*DAT_0050d548 + 0x2c))(DAT_0050d548,&DAT_0050d520);
  DAT_0050d55c = DAT_0050d524 & 0x28;
  DAT_0050d554 = DAT_0050d524 & 2;
  uVar2 = FUN_0048c780();
  iVar1 = (**(code **)(*DAT_0050d548 + 0x4c))(DAT_0050d548,uVar2,1);
  if (iVar1 < 0) {
    (**(code **)(*DAT_0050d548 + 8))(DAT_0050d548);
    DAT_0050d548 = (int *)0x0;
    return 0;
  }
  (**(code **)(*DAT_0050d548 + 0x5c))(DAT_0050d548,0);
  (**(code **)(*DAT_0050d548 + 0x6c))(DAT_0050d548,8);
  (**(code **)(*DAT_0050d548 + 0x68))(DAT_0050d548,&DAT_0050d544);
  FUN_00484a80(DAT_004c7d70);
  if (DAT_0050d550 != 0) {
    iVar1 = (**(code **)*DAT_0050d548)(DAT_0050d548,&DAT_004ae158,&DAT_0050d560);
    if (iVar1 < 0) {
      DAT_004c7d80 = 0;
      DAT_0050d550 = 0;
      DAT_0050d560 = 0;
      return 1;
    }
    (**(code **)(*DAT_0050d548 + 0x80))(DAT_0050d548,0x4051eb85);
    (**(code **)(*DAT_0050d548 + 0x90))(DAT_0050d548,DAT_004c7d78);
    (**(code **)(*DAT_0050d548 + 0x88))(DAT_0050d548,DAT_004c7d74);
  }
  return 1;
}

