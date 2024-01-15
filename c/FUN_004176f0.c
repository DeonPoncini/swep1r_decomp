#include "prototype.h"


void FUN_004176f0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_3]);
  iVar2 = FUN_0042df70(param_2,(&DAT_00e99720)[param_3]);
  param_1[2] = iVar1 + 0x13;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = iVar2 + 0x1d;
  return;
}

