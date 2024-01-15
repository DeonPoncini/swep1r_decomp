#include "prototype.h"


undefined4 * FUN_004a1380(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0049f270(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_0049f200(param_1);
    return (undefined4 *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    puVar1 = (undefined4 *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_004a1670(9);
      pbVar2 = (byte *)FUN_004a3400(param_1,&local_4,&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_004a16f0(9);
        puVar1 = (undefined4 *)HeapReAlloc(DAT_00ecd604,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_004d422c) {
          iVar3 = FUN_004a3880(local_4,local_8,pbVar2,uVar4 >> 4);
          puVar1 = param_1;
          if (iVar3 != 0) goto LAB_004a1485;
          puVar1 = (undefined4 *)FUN_004a34c0(uVar4 >> 4);
          if (puVar1 != (undefined4 *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            puVar6 = param_1;
            puVar7 = puVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar7 = *(undefined *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_004a3460(local_4,local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_004a1485;
          }
LAB_004a1489:
          puVar1 = (undefined4 *)HeapAlloc(DAT_00ecd604,0,uVar4);
          if (puVar1 != (undefined4 *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            puVar6 = param_1;
            puVar7 = puVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar7 = *(undefined *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            FUN_004a3460(local_4,local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_004a1485:
          if (puVar1 == (undefined4 *)0x0) goto LAB_004a1489;
        }
        FUN_004a16f0(9);
      }
    }
    if ((puVar1 != (undefined4 *)0x0) || (DAT_00dfab64 == 0)) {
      return puVar1;
    }
    iVar3 = FUN_004a3950(uVar4);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}

