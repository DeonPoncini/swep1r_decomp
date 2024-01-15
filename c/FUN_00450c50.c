#include "prototype.h"


void FUN_00450c50(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((*piVar1 == param_1) || (param_1 == 0x416c6c21)) {
      pcVar2 = (code *)piVar1[9];
      if (pcVar2 != (code *)0x0) {
        iVar6 = piVar1[4];
        iVar5 = 0;
        if (0 < piVar1[2]) {
          do {
            if (((*(ushort *)(iVar6 + 6) & 0x100) == 0) &&
               (iVar3 = (*pcVar2)(iVar6,param_2,param_2), iVar3 == 2)) {
              return;
            }
            iVar6 = iVar6 + piVar1[3];
            iVar5 = iVar5 + 1;
          } while (iVar5 < piVar1[2]);
        }
      }
      if (param_1 != 0x416c6c21) {
        return;
      }
    }
    piVar1 = *(int **)(puVar4 + 4);
    puVar4 = puVar4 + 4;
  } while( true );
}

