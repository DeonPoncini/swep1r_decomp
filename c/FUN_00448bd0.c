#include "prototype.h"


uint * FUN_00448bd0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar3 = *param_1;
  while (iVar3 != -1) {
    piVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = *piVar4;
  }
  piVar4 = param_1 + 1;
  uVar7 = 0xffffffff;
  if (param_1[1] == 0x44617461) {
    piVar4 = param_1 + 3;
    if (0 < param_1[2]) {
      piVar4 = piVar4 + param_1[2];
    }
  }
  if (*piVar4 == 0x416e696d) {
    puVar5 = (uint *)(piVar4 + 1);
    uVar2 = *puVar5;
    puVar6 = puVar5;
    while (uVar2 != 0) {
      FUN_00425900(uVar2);
      if (*puVar6 < uVar7) {
        uVar7 = *puVar6;
      }
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
      uVar2 = *puVar1;
    }
  }
  else {
    puVar5 = (uint *)0x0;
  }
  if (uVar7 != 0xffffffff) {
    DAT_00e98248 = DAT_00e6b164 - uVar7;
    DAT_00e981e0 = DAT_00e981e0 - (DAT_00e6b164 - uVar7);
    return puVar5;
  }
  DAT_00e98248 = 0;
  return puVar5;
}

