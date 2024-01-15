#include "prototype.h"


int * FUN_0048bee0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  piVar1 = (int *)(**(code **)(DAT_00ecc420 + 0x20))(0xc);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = FUN_0048bf50(param_1);
  *piVar1 = iVar2;
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(iVar2 << 4);
  piVar1[1] = (int)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return (int *)0x0;
  }
  for (uVar4 = (uint)(*piVar1 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar1[2] = (int)&LAB_0048bea0;
  return piVar1;
}

