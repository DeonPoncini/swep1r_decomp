#include "prototype.h"


void FUN_00465cb0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x34);
  *piVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0044eef0(piVar1,0);
  }
  FUN_0044eeb0(piVar1,param_1 + 100,0);
  *(undefined4 *)(param_1 + 0x38) = 0x3fe66666;
  return;
}

