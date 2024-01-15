#include "prototype.h"


undefined4 FUN_00487830(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (DAT_00529500 != 0) {
    FUN_00487c00();
  }
  pbVar4 = &DAT_004b7580;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00487872:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00487877;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00487872;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00487877:
  if (iVar3 == 0) {
    DAT_00529504 = 0;
  }
  else {
    DAT_00529504 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,param_2);
    if (DAT_00529504 == 0) {
      DAT_00529504 = 0;
      if (DAT_00529500 != 0) {
        FUN_00487c90();
      }
      return 0;
    }
  }
  DAT_00ec9e84 = (**(code **)(DAT_00ecc420 + 0x20))(0x1000);
  _strncpy(&DAT_005143d8,(char *)param_1,0x7f);
  DAT_00514457 = 0;
  DAT_005284f8 = 0;
  DAT_00529500 = 1;
  return 1;
}

