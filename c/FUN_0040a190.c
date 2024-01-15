#include "prototype.h"


int FUN_0040a190(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 < 0) {
    return -1;
  }
  uVar2 = (&DAT_004d6ef4)[param_1 * 0x5d];
  if ((int)uVar2 < 0) {
    return 2;
  }
  if (uVar2 == param_2) {
    return 0;
  }
  pbVar5 = (&PTR_s_GForce_004b4940)[param_2];
  pbVar3 = &DAT_004d6ef8 + param_1 * 0x174;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0040a20d:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0040a212;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0040a20d;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0040a212:
  if (iVar4 == 0) {
    return 1;
  }
  if (uVar2 < param_2) {
    return 3;
  }
  if (param_2 < uVar2) {
    iVar4 = 4;
  }
  return iVar4;
}

