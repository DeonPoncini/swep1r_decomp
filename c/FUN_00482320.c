#include "prototype.h"


void FUN_00482320(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined2 *local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined2 *local_44;
  int local_40;
  undefined2 local_38 [4];
  undefined2 local_30 [4];
  undefined2 local_28 [4];
  undefined2 local_20 [4];
  undefined2 local_18 [4];
  undefined2 local_10 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  bVar5 = false;
  iVar11 = local_40;
  if (param_1 != (int *)0x0) {
    do {
      iVar10 = *param_1;
      iVar4 = param_1[1];
      local_8 = iVar10;
      iVar10 = local_8;
      local_4 = iVar4;
      iVar4 = local_4;
      uVar6 = iVar10 << 0x18;
      cVar9 = (char)((uint)iVar10 >> 8);
      local_8._2_1_ = (char)((uint)iVar10 >> 0x10);
      local_8._3_1_ = (char)((uint)iVar10 >> 0x18);
      local_8 = iVar10;
      if (uVar6 < 0x5000001) {
        if (uVar6 == 0x5000000) {
          local_54 = (undefined2 *)(iVar11 + local_8._2_1_ * 8);
          local_58 = (undefined2 *)(iVar11 + cVar9 * 8);
          local_50 = (undefined2 *)(iVar11 + local_8._3_1_ * 8);
          iVar10 = 0;
          puVar7 = local_28;
          do {
            puVar8 = local_30 + iVar10;
            *puVar8 = *local_58;
            puVar1 = local_38 + iVar10;
            *puVar1 = *local_54;
            *puVar7 = *local_50;
            *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
            *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
            *puVar7 = CONCAT11((char)*puVar7,(char)((ushort)*puVar7 >> 8));
            iVar10 = iVar10 + 1;
            local_58 = local_58 + 1;
            local_54 = local_54 + 1;
            local_50 = local_50 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar10 < 3);
          FUN_00482120(local_30,local_38,local_28,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar6 == 0x1000000) {
          local_40 = param_1[1];
          iVar11 = local_40;
        }
      }
      else if (uVar6 == 0x6000000) {
        puVar7 = local_28;
        local_4._3_1_ = (char)((uint)iVar4 >> 0x18);
        local_4._2_1_ = (char)((uint)iVar4 >> 0x10);
        local_44 = (undefined2 *)(iVar11 + local_4._3_1_ * 8);
        local_48 = (undefined2 *)(iVar11 + local_4._2_1_ * 8);
        puVar8 = local_20;
        local_4c = (undefined2 *)(iVar11 + (char)((uint)iVar4 >> 8) * 8);
        local_58 = (undefined2 *)(iVar11 + local_8._3_1_ * 8);
        local_50 = (undefined2 *)(iVar11 + cVar9 * 8);
        local_54 = (undefined2 *)(iVar11 + local_8._2_1_ * 8);
        iVar11 = 0;
        local_4 = iVar4;
        do {
          puVar1 = local_10 + iVar11;
          *puVar1 = *local_50;
          puVar2 = local_18 + iVar11;
          *puVar2 = *local_54;
          *puVar8 = *local_58;
          local_30[iVar11] = *local_4c;
          local_38[iVar11] = *local_48;
          *puVar7 = *local_44;
          *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
          *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
          uVar3 = local_30[iVar11];
          *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
          local_30[iVar11] = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
          uVar3 = *puVar7;
          local_38[iVar11] = CONCAT11((char)local_38[iVar11],(char)((ushort)local_38[iVar11] >> 8));
          iVar11 = iVar11 + 1;
          *puVar7 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
          local_50 = local_50 + 1;
          local_54 = local_54 + 1;
          local_58 = local_58 + 1;
          local_4c = local_4c + 1;
          local_48 = local_48 + 1;
          local_44 = local_44 + 1;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar11 < 3);
        FUN_00482120(local_10,local_18,local_20,param_2,param_3,param_4,param_5,param_6);
        FUN_00482120(local_30,local_38,local_28,param_2,param_3,param_4,param_5,param_6);
        iVar11 = local_40;
      }
      else if (uVar6 == 0xdf000000) {
        bVar5 = true;
      }
      param_1 = param_1 + 2;
    } while (!bVar5);
  }
  return;
}

