#include "prototype.h"


HRESULT FUN_0049e970(int *param_1,int **param_2,LPUNKNOWN param_3,undefined4 param_4)

{
  HRESULT HVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  if (param_2 == (int **)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = (int *)0x0;
  FUN_0049e940();
  HVar1 = CoCreateInstance((IID *)&DAT_004ae0e8,param_3,1,(IID *)&DAT_004ae128,&local_4);
  if (-1 < HVar1) {
    if (local_4 == (int *)0x0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*local_4 + 0x3c))(local_4,param_1,param_4,0);
    if (iVar2 < 0) {
      (**(code **)(*param_1 + 8))(param_1);
      return -0x7fffbffb;
    }
    *param_2 = param_1;
    HVar1 = 0;
  }
  return HVar1;
}

