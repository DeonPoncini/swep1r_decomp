#include "prototype.h"


short * FUN_004a15c0(short *param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  if (param_2 < 1) {
    return (short *)0x0;
  }
  FUN_004a1710(param_3);
  param_2 = param_2 + -1;
  psVar2 = param_1;
  if (param_2 != 0) {
    while( true ) {
      sVar1 = FUN_004a6810(param_3);
      if (sVar1 == -1) break;
      *psVar2 = sVar1;
      psVar2 = psVar2 + 1;
      if ((sVar1 == 10) || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_004a1610;
    }
    if (psVar2 == param_1) {
      FUN_004a1780(param_3);
      return (short *)0x0;
    }
  }
LAB_004a1610:
  *psVar2 = 0;
  FUN_004a1780(param_3);
  return param_1;
}

