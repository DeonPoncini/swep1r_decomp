#include "prototype.h"


undefined4 FUN_004044e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == -1) {
    iVar3 = -1;
  }
  else {
    iVar3 = param_2 * 1000;
  }
  if (DAT_004b2910 == 0) {
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  iVar2 = FUN_004044a0(param_1);
  if (iVar2 == param_2) {
    return 2;
  }
  param_1[4] = iVar3;
  iVar3 = 0;
  if (*param_1 < 1) {
    return 1;
  }
  do {
    piVar1 = *(int **)(param_1[1] + iVar3 * 4);
    iVar2 = (**(code **)(*piVar1 + 0x18))
                      (piVar1,param_1 + 2,(-(uint)(param_3 != 0) & 0xe0000000) + 0x40000000 | 1);
    if (iVar2 < 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *param_1);
  return 1;
}

