#include "prototype.h"


byte * FUN_004ab4a0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (DAT_00dfae90 == 0) {
    pbVar3 = (byte *)FUN_0049fb10(param_1,param_2);
    return pbVar3;
  }
  FUN_004a1670(0x19);
  bVar1 = *param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if (((&DAT_00dfac89)[uVar2] & 4) == 0) {
      pbVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      pbVar3 = param_1 + 1;
      if (param_1[1] == 0) {
        FUN_004a16f0(0x19);
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,param_1[1])) {
        FUN_004a16f0(0x19);
        return param_1;
      }
    }
    param_1 = pbVar3 + 1;
    bVar1 = pbVar3[1];
  }
  FUN_004a16f0(0x19);
  return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
}

