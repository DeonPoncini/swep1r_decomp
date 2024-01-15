#include "prototype.h"


void FUN_00427f10(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_00450b00(0x54657374);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00450b30(0x54657374,iVar4);
      if (iVar3 != 0) {
        puVar5 = &DAT_004b9098;
        uVar1 = **(undefined4 **)(*(int *)(iVar3 + 0x1e70) + 0x18);
        do {
          FUN_00427fb0(1,uVar1,*puVar5,0);
          puVar5 = puVar5 + 1;
        } while (puVar5 < &DAT_004b90c8);
        if ((*(byte *)(iVar3 + 0x60) & 0x20) != 0) {
          puVar5 = &DAT_004b90c8;
          do {
            FUN_00427fb0(1,uVar1,*puVar5,0);
            puVar5 = puVar5 + 1;
          } while (puVar5 < &DAT_004b90f0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

