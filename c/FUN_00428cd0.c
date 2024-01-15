#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428cd0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
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
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
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
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00430b80(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x14,&local_c0);
  FUN_00430b80(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x14,&local_d8);
  local_90 = _DAT_00e9b9e0 / _DAT_00e9b9e4;
  FUN_00430b80(&DAT_00e9b9e8,&local_a8);
  fVar2 = local_90;
  local_a8 = local_d8 - local_c0;
  local_a4 = local_d4 - local_bc;
  local_a0 = local_d0 - local_b8;
  FUN_0042fa80(&local_a8,&local_c0,local_90,&local_a8);
  if (DAT_00e9ba44 == (undefined4 *)0x0) {
    if (local_90 <= _DAT_004ac4f0) {
      local_8c = local_cc - local_b4;
      fVar1 = local_c4 - local_ac;
      if (_DAT_004ac4fc < local_8c) {
        local_cc = local_cc - _DAT_004ac500;
      }
      if (local_8c < _DAT_004ac504) {
        local_cc = local_cc - _DAT_004ac508;
      }
      _DAT_00e9b9d4 = local_cc;
      _DAT_00e9b9c8 = local_b4;
      _DAT_00e9b9d0 = local_ac;
      if (_DAT_004ac4fc < fVar1) {
        local_c4 = local_c4 - _DAT_004ac500;
      }
    }
    else {
      local_8c = local_b4 - _DAT_00e9b9c8;
      _DAT_00e9b9d0 = local_ac - _DAT_00e9b9d0;
      if (_DAT_004ac4fc < local_8c) {
        local_b4 = local_b4 - _DAT_004ac500;
      }
      if (local_8c < _DAT_004ac504) {
        local_b4 = local_b4 - _DAT_004ac508;
      }
      if (_DAT_004ac4fc < _DAT_00e9b9d0) {
        local_ac = local_ac - _DAT_004ac500;
      }
      if (_DAT_00e9b9d0 < _DAT_004ac504) {
        local_ac = local_ac - _DAT_004ac508;
      }
      _DAT_00e9b9d4 = local_cc - _DAT_00e9b9d4;
      local_84 = local_c4 - _DAT_00e9b9dc;
      if (_DAT_004ac4fc < _DAT_00e9b9d4) {
        local_cc = local_cc - _DAT_004ac500;
      }
      if (_DAT_00e9b9d4 < _DAT_004ac504) {
        local_cc = local_cc - _DAT_004ac508;
      }
      _DAT_00e9b9d4 = local_cc;
      _DAT_00e9b9c8 = local_b4;
      _DAT_00e9b9d0 = local_ac;
      fVar1 = local_84;
      if (_DAT_004ac4fc < local_84) {
        local_c4 = local_c4 - _DAT_004ac500;
      }
    }
    if (fVar1 < _DAT_004ac504) {
      local_c4 = local_c4 - _DAT_004ac508;
    }
    local_9c = _DAT_00e9b9d4 - _DAT_00e9b9c8;
    local_98 = local_c8 - local_b0;
    local_94 = local_c4 - _DAT_00e9b9d0;
    _DAT_00e9b9d8 = local_c8;
    _DAT_00e9b9dc = local_c4;
    _DAT_00e9b9cc = local_b0;
    local_cc = _DAT_00e9b9d4;
    local_b4 = _DAT_00e9b9c8;
    local_ac = _DAT_00e9b9d0;
    FUN_0042fa80(&local_9c,&local_b4,fVar2,&local_9c);
    FUN_00431060(&DAT_00e9b9e8,&local_a8);
  }
  else {
    puVar3 = DAT_00e9ba44;
    if (DAT_00e9ba40 != 1) {
      if (DAT_00e9ba40 == 0) {
        local_80 = *DAT_00e9ba44;
        local_7c = DAT_00e9ba44[1];
        local_78 = DAT_00e9ba44[2];
        local_74 = DAT_00e9ba44[3];
        local_70 = DAT_00e9ba44[4];
        local_6c = DAT_00e9ba44[5];
        local_68 = DAT_00e9ba44[6];
        local_64 = DAT_00e9ba44[7];
        local_60 = DAT_00e9ba44[8];
        local_5c = DAT_00e9ba44[9];
        local_58 = DAT_00e9ba44[10];
        local_54 = DAT_00e9ba44[0xb];
        local_50 = DAT_00e9ba44[0xc];
        local_4c = DAT_00e9ba44[0xd];
        local_48 = DAT_00e9ba44[0xe];
        local_44 = DAT_00e9ba44[0xf];
        puVar3 = &local_50;
      }
      else {
        FUN_00428c40((int)DAT_00e9ba40,DAT_00e9ba44,&local_80);
        puVar3 = &local_50;
      }
    }
    FUN_00481220(&local_a8,puVar3,&DAT_00e9b9e8,&local_a8,local_94);
  }
  local_3c = DAT_00e9b9ec;
  local_38 = DAT_00e9b9f0;
  local_40 = DAT_00e9b9e8;
  local_30 = DAT_00e9b9f8;
  local_2c = DAT_00e9b9fc;
  local_34 = DAT_00e9b9f4;
  local_24 = DAT_00e9ba04;
  local_20 = DAT_00e9ba08;
  local_28 = DAT_00e9ba00;
  local_18 = DAT_00e9ba10;
  local_14 = DAT_00e9ba14;
  local_1c = DAT_00e9ba0c;
  local_c = DAT_00e9ba1c;
  local_8 = DAT_00e9ba20;
  local_10 = DAT_00e9ba18;
  local_4 = DAT_00e9ba24;
  FUN_00431950(param_1,&local_40);
  if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x78) != 0) {
    FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x78),2,1,0x10,2);
  }
  if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78) != 0) {
    FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78),2,1,0x10,2);
  }
  _DAT_00e9b9e0 = _DAT_00e9b9e0 + (float)_DAT_00e22a40;
  if (_DAT_00e9b9e4 <= _DAT_00e9b9e0) {
    if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78) != 0) {
      FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78),2,0xfffffffe,0x10,3);
    }
    FUN_00428bd0(DAT_00e9b9c6);
    *(uint *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c) & 0xfffffffe;
  }
  return;
}

