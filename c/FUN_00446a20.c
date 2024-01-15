#include "prototype.h"


void FUN_00446a20(short *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  iVar5 = (int)*param_1;
  sVar1 = param_1[1];
  local_18 = *(undefined4 *)(param_1 + 4);
  local_14 = iVar5;
  local_8 = (int)sVar1;
  uVar4 = FUN_00445c90(iVar5);
  local_c = FUN_00445c90((int)sVar1);
  puVar2 = *(undefined2 **)(param_1 + 8);
  local_1c = FUN_00408e60(*(undefined4 *)(puVar2 + 2),local_c * uVar4 * 2);
  iVar7 = (int)param_1[6];
  uVar6 = uVar4;
  local_10 = local_1c;
  iVar3 = local_8;
  while (iVar7 = iVar7 + -1, local_8 = iVar3, -1 < iVar7) {
    puVar2 = (undefined2 *)(*(int *)(param_1 + 8) + iVar7 * 8);
    switch(*(undefined *)((int)param_1 + 5)) {
    case 0:
      uVar6 = 0xf;
      break;
    case 1:
      uVar6 = 7;
      break;
    case 2:
      uVar6 = 3;
      break;
    case 3:
      uVar6 = 1;
    }
    FUN_00445e50((int)*(short *)(*(int *)(param_1 + 8) + iVar7 * 8) + uVar6 & ~uVar6,
                 (int)(short)puVar2[1],uVar4,*(undefined4 *)(puVar2 + 2),local_18,&local_1c);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    iVar5 = local_14;
    iVar3 = local_8;
  }
  FUN_00445cd0(iVar5,iVar3,uVar4,local_c,*(undefined4 *)(puVar2 + 2),&local_4,local_10);
  **(undefined2 **)(param_1 + 8) = (short)iVar5;
  *(short *)(*(int *)(param_1 + 8) + 2) = (short)iVar3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = local_4;
  param_1[6] = 1;
  return;
}

