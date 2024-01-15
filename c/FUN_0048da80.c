#include "prototype.h"


undefined4 * FUN_0048da80(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0048d7e0(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_0048d9a0(param_1);
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_0048d7e0(param_2);
  if (param_1[-1] == 0) {
    uVar2 = param_1[-2];
  }
  else {
    uVar2 = *(ushort *)(param_1 + -2) & 0xffff7fff;
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (uVar2 - 8 <= param_2) {
      param_2 = uVar2 - 8;
    }
    puVar3 = param_1;
    puVar4 = puVar1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined *)puVar4 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_0048d9a0(param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

