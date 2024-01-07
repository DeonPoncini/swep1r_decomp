#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"
#if 0

void FUN_0040c100(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = FUN_00414d90(param_1,0x59);
  if ((DAT_004b2910 == 0) || (DAT_004b4938 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00414420(uVar1,uVar2);
  uVar1 = FUN_00414d90(param_1,0x5a);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e0);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5b);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e4);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5c);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e8);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5d);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83ec);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5e);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83f0);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5f);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83f4);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x60);
  FUN_00414420(uVar1,DAT_00ec83f8);
  uVar1 = FUN_00414d90(param_1,0x61);
  FUN_00414420(uVar1,DAT_00ec83fc);
  FUN_0040a680();
  return;
}



void FUN_0040c260(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_20c [260];
  int local_108;
  undefined local_100 [256];

  iVar2 = FUN_00414d90(param_1,0x2732);
  if (iVar2 != 0) {
    FUN_00413800(iVar2);
    uVar3 = FUN_00484140(s___data_config__004b252c,2,&DAT_004d55cc);
    iVar4 = FUN_00484220(uVar3,local_20c);
    while (iVar4 != 0) {
      pbVar9 = local_20c;
      pcVar5 = s_default_004b4f48;
      do {
        bVar1 = *pcVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0040c2ec:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0040c2f1;
        }
        if (bVar1 == 0) break;
        bVar1 = ((byte *)pcVar5)[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0040c2ec;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0040c2f1:
      if (iVar4 != 0) {
        pbVar9 = local_20c;
        pcVar5 = s_current_004b2640;
        do {
          bVar1 = *pcVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0040c32a:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0040c32f;
          }
          if (bVar1 == 0) break;
          bVar1 = ((byte *)pcVar5)[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0040c32a;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0040c32f:
        if (iVar4 != 0) {
          pbVar9 = local_20c;
          puVar6 = &DAT_004b3b2c;
          do {
            bVar1 = *(byte *)puVar6;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0040c368:
              iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0040c36d;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)puVar6 + 1);
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0040c368;
            puVar6 = puVar6 + 1;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_0040c36d:
          if (iVar4 != 0) {
            pbVar9 = local_20c;
            pbVar7 = &DAT_004b4f44;
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_0040c3a2:
                iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0040c3a7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_0040c3a2;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_0040c3a7:
            if (iVar4 != 0) {
              FUN_004138f0(iVar2,local_20c,0,0x2733,0);
            }
          }
        }
      }
      iVar4 = FUN_00484220(uVar3,local_20c);
    }
    FUN_004841e0(uVar3);
    FUN_0049eb80(local_100,&DAT_004b2524,&DAT_00e9f300,s___data_config_default__004b3e8c);
    uVar3 = FUN_00484140(local_100,3,&PTR_DAT_004b2408);
    iVar4 = FUN_00484220(uVar3,local_20c);
    while (iVar4 != 0) {
      if (local_108 == 0) {
        pbVar9 = local_20c;
        pcVar5 = s_wheel_map_004b3ea4;
        do {
          bVar1 = *pcVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0040c46b:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0040c470;
          }
          if (bVar1 == 0) break;
          bVar1 = ((byte *)pcVar5)[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0040c46b;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0040c470:
        if (iVar4 != 0) {
          FUN_00484670(local_20c);
          uVar8 = FUN_004138f0(iVar2,local_20c,0,0x2733,1);
          FUN_00414ca0(uVar8,200,0x32,0,0xff);
        }
      }
      iVar4 = FUN_00484220(uVar3,local_20c);
    }
    FUN_004841e0(uVar3);
  }
  return;
}



void FUN_0040c4e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined local_18c [128];
  undefined local_10c [260];
  int local_8;

  iVar2 = FUN_00414d90(param_1,0x2732);
  if (iVar2 != 0) {
    FUN_00413800(iVar2);
    uVar3 = FUN_00484140(s___data_player__004b4f6c,3,&PTR_DAT_004b4f7c);
    iVar4 = FUN_00484220(uVar3,local_10c);
    while (iVar4 != 0) {
      if (local_8 == 0) {
        FUN_00484670(local_10c);
        FUN_004138f0(iVar2,local_10c,0,0x2733,0);
      }
      iVar4 = FUN_00484220(uVar3,local_10c);
    }
    FUN_0041b300(iVar2);
    FUN_004841e0(uVar3);
    uVar3 = FUN_00414d90(param_1,0x2731);
    FUN_00414e60(uVar3,0);
    uVar3 = FUN_00414d90(param_1,0x273a);
    iVar4 = -1;
    puVar6 = &DAT_00e364b4;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (cVar1 != '\0');
    if (iVar4 == -2) {
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0246__none__004b4f50);
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0002_Current_Player_004b2214,uVar5);
      FUN_0049eb80(local_18c,uVar5);
      DAT_004b6c90 = 0xffffffff;
    }
    else {
      uVar5 = FUN_00421360(s__MONDOTEXT_H_0002_Current_Player_004b2214,&DAT_00e364b4);
      FUN_0049eb80(local_18c,uVar5);
      DAT_004b6c90 = 0;
      uVar5 = FUN_004136f0(iVar2,&DAT_00e364b4,1);
      FUN_00413610(uVar5);
    }
    FUN_00414b80(uVar3,local_18c,0);
  }
  return;
}



void FUN_0040c670(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_40 [64];

  iVar5 = param_3;
  bVar2 = false;
  iVar3 = FUN_00414d90(param_2,param_3);
  FUN_00406a50(param_1,param_4,param_5,param_6,param_7,local_40,&param_3);
  if (iVar5 == 0x3c) {
    uVar7 = 0xffffffff;
    pbVar4 = local_40;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (3 < ~uVar7 - 1) {
      bVar2 = true;
    }
  }
  pbVar8 = &DAT_004b38f8;
  pbVar4 = local_40;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0040c702:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0040c707;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0040c702;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0040c707:
  if (iVar5 == 0) {
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0247_tilde_004b4f80);
    FUN_0049eb80(local_40,uVar6);
  }
  pbVar8 = &DAT_004b3bd4;
  pbVar4 = local_40;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0040c753:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0040c758;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0040c753;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0040c758:
  if (iVar5 == 0) {
    FUN_0049eb80(local_40,&DAT_004b3ecc);
  }
  if (iVar3 != 0) {
    pbVar4 = local_40 + 1;
    if (!bVar2) {
      pbVar4 = local_40;
    }
    FUN_00414ab0(iVar3,pbVar4,0);
  }
  return;
}



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



