#include "prototype.h"


undefined4 FUN_00404280(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  if ((((DAT_004b2910 != 0) && (DAT_004d55d0 != 0)) && (param_1[1] != 0)) &&
     (iVar4 = 0, 0 < *param_1)) {
    while (piVar1 = *(int **)(piVar2[1] + iVar4 * 4),
          iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1), -1 < iVar3) {
      if (((uint)param_1 & 1) != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      if (*piVar2 <= iVar4) {
        return 0;
      }
    }
  }
  return 0;
}

