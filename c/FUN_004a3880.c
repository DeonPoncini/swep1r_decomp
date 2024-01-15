#include "prototype.h"


undefined4 FUN_004a3880(int param_1,int **param_2,int **param_3,uint param_4)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int **ppiVar8;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar7 = (uint)*(byte *)param_3;
  if (uVar7 <= param_4) {
    if ((uVar7 < param_4) && (ppiVar1 = (int **)(param_4 + (int)param_3), ppiVar1 <= param_2 + 0x3e)
       ) {
      for (ppiVar8 = (int **)(uVar7 + (int)param_3);
          (ppiVar8 < ppiVar1 && (*(char *)ppiVar8 == '\0')); ppiVar8 = (int **)((int)ppiVar8 + 1)) {
      }
      if (ppiVar8 == ppiVar1) {
        *(char *)param_3 = (char)param_4;
        if ((param_3 <= *param_2) && (*param_2 < ppiVar1)) {
          if (ppiVar1 < param_2 + 0x3e) {
            *param_2 = (int *)ppiVar1;
            piVar6 = (int *)0x0;
            cVar4 = *(char *)ppiVar1;
            while (cVar4 == '\0') {
              iVar2 = (int)piVar6 + 1;
              piVar6 = (int *)((int)piVar6 + 1);
              cVar4 = *(char *)(iVar2 + (int)ppiVar1);
            }
            param_2[1] = piVar6;
          }
          else {
            param_2[1] = (int *)0x0;
            *param_2 = (int *)(param_2 + 2);
          }
        }
        *piVar3 = *piVar3 + (uVar7 - param_4);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  *(char *)param_3 = (char)param_4;
  piVar3[1] = 0xf1;
  *piVar3 = *piVar3 + (uVar7 - param_4);
  return 1;
}

