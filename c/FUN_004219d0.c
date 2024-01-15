#include "prototype.h"


bool FUN_004219d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_154;
  undefined4 local_150 [20];
  undefined local_100 [256];
  
  local_154 = 0x10003;
  puVar4 = &DAT_00e364b4;
  puVar5 = local_150;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (DAT_004b6c90 < 0) {
    return false;
  }
  FUN_0049eb80(local_100,&DAT_004b2524,s___data_player__004b4f6c,param_1);
  FUN_00484600(local_100,&PTR_DAT_004b4f7c);
  iVar3 = FUN_0049f1e0(local_100,&DAT_004b6cfc);
  if (iVar3 != 0) {
    iVar1 = FUN_004a0160(&local_154,1,4,iVar3);
    iVar2 = FUN_004a0160(local_150,1,0x50,iVar3);
    FUN_0049f0f0(iVar3);
    return iVar2 != 0 && iVar1 != 0;
  }
  return false;
}

