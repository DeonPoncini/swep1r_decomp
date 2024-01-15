#include "prototype.h"


void FUN_0041d930(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x1e70);
  if (((*(byte *)(param_1 + 0x60) & 0x80) != 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
      FUN_0041d8d0(param_1);
    }
    *(undefined4 *)(param_1 + 0x50) = (&DAT_00ec76d0)[iVar1 * 0x10];
    *(undefined4 *)(param_1 + 0x54) = (&DAT_00ec76d4)[iVar1 * 0x10];
    (&DAT_00ec76d8)[iVar1 * 0x10] = 0xc60ca000;
    *(undefined4 *)(param_1 + 0x58) = 0xc60ca000;
    (&DAT_00ea05c0)[iVar1 * 4] = 0x29a;
    (&DAT_00ea05c4)[iVar1 * 4] = 0;
    (&DAT_00ea05c8)[iVar1 * 4] = 0;
    (&DAT_00ea05cc)[iVar1 * 4] = 0;
    return;
  }
  FUN_0044bb10(&DAT_00ec76a0 + iVar1 * 0x10,param_1 + 0x20);
  (&DAT_00ec7640)[iVar1] = *(undefined4 *)(param_1 + 0x1a0);
  (&DAT_00ea0360)[iVar1] = *(undefined4 *)(param_1 + 0xe0);
  (&DAT_00ea0420)[iVar1] = *(undefined4 *)(param_1 + 0xe8);
  (&DAT_00ea0480)[iVar1] = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x78);
  return;
}

