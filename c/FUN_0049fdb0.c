#include "prototype.h"


uint FUN_0049fdb0(undefined4 param_1,uint param_2,uint param_3,int param_4,code *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (param_3 - 1) * param_4 + param_2;
  bVar1 = param_2 <= uVar3;
  uVar4 = param_2;
  param_2 = uVar3;
  if (bVar1) {
    while (uVar3 = param_3 >> 1, uVar3 != 0) {
      uVar5 = uVar3;
      if ((param_3 & 1) == 0) {
        uVar5 = uVar3 - 1;
      }
      uVar5 = param_4 * uVar5 + uVar4;
      iVar2 = (*param_5)(param_1,uVar5);
      if (iVar2 == 0) {
        return uVar5;
      }
      if (iVar2 < 0) {
        param_2 = uVar5 - param_4;
        if ((param_3 & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      else {
        uVar4 = uVar5 + param_4;
      }
      param_3 = uVar3;
      if (param_2 < uVar4) {
        return 0;
      }
    }
    if (param_3 != 0) {
      iVar2 = (*param_5)(param_1,uVar4);
      return ~-(uint)(iVar2 != 0) & uVar4;
    }
  }
  return 0;
}

