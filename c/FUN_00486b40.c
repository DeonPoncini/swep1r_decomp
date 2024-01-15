#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486b40(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (DAT_00510254 != (int *)0x0) {
    (**(code **)(*DAT_00510254 + 8))(DAT_00510254);
    DAT_00510254 = (int *)0x0;
  }
  uVar3 = 0;
  if (DAT_00513868 != 0) {
    piVar2 = &DAT_00510370;
    do {
      if (*piVar2 != 0) {
        (**(code **)(DAT_00ecc420 + 0x24))(*piVar2);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x46;
    } while (uVar3 < DAT_00513868);
  }
  DAT_00513868 = 0;
  puVar4 = &DAT_00510260;
  for (iVar1 = 0x460; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_0051386c = 0;
  _DAT_00510258 = 0;
  CoUninitialize();
  return;
}

