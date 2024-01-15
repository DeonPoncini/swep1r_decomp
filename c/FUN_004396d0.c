#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004396d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined local_70 [48];
  undefined local_40 [48];
  undefined local_10 [16];
  
  if ((DAT_004c0228 != 0) || (DAT_004c4000 != 0)) {
    DAT_0050c538 = 0;
    if (DAT_004c4000 == 0) {
      DAT_0050c950 = 0;
    }
    FUN_0045a840(param_1);
    FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                 (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 0x10],0,
                 0xff);
    FUN_00455720();
    FUN_004556c0();
    DAT_0050c930 = 0;
    DAT_004c4000 = 0;
    DAT_004c0228 = 0;
  }
  if (DAT_0050c538 == 1) {
    DAT_0050c538 = 2;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + DAT_004bfed4 * 4),local_40);
    FUN_0042f7d0(&DAT_004c43fc,local_10);
    FUN_0042f7d0(&DAT_004c43f0,local_10);
    _DAT_004c43f0 = _DAT_00e9932c - _DAT_004ac8f0;
    _DAT_004c43fc = 0;
    _DAT_004c43f4 = _DAT_00e99330 - _DAT_004ac848;
    _DAT_004c43f8 = _DAT_004c43f8 - _DAT_004ac8f0;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 0x14),local_40);
    FUN_0042f7d0(&DAT_004c441c,local_10);
    FUN_0042f7d0(&DAT_004c4410,local_10);
    _DAT_004c4410 = _DAT_004c4410 - _DAT_004ac868;
    _DAT_004c4418 = 0xc3180000;
    _DAT_004c4414 = _DAT_004c4414 - _DAT_004ac8f4;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 0x14),local_40);
    FUN_0042f7d0(&DAT_004c443c,local_10);
    FUN_0042f7d0(&DAT_004c4430,local_10);
    _DAT_004c4430 = _DAT_004c4430 - _DAT_004ac79c;
    _DAT_004c4434 = _DAT_004c4434 - _DAT_004ac8c4;
    _DAT_004c4438 = _DAT_004c4438 - _DAT_004ac8fc;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + DAT_004bfed8 * 4),local_40);
    FUN_0042f7d0(&DAT_004c445c,local_10);
    FUN_0042f7d0(&DAT_004c4450,local_10);
    _DAT_004c4450 = _DAT_00e99300 - _DAT_004ac8f4;
    _DAT_004c4458 = 0xc3180000;
    _DAT_004c4454 = _DAT_00e99310 - _DAT_004ac848;
    if ((int)DAT_0050c950 < 7) {
      uVar3 = (int)DAT_0050c950 >> 0x1f;
      FUN_0045bee0(param_1,(((DAT_0050c950 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) + 0x1f,0xffffffff,
                   0);
    }
    else {
      DAT_0050c45c = 1;
    }
  }
  uVar1 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                       [(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 4]);
  uVar1 = FUN_00421360(&DAT_004b6c00,uVar1);
  FUN_0049eb80(local_70,uVar1);
  if (DAT_0050c950 == 7) {
    if ((byte)DAT_00e35aa0 < 4) {
      uVar1 = FUN_00421360(s__SCREENTEXT_588__sPit_Droid_Mana_004c0cfc);
    }
    else {
      uVar1 = FUN_00421360(s__SCREENTEXT_99__sNo_more_pit_dro_004c0cd4);
    }
    FUN_0049eb80(local_70,uVar1);
  }
  uVar1 = __ftol(local_70);
  FUN_00450530(0x1e,0x2c,0xffffffff,0xffffffff,0xffffffff,uVar1);
  if (DAT_004bfed0 != 0) {
    DAT_0050c45c = 1;
    _DAT_004c0224 = 1;
    DAT_004bfed0 = 0;
  }
  if ((DAT_004eb39c == 0) && (DAT_004d6b44 != 0)) {
    FUN_00440550(0x4d);
    DAT_004c0228 = 1;
    FUN_00454d40(param_1,3);
    return;
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x10000) != 0) && (0 < (int)DAT_0050c950)) {
    DAT_0050c950 = DAT_0050c950 - 1;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x20000) != 0) && ((int)DAT_0050c950 < 7)) {
    DAT_0050c950 = DAT_0050c950 + 1;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x4000) != 0) && (1 < (int)DAT_0050c950)) {
    DAT_0050c950 = DAT_0050c950 - 2;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x8000) != 0) && ((int)DAT_0050c950 < 6)) {
    DAT_0050c950 = DAT_0050c950 + 2;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((DAT_0050c45c != 0) && (DAT_0050c950 != 0xffffffff)) {
    DAT_0050c45c = 0;
    FUN_004556c0();
    if ((int)DAT_0050c950 < 7) {
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 0x10],0,
                   0xff);
      uVar3 = (int)DAT_0050c950 >> 0x1f;
      iVar2 = (((DAT_0050c950 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) + 0x1f;
      if (iVar2 != *(int *)(param_1 + 0x34)) {
        FUN_0045bee0(param_1,iVar2,0xffffffff,0);
      }
    }
    else {
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),DAT_0050c950,0,0xff);
      DAT_0050c930 = 1;
      *(undefined4 *)(param_1 + 0x34) = 0x1a;
      FUN_0043f8e0(param_1,0x1a,0);
    }
  }
  if (((DAT_004eb39c == 0) && (DAT_004d6b48 != 0)) &&
     ((DAT_0050c950 != 7 || ((byte)DAT_00e35aa0 != 4)))) {
    FUN_00440550(0x54);
    DAT_004bfedc = 7;
    DAT_0050c47c = 1;
    if (DAT_0050c950 == 7) {
      DAT_0050c47c = 2;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    DAT_0050c944 = 0xffffffff;
    _DAT_0050c958 = 0x3ecccccd;
  }
  if (DAT_0050c538 < 2) {
    DAT_0050c538 = DAT_0050c538 + 1;
  }
  return;
}

