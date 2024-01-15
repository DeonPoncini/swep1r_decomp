#include "prototype.h"


int FUN_00486cd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_3;
  iVar2 = (**(code **)(*DAT_00510254 + 100))(DAT_00510254,param_1,&param_3,1,param_2,param_3);
  while( true ) {
    if (iVar2 < 0) {
      return (iVar2 == -0x7788ff42) - 2;
    }
    if (*param_1 != 0) break;
    iVar2 = FUN_00487550(param_2,param_1);
    if (iVar2 != -1) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_00510254 + 100))
                      (DAT_00510254,param_1,&stack0xfffffff4,1,param_2,uVar1);
  }
  return 0;
}

