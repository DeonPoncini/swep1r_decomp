#include "prototype.h"


void FUN_0045bee0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x34) = param_2;
  FUN_0045c010(&DAT_004c4010 + param_2 * 0x20,&DAT_004c401c + param_2 * 0x20,1,0,param_4);
  if (param_3 != -1) {
    DAT_004bfedc = param_3;
  }
  return;
}

