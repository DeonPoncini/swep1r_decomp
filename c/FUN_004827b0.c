#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004827b0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = FUN_00431780(param_1);
  if (iVar1 < 1) {
    return -1;
  }
  if (_DAT_004ae078 < *(float *)(param_1 + 0x1c)) {
    return -1;
  }
  iVar2 = 1;
  pfVar3 = (float *)(param_1 + 0x20);
  do {
    if ((*pfVar3 == -1.0) || (_DAT_004ae078 <= *pfVar3)) break;
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 8);
  if (iVar1 <= iVar2 + -1) {
    return -1;
  }
  return iVar2 + -1;
}

