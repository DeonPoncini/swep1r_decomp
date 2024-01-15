#include "prototype.h"


void FUN_00420cc0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00420f90();
  uVar2 = FUN_00414d90(0,0x30d42);
  FUN_00413800(uVar2);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar3 = FUN_0041abb0(uVar4);
      *(uint *)(iVar3 + 0x56c) = uVar4;
      FUN_00413a30(uVar2,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

