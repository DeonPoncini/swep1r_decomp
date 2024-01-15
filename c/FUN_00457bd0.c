#include "prototype.h"


void FUN_00457bd0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_004c2728;
  do {
    uVar1 = FUN_00446fb0(*puVar2);
    FUN_004282f0(iVar3,uVar1);
    FUN_004282f0(iVar3 + 0x17,uVar1);
    FUN_004282f0(iVar3 + 0x2e,uVar1);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xd;
  } while ((short)iVar3 < 0x17);
  return;
}