void FUN_0040d2c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
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
  local_118 = FUN_0042df70(uVar1);
  local_118 = local_118 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,DAT_00e99738);
  iVar2 = FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,0x1d1,iVar2 * 3 + 5,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0257__sButton_Setti_004b51e0,100,5,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0xe1,0xe1,0,0xff);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0513__sTaunt_Flamej_004b51bc,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar2 = FUN_0042de10(&DAT_004b51b8,0);
  iVar3 = iVar3 + iVar2 * 5;
  local_144 = iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0514_Numpad_Enter_004b5198,0);
  iVar2 = FUN_0042de10(uVar1);
  iVar2 = iVar2 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0259__sCycle_Camera_004b5174,DAT_00e99720);
  iVar4 = FUN_0042df70(uVar1);
  FUN_00419070(0x400000,&local_114,&local_14c);
  iVar3 = iVar4 + 2;
  if (iVar4 + 2 < local_14c) {
    iVar3 = local_14c;
  }
  local_14c = iVar3;
  iVar3 = local_14c;
  if (iVar2 < local_114) {
    iVar2 = local_114;
  }
  FUN_004197f0(&local_13c,0);
  local_128 = 0xf;
  local_124 = 0xf;
  local_120 = local_13c + 0xe + iVar2;
  local_12c = iVar3 * 0xb;
  local_11c = local_138 + 0xe + local_12c;
  iVar4 = FUN_00413520(param_1,0x30d4d,&local_128,0xffffffff,0x300000,0);
  *(undefined4 *)(iVar4 + 0x524) = 0;
  local_140 = local_13c + 0xf;
  local_148 = iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0259__sCycle_Camera_004b5174,&DAT_004d55cc,local_140,0xf,iVar2
                       ,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x27,0,uVar1);
  FUN_00413a30(iVar4,uVar1);
  iVar4 = local_14c + 0xf;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0015_LOOK_BACK_004b2830,&DAT_004d55cc,local_140,iVar4,iVar2,
                       iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x29,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818,&DAT_004d55cc,local_140,iVar4,iVar2,iVar3,
                       local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2b,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0017_THRUST_004b27fc,&DAT_004d55cc,local_140,iVar4,iVar2,iVar3
                       ,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2d,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0018_BOOST_004b27e4,&DAT_004d55cc,local_140,iVar4,iVar2,iVar3,
                       local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x2f,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0019_SLIDE_004b27cc,&DAT_004d55cc,local_140,iVar4,iVar2,iVar3,
                       local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x31,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0,&DAT_004d55cc,local_140,iVar4,iVar2,
                       iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x33,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790,&DAT_004d55cc,local_140,iVar4,iVar2,
                       iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x35,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0255__sTaunt_Flamej_004b5150,&DAT_004d55cc,local_140,iVar4,
                       iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x37,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0023_REPAIR_004b2758,&DAT_004d55cc,local_140,iVar4 + local_14c
                       ,iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x39,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = local_138 + 0xf + local_12c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0270__sAxis_Setting_004b50f0,100,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  iVar4 = iVar4 + 10;
  FUN_00414be0(uVar1,0xe1,0xe1,0,0xff);
  local_128 = 0xf;
  local_120 = local_13c + 0xe + iVar2;
  local_11c = local_138 + iVar3 * 6 + -1 + iVar4;
  local_124 = iVar4;
  local_148 = FUN_00413520(param_1,0x30d4e,&local_128,0xffffffff,0x300000,0);
  *(undefined4 *)(local_148 + 0x524) = 0;
  local_140 = local_13c + 0xf;
  local_12c = iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0271__sTurn_Left_Ri_004b50cc,&DAT_004d55cc,local_140,iVar4,
                       iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3e,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818,&DAT_004d55cc,local_140,iVar4,iVar2,iVar3,
                       local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3b,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0278__sNose_Up_Down_004b50a8,&DAT_004d55cc,local_140,iVar4,
                       iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3f,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  iVar4 = iVar4 + local_14c;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0280__sRoll_Left_Ri_004b400c,&DAT_004d55cc,local_140,iVar4,
                       iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3c,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0225_THROTTLE_004b508c,&DAT_004d55cc,local_140,
                       iVar4 + local_14c,iVar2,iVar3,local_144,0x400000,0);
  uVar1 = FUN_00413340(param_1,0x3d,0,uVar1);
  FUN_00413a30(local_148,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,DAT_00e99738);
  iVar2 = FUN_0042df70(uVar1);
  uVar1 = FUN_004131c0(param_1,0x58,0,&DAT_004d55cc,0x145,iVar2 * 3 + 7,0,0);
  FUN_00414be0(uVar1,0xff,0xff,0,200);
  iVar2 = iVar2 * 3 + 0x14;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0286__sMouse_Enable_004b52a4,0,local_118,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0286__sMouse_Enable_004b52a4,0x145,iVar2,uVar1);
  FUN_00413c50(param_1,0x54,0,uVar1);
  uVar6 = 2;
  iVar2 = iVar2 + local_14c * 2;
  if (((byte)DAT_00ec8808 & 4) != 0) {
    uVar6 = 3;
  }
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,0x16d,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar5 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar5);
  iVar2 = iVar2 + iVar3;
  uVar5 = FUN_00421360(s__MONDOTEXT_H_0507__sFlip_Axis_004b5020,6);
  uVar5 = FUN_0042de10(uVar5);
  iVar3 = FUN_0041af00(uVar1,iVar2,uVar5,uVar6,&local_110);
  iVar2 = iVar2 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0283__sX_004b5008,0,iVar3,0x40000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0283__sX_004b5008,local_110,iVar2,uVar1);
  FUN_00413c50(param_1,0x55,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0284__sY_004b4ff0,0,iVar3,0x40000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0284__sY_004b4ff0,local_10c,iVar2,uVar1);
  FUN_00413c50(param_1,0x56,0,uVar1);
  if (2 < uVar6) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0285__sZ_004b4fd8,0,iVar3,0x40000,0);
    uVar1 = FUN_0042de10(uVar1);
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0285__sZ_004b4fd8,local_108,iVar2,uVar1);
    FUN_00413c50(param_1,0x57,0,uVar1);
  }
  iVar3 = local_12c;
  local_138 = local_12c + 0x18;
  local_13c = local_120 + -8;
  local_134 = local_120 + 0x30;
  local_130 = local_12c + 0x77;
  FUN_00413b90(param_1,1,&local_13c,0x1772,0,0,0);
  iVar2 = iVar3 + 8;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0508__sSensitivity_004b4fb8,local_134 + 0x19,iVar2,0,0);
  FUN_004131c0(param_1,1,0,uVar1);
  FUN_00413a90(param_1,0x4e,local_134 + -10,iVar2,200,0x80000,0);
  iVar3 = iVar3 + 0x5e;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0532_Sensitivity_Me_004b5280,local_134 + 0x19,iVar3,0,0);
  FUN_004131c0(param_1,1,0,uVar1);
  FUN_00413a90(param_1,0x4d,local_134 + -10,iVar3,200,0x2c0000,0);
  return;
}



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



void FUN_0040e6a0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined local_100 [256];

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  uVar2 = FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0292__sVIDEO_SETTIN_004b5418);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0292__sVIDEO_SETTIN_004b5418,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,((uVar2 >> 1) + uVar2 >> 2) + 300,0xa0,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar4 = FUN_0042de10(&DAT_004b51b8,0);
  iVar5 = FUN_0042de10(s___X__004b53e0,0);
  iVar5 = iVar5 + iVar3 + iVar4 * 10;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,DAT_00e99720);
  iVar3 = FUN_0042df70(uVar1);
  iVar3 = iVar3 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0297__sReflections_E_004b53b4,0x1e,200,uVar1);
  FUN_00413c50(param_1,0x62,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0301__sSmoke_And_Du_004b5388,0x1e,0xe6,uVar1);
  FUN_00413c50(param_1,0x273c,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0300__sLens_Flare_E_004b5360,0x1e,0x104,uVar1);
  FUN_00413c50(param_1,0x273b,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,
                       ((int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4) + 0x3c + iVar5,0xaf,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar6);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar4 = FUN_0041af00(uVar1,iVar3 + 0xaf,uVar6,3,&local_110);
  iVar3 = iVar3 + 0xaf + iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar4,0x40080,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_110,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar4,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_10c,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar4,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_108,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  return;
}



void FUN_0040ea70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined local_100 [256];

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0252__sReset_Defaul_004b5630,DAT_00e99720);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0252__sReset_Defaul_004b5630,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0305__sAUDIO_SETTIN_004b560c);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0305__sAUDIO_SETTIN_004b560c,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,500,0x3c,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0);
  FUN_0042de10(uVar1);
  FUN_0042de10(&DAT_004b51b8,0);
  FUN_0042de10(s___X__004b53e0,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0306__s3D_Spatializ_004b55a4,DAT_00e99720);
  iVar2 = FUN_0042df70(uVar1);
  iVar2 = iVar2 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0308__sSound_System_004b5578,0xf,0x73,uVar1);
  iVar3 = FUN_00413c50(param_1,0x2741,0,uVar1);
  uVar1 = FUN_004131c0(param_1,0x58,0,&DAT_004d55cc,0xf,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0x82,0x100000,0
                      );
  FUN_00414be0(uVar1,0xff,0xff,0,200);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0309__sUse_Hi_Res___004b5548,0xf,0xac,uVar1);
  FUN_00413c50(param_1,0x2744,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0502__sIn_Race_Voic_004b551c,0xf,0xd1,uVar1);
  FUN_00413c50(param_1,0x2746,0,uVar1);
  iVar3 = FUN_00413a90(param_1,0x273e,0x13b,199,300,0x80000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0310_Sound_Effects_V_004b54f4,0x171,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0xc4,0x100000,0
                      );
  uVar1 = FUN_004131c0(param_1,10000,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0503__sIn_Race_Musi_004b54c8,0xf,0xf6,uVar1);
  FUN_00413c50(param_1,0x2747,0,uVar1);
  iVar3 = FUN_00413a90(param_1,0x273f,0x13b,0xec,300,0x80000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0311_Music_Cutscene_004b54a0,0x16d,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0xe9,0x100000,0
                      );
  uVar1 = FUN_004131c0(param_1,0x2711,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0306__s3D_Spatializ_004b55a4,0xf,0x132,uVar1);
  FUN_00413c50(param_1,0x2742,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0312__sDoppler_Effe_004b5470,0xf,0x15f,uVar1);
  FUN_00413c50(param_1,0x2743,0,uVar1);
  iVar2 = FUN_00413a90(param_1,0x2740,0x13b,0x155,300,0x1080000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0313_2D_3D_Relative_004b543c,0x159,
                       0x169 - ((*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x28)) + 1) / 2,0x100000,
                       0);
  uVar1 = FUN_004131c0(param_1,0x2712,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  return;
}



