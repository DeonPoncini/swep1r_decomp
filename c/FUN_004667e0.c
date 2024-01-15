#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004667e0(int param_1)

{
  float fVar1;
  float local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  
  DAT_004c7084 = 0xffffffff;
  DAT_0050cb58 = 0;
  local_c = _DAT_004ad56c;
  local_8 = _DAT_004ad218;
  local_100[0] = 8.64;
  local_100[1] = 20.0;
  local_100[2] = 11.2;
  local_100[3] = 38.0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0x410c8b44;
  local_dc = 0x420c0000;
  local_d8 = 0x411b3334;
  local_d4 = 0x42180000;
  local_d0 = 0x412ccccd;
  local_cc = 0x42180000;
  local_c8 = 0x4135999a;
  local_c4 = 0x42000000;
  local_c0 = 0x410c6666;
  local_bc = 0x41d00000;
  local_b8 = 0x411b3334;
  local_b4 = 0x420c0000;
  local_b0 = 0x411fdb23;
  local_ac = 0x42200000;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0x411eecc0;
  local_9c = 0x42100000;
  local_98 = 0x412d999a;
  local_94 = 0x420c0000;
  local_90 = 0x4124cccd;
  local_8c = 0x420c0000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x4120a1cb;
  local_7c = 0x42140000;
  local_78 = 0x41200000;
  local_74 = 0x42080000;
  local_70 = 0x4120cccd;
  local_6c = 0x420c0000;
  local_68 = 0x41273333;
  local_64 = 0x41d80000;
  local_60 = 0x41075c28;
  local_5c = 0x41b80000;
  local_58 = 0x41139999;
  local_54 = 0x42200000;
  local_50 = 0x411b3334;
  local_4c = 0x420c0000;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x410cd4fd;
  local_3c = 0x41c80000;
  local_38 = 0x41266666;
  local_34 = 0x41f00000;
  local_30 = 0x4129999a;
  local_2c = 0x42040000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x410dd70a;
  local_1c = 0x42000000;
  local_18 = 0x411f147b;
  local_14 = 0x41f00000;
  local_10 = 0x4121999a;
  local_4 = _DAT_004ad218;
  DAT_004c707c = local_100[(*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1ac) * 4) * 2] *
                 _DAT_004ad234;
  DAT_004c7080 = local_100[(*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1ac) * 4) * 2 + 1];
  if ((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) != 3)) {
    DAT_004c7084 = 1;
    DAT_0050cb58 = (uint)(*(int *)(param_1 + 0x1c0) == 0);
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_0050cb58 = 2;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_0050cb58 = 3;
    }
  }
  if (*(int *)(param_1 + 0x1ac) == 3) {
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_004c7084 = 6;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_004c7084 = 5;
    }
  }
  if ((*(int *)(param_1 + 0x1ac) == 4) && (*(int *)(param_1 + 0x1c0) != 3)) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      DAT_004c7084 = 2;
    }
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_004c7084 = 3;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_004c7084 = 4;
    }
  }
  fVar1 = _DAT_004ad580;
  if ((*(int *)(param_1 + 0x1c4) == -1) || (fVar1 = _DAT_004ad584, *(int *)(param_1 + 0x1c4) == 1))
  {
    DAT_004c707c = DAT_004c707c * fVar1;
  }
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    DAT_004c7080 = 2.0;
  }
  return;
}

