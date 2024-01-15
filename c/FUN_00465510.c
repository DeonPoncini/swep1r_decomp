#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465510(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  puVar2 = &DAT_00e287e0;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00431b20(&DAT_00e28980,0x5064);
  _DAT_00e28994 = 0xf;
  _DAT_00e28998 = &DAT_00e287e0;
  DAT_00e289a4 = FUN_00445b40();
  FUN_004270c0();
  puVar2 = (undefined4 *)FUN_00448780(*(undefined4 *)(param_1 + 0x1b0));
  uVar3 = FUN_00448bd0(puVar2);
  DAT_00e287e0 = puVar2[2];
  DAT_00e287ec = *puVar2;
  if (DAT_0050ccf0 != 0) {
    DAT_0050cd08 = DAT_00e287e0;
  }
  FUN_00448d10(&DAT_00e289a0,&DAT_00e286d0,&DAT_00e288b0);
  iVar6 = FUN_00445b40();
  DAT_00e289a4 = iVar6 - DAT_00e289a4;
  FUN_00465230(param_1);
  FUN_00465310(param_1);
  FUN_004653f0(param_1);
  FUN_00464b90(param_1,uVar3,puVar2);
  FUN_00465480(puVar2);
  if ((*(int *)(param_1 + 0x1ac) == 4) && (*(int *)(param_1 + 0x1c0) == 0)) {
    piVar4 = (int *)FUN_00448780(0x129);
    FUN_00448bd0(piVar4);
    _DAT_00e287e8 = *piVar4;
    if (*piVar4 != 0) {
      FUN_00431a50(*piVar4,2,3,0x10,2);
    }
  }
  else {
    _DAT_00e287e8 = 0;
  }
  FUN_004651a0();
  piVar5 = (int *)FUN_00448780(0x72);
  iVar6 = 0;
  piVar4 = (int *)(param_1 + 0x10);
  _DAT_00e28804 = *piVar5;
  do {
    iVar1 = *(int *)(*(int *)(*piVar5 + 0x18) + iVar6);
    *piVar4 = iVar1;
    if (iVar1 != 0) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
    iVar6 = iVar6 + 4;
    piVar4 = piVar4 + 1;
  } while (iVar6 < 0x18);
  piVar4 = (int *)FUN_00448780(0x136);
  FUN_00448bd0(piVar4);
  _DAT_00e28800 = *piVar4;
  if (_DAT_00e28800 != 0) {
    FUN_00431a50(_DAT_00e28800,2,0xfffffffc,0x10,3);
  }
  *(int *)(param_1 + 0x28) = *piVar4;
  piVar4 = (int *)FUN_00448780(0x47);
  _DAT_00e28814 = *piVar4;
  if (_DAT_00e28814 != 0) {
    FUN_00431a50(_DAT_00e28814,2,0xfffffffc,0x10,3);
  }
  piVar4 = (int *)FUN_00448780(0x47);
  _DAT_00e28818 = *piVar4;
  if (_DAT_00e28818 != 0) {
    FUN_00431a50(_DAT_00e28818,2,0xfffffffc,0x10,3);
  }
  *(undefined4 *)(param_1 + 0x30) = DAT_00e287ec;
  FUN_00431b20(&DAT_00e27800,0x5064);
  DAT_00e27814 = 0;
  DAT_00e27818 = &DAT_00e286e0;
  _DAT_00e28808 = &DAT_00e27800;
  FUN_00431b20(&DAT_00e28660,0x5064);
  DAT_00e28674 = 0;
  DAT_00e28678 = &DAT_00e28780;
  _DAT_00e287e4 = &DAT_00e28660;
  FUN_004651f0(param_1);
  FUN_00483fc0(&DAT_00e28980);
  iVar6 = *(int *)(param_1 + 0x1c0);
  uVar3 = 0x16;
  uVar7 = 0x10;
  if (iVar6 == 1) {
    uVar3 = 0x26;
    uVar7 = 0x20;
  }
  if (iVar6 == 2) {
    uVar3 = 0x46;
    uVar7 = 0x40;
  }
  if (iVar6 == 3) {
    uVar3 = 0x16;
    uVar7 = 0x10;
  }
  FUN_00483ff0(4,0xffffff00);
  FUN_00483ff0(3,0xffffff00);
  FUN_00483ff0(6,uVar3);
  FUN_00445640(5,uVar7 | 2);
  FUN_00426910(DAT_00e287ec,0xffffffff,uVar3,0);
  return;
}

