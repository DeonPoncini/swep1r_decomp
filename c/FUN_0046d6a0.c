#include "prototype.h"


void FUN_0046d6a0(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x344);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      *(float *)(param_1 + 0x3c8) = fVar1 + *(float *)(param_1 + 0x3c8);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(float *)(param_1 + 0x408) = fVar1 + *(float *)(param_1 + 0x408);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(float *)(param_1 + 0x448) = fVar1 + *(float *)(param_1 + 0x448);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      *(float *)(param_1 + 0x488) = fVar1 + *(float *)(param_1 + 0x488);
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(float *)(param_1 + 0x4c8) = fVar1 + *(float *)(param_1 + 0x4c8);
    }
  }
  return;
}

