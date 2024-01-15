#include "prototype.h"


int FUN_0047bf20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(&DAT_00e25e60 + param_1 * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return 0;
  }
  while (((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0 &&
         (*(float *)(iVar1 + 0x114) < *(float *)(iVar1 + 0x108)))) {
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    if (iVar1 == 0) {
      return iVar1;
    }
  }
  return 1;
}

