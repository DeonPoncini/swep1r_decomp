#include "prototype.h"


void FUN_00412f60(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    puVar2 = (uint *)(param_1 + 0x68);
    do {
      uVar1 = *puVar2;
      if ((0xfa < uVar1) && (uVar1 < 400)) {
        FUN_004282f0(CONCAT22((short)(uVar1 >> 0x10),*(undefined2 *)puVar2),0);
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xe;
    } while (iVar3 < *(int *)(param_1 + 0x5c));
  }
  return;
}

