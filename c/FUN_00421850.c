#include "prototype.h"


bool FUN_00421850(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_154;
  undefined4 local_150 [20];
  undefined local_100 [256];
  
  local_154 = 0;
  iVar3 = 0;
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,param_1);
  FUN_00484600(local_100,&PTR_DAT_004b4f7c);
  iVar1 = FUN_0049f1e0(local_100,&DAT_004b5c4c);
  if (iVar1 == 0) {
    iVar3 = 1;
    goto LAB_004218f7;
  }
  iVar2 = FUN_0049ffe0(&local_154,1,4,iVar1);
  if ((iVar2 == 0) || (local_154 != 0x10003)) {
LAB_004218e2:
    iVar3 = 1;
  }
  else {
    iVar2 = FUN_0049ffe0(local_150,1,0x50,iVar1);
    if (iVar2 == 0) goto LAB_004218e2;
  }
  FUN_0049f0f0(iVar1);
LAB_004218f7:
  if (iVar3 == 0) {
    puVar4 = local_150;
    puVar5 = &DAT_00e364b4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_004b6c90 = iVar3;
    DAT_00e364f0 = iVar3;
    FUN_0049eb80(&DAT_004eb3d0,&DAT_004b2304,local_150);
    FUN_0044e500(0,0);
  }
  return iVar3 == 0;
}

