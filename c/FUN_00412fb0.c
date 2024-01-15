#include "prototype.h"


void FUN_00412fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == -1) {
    if (0x13 < *(uint *)(param_1 + 0x5c)) {
      return;
    }
    iVar1 = 0;
    puVar2 = (uint *)(param_1 + 0x60);
    do {
      if ((*puVar2 & 0x10000) == 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) + 1;
        param_2 = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xe;
    } while (iVar1 < 0x14);
  }
  if (param_2 != -1) {
    iVar1 = param_1 + param_2 * 0x38;
    *(undefined4 *)(iVar1 + 100) = param_3;
    *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + (param_2 + 2) * 0x38) = 0x3f800000;
    *(uint *)(iVar1 + 0x60) = param_6 | 0x10000;
    FUN_00413090(param_1,param_2,0xff,0xff,0xff,0xff);
    FUN_004171a0(param_1,param_2,param_4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    puVar2 = (uint *)(param_1 + 0x60);
    iVar1 = 0x14;
    do {
      if ((*puVar2 & 0x10000) != 0) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      puVar2 = puVar2 + 0xe;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_004130e0(param_1,param_2,param_5);
  }
  return;
}

