#include "prototype.h"


float10 FUN_0049ef90(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined local_18 [24];
  
  while( true ) {
    if (DAT_004d1f9c < 2) {
      uVar2 = (byte)PTR_DAT_004d1d90[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_0049f440(*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = 0xffffffff;
  pbVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar3 = FUN_004a2bd0(local_18,param_1,~uVar2 - 1,0,0);
  return (float10)*(double *)(iVar3 + 0x10);
}

