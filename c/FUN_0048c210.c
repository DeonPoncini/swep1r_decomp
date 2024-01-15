#include "prototype.h"


undefined4 FUN_0048c210(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)FUN_0048c190(param_1,param_2,&param_2);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)puVar3[1];
  FUN_0048d7b0(puVar3);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x10);
  if (puVar4 == puVar3) {
    if (puVar1 == (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      return 1;
    }
    *puVar4 = *puVar1;
    puVar4[1] = puVar1[1];
    puVar4[2] = puVar1[2];
    puVar4[3] = puVar1[3];
    iVar5 = param_2 * 0x10 + *(int *)(param_1 + 4);
    piVar2 = *(int **)(iVar5 + 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar5;
    }
    (**(code **)(DAT_00ecc420 + 0x24))(puVar1);
    return 1;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
  return 1;
}

