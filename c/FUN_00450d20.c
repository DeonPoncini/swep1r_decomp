#include "prototype.h"


int * FUN_00450d20(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20 [8];
  
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
    if (piVar1[9] != 0) {
      piVar4 = (int *)piVar1[4];
      iVar3 = 0;
      if (0 < piVar1[2]) {
        do {
          if ((*(ushort *)((int)piVar4 + 6) & 0x100) != 0) {
            *(byte *)((int)piVar4 + 7) = *(byte *)((int)piVar4 + 7) & 0xfe;
            local_20[0] = 0x416c6f63;
            FUN_00450c00(piVar4,local_20);
            return piVar4;
          }
          piVar4 = (int *)((int)piVar4 + piVar1[3]);
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[2]);
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}