void FUN_0040ef40(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined local_100 [256];

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0314__sFORCE_FEEDBA_004b57fc,DAT_00e99738);
  iVar2 = FUN_0042df70(uVar1);
  iVar2 = iVar2 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0314__sFORCE_FEEDBA_004b57fc);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0314__sFORCE_FEEDBA_004b57fc,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,0x212,iVar2 + 5,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0518__sOverall_Forc_004b57d0,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar4 = FUN_0042de10(&DAT_004b51b8,0);
  iVar3 = iVar3 + iVar4 * 10;
  iVar4 = FUN_0042de10(s___X__004b53e0,0);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0315__sOverall_Forc_004b57a4,DAT_00e99720);
  iVar5 = FUN_0042df70(uVar1);
  iVar5 = iVar5 * 3;
  iVar3 = iVar3 + 0x46;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0518__sOverall_Forc_004b57d0,0,iVar5,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0322__sEnable_G_For_004b577c,iVar3,iVar2 + 0x14,uVar1);
  FUN_00413c50(param_1,0x60,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0518__sOverall_Forc_004b57d0,0,iVar5,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0316__sEnable_Force_004b5750,0x1e,iVar2 + 0x2d,uVar1);
  FUN_00413c50(param_1,0x59,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0518__sOverall_Forc_004b57d0,0,iVar5,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0323__sEnable_Engin_004b5724,iVar3,iVar2 + 0x32,uVar1);
  FUN_00413c50(param_1,0x61,0,uVar1);
  iVar2 = iVar2 + 0x5a;
  iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4) + 0x1e + iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0315__sOverall_Forc_004b57a4,0x14,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0315__sOverall_Forc_004b57a4,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar6);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0315__sOverall_Forc_004b57a4,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar5 = FUN_0041af00(uVar1,iVar2 + iVar3,uVar6,3,&local_110);
  iVar3 = iVar2 + iVar3 + iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40080,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_110,iVar3,uVar1);
  FUN_00413c50(param_1,0x5a,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar5,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_10c,iVar3,uVar1);
  FUN_00413c50(param_1,0x5a,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar5,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_108,iVar3,uVar1);
  FUN_00413c50(param_1,0x5a,0,uVar1);
  iVar3 = iVar3 + iVar5 * 2;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0317__sAuto_Center_S_004b56f8,iVar4,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0317__sAuto_Center_S_004b56f8,DAT_00e99738);
  iVar5 = FUN_0042df70(uVar6);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0317__sAuto_Center_S_004b56f8,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar7 = FUN_0041af00(uVar1,iVar2 + iVar5,uVar6,4,&local_110);
  iVar2 = iVar2 + iVar5 + iVar7;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar7,0x40080,0x80000);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0234_OFF_004b4e40,local_110,iVar2,uVar1);
  FUN_00413c50(param_1,0x5b,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar7,0x40000,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_10c,iVar2,uVar1);
  FUN_00413c50(param_1,0x5b,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar7,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_108,iVar2,uVar1);
  FUN_00413c50(param_1,0x5b,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar7,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_104,iVar2,uVar1);
  FUN_00413c50(param_1,0x5b,0,uVar1);
  iVar2 = iVar2 + iVar7 * 2;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0318__sCollision_Ef_004b56d0,0x2d,iVar3,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0318__sCollision_Ef_004b56d0,DAT_00e99738);
  iVar5 = FUN_0042df70(uVar6);
  iVar3 = iVar3 + iVar5;
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0318__sCollision_Ef_004b56d0,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar5 = FUN_0041af00(uVar1,iVar3,uVar6,4,&local_110);
  iVar3 = iVar3 + iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40080,0x80000);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0234_OFF_004b4e40,local_110,iVar3,uVar1);
  FUN_00413c50(param_1,0x5c,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40000,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_10c,iVar3,uVar1);
  FUN_00413c50(param_1,0x5c,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar5,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_108,iVar3,uVar1);
  FUN_00413c50(param_1,0x5c,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar5,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_104,iVar3,uVar1);
  FUN_00413c50(param_1,0x5c,0,uVar1);
  iVar3 = iVar3 + iVar5 * 2;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0319__sDamage_Effec_004b56ac,iVar4 + 0x19,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0319__sDamage_Effec_004b56ac,DAT_00e99738);
  iVar5 = FUN_0042df70(uVar6);
  iVar2 = iVar2 + iVar5;
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0319__sDamage_Effec_004b56ac,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar5 = FUN_0041af00(uVar1,iVar2,uVar6,4,&local_110);
  iVar2 = iVar2 + iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40080,0x80000);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0234_OFF_004b4e40,local_110,iVar2,uVar1);
  FUN_00413c50(param_1,0x5d,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40000,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_10c,iVar2,uVar1);
  FUN_00413c50(param_1,0x5d,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar5,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_108,iVar2,uVar1);
  FUN_00413c50(param_1,0x5d,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar5,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_104,iVar2,uVar1);
  FUN_00413c50(param_1,0x5d,0,uVar1);
  iVar2 = iVar2 + iVar5 * 2;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0320__sTerrain_Effe_004b5684,0x2d,iVar3,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0320__sTerrain_Effe_004b5684,DAT_00e99738);
  iVar5 = FUN_0042df70(uVar6);
  iVar3 = iVar3 + iVar5;
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0320__sTerrain_Effe_004b5684,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar5 = FUN_0041af00(uVar1,iVar3,uVar6,4,&local_110);
  iVar3 = iVar3 + iVar5;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40080,0x80000);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0234_OFF_004b4e40,local_110,iVar3,uVar1);
  FUN_00413c50(param_1,0x5e,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar5,0x40000,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_10c,iVar3,uVar1);
  FUN_00413c50(param_1,0x5e,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar5,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_108,iVar3,uVar1);
  FUN_00413c50(param_1,0x5e,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar5,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_104,iVar3,uVar1);
  FUN_00413c50(param_1,0x5e,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0321__sPod_Action_E_004b565c,iVar4 + 0xf,iVar2,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0321__sPod_Action_E_004b565c,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar6);
  iVar2 = iVar2 + iVar3;
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0321__sPod_Action_E_004b565c,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar3 = FUN_0041af00(uVar1,iVar2,uVar6,4,&local_110);
  iVar2 = iVar2 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar3,0x40080,0x80000);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0234_OFF_004b4e40,local_110,iVar2,uVar1);
  FUN_00413c50(param_1,0x5f,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar3,0x40000,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_10c,iVar2,uVar1);
  FUN_00413c50(param_1,0x5f,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar3,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_108,iVar2,uVar1);
  FUN_00413c50(param_1,0x5f,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar3,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_104,iVar2,uVar1);
  FUN_00413c50(param_1,0x5f,0,uVar1);
  return;
}



void FUN_0040fb50(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_120;
  int local_11c;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined local_100 [256];

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0324__sBack_to_Keyb_004b5b20,DAT_00e99720);
  uVar2 = FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0324__sBack_to_Keyb_004b5b20,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0325__sRESERVED_KEY_004b5afc);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0325__sRESERVED_KEY_004b5afc,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,((uVar2 >> 1) + uVar2 >> 2) + 0x104,0x7d,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0325__sRESERVED_KEY_004b5afc,DAT_00e99720);
  iVar3 = FUN_0042df70(uVar1);
  iVar3 = iVar3 + 5;
  FUN_00411170(param_1,3,0,0x1a4,2);
  FUN_004197f0(&local_120,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0522_Net_play__Pres_004b5ac4,DAT_00e99720);
  uVar2 = FUN_0042de30(uVar1);
  uVar2 = uVar2 + (uVar2 >> 1) + local_120;
  local_10c = 0x8c;
  iVar4 = -(uVar2 >> 1);
  iVar5 = iVar4 + 0x140;
  local_108 = iVar4 + 0x13f + uVar2;
  local_104 = iVar3 * 0xf + 0x8b + local_11c;
  local_110 = iVar5;
  FUN_0041b260(param_1,1,&local_110,0);
  iVar5 = iVar5 + local_120;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0326__sCAPSLOCK_Cyc_004b5a8c,iVar5,local_11c + 0x8c,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = local_11c + 0x8c + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0327__sF1_Camera_Vi_004b5a58,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0328__sF2_Camera_Vi_004b5a24,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0329__sF3_Camera_Vi_004b59f0,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0330__sF4_Camera_Vi_004b59bc,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0331__sF5_Cyle_Taun_004b5984,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0332__sF6_Random_Ta_004b5948,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0333__sF7_Enable_Ch_004b5910,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0335__sF12_Save_Scr_004b58dc,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0336__sCTRL_F_Toggl_004b589c,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0337__sCTRL_J_Toggl_004b5860,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  iVar4 = iVar4 + iVar3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0338__sCTRL_M_Toggl_004b5828,iVar5,iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0522_Net_play__Pres_004b5ac4,iVar5,iVar3 + iVar4,0,0);
  uVar1 = FUN_004131c0(param_1,1,0xffffffff,uVar1);
  FUN_00414be0(uVar1,0,0xb4,0,0xff);
  return;
}



