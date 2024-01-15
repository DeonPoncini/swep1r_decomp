#include "prototype.h"


void FUN_0048a9e0(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(DAT_0052e618 + 0x20);
  if ((uVar2 <= param_1) && (uVar2 = *(uint *)(DAT_0052e618 + 0x28), param_1 <= uVar2)) {
    uVar2 = param_1;
  }
  uVar1 = *(uint *)(DAT_0052e618 + 0x24);
  if ((*(uint *)(DAT_0052e618 + 0x24) <= param_2) &&
     (uVar1 = *(uint *)(DAT_0052e618 + 0x2c), param_2 <= *(uint *)(DAT_0052e618 + 0x2c))) {
    uVar1 = param_2;
  }
  if ((*(int *)(DAT_0052e618 + 0x1c) != 0) && (uVar2 != uVar1)) {
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    *param_3 = uVar1;
    *param_4 = uVar1;
    return;
  }
  *param_3 = uVar2;
  *param_4 = uVar1;
  return;
}

