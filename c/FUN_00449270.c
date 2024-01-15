#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449270(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(float *)(PTR_DAT_004c1cb4 + 0x14) = *(float *)(PTR_DAT_004c1cb4 + 0x14) - (float)_DAT_00e22a40;
  if (*(float *)(PTR_DAT_004c1cb4 + 0x14) < _DAT_004aca9c) {
    do {
      iVar4 = iVar4 + 1;
      *(float *)(PTR_DAT_004c1cb4 + 0x14) =
           *(float *)(PTR_DAT_004c1cb4 + 0x10) + *(float *)(PTR_DAT_004c1cb4 + 0x14);
    } while (*(float *)(PTR_DAT_004c1cb4 + 0x14) < _DAT_004aca9c);
  }
  if (((*(int *)(PTR_DAT_004c1cb4 + 4) != 0) && (0 < iVar4)) &&
     (iVar3 = 0, 0 < *(short *)(PTR_DAT_004c1cb4 + 0x18))) {
    do {
      *(byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar3) =
           (byte)((int)(iVar4 + (uint)*(byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar3)) %
                 (int)*(short *)(PTR_DAT_004c1cb4 + 0xc));
      pbVar1 = (byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x20) + iVar3);
      pbVar2 = (byte *)(*(int *)(PTR_DAT_004c1cb4 + 0x1c) + iVar3);
      iVar3 = iVar3 + 1;
      *(undefined2 *)(*(int *)(PTR_DAT_004c1cb4 + 4) + (uint)*pbVar2 * 2) =
           *(undefined2 *)(*(int *)(PTR_DAT_004c1cb4 + 8) + (uint)*pbVar1 * 2);
    } while (iVar3 < *(short *)(PTR_DAT_004c1cb4 + 0x18));
  }
  return;
}

