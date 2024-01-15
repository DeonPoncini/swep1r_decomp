#include "prototype.h"


void FUN_00446c20(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined2 *)((int)param_1 + -0x26);
  if (param_1[-7] != 0) {
    iVar5 = (int)CONCAT11((char)*(undefined2 *)(param_1 + -10),
                          (char)((ushort)*(undefined2 *)(param_1 + -10) >> 8));
    uVar2 = FUN_00445c90(iVar5);
    iVar4 = (int)CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar3 = FUN_00445c90(iVar4);
    FUN_00445ee0(*(undefined *)(param_1 + -0xb),*(undefined *)((int)param_1 + -0x2b),iVar5,iVar4,
                 uVar2,uVar3,param_1,param_2,1,*(undefined *)(param_1[-7] + 3));
  }
  *(int **)(*param_1 + 10) = param_1 + -0xe;
  return;
}

