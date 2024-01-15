#include "prototype.h"


void FUN_0041aa90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_2;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00417120(0xbbf,&param_1,&param_2);
    piVar2 = param_3;
    local_10 = *param_3;
    local_c = param_3[1];
    local_8 = param_1 + -1 + local_10;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,0,0xbbf,&local_10,1,0);
    local_c = piVar2[1];
    local_10 = *piVar2 + param_1;
    local_8 = piVar2[2] - param_1;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,1,0xbc0,&local_10,1,0);
    local_8 = piVar2[2];
    local_c = piVar2[1];
    local_10 = (local_8 - param_1) + 1;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,2,0xbbf,&local_10,1,0x400000);
    FUN_00414e30(iVar1,1);
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 3;
  }
  return;
}

