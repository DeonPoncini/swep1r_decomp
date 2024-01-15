#include "prototype.h"


void FUN_004171a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2;
  iVar4 = param_1;
  if (param_1 != 0) {
    iVar1 = param_1 + param_2 * 0x38;
    FUN_00417120(*(undefined4 *)(param_1 + 100 + param_2 * 0x38),&param_1,&param_2);
    *(int *)(iVar1 + 0x84) = param_1;
    *(int *)(iVar1 + 0x88) = param_2;
    if (param_3 != (int *)0x0) {
      iVar2 = param_3[3];
      iVar3 = param_3[1];
      *(float *)(iVar1 + 0x6c) = (float)((param_3[2] - *param_3) + 1) / (float)param_1;
      *(float *)(iVar4 + (iVar5 + 2) * 0x38) = (float)((iVar2 - iVar3) + 1) / (float)param_2;
      *(int *)(iVar1 + 0x74) = *param_3;
      *(int *)(iVar1 + 0x78) = param_3[1];
      *(int *)(iVar1 + 0x7c) = param_3[2];
      *(int *)(iVar1 + 0x80) = param_3[3];
      return;
    }
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar4 + 0x30);
    *(int *)(iVar1 + 0x7c) = param_1 + -1 + *(int *)(iVar4 + 0x24);
    *(int *)(iVar1 + 0x80) = *(int *)(iVar4 + 0x28) + -1 + param_2;
  }
  return;
}

