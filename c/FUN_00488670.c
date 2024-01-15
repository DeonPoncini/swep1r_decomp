#include "prototype.h"


int FUN_00488670(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_4c [5];
  int local_38 [14];
  
  iVar1 = 0x38;
  bVar7 = true;
  piVar4 = param_1;
  piVar6 = (int *)(param_2 + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *(char *)piVar4 == *(char *)piVar6;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar6 = (int *)((int)piVar6 + 1);
  } while (bVar7);
  if (bVar7) {
    return param_2;
  }
  if ((*(int *)(param_2 + 0x20) == 0) && (*param_1 == 0)) {
    return param_2;
  }
  iVar1 = param_2;
  if (*(int *)(param_2 + 0x24) != param_1[1]) {
    puVar3 = (undefined4 *)(param_2 + 0xc);
    puVar5 = local_4c;
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar4 = param_1;
    piVar6 = local_38;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar1 = FUN_004881c0(local_4c,0,0);
    if (iVar1 == 0) {
      FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004c9058,
                   0x47a,s_Unable_to_allocate_memory_for_ne_004c90a8,0,0,0,0);
      return 0;
    }
  }
  FUN_00488370(param_2);
  FUN_00488370(iVar1);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      FUN_0048d1c0(iVar2 * *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x58),param_1,
                   iVar2 * *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x58),param_2 + 0x20,
                   *(undefined4 *)(iVar1 + 0xc),param_3,param_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x10));
  }
  FUN_004883c0(param_2);
  FUN_004883c0(iVar1);
  piVar4 = (int *)(iVar1 + 0x20);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  if (iVar1 != param_2) {
    FUN_00488310(param_2);
  }
  return iVar1;
}

