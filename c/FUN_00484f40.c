#include "prototype.h"


void FUN_00484f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  if (DAT_0050d560 != (int *)0x0) {
    puVar1 = (undefined4 *)-(float)param_1[1];
    (**(code **)(*DAT_0050d560 + 0xc))(DAT_0050d560,*param_1,param_1[2]);
    (**(code **)(*DAT_0050d560 + 0x2c))
              (DAT_0050d560,*puVar1,puVar1[2],-(float)puVar1[1],*unaff_ESI,unaff_ESI[2],
               -(float)unaff_ESI[1]);
  }
  return;
}

