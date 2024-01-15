#include "prototype.h"


void FUN_00450310(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_0050c750;
  if (((DAT_0050c750 < 0x80) && (DAT_0050c750 != 0)) && (param_1 != (int *)0x0)) {
    iVar2 = *param_1 * DAT_00ec86c4;
    iVar5 = param_1[2] * DAT_00ec86c4;
    iVar4 = param_1[1] * DAT_00ec85e8;
    iVar3 = param_1[3] * DAT_00ec85e8;
    *(undefined4 *)(&DAT_00e2be7c + DAT_0050c750 * 4) = 1;
    iVar1 = iVar1 * 0x10;
    *(int *)(&DAT_00e2b670 + iVar1) = iVar2 / 0x280;
    *(int *)(&DAT_00e2b674 + iVar1) = iVar4 / 0x1e0;
    *(int *)(&DAT_00e2b678 + iVar1) = iVar5 / 0x280;
    *(int *)(&DAT_00e2b67c + iVar1) = iVar3 / 0x1e0;
  }
  return;
}

