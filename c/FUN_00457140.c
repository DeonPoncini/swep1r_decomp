#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457140(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  undefined local_a8 [12];
  float local_9c;
  undefined local_98 [48];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_18 [12];
  undefined local_c [12];
  
  param_2 = param_2 - _DAT_004ad08c;
  param_3 = param_3 - _DAT_004ad090;
  local_9c = param_4 * _DAT_004ad094 * _DAT_004acf68;
  iVar1 = **(int **)(&DAT_00e29a4c + param_1 * 4);
  if (iVar1 != 0) {
    FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    FUN_0043e210();
    FUN_0044bb10(local_58,&DAT_00e298c0);
    FUN_0042f7d0(local_a8,&DAT_00e298f0);
    FUN_0042fa80(local_a8,local_a8,param_2,&DAT_00e298c0);
    FUN_0042fa80(local_a8,local_a8,0x42fc0000,&DAT_00e298d0);
    FUN_0042fa80(local_a8,local_a8,param_3,&DAT_00e298e0);
    FUN_0042f7d0(local_18,local_a8);
    FUN_0042f7b0(local_c,0,0,0);
    FUN_00431060(local_98,local_18);
    FUN_00431410(local_98,local_98,0,local_38,local_34,local_30);
    FUN_00431410(local_98,local_98,0,local_48,local_44,local_40);
    FUN_00431410(local_98,local_98,0,local_38,local_34,local_30);
    FUN_00431450(local_98,local_9c,local_9c,local_9c,local_98);
    FUN_0042f7d0(local_68,local_a8);
    FUN_00431640(iVar1,local_98);
    FUN_00431a50(iVar1,2,3,0x10,2);
  }
  return;
}

