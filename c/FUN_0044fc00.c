#include "prototype.h"


void FUN_0044fc00(uint *param_1)

{
  uint uVar1;
  short sVar2;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = param_1[2];
    *param_1 = *param_1 | 0x8000;
    if (uVar1 != 0) {
      sVar2 = __ftol();
      *(short *)(param_1 + 1) = sVar2;
      if (*(short *)(uVar1 + 4) < sVar2) {
        *(short *)(param_1 + 1) = sVar2 - *(short *)(uVar1 + 4);
      }
      if (*(short *)(param_1 + 1) < 0) {
        *(short *)(param_1 + 1) = *(short *)(uVar1 + 4) + *(short *)(param_1 + 1);
      }
      sVar2 = __ftol();
      *(short *)((int)param_1 + 6) = sVar2;
      if (*(short *)(uVar1 + 6) < sVar2) {
        *(short *)((int)param_1 + 6) = sVar2 - *(short *)(uVar1 + 6);
      }
      if (*(short *)((int)param_1 + 6) < 0) {
        *(short *)((int)param_1 + 6) = *(short *)(uVar1 + 6) + *(short *)((int)param_1 + 6);
      }
    }
  }
  return;
}

