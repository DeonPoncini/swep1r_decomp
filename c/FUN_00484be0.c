#include "prototype.h"


bool FUN_00484be0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int unaff_retaddr;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return false;
  }
  (**(code **)(*param_1 + 0x28))(param_1,&param_1);
  iVar2 = 1;
  if ((unaff_ESI & 4) == 0) {
    iVar2 = unaff_retaddr;
  }
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,iVar2 != 0);
  return -1 < iVar2;
}

