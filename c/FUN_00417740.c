#include "prototype.h"


void FUN_00417740(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0042de30(param_2,(&DAT_00e99720)[param_3]);
  FUN_0042df70(param_2,(&DAT_00e99720)[param_3]);
  iVar1 = __ftol();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = iVar1 * 8 + 0x3b;
  param_1[3] = iVar1 + 0x4f;
  return;
}

