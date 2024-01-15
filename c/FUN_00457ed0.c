#include "prototype.h"


void FUN_00457ed0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x82;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x90);
  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x90;
  do {
    FUN_004282f0(iVar2,uVar1);
    FUN_004287e0(iVar2,0x2000);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0xa2);
  uVar1 = FUN_00446fb0(0x91);
  FUN_004282f0(0x57,uVar1);
  uVar1 = FUN_00446fb0(0x93);
  iVar2 = 0x58;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x5f);
  uVar1 = FUN_00446fb0(0x94);
  FUN_004282f0(0x5f,uVar1);
  uVar1 = FUN_00446fb0(0x8a);
  FUN_004282f0(0x60,uVar1);
  uVar1 = FUN_00446fb0(0x92);
  FUN_004282f0(0x61,uVar1);
  iVar2 = 0x57;
  do {
    FUN_004287e0(iVar2,0x8000);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x62);
  return;
}

