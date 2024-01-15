#include "prototype.h"


void FUN_0041aa40(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    do {
      if ((*(byte *)(param_1 + 0x20) & 0x40) != 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_0041aa40(*(int *)(param_1 + 0xc),param_2,param_3);
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          FUN_004151a0(param_1,0x4a,param_2,param_3);
        }
      }
      param_1 = *(int *)(param_1 + 4);
    } while (param_1 != 0);
  }
  return;
}

