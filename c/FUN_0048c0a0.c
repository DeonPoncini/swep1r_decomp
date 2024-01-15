#include "prototype.h"


undefined4 FUN_0048c0a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0048c160(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (*(code *)param_1[2])(param_2,*param_1);
  iVar1 = iVar1 * 0x10;
  iVar2 = FUN_0048c000(param_1[1] + iVar1);
  if (*(int *)(iVar2 + 8) == 0) {
    puVar3 = (undefined4 *)(param_1[1] + iVar1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(param_1[1] + 8 + iVar1) = param_2;
    *(undefined4 *)(param_1[1] + 0xc + iVar1) = param_3;
    return 1;
  }
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[2] = param_2;
  puVar3[3] = param_3;
  FUN_0048d790(iVar2,puVar3);
  return 1;
}

