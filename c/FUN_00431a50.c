#include "prototype.h"


uint * FUN_00431a50(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
LAB_00431af9:
    puVar1 = (uint *)0x0;
  }
  else {
    if (param_2 == 0) {
      puVar1 = (uint *)(param_1 + 8);
    }
    else {
      if (param_2 != 2) goto LAB_00431af9;
      puVar1 = (uint *)(param_1 + 4);
    }
    if ((param_4 & 0x10) != 0) {
      if (param_5 == 2) {
        *puVar1 = *puVar1 | param_3;
      }
      else if (param_5 == 3) {
        *puVar1 = *puVar1 & param_3;
      }
      else if (param_5 == 1) {
        *puVar1 = param_3;
      }
    }
    if ((param_4 & 0x20) != 0) {
      puVar1 = (uint *)FUN_00431770(param_1);
      if (((uint)puVar1 & 0x4000) != 0) {
        iVar3 = 0;
        puVar1 = (uint *)FUN_00431780(param_1);
        if (0 < (int)puVar1) {
          do {
            uVar2 = FUN_00431790(param_1,iVar3,param_2,param_3,param_4 & 0x10,param_5);
            FUN_00431a50(uVar2);
            iVar3 = iVar3 + 1;
            puVar1 = (uint *)FUN_00431780(param_1);
          } while (iVar3 < (int)puVar1);
          return puVar1;
        }
      }
    }
  }
  return puVar1;
}

