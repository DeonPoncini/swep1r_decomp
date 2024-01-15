#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00489790(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  DAT_004c86bc = 0x11;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x50))(DAT_0052d454,param_1,0x11);
  if (iVar2 != 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(unaff_EBX + 4);
  iVar2 = (**(code **)(*DAT_0052d454 + 0x54))
                    (DAT_0052d454,*puVar1,*(undefined4 *)(unaff_EBX + 8),
                     *(undefined4 *)(unaff_EBX + 0x1c),0,0);
  if (iVar2 != 0) {
    return 0;
  }
  _DAT_00ec8ca4 = 0;
  _DAT_00ec8ca8 = 0;
  DAT_00ec8ca0 = 1;
  puVar3 = puVar1;
  puVar4 = &DAT_00ec8cac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8cf8 = 0;
  puVar3 = &DAT_00ec8d04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00ec8d04 = 0x7c;
  DAT_00ec8d10 = *puVar1;
  DAT_00ec8d0c = *(undefined4 *)(unaff_EBX + 8);
  _DAT_00ec8d18 = 1;
  _DAT_00ec8d08 = 0x21;
  DAT_00ec8d6c = 0x2218;
  iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_00ec8d04,&DAT_00ec8d00,0);
  if (iVar2 != 0) {
    return 0;
  }
  piVar5 = DAT_00ec8d00;
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x58))(DAT_00ec8d00,&DAT_00ec8d04);
  if (iVar2 != 0) {
    return 0;
  }
  _DAT_00ec8cb8 = DAT_00ec8d14;
  _DAT_00ec8cbc = DAT_00ec8d14 / (*(uint *)(unaff_EBX + 0x1c) >> 3);
  if ((DAT_00ec8d6c & 0x4000) != 0) {
    _DAT_00ec8ca8 = 1;
  }
  _DAT_00ec8da4 = 0;
  _DAT_00ec8da8 = 0;
  DAT_00ec8da0 = 1;
  puVar3 = puVar1;
  puVar4 = &DAT_00ec8dac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00ec8df8 = 0;
  puVar3 = &DAT_00ec8e04;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00ec8e04 = 0x7c;
  DAT_00ec8e10 = *puVar1;
  DAT_00ec8e0c = *(undefined4 *)(unaff_EBX + 8);
  _DAT_00ec8e08 = 0x21;
  DAT_00ec8e6c = 0x2004;
  _DAT_00ec8e18 = 1;
  iVar2 = (**(code **)(*DAT_00ec8d00 + 0x30))(DAT_00ec8d00,&DAT_00ec8e6c,&DAT_00ec8e00);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_00ec8e00 + 0x58))(DAT_00ec8e00,&DAT_00ec8e04);
  if (iVar2 != 0) {
    return 0;
  }
  if ((DAT_00ec8e6c & 0x4000) != 0) {
    _DAT_00ec8da8 = 1;
  }
  _DAT_00ec8db8 = DAT_00ec8e14;
  _DAT_00ec8dbc = DAT_00ec8e14 / (uint)piVar5;
  return 1;
}

