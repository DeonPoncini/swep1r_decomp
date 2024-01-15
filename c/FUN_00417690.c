#include "prototype.h"


void FUN_00417690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_2 + 0x20) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x20) | 2;
  }
  *(uint *)(param_2 + 0x20) = uVar1;
  if (param_5 != 0) {
    FUN_004172f0(param_2);
  }
  if (param_4 != 0) {
    FUN_004151a0(*(undefined4 *)(param_2 + 8),(param_1 != 1) + 1000,*(undefined4 *)(param_2 + 0x1c),
                 param_2);
  }
  return;
}

