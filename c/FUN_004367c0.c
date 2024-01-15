#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004367c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6b [26];
  
  puVar2 = local_6b;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  if (*(int *)(param_1 + 0xc) == 9) {
    (&DAT_00e35a84)[*(char *)(param_1 + 0x6f) * 0x50] = 0;
  }
  iVar1 = *(char *)(param_1 + 0x6f) * 0x50;
  if ((&DAT_00e35a81)[iVar1] == '\x01') {
    FUN_0044e530((int)(char)(&DAT_00e35a82)[iVar1],(int)*(char *)(param_1 + 0x6f));
  }
  FUN_0044e560();
  _DAT_004c0204 = 0xffffffff;
  puVar2 = &DAT_0050c4c0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0050c4b8 = 0;
  _DAT_0050c4b4 = 0;
  FUN_00454d40(param_1,*(undefined4 *)(param_1 + 0xc));
  return;
}

