#include "prototype.h"


undefined4 FUN_004850c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int unaff_retaddr;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0xe0))(param_1,&param_1);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((unaff_ESI & 1) == 0) {
    return 0;
  }
  if (unaff_retaddr != 0) {
    (**(code **)(*piVar1 + 0x4c))(piVar1,unaff_retaddr);
  }
  return 1;
}

