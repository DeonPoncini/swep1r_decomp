#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486970(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x18;
  (&DAT_0050f0a8)[param_1 * 6] = (&DAT_0050f0a8)[param_1 * 6] | 1;
  iVar2 = ((param_3 - param_2) + 1) / 2 + param_2;
  *(int *)(&DAT_0050f0ac + iVar3) = param_2;
  *(int *)(&DAT_0050f0b0 + iVar3) = param_3;
  *(int *)(&DAT_0050f0b4 + iVar3) = iVar2;
  fVar1 = (float)(param_3 - iVar2);
  *(float *)(&DAT_0050f0bc + iVar3) = _DAT_004ae2c8 / fVar1;
  if (param_4 != _DAT_004ae2d0) {
    *(int *)(&DAT_0050f0b8 + iVar3) = (int)ROUND(ROUND(param_4 * fVar1));
    return;
  }
  *(undefined4 *)(&DAT_0050f0b8 + iVar3) = 0;
  return;
}

