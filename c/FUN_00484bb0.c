#include "prototype.h"


uint FUN_00484bb0(uint param_1)

{
  int iVar1;
  
  if (DAT_0050d548 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_0050d548 + 0x48))(DAT_0050d548,param_1,&param_1);
  return param_1 & (iVar1 < 0) - 1;
}

