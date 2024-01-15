#include "prototype.h"


void FUN_0049f8c0(uint param_1,uint param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_100;
  uint *local_fc;
  uint *local_f8;
  int local_f4;
  uint local_f0 [30];
  uint local_78 [30];
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_100 = (param_2 - 1) * param_3 + param_1;
  local_fc = local_f0;
  local_f8 = local_78;
  local_f4 = 0;
LAB_0049f914:
  uVar1 = (local_100 - param_1) / param_3 + 1;
  if (8 < uVar1) {
    FUN_0049fad0((uVar1 >> 1) * param_3 + param_1,param_1,param_3);
    uVar3 = local_100 + param_3;
    uVar1 = param_1;
LAB_0049f98e:
    uVar1 = uVar1 + param_3;
    if (uVar1 <= local_100) goto code_r0x0049f998;
    goto LAB_0049f9a8;
  }
  FUN_0049fa70(param_1,local_100,param_3,param_4);
  goto LAB_0049f935;
code_r0x0049f998:
  iVar2 = (*param_4)(uVar1,param_1);
  if (iVar2 < 1) goto LAB_0049f98e;
LAB_0049f9a8:
  do {
    uVar3 = uVar3 - param_3;
    if (uVar3 <= param_1) break;
    iVar2 = (*param_4)(uVar3,param_1);
  } while (-1 < iVar2);
  if (uVar1 <= uVar3) {
    FUN_0049fad0(uVar1,uVar3,param_3);
    goto LAB_0049f98e;
  }
  FUN_0049fad0(param_1,uVar3,param_3);
  if ((int)((uVar3 - param_1) + -1) < (int)(local_100 - uVar1)) {
    if (uVar1 < local_100) {
      *local_f8 = uVar1;
      *local_fc = local_100;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    if (param_1 + param_3 < uVar3) {
      local_100 = uVar3 - param_3;
      goto LAB_0049f914;
    }
  }
  else {
    if (param_1 + param_3 < uVar3) {
      *local_f8 = param_1;
      *local_fc = uVar3 - param_3;
      local_f4 = local_f4 + 1;
      local_f8 = local_f8 + 1;
      local_fc = local_fc + 1;
    }
    param_1 = uVar1;
    if (uVar1 < local_100) goto LAB_0049f914;
  }
LAB_0049f935:
  local_f4 = local_f4 + -1;
  local_f8 = local_f8 + -1;
  local_fc = local_fc + -1;
  if (local_f4 < 0) {
    return;
  }
  local_100 = *local_fc;
  param_1 = *local_f8;
  goto LAB_0049f914;
}

