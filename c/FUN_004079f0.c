#include "prototype.h"


undefined4 FUN_004079f0(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  if (param_1 == (byte *)0x0) {
    pbVar6 = &DAT_004d5fc0;
  }
  else if (param_1 == (byte *)0x1) {
    pbVar6 = &DAT_004d6518;
  }
  else {
    pbVar6 = &DAT_004d6828;
    if (param_1 != (byte *)0x2) {
      pbVar6 = param_1;
    }
  }
  bVar1 = *pbVar6;
  iVar5 = 0;
  iVar2 = -1;
  pbVar3 = pbVar6;
  while (iVar4 = iVar5, bVar1 != 0xff) {
    if (-1 < iVar2) goto LAB_00407a60;
    if ((*(int *)(pbVar3 + 4) != param_2) ||
       (iVar5 = iVar4, (*pbVar3 & (-(param_3 != 0) & 0xfcU) + 8) == 0)) {
      iVar5 = iVar4 + 1;
      pbVar3 = pbVar3 + 0xc;
      iVar4 = iVar2;
    }
    iVar2 = iVar4;
    bVar1 = *pbVar3;
  }
  if (iVar2 < 0) {
    return 0xffffffff;
  }
LAB_00407a60:
  bVar1 = pbVar6[iVar2 * 0xc];
  *param_4 = bVar1;
  if ((bVar1 & 8) == 0) {
    *param_4 = bVar1 & 0xcf;
  }
  *param_4 = *param_4 & 0xf3;
  return *(undefined4 *)(pbVar6 + iVar2 * 0xc + 8);
}

