#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c870(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < DAT_004eb3b8 - 1U) {
    _DAT_004b6720 = 0x1b207;
    iVar4 = 0x1b207;
    iVar3 = 0;
    do {
      iVar1 = FUN_00420f70(iVar3);
      if (iVar1 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    if (iVar4 != 0x1b207) {
      (&DAT_004ea8a0)[iVar4] = 1;
      uVar2 = FUN_0041d380(iVar4,1,0x72656a6e);
      FUN_0041df10(uVar2);
    }
  }
  return;
}

