#include "prototype.h"


void FUN_00410230(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0343__sREMOVE_RACER_004b5c1c,DAT_00e99720);
  uVar3 = FUN_0042de30(uVar2);
  iVar5 = uVar3 + (uVar3 >> 1);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0343__sREMOVE_RACER_004b5c1c,DAT_00e99720);
  iVar4 = FUN_0042df70(uVar2);
  local_20 = 0xc3;
  local_1c = 0x8c;
  local_18 = 0x1bc;
  local_14 = 0x153;
  uVar2 = FUN_00413520(param_1,0x2732,&local_20,0,0,0);
  FUN_004138b0(uVar2,0xff,100,0,0xff);
  local_10 = local_20;
  local_c = local_14 + 0x14;
  local_4 = local_14 + 0x13 + iVar4 * 6;
  local_8 = local_18;
  uVar2 = FUN_00413430(param_1,0x2731,&local_10,0,0x20000,0);
  FUN_00413500(uVar2,0x18);
  FUN_00414ca0(uVar2,0xff,100,0,0xff);
  FUN_00414e60(uVar2,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0345_Current_Player_004b5bf0,local_20,local_14 + 0x19,0,0);
  uVar2 = FUN_004131c0(param_1,0x273a,6,uVar2);
  FUN_00414be0(uVar2,0xff,0xe1,0,0xfa);
  iVar1 = local_1c;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0347__sCREATE_RACER_004b5bcc,local_20 + -0x96,local_1c + 0x28,
                       iVar5,iVar4 * 3,0x100000,0);
  FUN_004132a0(param_1,0x2737,0xffffffff,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0343__sREMOVE_RACER_004b5c1c,local_20 + -0x96,iVar1 + 0x46,
                       iVar5,iVar4 * 3,0x100000,0);
  FUN_004132a0(param_1,0x2738,0xffffffff,uVar2);
  FUN_00411170(param_1,0x2748,0,0x1a4,2);
  FUN_00411210(param_1,0x208,0x17c);
  return;
}

