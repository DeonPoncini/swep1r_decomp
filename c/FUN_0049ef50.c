#include "prototype.h"


undefined4 * FUN_0049ef50(undefined4 *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (param_3 != 0) {
    do {
      sVar1 = *param_2;
      param_2 = param_2 + 1;
      *(short *)puVar4 = sVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      if (sVar1 == 0) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    if ((param_3 != 0) && (uVar2 = param_3 - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
    }
  }
  return param_1;
}