void FUN_0040ffe0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  undefined local_100 [256];

  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,DAT_00e99720);
  iVar3 = FUN_0042de30(uVar2);
  iVar3 = iVar3 * 3;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,DAT_00e99720);
  iVar4 = FUN_0042df70(uVar2);
  iVar1 = iVar4 * 3;
  FUN_00411170(param_1,3,0,0x1a9,1);
  local_120 = 0xc3;
  local_11c = 0x8c;
  local_118 = 0x1bc;
  local_114 = 0x153;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0340__sLOAD_SAVE_SE_004b5b88);
  FUN_0049eb80(local_100,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0340__sLOAD_SAVE_SE_004b5b88,DAT_00e99738,0x80000,1,0,0);
  uVar2 = FUN_0042de30(uVar2);
  uVar2 = FUN_00413fc0(param_1,1,6,local_100,500,0x3c,uVar2);
  FUN_00414be0(uVar2,0xff,0,0,0xff);
  uVar2 = FUN_00413520(param_1,0x2732,&local_120,0,0,0);
  FUN_004138b0(uVar2,0xff,100,0,0xff);
  local_110 = local_120;
  local_108 = local_118;
  local_10c = local_114 + 0x14;
  local_104 = local_114 + 0x13 + iVar4 * 6;
  uVar2 = FUN_00413430(param_1,0x2731,&local_110,0,0x20000,0);
  FUN_00413500(uVar2,0x18);
  FUN_00414ca0(uVar2,0xff,100,0,0xff);
  FUN_00414e60(uVar2,0);
  iVar4 = local_11c;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0341__sLoad_004b5b6c,local_120 + -0x96,local_11c + 0x28,iVar3,
                       iVar1,0x100000,0);
  FUN_004132a0(param_1,0x2735,0xffffffff,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,local_120 + -0x96,iVar4 + 0x46,iVar3,
                       iVar1,0x100000,0);
  FUN_004132a0(param_1,0x2738,0xffffffff,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0342__sSave_004b5b50,local_120 + -0x96,iVar4 + 100,iVar3,iVar1
                       ,0x100000,0);
  FUN_004132a0(param_1,0x2734,0xffffffff,uVar2);
  return;
}



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



void FUN_00410430(void)

{
  int iVar1;

  iVar1 = FUN_00485880(0x58,0);
  if ((iVar1 != 0) && (DAT_004d79e8 == 0)) {
    FUN_00440550(0x46);
    FUN_00410480(s_snap__004b5c44);
    DAT_004d79e8 = 1;
    return;
  }
  DAT_004d79e8 = 0;
  return;
}



void FUN_00410480(undefined4 param_1)

{
  int iVar1;
  undefined local_50 [80];

  do {
    iVar1 = DAT_004d79e4;
    DAT_004d79e4 = DAT_004d79e4 + 1;
    FUN_0049eb80(local_50,s__s_03d_bmp_004b5c50,param_1,iVar1);
    iVar1 = FUN_0049f1e0(local_50,&DAT_004b5c4c);
    if (iVar1 == 0) break;
    FUN_0049f0f0(iVar1);
  } while (iVar1 != 0);
  FUN_00489d20(local_50);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004104f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  char *pcVar13;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = DAT_00e35a98;
  if (DAT_004b5c40 != 0) {
    DAT_004b5c40 = 0;
  }
  iVar3 = FUN_00485880(0x58,0);
  if (iVar3 != 0) {
    FUN_00410430();
  }
  iVar3 = FUN_00485880(0x1d,0);
  if ((((iVar3 == 0) || (iVar3 = FUN_00485880(0x2e,0), iVar3 == 0)) ||
      (iVar3 = FUN_00485880(0x15,0), iVar3 == 0)) || (*(int *)(DAT_0050c454 + 8) != 9)) {
    iVar3 = FUN_00485880(0x9d,0);
    if (((iVar3 == 0) || (iVar3 = FUN_00485880(0x31,0), iVar3 == 0)) ||
       ((iVar3 = FUN_00485880(0x25,0), iVar3 == 0 || (*(int *)(DAT_0050c454 + 8) != 9)))) {
      iVar3 = FUN_00485880(0x3b,0);
      if (iVar3 == 0) {
        iVar3 = FUN_00485880(0x3c,0);
        if (iVar3 == 0) {
          iVar3 = FUN_00485880(0x3d,0);
          if (iVar3 == 0) {
            iVar3 = FUN_00485880(0x3e,0);
            if (iVar3 == 0) {
              iVar3 = FUN_00485880(0x3a,0);
              if (iVar3 == 0) {
                iVar3 = FUN_00485880(0xb8,0);
                if (((iVar3 == 0) && (iVar3 = FUN_00485880(0x38,0), iVar3 == 0)) ||
                   (iVar3 = FUN_00485880(0x23,0), iVar3 == 0)) {
                  if (DAT_0050c07c == 2) {
                    iVar3 = FUN_00485880(0x1d,0);
                    if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x9d,0), iVar3 == 0)) {
                      iVar3 = FUN_00485880(0x37,0);
                      if ((iVar3 == 0) || (iVar3 = FUN_00485880(0x14,0), iVar3 == 0)) {
                        iVar3 = FUN_00485880(0x17,0);
                        if (((iVar3 == 0) ||
                            (((iVar3 = FUN_00485880(0x21,0), iVar3 == 0 ||
                              (iVar3 = FUN_00485880(0x26,0), iVar3 == 0)) ||
                             (iVar3 = FUN_00485880(0x15,0), iVar3 == 0)))) || (DAT_004d5e00 != 0))
                        goto LAB_0041094f;
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        uVar4 = 0x2b;
                        DAT_0050c048 = DAT_0050c048 ^ 0x2000;
LAB_00410938:
                        FUN_00440550(uVar4);
                        DAT_004d79ec = 1;
                      }
                      else {
                        if (DAT_004d5e00 != 0) goto LAB_0041094f;
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_0050cb68 = DAT_0050cb68 ^ 1;
                        FUN_00440550(0x2c);
                        DAT_004d79ec = 1;
                      }
                    }
                    else {
                      iVar3 = FUN_00485880(0x44,0);
                      if (iVar3 == 0) goto LAB_0041094f;
                      if (DAT_004d79ec != 0) goto LAB_00410f62;
                      if (DAT_004d5e00 == 0) {
                        uVar4 = 0x28;
                        DAT_0050c048 = DAT_0050c048 ^ 4;
                        goto LAB_00410938;
                      }
LAB_00410eb5:
                      DAT_004d79ec = 1;
                    }
                  }
                  else {
LAB_0041094f:
                    iVar3 = FUN_00485880(0x1d,0);
                    if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x9d,0), iVar3 == 0)) {
LAB_00410e8b:
                      iVar3 = FUN_00485880(0x41,0);
                      if (iVar3 != 0) {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        FUN_00440550(0x46);
                        FUN_0041bdd0();
                        goto LAB_00410eb5;
                      }
                      iVar3 = FUN_00485880(0x3f,0);
                      if ((iVar3 == 0) && (iVar3 = FUN_00485880(0x40,0), iVar3 == 0)) {
                        iVar3 = FUN_00485880(0x46,0);
                        if ((iVar3 == 0) || (iVar3 = FUN_00485880(199,0), iVar3 == 0)) {
                          DAT_004d79ec = 0;
                        }
                        else {
                          if (DAT_004d79ec != 0) goto LAB_00410f62;
                          DAT_004d79ec = 1;
                          if (*(int *)(DAT_0050c454 + 8) == 9) {
                            DAT_0050c048 = DAT_0050c048 ^ 0x40;
                            FUN_0043d9a0(DAT_0050c454);
                          }
                        }
                      }
                      else {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_004d79e0 = 1;
                        DAT_004d79ec = 1;
                      }
                    }
                    else {
                      iVar3 = FUN_00485880(0x24,0);
                      if (iVar3 == 0) {
                        iVar3 = FUN_00485880(0x38,0);
                        if ((iVar3 == 0) || (*(int *)(DAT_0050c454 + 8) != 0xd)) {
LAB_00410b9c:
                          iVar3 = FUN_00485880(0x32,0);
                          if (iVar3 == 0) {
                            iVar3 = FUN_00485880(0x21,0);
                            if (iVar3 == 0) {
                              iVar3 = FUN_00485880(0x10,0);
                              if ((iVar3 == 0) || (DAT_004d5e00 == 0)) {
                                iVar3 = FUN_00485880(0x57,0);
                                if (iVar3 == 0) goto LAB_00410e8b;
                                if (DAT_004d79ec != 0) goto LAB_00410f62;
                                DAT_004d79ec = 1;
                                DAT_004d79dc = (uint)(DAT_004d79dc == 0);
                              }
                              else {
                                if (DAT_004d79ec != 0) goto LAB_00410f62;
                                DAT_004d79ec = 1;
                                local_20 = 0x50617773;
                                local_1c = 0xffffffff;
                                local_18 = 1;
                                FUN_00450c50(0x416c6c21,&local_20);
                              }
                              goto LAB_00410f5a;
                            }
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004b2914 == 0) {
                              pcVar13 = s__MONDOTEXT_H_0042__nNo_Force_Fee_004b2880;
                            }
                            else {
                              if (DAT_004d765c != 0) {
                                if ((DAT_004b2910 == 0) && (DAT_004b4938 != 0)) {
                                  pcVar13 = (char *)FUN_00421360(
                                                  s__MONDOTEXT_H_0369_Force_Feedback_004b5c88);
                                  uVar6 = 0xffffffff;
                                  do {
                                    pcVar9 = pcVar13;
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    pcVar9 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar9;
                                  } while (cVar1 != '\0');
                                  uVar6 = ~uVar6;
                                  iVar3 = -1;
                                  pcVar13 = &DAT_004d78d0;
                                  do {
                                    pcVar10 = pcVar13;
                                    if (iVar3 == 0) break;
                                    iVar3 = iVar3 + -1;
                                    pcVar10 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar10;
                                  } while (cVar1 != '\0');
                                  puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                                  puVar11 = (undefined4 *)(pcVar10 + -1);
                                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                    *puVar11 = *puVar8;
                                    puVar8 = puVar8 + 1;
                                    puVar11 = puVar11 + 1;
                                  }
                                  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                    *(undefined *)puVar11 = *(undefined *)puVar8;
                                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                                  }
                                }
                                else {
                                  pcVar13 = (char *)FUN_00421360(
                                                  s__MONDOTEXT_H_0370_Force_Feedback_004b5c5c);
                                  uVar6 = 0xffffffff;
                                  do {
                                    pcVar9 = pcVar13;
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    pcVar9 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar9;
                                  } while (cVar1 != '\0');
                                  uVar6 = ~uVar6;
                                  iVar3 = -1;
                                  pcVar13 = &DAT_004d78d0;
                                  do {
                                    pcVar10 = pcVar13;
                                    if (iVar3 == 0) break;
                                    iVar3 = iVar3 + -1;
                                    pcVar10 = pcVar13 + 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar10;
                                  } while (cVar1 != '\0');
                                  puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                                  puVar11 = (undefined4 *)(pcVar10 + -1);
                                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                    *puVar11 = *puVar8;
                                    puVar8 = puVar8 + 1;
                                    puVar11 = puVar11 + 1;
                                  }
                                  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                    *(undefined *)puVar11 = *(undefined *)puVar8;
                                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                                  }
                                  FUN_0040a120(1);
                                }
                                FUN_00440550(0x46);
                                if ((DAT_004b2910 != 0) || (DAT_004b2910 = 1, DAT_004b4938 == 0)) {
                                  DAT_004b2910 = 0;
                                }
                                uVar4 = FUN_00414d90(0,0x1b);
                                FUN_0040c100(uVar4);
                                iVar3 = FUN_00411810();
                                if (((DAT_004b2940 != 0) || (iVar3 == 0)) ||
                                   (*(int *)(iVar3 + 0x1c) != 0x1b)) {
                                  FUN_0040ab80(s_current_004b2640);
                                }
                                goto LAB_00410f5a;
                              }
                              pcVar13 = s__MONDOTEXT_H_0368_No_force_effec_004b5cb4;
                            }
                          }
                          else {
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004b2950 != 0) {
                              if (DAT_004d6b38 == 0) {
                                pcVar13 = s__MONDOTEXT_H_0365_Mouse_ENABLED_004b5d04;
                              }
                              else {
                                pcVar13 = s__MONDOTEXT_H_0366_Mouse_DISABLED_004b5ce0;
                              }
                              pcVar13 = (char *)FUN_00421360(pcVar13);
                              uVar6 = 0xffffffff;
                              do {
                                pcVar9 = pcVar13;
                                if (uVar6 == 0) break;
                                uVar6 = uVar6 - 1;
                                pcVar9 = pcVar13 + 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar9;
                              } while (cVar1 != '\0');
                              uVar6 = ~uVar6;
                              iVar3 = -1;
                              pcVar13 = &DAT_004d78d0;
                              do {
                                pcVar10 = pcVar13;
                                if (iVar3 == 0) break;
                                iVar3 = iVar3 + -1;
                                pcVar10 = pcVar13 + 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar10;
                              } while (cVar1 != '\0');
                              puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                              puVar11 = (undefined4 *)(pcVar10 + -1);
                              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *puVar11 = *puVar8;
                                puVar8 = puVar8 + 1;
                                puVar11 = puVar11 + 1;
                              }
                              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                                *(undefined *)puVar11 = *(undefined *)puVar8;
                                puVar8 = (undefined4 *)((int)puVar8 + 1);
                                puVar11 = (undefined4 *)((int)puVar11 + 1);
                              }
                              FUN_00440550(0x46);
                              DAT_004d6b38 = (uint)(DAT_004d6b38 == 0);
                              if (DAT_004b2940 == 0) {
                                uVar4 = FUN_00414d90(0,0x19);
                                FUN_0040b740(1,uVar4);
                              }
                              iVar3 = FUN_00411810();
                              if ((DAT_004b2940 == 0) && (iVar3 != 0)) {
                                bVar12 = *(int *)(iVar3 + 0x1c) == 0x19;
                                goto LAB_00410c6e;
                              }
                              goto LAB_00410c74;
                            }
                            pcVar13 = s__MONDOTEXT_H_0036__nNO_MOUSE_DET_004b25e4;
                          }
