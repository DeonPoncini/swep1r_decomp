#include "prototype.h"


void FUN_0049fa70(uint param_1,uint param_2,int param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < param_2) {
    uVar1 = param_3 + param_1;
    uVar3 = param_1;
    do {
      for (; uVar1 <= param_2; uVar1 = uVar1 + param_3) {
        iVar2 = (*param_4)(uVar1,uVar3);
        if (0 < iVar2) {
          uVar3 = uVar1;
        }
      }
      FUN_0049fad0(uVar3,param_2,param_3);
      param_2 = param_2 - param_3;
      uVar1 = param_3 + param_1;
      uVar3 = param_1;
    } while (param_1 < param_2);
  }
  return;
}

