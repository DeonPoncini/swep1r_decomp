#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00406cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  byte bVar7;
  char *pcVar8;
  undefined4 uVar9;
  float local_1a4;
  int local_1a0;
  uint local_198;
  int local_194;
  undefined local_190;
  undefined4 local_18f;
  undefined4 local_188;
  int local_184;
  undefined local_180 [64];
  undefined local_140 [64];
  undefined local_100 [256];
  
  bVar1 = false;
  local_194 = 0;
  local_1a0 = -1;
  local_190 = DAT_004d55cc;
  local_18f = 0;
  local_1a4 = 0.0;
  bVar7 = 0;
  FUN_00414af0(param_3,local_140,0x40);
  FUN_00414ab0(param_3,&DAT_004b4270,0);
  if (param_2 == 0) {
    uVar9 = 0x18;
  }
  else if (param_2 == 1) {
    uVar9 = 0x19;
  }
  else {
    uVar9 = 0x1a;
  }
  uVar9 = FUN_00414d90(0,uVar9);
  local_184 = 10;
  DAT_004d6510 = 0;
  do {
    if (local_1a4 == _DAT_004ac308) {
      if (param_2 == 0) {
        if (param_1 == 0) {
          pcVar8 = s__MONDOTEXT_H_0219__f4_nPress_new_004b41d4;
        }
        else {
          pcVar8 = s__MONDOTEXT_H_0218__f4_nMove_axis_004b4220;
        }
      }
      else if (param_2 == 1) {
        if (param_1 == 0) {
          pcVar8 = s__MONDOTEXT_H_0220__f4_nPress_new_004b4198;
        }
        else {
          pcVar8 = s__MONDOTEXT_H_0218__f4_nMove_axis_004b4220;
        }
      }
      else {
        if (param_2 != 2) goto LAB_00406df7;
        pcVar8 = s__MONDOTEXT_H_0221__f4_nPress_new_004b4160;
      }
      uVar2 = FUN_00421360(pcVar8,0x40000000);
      FUN_0044fce0(uVar2);
      local_1a4 = 1.7;
    }
    else {
      local_1a4 = local_1a4 - (float)_DAT_00e22a40;
      if (local_1a4 < _DAT_004ac308) {
        local_1a4 = 0.0;
      }
    }
LAB_00406df7:
    FUN_0048db60();
    FUN_00489bc0();
    FUN_00404dd0();
    FUN_00445980(0,2);
    FUN_00415020(0);
    if (DAT_004d6510 == 0) {
      DAT_004d6510 = DAT_004d6b4c;
    }
    else if (local_184 == 0) {
      iVar3 = FUN_00407f80(param_2);
      if ((iVar3 != 0) ||
         ((DAT_004d6b44 != 0 && (((param_1 != 0 && (DAT_004d55d4 == 0)) || (1 < param_2)))))) {
        FUN_00414ab0(param_3,local_140,0);
        uVar2 = FUN_00421360(s__MONDOTEXT_H_0222__nCancelled__004b3ef0,0x40000000);
        FUN_0044fce0(uVar2);
        bVar7 = 3;
        goto LAB_004074c3;
      }
      if (param_1 == 0) {
        iVar3 = FUN_00405dd0(param_2,0);
        if (iVar3 == 0xffff) goto LAB_004074c8;
        if ((param_2 != 2) && (iVar3 == 1)) {
          bVar7 = 1;
        }
        iVar4 = FUN_004079f0(param_2,iVar3,0,&local_188);
        if (iVar4 < 0) {
LAB_0040701a:
          iVar4 = FUN_004078a0(param_2,param_4,param_5,0,0,iVar3);
          if (iVar4 == 0) {
            (**(code **)(DAT_00ecc420 + 0x18))
                      (s_elfControl_ReplaceMapping_cid__f_004b404c,
                       s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x6f8);
          }
          if (param_2 == 2) {
            uVar2 = FUN_00407b00(iVar3,0);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = &DAT_004b2304;
          }
          else if (iVar3 < 0x10) {
            uVar2 = FUN_00407b00(iVar3,&DAT_004b2b28);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar2);
          }
          else {
            uVar2 = FUN_00407b00(iVar3,&DAT_004b2b28);
            uVar2 = FUN_00421360(uVar2);
            puVar6 = &DAT_004b2304;
          }
          FUN_0049eb80(local_100,puVar6,uVar2);
          FUN_00414ab0(param_3,local_100,0);
          bVar7 = bVar7 | 6;
        }
        else {
          uVar2 = FUN_00407d90(iVar4,local_188);
          uVar2 = FUN_00421360(uVar2);
          iVar4 = FUN_0049ec50(uVar2,param_4);
          if (iVar4 == 0) {
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
          }
          else {
            if (param_2 == 2) {
              uVar5 = FUN_00407b00(iVar3,0);
              uVar5 = FUN_00421360(uVar5);
              puVar6 = &DAT_004b2304;
            }
            else {
              uVar5 = FUN_00407b00(iVar3,&DAT_004b2b28);
              uVar5 = FUN_00421360(uVar5);
              puVar6 = (undefined *)FUN_00421360(s__MONDOTEXT_H_0213_BUTTON__s_004b3ed0,uVar5);
            }
            FUN_0049eb80(local_180,puVar6,uVar5);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0223__s_already_ass_004b4108,local_180,uVar2,param_4
                                );
            FUN_0049eb80(local_100,uVar2);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0033__sNo_004b20b0,0,1);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0032__sYes_004b2098,uVar2);
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0224_Conflict_Detec_004b40e4,local_100,uVar2);
            iVar4 = FUN_004145b0(uVar9,0xffffffff,0xffffffff,uVar2);
            if (iVar4 == 1) goto LAB_004073b0;
            if (iVar4 != 0xffff) goto LAB_0040701a;
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
          }
        }
      }
      else {
        iVar3 = FUN_00407700(param_2,&local_198);
        if (-1 < iVar3) {
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0016_BRAKE_004b2818);
          iVar4 = FUN_0049ec50(param_4,uVar2);
          if (iVar4 == 0) {
            if ((int)local_198 < 1) {
              if ((int)local_198 < 0) {
                puVar6 = &DAT_004b3bd8;
                goto LAB_00407158;
              }
            }
            else {
              puVar6 = &DAT_004b3ecc;
LAB_00407158:
              FUN_0049eb80(&local_190,puVar6);
            }
            local_194 = 1;
          }
          uVar2 = FUN_00407b00(iVar3,&DAT_004b2af0);
          uVar2 = FUN_00421360(uVar2);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0216__s_s_AXIS_004b3eb0,&local_190,uVar2);
          FUN_0049eb80(local_100,uVar2);
          FUN_00414ab0(param_3,local_100,0);
          local_1a0 = iVar3;
        }
        if ((local_1a0 < 0) || (DAT_004d6b40 == 0)) goto LAB_004074c8;
        iVar3 = FUN_004079f0(param_2,local_1a0,1,&local_188);
        if (-1 < iVar3) {
          uVar2 = FUN_00407d90(iVar3,local_188);
          uVar2 = FUN_00421360(uVar2);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790);
          iVar4 = FUN_0049ec50(uVar2,uVar5);
          if (iVar4 == 0) {
LAB_00407248:
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
            FUN_0049eb80(uVar2,uVar5);
          }
          else {
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
            iVar4 = FUN_0049ec50(uVar2,uVar5);
            if (iVar4 == 0) goto LAB_00407248;
          }
          iVar4 = FUN_0049ec50(uVar2,param_4);
          if (iVar4 == 0) {
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = 2;
            goto LAB_004074c3;
          }
          uVar5 = FUN_00407b00(local_1a0,&DAT_004b2af0);
          uVar5 = FUN_00421360(uVar5);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0228__s_Axis_004b4030,uVar5);
          FUN_0049eb80(local_180,uVar5);
          uVar5 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
          iVar4 = FUN_0049ec50(param_4,uVar5);
          if (iVar4 == 0) {
            uVar5 = FUN_00421360(s__MONDOTEXT_H_0280__sRoll_Left_Ri_004b400c);
LAB_0040730c:
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0223__s_already_ass_004b4108,local_180,uVar2,uVar5);
            FUN_0049eb80(local_100,uVar2);
          }
          else {
            if ((iVar3 != 7) && (uVar5 = param_4, iVar3 != 6)) goto LAB_0040730c;
            uVar2 = FUN_00421360(s__MONDOTEXT_H_0229__s_already_ass_004b3fb4,local_180,param_4);
            FUN_0049eb80(local_100,uVar2);
          }
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0033__sNo_004b20b0,0,1);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0032__sYes_004b2098,uVar2);
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0224_Conflict_Detec_004b40e4,local_100,uVar2);
          iVar3 = FUN_004145b0(uVar9,0xffffffff,0xffffffff,uVar2);
          if ((iVar3 == 1) || (iVar3 == 0xffff)) {
LAB_004073b0:
            FUN_00414ab0(param_3,local_140,0);
            bVar7 = bVar7 | 2;
            goto LAB_004074c3;
          }
        }
        uVar2 = FUN_00421360(s__MONDOTEXT_H_0020_ROLL_LEFT_004b27b0);
        iVar3 = FUN_0049ec50(param_4,uVar2);
        if (iVar3 == 0) {
          uVar2 = FUN_00421360(s__MONDOTEXT_H_0021_ROLL_RIGHT_004b2790,param_5,1,-local_198,
                               local_1a0);
          iVar3 = FUN_004078a0(param_2,uVar2);
          if (iVar3 == 0) {
            (**(code **)(DAT_00ecc420 + 0x18))
                      (s_elfControl_ReplaceMapping_cid__T_004b3f64,
                       s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x741);
          }
          local_194 = 1;
        }
        local_198 = -(uint)(local_194 != 0) & local_198;
        iVar3 = FUN_004078a0(param_2,param_4,param_5,param_1,local_198,local_1a0);
        if (iVar3 == 0) {
          (**(code **)(DAT_00ecc420 + 0x18))
                    (s_elfControl_ReplaceMapping_cid__f_004b3f10,
                     s_D__devel_QA5_pc_gnome_SpecPlat_r_004b40a4,0x746);
        }
        bVar7 = 6;
      }
LAB_004074c3:
      bVar1 = true;
    }
    else {
      local_184 = 0;
    }
LAB_004074c8:
    FUN_00426910();
    FUN_0048dce0();
    FUN_0048dd80();
    FUN_00489ab0();
    if (bVar1) {
      return bVar7;
    }
  } while( true );
}

