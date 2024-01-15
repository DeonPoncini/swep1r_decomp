#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e320(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  puVar1 = param_1;
  puVar4 = param_1;
  for (iVar3 = 0x3f5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)((int)param_1 + 5) = 0xe1;
  *(undefined *)((int)param_1 + 6) = 200;
  *(undefined *)((int)param_1 + 7) = 0;
  param_1[2] = 3;
  _DAT_0050c75c = 0;
  FUN_00426910();
  param_1[4] = 0x22e01;
  *(undefined *)(param_1 + 3) = 7;
  *(undefined *)((int)param_1 + 0xd) = 3;
  *(undefined *)((int)param_1 + 0xe) = 1;
  *(undefined *)((int)param_1 + 0xf) = 0;
  param_1 = (undefined4 *)0x0;
  puVar4 = puVar1 + 0x87;
  puVar2 = puVar1 + 0x249;
  local_4 = 0x19;
  do {
    iVar6 = 0;
    local_8 = 2;
    do {
      puVar4[-0x32] = 0x4560ffd7;
      *puVar4 = 0x4560ffd7;
      iVar5 = 0x20;
      do {
        *(undefined *)(puVar2 + -400) = 0x41;
        *(undefined *)puVar2 = 0x41;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
      *(undefined *)((int)puVar1 + iVar6 + iVar3 * 2 + 0xf63) = (&DAT_004bfef2)[(int)param_1];
      *(undefined *)((int)puVar1 + iVar6 + iVar3 * 2 + 0xf95) = (&DAT_004bfef2)[(int)param_1];
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar3 = iVar3 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0xc);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar3 = 0;
  iVar6 = 4;
  do {
    FUN_0043ea00(1,iVar3);
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_00e364a0 = FUN_0044e440(&DAT_00e364a0);
  return;
}

