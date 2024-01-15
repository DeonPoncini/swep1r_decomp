#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c3c0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined local_c [12];
  
  iVar1 = FUN_0042f7f0(&DAT_0050c998,&DAT_00e2b470);
  if (iVar1 == 0) {
    FUN_0042f7d0(&DAT_0050c998,&DAT_00e2b470);
    FUN_0042f860(local_c,&DAT_00e2af90,&DAT_00e298f0);
    fVar3 = (float10)FUN_0042f8c0(local_c);
    if ((float10)_DAT_004ad1d0 < fVar3) {
      FUN_0042f9b0(local_c);
      FUN_0042fa80(&DAT_00e2af90,&DAT_00e298f0,0x43fa0000,local_c);
    }
  }
  iVar1 = FUN_0045c560(param_1,&DAT_0050c994,&DAT_00e2b470,&DAT_00e2af90,&DAT_00e2b410,0x3fc00000);
  iVar2 = FUN_0045c560(param_1,&DAT_0050c990,&DAT_00e29b90,&DAT_00e298f0,&DAT_00e2aeb0,0x3f800000);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    DAT_0050c930 = 5;
    DAT_004c400c = 1;
    if (*(int *)(param_1 + 8) == 8) {
      DAT_0050c930 = 0;
    }
    if (DAT_0050c940 != 0) {
      DAT_0050c934 = (uint)(DAT_0050c934 == 0);
      DAT_0050c940 = 0;
      if (((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 0x34) != 3)) &&
         (DAT_0050c934 != 0)) {
        DAT_0050c468 = 1;
      }
    }
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
    if (((DAT_004bfedc != -1) && (DAT_0050c468 == 0)) && (DAT_0050c934 = 0, DAT_0050c944 == 0)) {
      FUN_00454d40(param_1,DAT_004bfedc);
    }
  }
  return;
}

