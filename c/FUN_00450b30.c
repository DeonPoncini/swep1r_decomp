#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00450b30(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  
  _DAT_0050c880 = (int *)0x0;
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != param_1) {
      piVar1 = *(int **)(puVar2 + 4);
      puVar2 = puVar2 + 4;
      if (piVar1 == (int *)0x0) {
        return piVar1;
      }
    }
    if (param_2 < piVar1[2]) {
      _DAT_0050c880 = piVar1;
      _DAT_0050c878 = param_2;
      return (int *)(piVar1[3] * param_2 + piVar1[4]);
    }
  }
  return (int *)0x0;
}

