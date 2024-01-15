#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465d50(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float local_ac;
  float local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  pfVar1 = (float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xa0);
  iVar2 = FUN_004800c0(&local_40);
  if (iVar2 == 0) {
    FUN_00430b80(pfVar1,&local_ac);
    local_4c = *pfVar1;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    local_90 = local_4c * _DAT_004ad4fc;
    local_ac = local_ac - local_4c * _DAT_004ad2fc;
    local_94 = *(float *)(param_1 + 0x68) * _DAT_004ad4fc;
    local_a8 = local_a8 - *(float *)(param_1 + 0x68) * _DAT_004ad2fc;
    local_98 = 0;
    iVar2 = 6;
    local_9c = _DAT_004ad218;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    local_8c = *pfVar1;
    local_88 = *(float *)(param_1 + 0x68);
    local_84 = *(undefined4 *)(param_1 + 0x6c);
    local_80 = *(undefined4 *)(param_1 + 0x70);
    local_7c = *(undefined4 *)(param_1 + 0x74);
    local_78 = *(undefined4 *)(param_1 + 0x78);
    local_74 = *(undefined4 *)(param_1 + 0x7c);
    local_70 = *(undefined4 *)(param_1 + 0x80);
    local_6c = *(undefined4 *)(param_1 + 0x84);
    local_68 = *(undefined4 *)(param_1 + 0x88);
    local_64 = *(undefined4 *)(param_1 + 0x8c);
    local_60 = *(undefined4 *)(param_1 + 0x90);
    local_5c = *(undefined4 *)(param_1 + 0x94);
    local_58 = *(undefined4 *)(param_1 + 0x98);
    local_50 = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xd8);
    local_8 = *(float *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xe0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x68);
    *(float *)(param_1 + 0xe4) = *pfVar1;
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    FUN_00430b80(pfVar1,&local_ac);
    local_48 = *(float *)(param_1 + 0x68);
    local_9c = 0;
    local_ac = local_ac - *pfVar1 * _DAT_004ad4f8;
    local_98 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    iVar2 = 3;
    local_a8 = local_a8 - local_48 * _DAT_004ad4f8;
    local_90 = *pfVar1 * _DAT_004ad4fc;
    local_94 = local_48 * _DAT_004ad4fc;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    FUN_00430b80(&local_40,&local_ac);
    local_90 = local_40 * _DAT_004ad4fc;
    local_ac = local_ac - local_40 * _DAT_004ad4f8;
    local_94 = local_3c * _DAT_004ad4fc;
    local_a8 = local_a8 - local_3c * _DAT_004ad4f8;
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    local_9c = _DAT_004ad218;
    local_98 = 0;
    iVar2 = 3;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    local_8c = local_40;
    local_88 = local_3c;
    local_84 = local_38;
    local_80 = local_34;
    local_7c = local_30;
    local_78 = local_2c;
    local_74 = local_28;
    local_70 = local_24;
    local_6c = local_20;
    local_68 = local_1c;
    local_64 = local_18;
    local_60 = local_14;
    local_5c = local_10;
    local_58 = local_c;
    local_50 = local_4;
  }
  local_54 = local_8 - _DAT_004ad500;
  FUN_00431390(&local_8c,0x43340000,0,0,0x3f800000,&local_8c);
  FUN_00431640(*(undefined4 *)(param_1 + 0x28),&local_8c);
  FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,0);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x28),2,3,0x10,2);
  }
  return;
}

