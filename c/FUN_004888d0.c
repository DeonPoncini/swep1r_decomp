#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004888d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_8c;
  int iStack_4;
  
  uStack_8c = 0;
  puVar3 = &DAT_0052957c;
  for (iVar2 = 0x1f; piVar1 = DAT_0052d454, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_00529584 = DAT_00ec8db0;
  _DAT_00529588 = DAT_00ec8dac;
  _DAT_005295e4 = (-(uint)(param_2 != 0) & 0xffffc800) + 0x24000;
  DAT_0052957c = 0x7c;
  _DAT_00529580 = 0x1007;
  puVar3 = &DAT_005295c4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_0052957c,&DAT_00529578);
  if (iVar2 != 0) {
    return 1;
  }
  if (param_2 == 0) {
    puVar3 = &uStack_8c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uStack_8c = 0x7c;
    iVar2 = (**(code **)(*DAT_00529578 + 100))(DAT_00529578,0,&uStack_8c,1,0);
    if (iVar2 == 0) {
      (**(code **)(*DAT_00529578 + 0x80))(DAT_00529578,0);
    }
    else {
      _DAT_005295e4 = 0x800;
      DAT_004c86c0._0_2_ = 0;
      iStack_4 = 1;
      iVar2 = (**(code **)(*DAT_0052d454 + 0x18))(DAT_0052d454,&DAT_0052957c,&DAT_00529578,0);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  if ((iStack_4 != 1) &&
     (iVar2 = (**(code **)(*DAT_00ec8e00 + 0xc))(DAT_00ec8e00,DAT_00529578), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_00529578 + 0x58))(DAT_00529578,&DAT_0052957c);
  if (iVar2 == 0) {
    if (((*(uint *)(DAT_0052d448 + 0x11c) & 0x10000000) == 0) ||
       (PTR_FUN_004c86b8 = FUN_00488a90, iStack_4 == 1)) {
      PTR_FUN_004c86b8 = FUN_00423cb0;
    }
    FUN_00488a90();
    return 0;
  }
  return 1;
}