LAB_00410ccd:
                          DAT_004d79ec = 1;
                          pcVar13 = (char *)FUN_00421360(pcVar13);
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                        }
                        else {
                          iVar3 = FUN_00485880(0xb8,0);
                          if (iVar3 == 0) {
                            iVar3 = FUN_00485880(0x9d,0);
                            if (iVar3 == 0) goto LAB_00410b9c;
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004d5e00 == 0) {
                              DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
                              *(bool *)(DAT_0050c454 + 0x6e) =
                                   *(char *)(DAT_0050c454 + 0x6e) == '\0';
                              FUN_00440550(0x2f);
                            }
                          }
                          else {
                            if (DAT_004d79ec != 0) goto LAB_00410f62;
                            DAT_004d79ec = 1;
                            if (DAT_004d5e00 == 0) {
                              DAT_00e996dc = DAT_00e996dc | 0x4000;
                              *(bool *)(DAT_0050c454 + 0x6e) =
                                   *(char *)(DAT_0050c454 + 0x6e) == '\0';
                              FUN_00440550(0x2e);
                            }
                          }
                        }
                      }
                      else {
                        if (DAT_004d79ec != 0) goto LAB_00410f62;
                        DAT_004d79ec = 1;
                        if (DAT_004b294c == 0) {
                          pcVar13 = s__MONDOTEXT_H_0035__nNO_JOYSTICK_D_004b260c;
                          goto LAB_00410ccd;
                        }
                        if (DAT_004b2944 == 0) {
                          pcVar13 = (char *)FUN_00421360(s__MONDOTEXT_H_0363_Joystick_ENABL_004b5d50
                                                        );
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; DAT_004b2910 = DAT_004d79d0, uVar7 != 0;
                              uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                        }
                        else {
                          pcVar13 = (char *)FUN_00421360(s__MONDOTEXT_H_0364_Joystick_DISAB_004b5d28
                                                        );
                          uVar6 = 0xffffffff;
                          do {
                            pcVar9 = pcVar13;
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            pcVar9 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6;
                          iVar3 = -1;
                          pcVar13 = &DAT_004d78d0;
                          do {
                            pcVar10 = pcVar13;
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            pcVar10 = pcVar13 + 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar10;
                          } while (cVar1 != '\0');
                          puVar8 = (undefined4 *)(pcVar9 + -uVar6);
                          puVar11 = (undefined4 *)(pcVar10 + -1);
                          for (uVar7 = uVar6 >> 2; DAT_004d79d0 = DAT_004b2910, uVar7 != 0;
                              uVar7 = uVar7 - 1) {
                            *puVar11 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar11 = puVar11 + 1;
                          }
                          bVar12 = DAT_004b2910 != 0;
                          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar11 = *(undefined *)puVar8;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                            puVar11 = (undefined4 *)((int)puVar11 + 1);
                          }
                          if (bVar12) {
                            FUN_0040a120(1);
                          }
                          DAT_004b2910 = 0;
                        }
                        FUN_00440550(0x46);
                        DAT_004b2944 = (uint)(DAT_004b2944 == 0);
                        if (DAT_004b2940 == 0) {
                          uVar4 = FUN_00414d90(0,0x18);
                          FUN_0040b740(0,uVar4);
                        }
                        iVar3 = FUN_00411810();
                        if ((DAT_004b2940 == 0) && (iVar3 != 0)) {
                          bVar12 = *(int *)(iVar3 + 0x1c) == 0x18;
LAB_00410c6e:
                          if (bVar12) goto LAB_00410f5a;
                        }
LAB_00410c74:
                        FUN_00406080(s_current_004b2640);
                      }
                    }
                  }
                }
                else {
                  if (DAT_004d79ec != 0) goto LAB_00410f62;
                  DAT_004d79ec = 1;
                  DAT_00ec83c8 = 1;
                }
              }
              else {
                if (DAT_004d79ec != 0) goto LAB_00410f62;
                DAT_004d79ec = 1;
                iVar3 = FUN_00450b30(0x4a646765,0);
                if (iVar3 != 0) {
                  FUN_00440550(0x46);
                  if (DAT_0050ca18 < 2) {
                    iVar5 = *(int *)(iVar3 + 0x124) + 1;
                    *(int *)(iVar3 + 0x124) = iVar5;
                    if (4 < iVar5) {
                      *(undefined4 *)(iVar3 + 0x124) = 0;
                    }
                  }
                  else {
                    iVar5 = *(int *)(iVar3 + 0x124) + 1;
                    *(int *)(iVar3 + 0x124) = iVar5;
                    if (7 < iVar5) {
                      *(undefined4 *)(iVar3 + 0x124) = 4;
                    }
                  }
                }
              }
            }
            else {
              if (DAT_004d79ec != 0) goto LAB_00410f62;
              DAT_004d79ec = 1;
              DAT_00ec83d0 = 0x63636634;
              if (((*(int *)(DAT_0050c454 + 8) == 7) &&
                  ((iVar3 = FUN_00485880(0x2a,0), iVar3 != 0 ||
                   (iVar3 = FUN_00485880(0x36,0), iVar3 != 0)))) &&
                 (iVar3 = FUN_00485880(5,0), iVar3 != 0)) {
                DAT_00e35a98 = DAT_00e35a98 + 1000;
              }
            }
          }
          else {
            if (DAT_004d79ec != 0) goto LAB_00410f62;
            DAT_004d79ec = 1;
            DAT_00ec83d0 = 0x63636633;
          }
        }
        else {
          if (DAT_004d79ec != 0) goto LAB_00410f62;
          DAT_004d79ec = 1;
          DAT_00ec83d0 = 0x63636632;
        }
      }
      else {
        if (DAT_004d79ec != 0) goto LAB_00410f62;
        DAT_004d79ec = 1;
        DAT_00ec83d0 = 0x63636631;
      }
    }
    else {
      if (DAT_004d79ec != 0) goto LAB_00410f62;
      DAT_004d79ec = 1;
      FUN_0044b530();
      FUN_00440550(0x2d);
    }
  }
  else {
    if (DAT_004d79ec != 0) goto LAB_00410f62;
    DAT_004d79ec = 1;
    FUN_0044b5e0();
    FUN_00440550(0xffffffff);
  }
