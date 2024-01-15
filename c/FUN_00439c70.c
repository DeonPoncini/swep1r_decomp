#include "prototype.h"


void FUN_00439c70(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *param_4;
  undefined4 local_60 [8];
  undefined local_40 [64];
  
  puVar3 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0049eb80(local_40,s__f4_c_s_s_004c0d24,local_60);
  uVar1 = __ftol(local_40);
  uVar1 = __ftol(0x32,0xffffffff,0xffffffff,uVar1);
  uVar1 = __ftol(uVar1);
  FUN_00450530(uVar1);
  return;
}

