#include "prototype.h"


undefined4 FUN_0048d4a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 local_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined2 local_64;
  int local_60 [3];
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0xc);
  uVar7 = (uint)(*(int *)(param_2 + 0x24) * iVar1 * iVar2) >> 3;
  uStack_6e = uVar7 + 0x36;
  uStack_6a = 0;
  local_68 = 0;
  piVar8 = local_60;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_50 = 0;
  local_70 = 0x4d42;
  uStack_66 = 0x36;
  local_64 = 0;
  local_60[0] = 0x28;
  local_54 = 1;
  local_52 = 0x18;
  local_48 = 0xb12;
  local_44 = 0xb12;
  local_60[1] = iVar2;
  local_60[2] = iVar1;
  local_4c = uVar7;
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b6cfc);
  if (iVar1 == 0) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x1fa,s_Unable_to_open_file___s__for_wri_004d1a14,param_1,0,0,0);
    return 1;
  }
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,&local_70,0xe);
  if (iVar2 != 0xe) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x203,s_Error_attempting_to_write__d_byt_004d1990,0xe,param_1,0,0);
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,local_60,0x28);
  if (iVar2 != 0x28) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x20d,s_Error_attempting_to_write__d_byt_004d1990,0x28,param_1,0,0);
LAB_0048d770:
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  uVar7 = *(int *)(param_2 + 0xc) * 3;
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar7);
  if (puVar3 == (undefined4 *)0x0) {
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  puVar9 = puVar3;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  uStack_38 = 1;
  uStack_34 = 0x18;
  uStack_30 = 8;
  uStack_2c = 8;
  uStack_28 = 8;
  uStack_24 = 0;
  uStack_20 = 8;
  uStack_1c = 0x10;
  FUN_00488370(param_2);
  iVar2 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar2) {
    iVar5 = *(int *)(param_2 + 0xc);
    do {
      FUN_0048d1c0(puVar3,&uStack_38,iVar2 * *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x58),
                   param_2 + 0x20,iVar5,0,0);
      iVar4 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,puVar3,uVar7);
      iVar5 = *(int *)(param_2 + 0xc);
      if (iVar4 != iVar5 * 3) {
        FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),
                     s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,0x230,
                     s_Error_attempting_to_write__d_byt_004d1990,uVar7,param_1,0,0);
        (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
        goto LAB_0048d770;
      }
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
  FUN_004883c0(param_2);
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  return 0;
}