LAB_00410f5a:
  if (DAT_004d79ec == 0) {
    return;
  }
LAB_00410f62:
  if (DAT_004d78d0 != '\0') {
    FUN_0044fce0(&DAT_004d78d0,0x40000000);
    DAT_004d78d0 = '\0';
    _DAT_004d5564 = 0x40066666;
  }
  iVar3 = DAT_00e35a98;
  if ((iVar2 != DAT_00e35a98) && (iVar3 = iVar2, DAT_00ec83cc < 5000)) {
    DAT_00ec83cc = DAT_00ec83cc + 1000;
    return;
  }
  DAT_00e35a98 = iVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00410fd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float local_8;

  DAT_004d87c4 = FUN_0048bee0(0x100);
  if (DAT_004d87c4 != 0) {
    puVar1 = &DAT_004d8210;
    for (iVar3 = 0x15c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puVar1 = &DAT_004d7c68;
    for (iVar3 = 0x12a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    PTR_DAT_004b5d74 = (undefined *)&DAT_004d8210;
    puVar1 = &DAT_004d8160;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    FUN_004117e0();
    _DAT_004d8204 = DAT_00ec87c0;
    _DAT_004d8200 = DAT_00ec87c4;
    FUN_00416cc0(DAT_00ec87c0,DAT_00ec87c4,&DAT_004d79f4,&DAT_004d7c58);
    puVar1 = &DAT_00e9d9dc;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
    } while ((int)puVar1 < 0xe9ec5c);
    *(code **)(PTR_DAT_004b5d74 + 0x10) = FUN_00415850;
    FUN_00414e60(PTR_DAT_004b5d74,1);
    local_8 = 0.0;
    iVar3 = (**(code **)(DAT_00ecc420 + 0x2c))();
    iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    while (iVar2 == iVar3) {
      iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    }
    iVar3 = (**(code **)(DAT_00ecc420 + 0x2c))();
    do {
      iVar2 = 0x9c4;
      do {
        local_8 = local_8 - -1.0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = (**(code **)(DAT_00ecc420 + 0x2c))();
    } while ((uint)(iVar2 - iVar3) < 0x1f);
    if (local_8 * 0.0004 < 20.0) {
      DAT_004d8bd8 = 0;
    }
    return 1;
  }
  return 0;
}



void FUN_00411120(undefined4 param_1,undefined4 param_2)

{
  FUN_0041aa40(PTR_DAT_004b5d74,param_1,param_2);
  return;
}



undefined4 FUN_00411140(int param_1,int param_2)

{
  if (((param_2 != 0) && (DAT_004d8bd4 != 0)) && (*(int *)(DAT_004d8bd4 + 0x1c) == param_1)) {
    return 1;
  }
  return 0;
}



void FUN_00411170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined local_100 [256];

  if (param_5 == 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0388__sQuit_004b5d90);
  }
  else if (param_5 == 1) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0034__sCancel_004b2670);
  }
  else {
    if (param_5 != 2) goto LAB_004111ca;
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0371__sBack_004b5dac);
  }
  FUN_0049eb80(local_100,uVar1);
LAB_004111ca:
  FUN_004132a0(param_1,param_2,6,local_100,param_3,param_4,0xb4,0x19,0x1020000,0);
  return;
}



void FUN_00411210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  FUN_00417150(0x3f8,&local_10);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0372__sOK_004b5dc8,param_2,param_3,local_8 - local_10,
                       local_4 - local_c,0x200000,0);
  FUN_004132a0(param_1,2,6,uVar1);
  return;
}



void FUN_00411270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0390__sRestore_004b5de0,DAT_00e99738);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0390__sRestore_004b5de0,DAT_00e99738);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0390__sRestore_004b5de0,param_2,param_3,0x96,0x19,0x100000,0);
  FUN_004132a0(param_1,0x26,6,uVar1);
  return;
}



void FUN_004112e1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004b7e7e);
  FUN_00411361();
  return;
}



void FUN_004112f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_00421360(s__MONDOTEXT_H_0389__sDefault_004b5dfc,DAT_00e99738);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0389__sDefault_004b5dfc,DAT_00e99738);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0389__sDefault_004b5dfc,param_2,param_3,0x96,0x19,0x100000,0);
  FUN_004132a0(param_1,0x25,6,uVar1);
  return;
}



void FUN_00411361(void)

{
  FUN_00421d90();
  FUN_00423efd();
  return;
}



void FUN_00411370(void)

{
  undefined4 uVar1;

  uVar1 = FUN_00411480(0);
  FUN_00414e60(uVar1);
  return;
}



void FUN_00411390(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((((param_3 & 2) == 0) || ((param_3 & 8) == 0)) &&
       (((param_3 & 1) == 0 || ((param_3 & 4) == 0)))) {
      if ((param_3 & 2) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_2 + 0x28));
      }
      if ((param_3 & 8) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_1 + 0x24),
                     (*(int *)(param_2 + 0x30) - *(int *)(param_1 + 0x30)) +
                     *(int *)(param_1 + 0x28));
      }
      if ((param_3 & 1) != 0) {
        FUN_00414b60(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0x28));
      }
      if ((param_3 & 4) != 0) {
        FUN_00414b60(param_1,(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x2c)) +
                             *(int *)(param_2 + 0x2c),*(undefined4 *)(param_1 + 0x28));
      }
    }
  }
  return;
}



void FUN_00411440(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (param_3 != 0) {
      iVar2 = (iVar2 - *(int *)(param_1 + 0x30)) + 0x1df >> 1;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (param_2 != 0) {
      iVar1 = (iVar1 - *(int *)(param_1 + 0x2c)) + 0x27f >> 1;
    }
    FUN_00414b60(param_1,iVar1,iVar2);
  }
  return;
}



