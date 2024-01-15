#include "prototype.h"


void FUN_00450850(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  undefined *puVar6;
  
  piVar2 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar6 = PTR_PTR_DAT_004bfec0;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      piVar4 = (int *)piVar2[4];
      sVar5 = 0;
      if (0 < piVar2[2]) {
        do {
          iVar3 = *piVar2;
          *(short *)(piVar4 + 1) = sVar5;
          *piVar4 = iVar3;
          *(undefined2 *)((int)piVar4 + 6) = *(undefined2 *)(piVar2 + 1);
          piVar4 = (int *)((int)piVar4 + piVar2[3]);
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < piVar2[2]);
      }
    }
    ppiVar1 = (int **)(puVar6 + 4);
    puVar6 = puVar6 + 4;
    piVar2 = *ppiVar1;
  }
  return;
}

