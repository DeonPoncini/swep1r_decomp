#include "prototype.h"


void FUN_00450db0(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 local_8 [2];
  
  local_8[0] = 0x46726565;
  piVar2 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_1) {
      iVar5 = piVar2[4];
      sVar3 = 0;
      if (0 < piVar2[2]) {
        do {
          if ((*(ushort *)(iVar5 + 6) & 0x100) == 0) {
            FUN_00450c00(iVar5,local_8);
            *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 1;
          }
          iVar5 = iVar5 + piVar2[3];
          sVar3 = sVar3 + 1;
        } while ((int)sVar3 < piVar2[2]);
      }
    }
    ppiVar1 = (int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    piVar2 = *ppiVar1;
  }
  return;
}

