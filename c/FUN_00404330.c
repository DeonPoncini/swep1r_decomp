#include "prototype.h"


undefined4 FUN_00404330(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((((DAT_004b2910 != 0) && (param_1[1] != 0)) && (-1 < param_2)) && (param_2 < 0x169)) {
    iVar2 = FUN_004042f0(param_1);
    if (iVar2 == param_2) {
      return 2;
    }
    iVar2 = 0;
    *(int *)param_1[0xb] = param_2 * 100;
    if (0 < *param_1) {
      do {
        piVar1 = *(int **)(param_1[1] + iVar2 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x18))
                          (piVar1,param_1 + 2,
                           (-(uint)(param_3 != 0) & 0xe0000000) + 0x40000000 | 0x40);
        if (iVar3 < 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return 1;
  }
  return 0;
}

