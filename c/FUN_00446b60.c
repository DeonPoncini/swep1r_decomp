#include "prototype.h"


void FUN_00446b60(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  sVar1 = param_2[1];
  psVar3 = param_2;
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    psVar3 = (short *)0xf;
    break;
  case 1:
    psVar3 = (short *)0x7;
    break;
  case 2:
    psVar3 = (short *)0x3;
    break;
  case 3:
  case 7:
    psVar3 = (short *)0x1;
  }
  uVar6 = (int)psVar3 + (int)*param_2 & ~(uint)psVar3;
  param_1 = *(undefined4 *)(param_1 + 8);
  uVar4 = FUN_00445c90(uVar6);
  uVar5 = FUN_00445c90((int)sVar1);
  FUN_00445ee0(*(undefined *)(iVar2 + 4),*(undefined *)(iVar2 + 5),uVar6,(int)sVar1,uVar4,uVar5,
               param_2 + 2,&param_1,0,0);
  return;
}

