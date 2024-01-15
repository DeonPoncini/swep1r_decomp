#include "prototype.h"


void FUN_0040dd10(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined local_100 [256];
  
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  uVar2 = FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0291__sShow_Reserve_004b5310,400,0x55,(uVar2 >> 3) + uVar2,
                       0x14,0x80000,0);
  uVar1 = FUN_004132a0(param_1,0x4c,0xffffffff,uVar1);
  FUN_00414ca0(uVar1,0xff,0,0,0xff);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0251__sKEYBOARD_SET_004b52e8,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0251__sKEYBOARD_SET_004b52e8);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0251__sKEYBOARD_SET_004b52e8,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,0x230,iVar3 * 3 + 5,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1ae,1);
  FUN_004112f0(param_1,0xcd,0x1ae);
  FUN_00411270(param_1,0x163,0x1ae);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0513__sTaunt_Flamej_004b51bc,0);
  iVar4 = FUN_0042de10(uVar1);
  iVar3 = FUN_0042de10(&DAT_004b51b8,0);
  iVar4 = iVar4 + iVar3 * 5;
  local_134 = iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0514_Numpad_Enter_004b5198,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar3 = iVar3 + iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0259__sCycle_Camera_004b5174,DAT_00e99720);
  iVar5 = FUN_0042df70(uVar1);
  FUN_00419070(0x400000,&local_104,&local_138);
  iVar4 = iVar5 + 2;
  if (iVar5 + 2 < local_138) {
    iVar4 = local_138;
  }
  local_138 = iVar4;
  iVar4 = local_138;
  if (iVar3 < local_104) {
    iVar3 = local_104;
  }
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0283__sX_004b5008,0);
  iVar6 = FUN_0042de10(uVar1);
  iVar6 = iVar6 << 1;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0256_Numpad_Enter_004b52c8,0);
  iVar7 = FUN_0042de10(uVar1);
  FUN_004197f0(&local_128,0);
  local_118 = 0xf;
  local_114 = 0xf;
  local_110 = iVar7 + local_128 + 0xe + iVar3;
  local_108 = iVar4 * 0xb;
  local_10c = local_124 + 0xe + local_108;
  FUN_0041b260(param_1,1,&local_118,0);
  iVar5 = local_124 + 0xf;
  local_130 = local_128 + 0xf;
  iVar8 = (iVar3 - local_128) + local_130;
  local_12c = iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0259__sCycle_Camera_004b5174,&DAT_004d55cc,local_130,iVar5,
                       iVar3,iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x27,0,uVar1);
  FUN_00413340(param_1,0x28,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0015_LOOK_BACK_004b2830,&DAT_004d55cc,local_130,iVar5,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x29,0,uVar1);
  FUN_00413340(param_1,0x2a,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818,&DAT_004d55cc,local_130,iVar5,iVar3,iVar4,
                       local_134,0x400000,0);
  FUN_00413340(param_1,0x2b,0,uVar1);
  FUN_00413340(param_1,0x2c,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0017_THRUST_004b27fc,&DAT_004d55cc,local_130,iVar5,iVar3,iVar4
                       ,local_134,0x400000,0);
  FUN_00413340(param_1,0x2d,0,uVar1);
  FUN_00413340(param_1,0x2e,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0018_BOOST_004b27e4,&DAT_004d55cc,local_130,iVar5,iVar3,iVar4,
                       local_134,0x400000,0);
  FUN_00413340(param_1,0x2f,0,uVar1);
  FUN_00413340(param_1,0x30,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0019_SLIDE_004b27cc,&DAT_004d55cc,local_130,iVar5,iVar3,iVar4,
                       local_134,0x400000,0);
  FUN_00413340(param_1,0x31,0,uVar1);
  FUN_00413340(param_1,0x32,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0,&DAT_004d55cc,local_130,iVar5,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x33,0,uVar1);
  FUN_00413340(param_1,0x34,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790,&DAT_004d55cc,local_130,iVar5,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x35,0,uVar1);
  FUN_00413340(param_1,0x36,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0255__sTaunt_Flamej_004b5150,&DAT_004d55cc,local_130,iVar5,
                       iVar3,iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x37,0,uVar1);
  FUN_00413340(param_1,0x38,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar5 = iVar5 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0023_REPAIR_004b2758,&DAT_004d55cc,local_130,iVar5,iVar3,iVar4
                       ,local_134,0x400000,0);
  FUN_00413340(param_1,0x39,0,uVar1);
  FUN_00413340(param_1,0x3a,0,0,&DAT_004d55cc,iVar8,iVar5,iVar7,iVar4,iVar6,0x800000,0);
  iVar8 = (local_124 >> 1) + local_12c + local_108;
  local_110 = local_128 + 0xe + iVar7 * 2 + iVar3;
  local_10c = local_124 + iVar4 * 5 + -1 + iVar8;
  local_118 = 0xf;
  local_114 = iVar8;
  FUN_0041b260(param_1,1,&local_118,0);
  iVar8 = iVar8 + local_124;
  local_130 = local_128 + 0xf;
  iVar5 = (iVar3 - local_128) + local_130;
  local_12c = iVar7 + -8 + iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0268__sNose_Up_004b5134,&DAT_004d55cc,local_130,iVar8,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x40,0,uVar1);
  FUN_00413340(param_1,0x41,0,0,&DAT_004d55cc,iVar5,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  FUN_00413340(param_1,0x42,0,0,&DAT_004d55cc,local_12c,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  iVar8 = iVar8 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0029_TURN_LEFT_004b26ac,&DAT_004d55cc,local_130,iVar8,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x46,0,uVar1);
  FUN_00413340(param_1,0x47,0,0,&DAT_004d55cc,iVar5,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  FUN_00413340(param_1,0x48,0,0,&DAT_004d55cc,local_12c,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  iVar8 = iVar8 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0030_TURN_RIGHT_004b268c,&DAT_004d55cc,local_130,iVar8,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x49,0,uVar1);
  FUN_00413340(param_1,0x4a,0,0,&DAT_004d55cc,iVar5,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  FUN_00413340(param_1,0x4b,0,0,&DAT_004d55cc,local_12c,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  iVar8 = iVar8 + local_138;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0269__sNose_Down_004b5114,&DAT_004d55cc,local_130,iVar8,iVar3,
                       iVar4,local_134,0x400000,0);
  FUN_00413340(param_1,0x43,0,uVar1);
  FUN_00413340(param_1,0x44,0,0,&DAT_004d55cc,iVar5,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  FUN_00413340(param_1,0x45,0,0,&DAT_004d55cc,local_12c,iVar8,iVar7,iVar4,iVar6,0x800000,0);
  return;
}

