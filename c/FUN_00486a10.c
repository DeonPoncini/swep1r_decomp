#include "prototype.h"


undefined4 FUN_00486a10(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x02') {
    if (DAT_0050fec0 < 4) {
      uVar2 = DAT_0050fec0 + 1;
      puVar4 = &DAT_00ecb240 + DAT_0050fec0 * 0x9d;
      for (iVar3 = 0x91; DAT_0050fec0 = uVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else if (cVar1 == '\x03') {
    if (DAT_0050febc < 4) {
      puVar4 = &DAT_0050d658 + DAT_0050febc * 0x9d;
      for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_0050febc = 1;
      return 1;
    }
  }
  else if ((cVar1 == '\x04') && (DAT_0050fec8 < 8)) {
    puVar4 = &DAT_00ec9ea0 + DAT_0050fec8 * 0x9d;
    for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_0050fec8 = DAT_0050fec8 + 1;
    return 1;
  }
  return 1;
}

