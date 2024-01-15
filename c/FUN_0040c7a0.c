#include "prototype.h"


void FUN_0040c7a0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined local_100 [256];
  
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  local_128 = FUN_0042df70(uVar1);
  local_128 = local_128 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,DAT_00e99738);
  iVar2 = FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0249__sJOYSTICK_SET_004b5204);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0249__sJOYSTICK_SET_004b5204,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0249__sJOYSTICK_SET_004b5204,0x1e5,iVar2 * 3 + 5,uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a9,1);
  FUN_004112f0(param_1,0xcd,0x1a9);
  FUN_00411270(param_1,0x163,0x1a9);
  FUN_00411210(param_1,0x208,0x181);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0257__sButton_Setti_004b51e0,100,5,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0xe1,0xe1,0,0xff);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0513__sTaunt_Flamej_004b51bc,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar2 = FUN_0042de10(&DAT_004b51b8,0);
  iVar3 = iVar3 + iVar2 * 5;
  local_140 = iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0514_Numpad_Enter_004b5198,0);
  iVar4 = FUN_0042de10(uVar1);
  iVar5 = FUN_0042df70(&DAT_004b3b28,DAT_00e99720);
  FUN_00419070(0x400000,&local_114,&local_148);
  iVar2 = iVar5 + 2;
  if (iVar5 + 2 < local_148) {
    iVar2 = local_148;
  }
  local_148 = iVar2;
  iVar2 = local_148;
  iVar5 = iVar4 + iVar3;
  if (iVar4 + iVar3 < local_114) {
    iVar5 = local_114;
  }
  FUN_004197f0(&local_13c,0);
  local_124 = 0xf;
  local_12c = ((-(uint)(DAT_004d55d4 != 0) & 2) + 0xb) * iVar2;
  local_120 = 0xf;
  local_11c = local_13c + 0xe + iVar5;
  local_118 = local_138 + 0xe + local_12c;
  iVar4 = FUN_00413520(param_1,0x30d49,&local_124,0xffffffff,0x300000,0);
  *(undefined4 *)(iVar4 + 0x524) = 0;
  local_144 = local_13c + 0xf;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0259__sCycle_Camera_004b5174,&DAT_004d55cc,local_144,0xf,iVar5
                       ,iVar2,iVar3,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x27,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = local_148 + 0xf;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0015_LOOK_BACK_004b2830,&DAT_004d55cc,local_144,iVar3,iVar5,
                       iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x29,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2,
                       local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2b,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0017_THRUST_004b27fc,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2
                       ,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2d,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0018_BOOST_004b27e4,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2,
                       local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2f,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0019_SLIDE_004b27cc,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2,
                       local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x31,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0,&DAT_004d55cc,local_144,iVar3,iVar5,
                       iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x33,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790,&DAT_004d55cc,local_144,iVar3,iVar5,
                       iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x35,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0255__sTaunt_Flamej_004b5150,&DAT_004d55cc,local_144,iVar3,
                       iVar5,iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x37,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0023_REPAIR_004b2758,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2
                       ,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x39,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  if (DAT_004d55d4 != 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0268__sNose_Up_004b5134,&DAT_004d55cc,local_144,iVar3,iVar5,
                         iVar2,local_140,0x400000,0);
    uVar1 = FUN_00413340(param_1,0x40,0,uVar1);
    FUN_00413a30(iVar4,uVar1);
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0269__sNose_Down_004b5114,&DAT_004d55cc,local_144,
                         iVar3 + local_148,iVar5,iVar2,local_140,0x400000,0);
    uVar1 = FUN_00413340(param_1,0x43,0,uVar1);
    FUN_00413a30(iVar4,uVar1);
  }
  iVar3 = local_138 + 0xf + local_12c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0270__sAxis_Setting_004b50f0,100,iVar3,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  iVar3 = iVar3 + 10;
  FUN_00414be0(uVar1,0xe1,0xe1,0,0xff);
  local_124 = 0xf;
  local_11c = local_13c + 0xe + iVar5;
  local_118 = local_138 + iVar2 * 6 + -1 + iVar3;
  local_120 = iVar3;
  iVar4 = FUN_00413520(param_1,0x30d4a,&local_124,0xffffffff,0x300000,0);
  *(undefined4 *)(iVar4 + 0x524) = 0;
  local_144 = local_13c + 0xf;
  local_12c = iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0271__sTurn_Left_Ri_004b50cc,&DAT_004d55cc,local_144,iVar3,
                       iVar5,iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3e,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818,&DAT_004d55cc,local_144,iVar3,iVar5,iVar2,
                       local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3b,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0278__sNose_Up_Down_004b50a8,&DAT_004d55cc,local_144,iVar3,
                       iVar5,iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3f,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar3 = iVar3 + local_148;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0280__sRoll_Left_Ri_004b400c,&DAT_004d55cc,local_144,iVar3,
                       iVar5,iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3c,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0225_THROTTLE_004b508c,&DAT_004d55cc,local_144,
                       iVar3 + local_148,iVar5,iVar2,local_140,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3d,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,DAT_00e99738);
  iVar2 = FUN_0042df70(uVar1);
  uVar1 = FUN_004131c0(param_1,0x58,0,&DAT_004d55cc,0x145,iVar2 * 3 + 7,0,0);
  FUN_00414be0(uVar1,0xff,0xff,0,200);
  iVar2 = iVar2 * 3 + 0x14;
  if (DAT_004d55d4 == 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0288__sJoystick_Ena_004b5040,0,local_128,0x20000,0);
    uVar1 = FUN_0042de10(uVar1);
    pcVar8 = s__MONDOTEXT_H_0288__sJoystick_Ena_004b5040;
  }
  else {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0287__sWheel_Enable_004b5068,0,local_128,0x20000,0);
    uVar1 = FUN_0042de10(uVar1);
    pcVar8 = s__MONDOTEXT_H_0287__sWheel_Enable_004b5068;
  }
  uVar1 = FUN_00421360(pcVar8,0x145,iVar2,uVar1);
  FUN_00413c50(param_1,0x54,0,uVar1);
  uVar7 = 2;
  iVar2 = iVar2 + local_148 * 2;
  if ((DAT_00ec887c & 4) != 0) {
    uVar7 = 3;
  }
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,0x16d,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar6);
  iVar2 = iVar2 + iVar3;
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar3 = FUN_0041af00(uVar1,iVar2,uVar6,uVar7,&local_110);
  iVar2 = iVar2 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0283__sX_004b5008,0,iVar3,0x40000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0283__sX_004b5008,local_110,iVar2,uVar1);
  FUN_00413c50(param_1,0x55,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0284__sY_004b4ff0,0,iVar3,0x40000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0284__sY_004b4ff0,local_10c,iVar2,uVar1);
  FUN_00413c50(param_1,0x56,0,uVar1);
  if (2 < uVar7) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0285__sZ_004b4fd8,0,iVar3,0x40000,0);
    uVar1 = FUN_0042de10(uVar1);
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0285__sZ_004b4fd8,local_108,iVar2,uVar1);
    FUN_00413c50(param_1,0x57,0,uVar1);
  }
  iVar3 = local_12c;
  local_138 = local_12c + 0x18;
  local_13c = local_11c + -8;
  local_134 = local_11c + 0x30;
  local_130 = local_12c + 0x77;
  FUN_00413b90(param_1,1,&local_13c,0x1772,0,0,0);
  iVar2 = iVar3 + 8;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0508__sSensitivity_004b4fb8,local_134 + 0x19,iVar2,0,0);
  FUN_004131c0(param_1,1,0,uVar1);
  FUN_00413a90(param_1,0x4e,local_134 + -10,iVar2,200,0x80000,0);
  iVar3 = iVar3 + 0x5e;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0509__sDeadzone_004b4f98,local_134 + 0x19,iVar3,0,0);
  FUN_004131c0(param_1,1,0,uVar1);
  FUN_00413a90(param_1,0x4d,local_134 + -10,iVar3,200,&DAT_00dc0000,0);
  return;
}

