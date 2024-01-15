#include "prototype.h"


void FUN_00445e50(int param_1,int param_2,int param_3,byte *param_4,int param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  
  pbVar9 = param_4;
  puVar7 = (undefined4 *)*param_6;
  if (0 < param_2) {
    param_4 = (byte *)param_2;
    do {
      iVar4 = 0;
      puVar6 = puVar7;
      iVar10 = param_1;
      if (0 < param_1) {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          puVar7 = (undefined4 *)((int)puVar6 + 2);
          uVar2 = *(undefined2 *)(param_5 + (uint)bVar1 * 2);
          uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
          iVar10 = iVar10 + -1;
          *(ushort *)puVar6 = uVar3 >> 1 | uVar3 << 0xf;
          iVar4 = param_1;
          puVar6 = puVar7;
        } while (iVar10 != 0);
      }
      if (iVar4 < param_3) {
        uVar8 = param_3 - iVar4;
        puVar6 = puVar7;
        for (uVar5 = uVar8 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        puVar7 = (undefined4 *)((int)puVar7 + uVar8 * 2);
        for (uVar5 = (uint)((uVar8 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined2 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
        }
      }
      param_4 = (byte *)((int)param_4 + -1);
    } while (param_4 != (byte *)0x0);
  }
  *param_6 = puVar7;
  return;
}

