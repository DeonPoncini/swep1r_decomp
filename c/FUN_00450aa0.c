#include "prototype.h"


int FUN_00450aa0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) {
      iVar2 = piVar1[4];
      sVar3 = 0;
      if (0 < piVar1[2]) {
        do {
          if (((*(ushort *)(iVar2 + 6) & 0x100) == 0) && (*(short *)(iVar2 + 4) == param_2)) {
            return iVar2;
          }
          iVar2 = iVar2 + piVar1[3];
          sVar3 = sVar3 + 1;
        } while ((int)sVar3 < piVar1[2]);
      }
    }
    piVar1 = *(int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
  } while( true );
}

