#include "prototype.h"


bool FUN_00488410(int *param_1,undefined4 param_2,int *param_3)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  if (*param_1 == 0) {
    iVar2 = param_1[9];
    if (iVar2 == 8) {
      uVar1 = (undefined)param_2;
      if (param_3 == (int *)0x0) {
        uVar3 = param_1[5];
        puVar5 = (undefined4 *)param_1[0x16];
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[7] * param_3[1] + param_1[0x16] + *param_3);
      if (0 < param_3[3]) {
        do {
          uVar3 = param_3[2];
          puVar6 = puVar5;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar6 = puVar6 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined *)puVar6 = uVar1;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
      }
    }
    else if (iVar2 == 0x10) {
      if (param_3 == (int *)0x0) {
        puVar5 = (undefined4 *)param_1[0x16];
        uVar3 = (uint)param_1[5] >> 1;
        if ((uVar3 & 1) == 0) {
          for (uVar3 = (uint)param_1[5] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar5 = CONCAT22((undefined2)param_2,(undefined2)param_2);
            puVar5 = puVar5 + 1;
          }
        }
        else {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined2 *)puVar5 = (undefined2)param_2;
            puVar5 = (undefined4 *)((int)puVar5 + 2);
          }
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[0x16] + (param_1[7] * param_3[1] + *param_3) * 2);
      if (0 < param_3[3]) {
        do {
          uVar3 = param_3[2];
          puVar6 = puVar5;
          if ((uVar3 & 1) == 0) {
            for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = CONCAT22((undefined2)param_2,(undefined2)param_2);
              puVar6 = puVar6 + 1;
            }
          }
          else {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined2 *)puVar6 = (undefined2)param_2;
              puVar6 = (undefined4 *)((int)puVar6 + 2);
            }
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
        return true;
      }
    }
    else if (iVar2 == 0x20) {
      if (param_3 == (int *)0x0) {
        puVar5 = (undefined4 *)param_1[0x16];
        for (uVar3 = (uint)param_1[5] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = param_2;
          puVar5 = puVar5 + 1;
        }
        return true;
      }
      local_8 = 0;
      puVar5 = (undefined4 *)(param_1[0x16] + (param_1[7] * param_3[1] + *param_3) * 4);
      if (0 < param_3[3]) {
        do {
          puVar6 = puVar5;
          for (iVar2 = param_3[2]; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = param_2;
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_1[6]);
          local_8 = local_8 + 1;
        } while (local_8 < param_3[3]);
        return true;
      }
    }
  }
  else if (*param_1 == 1) {
    if (((param_1[0x33] & 0x20U) != 0) && ((param_1[0x33] & 0x200000U) != 0)) {
      return false;
    }
    iVar2 = FUN_00489bd0(param_1 + 0x18,param_2,param_3);
    return iVar2 == 0;
  }
  return true;
}

