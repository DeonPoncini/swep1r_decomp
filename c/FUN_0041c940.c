#include "prototype.h"


void FUN_0041c940(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_004ea8f0;
  piVar2 = &DAT_00e29c44;
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x60) & 0x80) != 0)) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffff7f | 0x40;
      *(undefined4 *)(*(int *)(iVar1 + 0x1e70) + 4) = 0x52454d4f;
      *puVar3 = 0x52454d4f;
    }
    piVar2 = piVar2 + 0x22;
    puVar3 = puVar3 + 1;
  } while ((int)piVar2 < 0xe2a6e4);
  return;
}

