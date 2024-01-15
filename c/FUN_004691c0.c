#include "prototype.h"


int FUN_004691c0(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)&DAT_004c4514;
  do {
    if (*(float *)(param_1 + 0x50) == pfVar1[-1]) {
      if (*(float *)(param_1 + 0x54) == *pfVar1) {
        return iVar2;
      }
    }
    pfVar1 = pfVar1 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar1 < 0x4c45d4);
  return -1;
}

