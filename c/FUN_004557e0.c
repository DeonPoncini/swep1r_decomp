#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004557e0(float param_1,int param_2,int param_3,float param_4,undefined4 param_5,
                 float param_6,float param_7)

{
  int iVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 8) == 8) {
    param_6 = 0.375;
    param_1 = 3.75;
  }
  else {
    param_1 = param_7 * _DAT_004acfc0;
    param_6 = (param_6 - _DAT_004acfbc) * _DAT_004acfc0;
    param_2 = param_2 + 3;
    param_3 = param_3 + 1;
  }
  iVar1 = DAT_0050c92c + 0x90;
  DAT_0050c92c = DAT_0050c92c + 1;
  FUN_004285d0(iVar1,1);
  FUN_00428660(iVar1,param_2,param_3);
  FUN_004286f0(iVar1,param_6,param_1 * (_DAT_004acf54 - param_4));
  uVar2 = __ftol();
  FUN_00428740(iVar1,0,0,0,uVar2);
  iVar1 = DAT_0050c92c + 0x90;
  DAT_0050c92c = DAT_0050c92c + 1;
  FUN_004285d0(iVar1,1);
  uVar3 = __ftol();
  FUN_00428660(iVar1,param_2,uVar3);
  FUN_004286f0(iVar1,param_6,param_1 * param_4);
  uVar3 = __ftol(0,uVar2);
  uVar3 = __ftol(uVar3);
  FUN_00428740(iVar1,uVar3);
  return;
}

