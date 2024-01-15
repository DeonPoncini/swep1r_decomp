#include "prototype.h"


undefined4 FUN_00404230(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_004b2910 != 0) && (param_1 != (int *)0x0)) && (param_1[1] != 0)) {
    iVar3 = 0;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar3 * 4);
        iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
        if (iVar2 < 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    return 1;
  }
  return 0;
}

