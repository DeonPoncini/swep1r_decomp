#include "prototype.h"


void FUN_0042e0e0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  iVar2 = param_1;
  if (*(int *)(param_2 + 0x5c) != 0) {
    iVar1 = (int)(char)param_1;
    if (((int)(uint)*(byte *)(param_2 + 0x5a) <= iVar1) &&
       (iVar1 <= (int)(uint)*(byte *)(param_2 + 0x5b))) {
      iVar2 = (iVar1 - (uint)*(byte *)(param_2 + 0x5a)) * 0x10 + *(int *)(param_2 + 0x5c);
      param_1 = (int)*(short *)(iVar2 + 0xe);
      iVar2 = (int)*(short *)(iVar2 + 2);
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_1;
  }
  return;
}

