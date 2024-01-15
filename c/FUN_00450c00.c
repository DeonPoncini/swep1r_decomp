#include "prototype.h"


void FUN_00450c00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
    if (piVar1 != (int *)0x0) {
      puVar2 = PTR_PTR_DAT_004bfec0;
      while (*piVar1 != *param_1) {
        piVar1 = *(int **)(puVar2 + 4);
        puVar2 = puVar2 + 4;
        if (piVar1 == (int *)0x0) {
          return;
        }
      }
      if (((code *)piVar1[9] != (code *)0x0) && ((*(ushort *)((int)param_1 + 6) & 0x100) == 0)) {
        (*(code *)piVar1[9])(param_1,param_2,param_2);
      }
    }
  }
  return;
}

