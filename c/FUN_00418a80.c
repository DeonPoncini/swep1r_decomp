#include "prototype.h"


undefined4 *
FUN_00418a80(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar5 = param_5 + 1U & 0xfffffffe;
  uVar7 = uVar5 * param_7 * param_6;
  puVar1 = (undefined4 *)FUN_0049f270(uVar7);
  puVar4 = puVar1;
  for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if ((DAT_0050c96c != 0) && (0 < param_4)) {
    param_4 = param_4 + -1;
  }
  if (param_6 != 0) {
    puVar2 = (undefined4 *)((param_8 * param_4 + param_3) * param_7 + param_2);
    param_4 = param_6;
    puVar4 = puVar1;
    do {
      puVar6 = puVar2;
      puVar8 = puVar4;
      for (uVar3 = (uint)(param_7 * param_5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = param_7 * param_5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + param_8 * param_7);
      puVar4 = (undefined4 *)((int)puVar4 + uVar5 * param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *param_1 = (undefined2)param_5;
  *(undefined4 **)(param_1 + 2) = puVar1;
  param_1[1] = (undefined2)param_6;
  return puVar1;
}

