#include "prototype.h"


void FUN_00457fd0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x90;
  do {
    FUN_004282f0(iVar2,uVar1);
    FUN_004287e0(iVar2,0x2000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa2);
  uVar1 = FUN_00446fb0(0x8f);
  iVar2 = 0x62;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x69);
  uVar1 = FUN_00446fb0(0x90);
  iVar2 = 0x6a;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x71);
  uVar1 = FUN_00446fb0(0x8b);
  FUN_004282f0(0x69,uVar1);
  uVar1 = FUN_00446fb0(0x8d);
  FUN_004282f0(0x71,uVar1);
  uVar1 = FUN_00446fb0(0x8e);
  FUN_004282f0(0x72,uVar1);
  uVar1 = FUN_00446fb0(0x8c);
  FUN_004282f0(0x73,uVar1);
  iVar2 = 0x62;
  do {
    FUN_004287e0(iVar2,0x2000);
    FUN_004287e0(iVar2,0x8000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x74);
  return;
}

