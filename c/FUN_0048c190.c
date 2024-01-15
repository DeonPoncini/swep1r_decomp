#include "prototype.h"


int FUN_0048c190(undefined4 *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (*(code *)param_1[2])(param_2,*param_1);
    *param_3 = iVar2;
    iVar2 = param_1[1] + iVar2 * 0x10;
    if (iVar2 != 0) {
      while (pbVar3 = *(byte **)(iVar2 + 8), pbVar5 = param_2, pbVar3 != (byte *)0x0) {
        do {
          bVar1 = *pbVar3;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_0048c1eb:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0048c1f0;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0048c1eb;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0048c1f0:
        if (iVar4 == 0) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

