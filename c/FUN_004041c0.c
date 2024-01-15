#include "prototype.h"


undefined4 FUN_004041c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_004b2910 != 0) && (DAT_004d55d0 != 0)) && (param_1[1] != 0)) {
    if ((param_2 == 0) && (iVar2 = FUN_00404280(param_1), iVar2 != 0)) {
      return 0;
    }
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar2 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,0);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return 1;
  }
  return 0xffffffff;
}

