#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448d90(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (DAT_004c17e8 < 0) {
    piVar1 = (int *)FUN_00448780(DAT_004c17e0);
    if (-1 < DAT_004c17e4) {
      uVar2 = FUN_00448780(DAT_004c17e4);
      FUN_00448c70(piVar1,uVar2);
    }
    if (*piVar1 != 0) {
      FUN_00431a50(*piVar1,2,3,0x10,2);
    }
    FUN_004831d0(0,8,8,0x138,0xe8);
    FUN_004831d0(1,8,8,0x138,0xe8);
    FUN_00483230(1,0);
    FUN_00483fc0(*piVar1);
    FUN_00448bd0(piVar1);
    return;
  }
  FUN_00431b20(&DAT_00e28980,0x5064);
  _DAT_00e28994 = 2;
  _DAT_00e28998 = &DAT_00e287e0;
  piVar1 = (int *)FUN_00448780(DAT_004c17e0);
  if (-1 < DAT_004c17e4) {
    uVar2 = FUN_00448780(DAT_004c17e4);
    FUN_00448c70(piVar1,uVar2);
  }
  if (*piVar1 != 0) {
    FUN_00431a50(*piVar1,2,3,0x10,2);
  }
  FUN_00448bd0(piVar1);
  DAT_00e287e0 = *piVar1;
  piVar1 = (int *)FUN_00448780(DAT_004c17e8);
  if (*piVar1 != 0) {
    FUN_00431a50(*piVar1,2,3,0x10,2);
  }
  FUN_00448bd0(piVar1);
  _DAT_00e287e4 = *piVar1;
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_004831d0(1,8,8,0x138,0xe8);
  FUN_00483230(1,0);
  FUN_00483fc0(&DAT_00e28980);
  return;
}

