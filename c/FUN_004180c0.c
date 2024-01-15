#include "prototype.h"


void FUN_004180c0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = __ftol();
  puVar4 = &DAT_004d8164;
  do {
    if (puVar4[1] != 0) {
      uVar1 = *puVar4;
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      *puVar4 = uVar1 - uVar3;
      if (uVar1 - uVar3 == 0) {
        *puVar4 = puVar4[-1];
        FUN_004151a0(puVar4[1],0x45,puVar4[2],0);
      }
    }
    puVar4 = puVar4 + 4;
  } while ((int)puVar4 < 0x4d8204);
  return;
}

