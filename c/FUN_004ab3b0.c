#include "prototype.h"


int FUN_004ab3b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_00dfaa94;
  piVar2 = DAT_00dfaa94;
  if (iVar1 == 0) {
    return 0;
  }
  while ((iVar1 = FUN_004aade0(param_1,iVar1,param_2), iVar1 != 0 ||
         ((*(char *)(*piVar2 + param_2) != '=' && (*(char *)(*piVar2 + param_2) != '\0'))))) {
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_00dfaa94 >> 2);
    }
  }
  return (int)piVar2 - (int)DAT_00dfaa94 >> 2;
}

