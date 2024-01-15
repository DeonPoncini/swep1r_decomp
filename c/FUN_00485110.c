#include "prototype.h"


undefined4 * FUN_00485110(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  piVar3 = param_3;
  iVar2 = param_2;
  piVar1 = param_1;
  puVar5 = &local_4;
  local_4 = 0;
  iVar4 = (**(code **)(*param_1 + 0x2c))(param_1,0,param_2,puVar5,param_3,&param_3,&param_1,0);
  if (iVar4 == 0) {
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == *piVar3) {
      return puVar5;
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00485170(piVar1,puVar5,iVar2);
  }
  return (undefined4 *)0x0;
}

