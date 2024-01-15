#include "prototype.h"


int FUN_00409230(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00445b60(param_1);
  *(int *)(DAT_0050c6b0 + 0x44) = *(int *)(DAT_0050c6b0 + 0x44) + 1;
  iVar1 = (&DAT_00ec8660)[iVar2];
  (&DAT_00ec8660)[iVar2] = iVar1 + 1;
  return *(int *)(&DAT_004b4760 + iVar2 * 4) + iVar1 + 1;
}

