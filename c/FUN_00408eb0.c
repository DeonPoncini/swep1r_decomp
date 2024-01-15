#include "prototype.h"


void FUN_00408eb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_0050c6b0;
  if (DAT_0050c6b0 != 0) {
    *(int *)(DAT_0050c6b0 + 0x44) = *(int *)(DAT_0050c6b0 + 0x44) - (&DAT_00ec8660)[param_1];
    iVar5 = DAT_0050c6b0;
    (&DAT_00ec8660)[param_1] = 0;
  }
  iVar3 = DAT_004d6c6c;
  iVar4 = DAT_004d6c6c - (&DAT_00ec85c0)[param_1];
  DAT_004d6c6c = iVar4;
  (&DAT_00ec85c0)[param_1] = 0;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x6c) = iVar4;
  }
  for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    FUN_0048eac0(*(undefined4 *)(DAT_004d6c68 + iVar4 * 4));
    *(undefined4 *)(DAT_004d6c68 + iVar4 * 4) = 0;
  }
  puVar2 = (undefined4 *)(&DAT_00ec8700)[param_1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    (**(code **)(DAT_00ecc420 + 0x24))(*puVar2);
    (**(code **)(DAT_00ecc420 + 0x24))(puVar2);
    puVar2 = puVar1;
  }
  (&DAT_00ec8700)[param_1] = 0;
  return;
}

