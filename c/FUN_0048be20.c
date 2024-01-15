#include "prototype.h"


void FUN_0048be20(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      piVar1 = (int *)(param_1[1] + 0x2a8);
      do {
        if (piVar1[2] != 0) {
          (**(code **)(DAT_00ecc420 + 0x24))(piVar1[2]);
          piVar1[2] = 0;
        }
        if (*piVar1 != 0) {
          (**(code **)(DAT_00ecc420 + 0x24))(*piVar1);
          *piVar1 = 0;
        }
        piVar1 = piVar1 + 0xad;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    if (param_1[1] != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1[1]);
      param_1[1] = 0;
    }
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}

