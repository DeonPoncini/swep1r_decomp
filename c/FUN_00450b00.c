#include "prototype.h"


int * FUN_00450b00(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  piVar1 = *(int **)PTR_PTR_DAT_004bfec0;
  puVar2 = PTR_PTR_DAT_004bfec0;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if (*piVar1 == param_1) {
      return (int *)piVar1[2];
    }
    piVar1 = *(int **)(puVar2 + 4);
    puVar2 = puVar2 + 4;
  } while (piVar1 != (int *)0x0);
  return piVar1;
}