undefined * FUN_00411480(void)

{
  return PTR_DAT_004b5d74;
}



void FUN_00411490(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  }
  return;
}



void FUN_004114b0(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x100;
  }
  return;
}



undefined4 FUN_004114d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined auStack_14 [2];
  byte bStack_12;
  undefined4 uStack_f;
  ushort uStack_8;
  undefined2 uStack_6;
  byte bStack_4;

  puVar7 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar1 == 0) goto switchD_00411664_caseD_4;
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,auStack_14,0x12);
  puVar7 = (undefined4 *)FUN_0049f270(0x14);
  if (puVar7 == (undefined4 *)0x0) goto LAB_004116d2;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar4 = (undefined4 *)FUN_0049f270(8);
  if (puVar4 == (undefined4 *)0x0) {
switchD_00411664_caseD_4:
    if (puVar7 != (undefined4 *)0x0) {
      FUN_0049f200(puVar7);
    }
LAB_004116d2:
    if (puVar4 != (undefined4 *)0x0) {
      FUN_0049f200(puVar4);
    }
    if (iVar5 != 0) {
      FUN_0049f200(iVar5);
    }
    if (iVar1 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    }
    return 0;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  if (uStack_f._2_1_ < 9) {
    iVar5 = 1;
  }
  else if (uStack_f._2_1_ < 0x11) {
    iVar5 = 2;
  }
  else {
    iVar5 = (0x18 < uStack_f._2_1_) + 3;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,(uStack_f & 0xffff) * iVar5,1);
  uVar8 = CONCAT12(bStack_4,uStack_6) & 0xffff;
  if (bStack_4 < 9) {
    iVar6 = 1;
  }
  else if (bStack_4 < 0x11) {
    iVar6 = 2;
  }
  else {
    iVar6 = (0x18 < bStack_4) + 3;
  }
  iVar2 = iVar6 * uVar8 * (uint)uStack_8;
  iVar5 = FUN_0049f270(iVar2);
  if (bStack_12 < 9) {
    (**(code **)(DAT_00ecc420 + 0x38))(iVar1,iVar5,iVar2);
  }
  else {
    FUN_00418700(iVar1,iVar5,iVar6,uVar8 * uStack_8);
  }
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  puVar7[4] = puVar4;
  *(ushort *)puVar7 = uStack_8;
  *(undefined2 *)((int)puVar7 + 2) = uStack_6;
  *(undefined2 *)(puVar7 + 3) = 1;
  *(undefined2 *)((int)puVar7 + 0xe) = uStack_6;
  puVar7[2] = 0;
  *(undefined *)(puVar7 + 1) = 5;
  switch(iVar6) {
  case 1:
    *(undefined *)((int)puVar7 + 5) = 1;
    break;
  case 2:
    *(undefined *)((int)puVar7 + 5) = 2;
    break;
  case 3:
    *(undefined *)((int)puVar7 + 5) = 7;
    break;
  case 4:
    *(undefined *)((int)puVar7 + 5) = 3;
    break;
  default:
    goto switchD_00411664_caseD_4;
  }
  puVar4[1] = iVar5;
  *(ushort *)puVar4 = uStack_8;
  *(undefined2 *)((int)puVar4 + 2) = uStack_6;
  uVar3 = FUN_004188b0(puVar7,iVar6);
  FUN_00416fd0(uVar3,param_2,1);
  return uVar3;
}



undefined4 FUN_00411720(void)

{
  return DAT_004d87c8;
}



void FUN_00411730(undefined4 param_1)

{
  DAT_004d87bc = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00411740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _DAT_004d79f0 = param_1;
  _DAT_004d7c4c = param_2;
  DAT_004d8788 = param_3;
  DAT_004d8780 = param_4;
  return;
}



void FUN_00411770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_004d8168;
  do {
    if (*piVar1 == 0) {
      (&DAT_004d8168)[iVar2 * 4] = param_1;
      (&DAT_004d8160)[iVar2 * 4] = param_2;
      (&DAT_004d8164)[iVar2 * 4] = param_2;
      (&DAT_004d816c)[iVar2 * 4] = param_3;
      return;
    }
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4d8208);
  return;
}



void FUN_004117b0(int param_1)

{
  undefined4 *puVar1;

  puVar1 = &DAT_004d8160;
  do {
    if (puVar1[3] == param_1) {
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 0;
    }
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x4d8200);
  return;
}



void FUN_004117e0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004d8110;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d87a4 = 0;
  return;
}



undefined4 FUN_00411800(void)

{
  return DAT_004d87a4;
}



undefined4 FUN_00411810(void)

{
  return (&DAT_004d8110)[DAT_004d87a4];
}



void FUN_00411820(int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_00414d90(0,param_1);
  }
  if (DAT_004d8bd4 != iVar2) {
    if ((&DAT_004d8110)[DAT_004d87a4] != 0) {
      FUN_00414e60((&DAT_004d8110)[DAT_004d87a4],0);
    }
    DAT_004d8bd4 = (&DAT_004d8110)[DAT_004d87a4];
    if (DAT_004d87a4 < 0x14) {
      DAT_004d87a4 = DAT_004d87a4 + 1;
    }
    uVar1 = DAT_004d87a4;
    if ((param_1 != 0) && ((&DAT_004d8110)[DAT_004d87a4] = iVar2, iVar2 != 0)) {
      FUN_004151a0(iVar2,0x46,uVar1,0);
      DAT_004d8be4 = 0;
      return;
    }
    FUN_004118b0(0);
  }
  return;
}



void FUN_004118b0(void)

{
  if ((&DAT_004d8110)[DAT_004d87a4] != 0) {
    FUN_004151a0((&DAT_004d8110)[DAT_004d87a4],0x47,DAT_004d87a4,0);
  }
  DAT_004d8bd4 = (&DAT_004d8110)[DAT_004d87a4];
  DAT_004d8be4 = 0;
  if (DAT_004d87a4 != 0) {
    DAT_004d87a4 = DAT_004d87a4 + -1;
  }
  if ((&DAT_004d8110)[DAT_004d87a4] != 0) {
    FUN_004151a0((&DAT_004d8110)[DAT_004d87a4],0x46,DAT_004d87a4,0);
  }
  return;
}



void FUN_00411910(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00416890(param_2);
    *(undefined4 *)(param_2 + 0x14) = 0;
    FUN_00414e60(param_2,1);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_00416840(param_1,param_2);
  }
  return;
}



undefined4 FUN_00411950(void)

