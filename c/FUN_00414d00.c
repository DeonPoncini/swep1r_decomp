#include "prototype.h"


void FUN_00414d00(undefined *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00414d00(iVar2);
    iVar2 = iVar1;
  }
  if (param_1 != PTR_DAT_004b5d74) {
    FUN_004151a0(param_1,0x10,0,0);
    FUN_00417060(param_1);
    FUN_00416890(param_1);
    FUN_0049f200(param_1);
  }
  return;
}

