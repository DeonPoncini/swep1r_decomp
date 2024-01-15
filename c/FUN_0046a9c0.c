#include "prototype.h"


uint FUN_0046a9c0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  pbVar3 = (byte *)(param_1 + 0x2a0);
  do {
    if ((*pbVar3 & 0x14) != 0) {
      if (iVar2 < 3) {
        uVar1 = uVar1 | 1;
      }
      else {
        uVar1 = uVar1 | 2;
      }
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar2 < 6);
  return uVar1;
}

