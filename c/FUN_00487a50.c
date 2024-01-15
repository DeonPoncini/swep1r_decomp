#include "prototype.h"


undefined4 FUN_00487a50(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  DAT_00ec8e80 = 0;
  iVar1 = FUN_004a02f0(param_1,s___004c86b0);
  if (iVar1 == 0) {
    DAT_00ec8e80 = 0;
    return 0;
  }
  piVar4 = &DAT_00ec8e88;
  do {
    if (0xec9e88 < (int)piVar4) {
      return 1;
    }
    puVar2 = (undefined *)FUN_0049fb10(iVar1,0x3d);
    if (puVar2 == (undefined *)0x0) {
      piVar4[-1] = iVar1;
      *piVar4 = iVar1;
    }
    else {
      *puVar2 = 0;
      piVar4[-1] = iVar1;
      *piVar4 = (int)(puVar2 + 1);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
    iVar1 = FUN_004a02f0(0,s___004c86b0);
  } while (iVar1 != 0);
  DAT_00ec8e80 = iVar3;
  return 0;
}

