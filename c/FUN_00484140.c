#include "prototype.h"


int * FUN_00484140(undefined4 param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(DAT_00ecc420 + 0x20))(0x8c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar1;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  if (-1 < param_2) {
    if (param_2 < 3) {
      FUN_004846e0(piVar1 + 2,0x80,param_1,&DAT_004c7d54);
    }
    else if (param_2 == 3) {
      if (*param_3 == '.') {
        param_3 = param_3 + 1;
      }
      FUN_0049eb80(&DAT_00ecbc20,&DAT_004c7d58,param_3);
      FUN_004846e0(piVar1 + 2,0x80,param_1,&DAT_00ecbc20);
      *piVar1 = 3;
      return piVar1;
    }
  }
  *piVar1 = param_2;
  return piVar1;
}

