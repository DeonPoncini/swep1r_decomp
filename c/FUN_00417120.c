#include "prototype.h"


void FUN_00417120(undefined4 param_1,int *param_2,int *param_3)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_00417010(param_1);
  if (psVar1 != (short *)0x0) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)*psVar1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)psVar1[1];
    }
  }
  return;
}

