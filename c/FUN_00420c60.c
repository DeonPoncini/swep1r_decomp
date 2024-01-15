#include "prototype.h"


void FUN_00420c60(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = &DAT_004eb238;
  pbVar1 = &DAT_00e9f444;
  do {
    if (((*pbVar1 & 1) != 0) && (*piVar4 != 0)) {
      iVar5 = iVar5 + 1;
    }
    pbVar1 = pbVar1 + 0xb0;
    piVar4 = piVar4 + 1;
  } while ((int)pbVar1 < 0xea0204);
  uVar2 = FUN_00414d90(param_1,0x186b5);
  iVar3 = FUN_00420f90();
  if (iVar5 == iVar3) {
    FUN_00411490();
    return;
  }
  FUN_004114b0(uVar2);
  return;
}

