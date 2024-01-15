#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040a330(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_d;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar2 = FUN_0040a160(param_1);
  local_c = 0;
  if (((((-1 < iVar2) && (iVar4 = iVar2 * 0x174, (&DAT_004d6ef4)[iVar2 * 0x5d] == param_1)) &&
       (local_8 = param_1 * 0xc, _DAT_004ac378 <= (float)(&DAT_00ec8400)[param_1 * 3])) &&
      ((_DAT_004ac378 <= *(float *)(&DAT_00ec8404 + local_8) &&
       (_DAT_004ac378 <= *(float *)(&DAT_00ec8408 + local_8))))) &&
     (puVar1 = &DAT_004d6da0 + iVar4, *(int *)(&DAT_004d6da4 + iVar4) != 0)) {
    iVar2 = FUN_00404280(puVar1);
    if (iVar2 == 0) {
      local_c = 1;
    }
    if ((local_c == 0) && ((&DAT_004d6c78)[param_1] == param_2)) {
      return 1;
    }
    iVar2 = FUN_00404670(puVar1,&local_d);
    if (iVar2 != 0) {
      uVar6 = *(uint *)(&DAT_004d6dd4 + iVar4);
      local_4 = uVar6;
      puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar6);
      puVar7 = *(undefined4 **)(&DAT_004d6ef0 + iVar4);
      puVar8 = puVar3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iVar4 = __ftol();
      iVar2 = local_c;
      puVar3[1] = iVar4;
      puVar3[2] = iVar4;
      if (DAT_004d55d4 == 0) {
        iVar4 = ((int)puVar3[7] / iVar4) * param_2;
        puVar3[7] = iVar4;
        puVar3[8] = iVar4;
      }
      (&DAT_004d6c78)[param_1] = param_2;
      iVar4 = FUN_00404590(puVar1,local_4,puVar3,local_c);
      (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
      if ((iVar4 != 0) && (iVar2 != 0)) {
        (&DAT_004d6ce8)[param_1] = 1;
      }
      return iVar4;
    }
  }
  return 0;
}