{
  int iVar1;
  undefined4 uVar2;

  FUN_00412650();
  iVar1 = FUN_00413130(0,0,5,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0373__sSettings_004b6090,0,0x15e,200,0x19,0x10000,0);
    FUN_004132a0(iVar1,0xf,6,uVar2);
    FUN_00411170(iVar1,4,0,0x186,2);
  }
  iVar1 = FUN_00413130(0,0,0x30d51,0);
  if (iVar1 != 0) {
    FUN_00411170(iVar1,4,0,0x1a4,2);
    FUN_00411210(iVar1,0x208,0x17c);
  }
  iVar1 = FUN_00413130(0,0,0xb,FUN_00401000);
  if (iVar1 != 0) {
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0374__sSingle_Playe_004b6060,0x96,0x96,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0xe,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0375__sSingle_Playe_004b6034,0x96,0xbe,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0xc,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0376__sMultiplayer_004b6014,0x96,0xe6,0x154,0x19,0x100000,0)
    ;
    FUN_004132a0(iVar1,0xd,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0373__sSettings_004b6090,0,0x15e,0xb4,0x19,0x10000,0);
    FUN_004132a0(iVar1,0xf,6,uVar2);
    FUN_00411170(iVar1,0x10,0,0x186,0);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0504__s_LucasArts_E_004b5f94,0x140,0x1d6,0x10000,0);
    FUN_004131c0(iVar1,1,4,uVar2);
    FUN_004131c0(iVar1,10000,4,s__c_sMark_H_H__004b5f84,0x2e,0x8a,0,0);
    FUN_004131c0(iVar1,0x2711,4,s__c_sJon_004b5f7c,0x55,200,0,0);
    FUN_004131c0(iVar1,0x2712,4,s__c_sJustin_004b5f70,0x77,0x81,0,0);
    FUN_004131c0(iVar1,0x2713,4,s__c_sPaul_T__004b5f64,0x8d,0x59,0,0);
    FUN_004131c0(iVar1,0x2714,4,s__c_sEric_004b5f58,0x91,0xd8,0,0);
    FUN_004131c0(iVar1,0x2715,4,s__c_sBrett_004b5f4c,0xba,0xbf,0,0);
    FUN_004131c0(iVar1,0x2716,4,s__c_sPaul_Z__004b5f40,200,0x5f,0,0);
    FUN_004131c0(iVar1,0x2717,4,s__c_sJacob_004b5f34,0xdd,0xcd,0,0);
    FUN_004131c0(iVar1,0x2718,4,s__c_sLisa_004b5f28,0xee,0x68,0,0);
    FUN_004131c0(iVar1,0x2719,4,s__c_sSun_Inn_004b5f1c,0x10c,0x91,0,0);
    FUN_004131c0(iVar1,0x271a,4,s__c_sArmando_004b5f10,0x10f,0x5d,0,0);
    FUN_004131c0(iVar1,0x271b,4,s__c_sDuncan_004b5f04,0x122,0xd9,0,0);
    FUN_004131c0(iVar1,0x271c,4,s__c_sChristina_004b5ef4,0x135,0x6b,0,0);
    FUN_004131c0(iVar1,0x271d,4,s__c_sCamela_004b5ee8,0x15b,199,0,0);
    FUN_004131c0(iVar1,0x271e,4,s__c_sMark_B__004b5edc,0x167,0x55,0,0);
    FUN_004131c0(iVar1,0x271f,4,s__c_sJapeth_004b5ed0,0x17c,0xb2,0,0);
    FUN_004131c0(iVar1,0x2720,4,s__c_sDino_004b5ec4,0x18a,0xcb,0,0);
    FUN_004131c0(iVar1,0x2721,4,s__c_sLivia_004b5eb8,0x19c,0x5d,0,0);
    FUN_004131c0(iVar1,0x2722,4,s__c_sDarren_004b5eac,0x1b9,0x77,0,0);
    FUN_004131c0(iVar1,0x2723,4,s__c_sClint_004b5ea0,0x1c6,0xc2,0,0);
    FUN_004131c0(iVar1,0x2724,4,s__c_sAmit_004b5e94,0x1d2,0x5c,0,0);
    FUN_004131c0(iVar1,0x2725,4,s__c_sJim_004b5e8c,0x1fe,0xb7,0,0);
    FUN_004131c0(iVar1,0x2726,4,s__c_sBrad_004b5e80,0x207,0x5a,0,0);
    FUN_004131c0(iVar1,0x2727,4,s__c_sBill_004b5e74,0x234,0xd5,0,0);
    FUN_004131c0(iVar1,0x2728,4,s__c_sNathan_004b5e68,0x23c,0x55,0,0);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0524__sThe_Team_004b5e48,0x140,0x3c,0x10000,0);
    FUN_004131c0(iVar1,0x2729,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0544__s__004b5e30,0x12a,0x12,0,0);
    FUN_004131c0(iVar1,0x272a,4,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0545__s__004b5e18,0x127,0x46,0,0);
    FUN_004131c0(iVar1,0x272b,4,uVar2);
  }
  iVar1 = FUN_00413130(0,0,0x2736,&DAT_00401340);
  if (iVar1 != 0) {
    FUN_00410230(iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x15,&LAB_00401960);
  if (iVar1 != 0) {
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0292__sVIDEO_SETTIN_004b5418,0x96,100,0x154,0x19,0x100000,0)
    ;
    FUN_004132a0(iVar1,0x1d,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0305__sAUDIO_SETTIN_004b560c,0x96,0x8c,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0x1e,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0249__sJOYSTICK_SET_004b5204,0x96,0xbe,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0x1f,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0250__sMOUSE_SETTIN_004b522c,0x96,0xe6,0x154,0x19,0x100000,0
                        );
    FUN_004132a0(iVar1,0x20,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0251__sKEYBOARD_SET_004b52e8,0x96,0x10e,0x154,0x19,0x100000,
                         0);
    FUN_004132a0(iVar1,0x21,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0314__sFORCE_FEEDBA_004b57fc,0x96,0x136,0x154,0x19,0x100000,
                         0);
    FUN_004132a0(iVar1,0x22,6,uVar2);
    uVar2 = FUN_00421360(s__MONDOTEXT_H_0340__sLOAD_SAVE_SE_004b5b88,0x96,0x168,0x154,0x19,0x100000,
                         0);
    FUN_004132a0(iVar1,0x23,6,uVar2);
    FUN_00411170(iVar1,4,0,400,2);
  }
  iVar1 = FUN_00413130(0,0,0x2730,&LAB_00401af0);
  if (iVar1 != 0) {
    FUN_0040ffe0(iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x18,&LAB_00402250);
  if (iVar1 != 0) {
    FUN_0040c7a0(iVar1);
    FUN_0040b740(0,iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x19,&LAB_00402250);
  if (iVar1 != 0) {
    FUN_0040d2c0(iVar1);
    FUN_0040b740(1,iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x1a,&LAB_00402250);
  if (iVar1 != 0) {
    FUN_0040dd10(iVar1);
    FUN_0040b740(2,iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x16,&LAB_004030f0);
  if (iVar1 != 0) {
    FUN_0040e6a0(iVar1);
    FUN_0040bbf0(iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x17,&LAB_00403430);
  if (iVar1 != 0) {
    FUN_0040ea70(iVar1);
    FUN_0040bc80(iVar1,1);
  }
  iVar1 = FUN_00413130(0,0,0x1b,&LAB_004039a0);
  if (iVar1 != 0) {
    FUN_0040ef40(iVar1);
    FUN_0040c100(iVar1);
  }
  iVar1 = FUN_00413130(0,0,0x1c,&LAB_00403d70);
  if (iVar1 != 0) {
    FUN_0040fb50(iVar1);
  }
  FUN_0041e9b0();
  FUN_004121f0();
  return 1;
}



void FUN_004121f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar1 = FUN_00413130(0,0,0x81,&LAB_004191f0);
  if (iVar1 != 0) {
    local_10 = 0x28;
    local_c = 0x3c;
    local_8 = 0x5e;
    local_4 = 0x77;
    uVar2 = FUN_00413b90(iVar1,700000,&local_10,0,0,&LAB_004191f0,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x217;
    local_c = 0x3c;
    local_8 = 0x24d;
    local_4 = 0x77;
    uVar2 = FUN_00413b90(iVar1,0xaae61,&local_10,0,0,&LAB_004191f0,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
  }
  iVar1 = FUN_00413130(0,0,0x82,&LAB_00419390);
  if (iVar1 != 0) {
    local_10 = 0x28;
    local_c = 0x53;
    local_8 = 0x5e;
    local_4 = 0x8e;
    uVar2 = FUN_00413b90(iVar1,0xaae62,&local_10,0,0,&LAB_00419390,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x217;
    local_c = 0x53;
    local_8 = 0x24d;
    local_4 = 0x8e;
    uVar2 = FUN_00413b90(iVar1,0xaae63,&local_10,0,0,&LAB_00419390,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x28;
    local_c = 0x96;
    local_8 = 99;
    local_4 = 0xcc;
    uVar2 = FUN_00413b90(iVar1,0xaae64,&local_10,0,0,&LAB_00419390,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x28;
    local_c = 0x104;
    local_8 = 99;
    local_4 = 0x13a;
    uVar2 = FUN_00413b90(iVar1,0xaae65,&local_10,0,0,&LAB_00419390,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
  }
  FUN_00413130(0,0,0x83,&LAB_004194c0);
  FUN_00413130(0,0,0x84,&LAB_00419570);
  iVar1 = FUN_00413130(0,0,0x85,&LAB_00419700);
  if (iVar1 != 0) {
    local_10 = 0x28;
    local_c = 0x1b;
    local_8 = 0x5e;
    local_4 = 0x56;
    uVar2 = FUN_00413b90(iVar1,0xaae66,&local_10,0,0,&LAB_00419700,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x217;
    local_c = 0x1b;
    local_8 = 0x24d;
    local_4 = 0x56;
    uVar2 = FUN_00413b90(iVar1,0xaae67,&local_10,0,0,&LAB_00419700,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
  }
  iVar1 = FUN_00413130(0,0,0x85,&LAB_00419770);
  if (iVar1 != 0) {
    local_10 = 0x28;
    local_c = 0x1b;
    local_8 = 0x5e;
    local_4 = 0x56;
    uVar2 = FUN_00413b90(iVar1,0xaae68,&local_10,0,0,&LAB_00419770,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
    local_10 = 0x217;
    local_c = 0x1b;
    local_8 = 0x24d;
    local_4 = 0x56;
    uVar2 = FUN_00413b90(iVar1,0xaae69,&local_10,0,0,&LAB_00419770,0);
    FUN_00413090(uVar2,0,0xff,0xff,0xff,0);
  }
  FUN_00413130(0,0,0x88,&LAB_00419620);
  FUN_00413130(0,0,0x89,&LAB_004196b0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412630(void)

{
  _DAT_004c0014 = 0x41f00000;
  return;
}



void FUN_00412640(undefined4 param_1)

{
  DAT_004d87a0 = param_1;
  return;
}


#endif
