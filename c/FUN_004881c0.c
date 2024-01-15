#include "prototype.h"


undefined4 * FUN_004881c0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  puVar2 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(0xe0);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[0x16] = 0;
  puVar2[1] = 0;
  piVar6 = puVar2 + 3;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *param_1;
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 1;
  }
  iVar4 = puVar2[3];
  uVar5 = (uint)puVar2[9] >> 3;
  puVar2[0x17] = 0;
  uVar3 = uVar5 * iVar4;
  puVar2[6] = uVar3;
  puVar2[7] = uVar3 / uVar5;
  iVar4 = uVar5 * puVar2[4] * iVar4;
  puVar2[5] = iVar4;
  if ((param_2 != 0) && (DAT_0052d43c != 0)) {
    puVar2[2] = 0;
    puVar1 = puVar2 + 0x19;
    *puVar2 = 1;
    puVar7 = puVar1;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *puVar1 = 0x7c;
    puVar2[0x1a] = 7;
    puVar2[0x33] = 0x40;
    if (param_3 == 0) {
      puVar2[0x33] = 0x840;
    }
    puVar2[0x1c] = puVar2[3];
    puVar2[0x1b] = puVar2[4];
    iVar4 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,puVar1,puVar2 + 0x18,0);
    if (iVar4 != 0) {
      return (undefined4 *)0x0;
    }
    piVar6 = (int *)puVar2[0x18];
    iVar4 = (**(code **)(*piVar6 + 0x58))(piVar6,puVar2 + 0x19);
    if (iVar4 != 0) {
      return (undefined4 *)0x0;
    }
    if ((puVar2[0x33] & 0x4000) != 0) {
      puVar2[2] = 1;
    }
    puVar2[6] = puVar2[0x1d];
    puVar2[7] = (uint)puVar2[0x1d] / uVar5;
    return puVar2;
  }
  *puVar2 = 0;
  puVar2[2] = 0;
  iVar4 = (**(code **)(DAT_00ecc420 + 0x20))(iVar4);
  puVar2[0x16] = iVar4;
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2[1] = 1;
  return puVar2;
}

