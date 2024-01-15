#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b000(int param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x7000) == 0) && (uVar2 = *(uint *)(param_1 + 100), (uVar2 & 0x2000000) == 0)) {
    if ((uVar2 & 0x10000000) != 0) {
      *(uint *)(param_1 + 100) = uVar2 & 0xefffffff;
      return;
    }
    if (((DAT_004c7bbc < param_3) && (DAT_004c7bb8 < param_2)) && (DAT_0050ca28 == 0)) {
      if ((_DAT_004adcb4 <= *(float *)(param_1 + 0x1a0)) && ((uVar1 & 0x80) == 0)) {
        if (_DAT_004adc48 <= *(float *)(param_1 + 500)) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        FUN_004741d0(param_1,uVar3);
        *(undefined4 *)(param_1 + 0x18c) = 0x40a00000;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800000;
        return;
      }
      *(uint *)(param_1 + 0x60) = uVar1 | 0x1000;
    }
  }
  return;
}

