#include "prototype.h"


void FUN_0041c8e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = &DAT_00ea04e0;
  do {
    iVar1 = FUN_00420f70(iVar3);
    if (((iVar1 != 0) && (iVar3 != DAT_004eb3b4)) && (*piVar4 == 0)) {
      DAT_004b6714 = iVar3;
      uVar2 = FUN_0041d380(iVar3,1,0x70727879);
      FUN_0041df10(uVar2);
      FUN_0041c940();
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < 0xea0530);
  return;
}

