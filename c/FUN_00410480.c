#include "prototype.h"


void FUN_00410480(undefined4 param_1)

{
  int iVar1;
  undefined local_50 [80];
  
  do {
    iVar1 = DAT_004d79e4;
    DAT_004d79e4 = DAT_004d79e4 + 1;
    FUN_0049eb80(local_50,s__s_03d_bmp_004b5c50,param_1,iVar1);
    iVar1 = FUN_0049f1e0(local_50,&DAT_004b5c4c);
    if (iVar1 == 0) break;
    FUN_0049f0f0(iVar1);
  } while (iVar1 != 0);
  FUN_00489d20(local_50);
  return;
}

