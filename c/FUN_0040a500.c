#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040a500(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_9;
  int local_8;
  undefined *local_4;
  
  iVar3 = FUN_0040a160(param_1);
  local_8 = 0;
  if ((((-1 < iVar3) && (iVar5 = iVar3 * 0x174, (&DAT_004d6ef4)[iVar3 * 0x5d] == param_1)) &&
      (_DAT_004ac378 <= (float)(&DAT_00ec8400)[param_1 * 3])) &&
     ((_DAT_004ac378 <= *(float *)(&DAT_00ec8404 + param_1 * 0xc) &&
      (_DAT_004ac378 <= *(float *)(&DAT_00ec8408 + param_1 * 0xc))))) {
    puVar1 = &DAT_004d6da0 + iVar5;
    if (*(int *)(&DAT_004d6da4 + iVar5) != 0) {
      local_4 = puVar1;
      iVar3 = FUN_00404280(puVar1);
      if (iVar3 == 0) {
        local_8 = 1;
      }
      if ((local_8 == 0) && ((&DAT_004d6c78)[param_1] == param_2)) {
        return 1;
      }
      iVar3 = FUN_00404670(puVar1,&local_9);
      if (iVar3 != 0) {
        uVar2 = *(uint *)(&DAT_004d6dd4 + iVar5);
        puVar4 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar2);
        iVar3 = local_8;
        puVar7 = *(undefined4 **)(&DAT_004d6ef0 + iVar5);
        puVar8 = puVar4;
        for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar8 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar4[3] = param_2;
        (&DAT_004d6c78)[param_1] = param_2;
        iVar5 = FUN_00404590(local_4,uVar2,puVar4,local_8);
        (**(code **)(DAT_00ecc420 + 0x24))(puVar4);
        if ((iVar5 != 0) && (iVar3 != 0)) {
          (&DAT_004d6ce8)[param_1] = 1;
        }
        return iVar5;
      }
    }
  }
  return 0;
}

