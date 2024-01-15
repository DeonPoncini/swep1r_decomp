#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b880(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  int local_50;
  undefined local_40 [64];
  
  if ((byte)DAT_0050c558 == '\0') {
    DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,0xc);
  }
  if (DAT_0050c55c == '\0') {
    _DAT_0050c55c = CONCAT31(DAT_0050c55c_1,2);
  }
  cVar1 = DAT_0050c560;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_0045bee0(param_1,0x25,0xffffffff,0);
    DAT_0050c550 = 0;
    DAT_0050c554 = 0;
    if (*(int *)(param_1 + 0xc) == 0xc) {
      DAT_00e295a0 = 1.0;
    }
    FUN_0043b0b0(param_1);
    if (*(int *)(param_1 + 0xc) != 0xc) {
      FUN_0043b1d0(param_1);
    }
    _DAT_0050c430 = 0xffffffff;
    DAT_0050c560 = '\0';
    _DAT_0050c434 = 0xffffffff;
    _DAT_0050c438 = 0xffffffff;
    iVar2 = FUN_00440bc0(param_1);
    if (iVar2 != 0) {
      iVar2 = (int)DAT_0050c560;
      DAT_0050c560 = DAT_0050c560 + '\x01';
      (&DAT_0050c430)[iVar2] = 0;
    }
    if (*(char *)(param_1 + 0x6c) == '\0') {
      cVar1 = DAT_0050c560 + '\x01';
      (&DAT_0050c430)[DAT_0050c560] = 2;
      if (*(char *)(param_1 + 0x6d) != '\0') goto LAB_0043b9b4;
      DAT_0050c560 = DAT_0050c560 + '\x02';
      (&DAT_0050c430)[cVar1] = 3;
      (&DAT_0050c430)[DAT_0050c560] = 4;
    }
    else {
      uVar3 = FUN_00440af0(param_1,DAT_00e295d0);
      iVar2 = FUN_00440a20(*(undefined *)(param_1 + 0x5e),uVar3);
      cVar1 = DAT_0050c560;
      if (iVar2 == 0) goto LAB_0043b9b4;
      (&DAT_0050c430)[DAT_0050c560] = 1;
    }
    cVar1 = DAT_0050c560 + '\x01';
  }
LAB_0043b9b4:
  DAT_0050c560 = cVar1;
  uVar3 = FUN_00440af0(param_1,DAT_00e295d0);
  cVar1 = FUN_00440a00(*(undefined *)(param_1 + 0x5e),uVar3);
  iVar2 = 0xa0;
  if ((DAT_0050c554 == 0) && (iVar6 = 0, '\0' < DAT_0050c560)) {
    do {
      switch((&DAT_0050c430)[iVar6]) {
      case 0:
        uVar3 = FUN_00421360(s__SCREENTEXT_655__f4_sMirror__004c11d4);
        FUN_0043fce0(param_1,0x1e,iVar2,10,DAT_0050c550,iVar6,uVar3);
        if (*(char *)(param_1 + 0x6e) == '\0') {
          puVar4 = (undefined *)FUN_00421360(s__SCREENTEXT_233__f4_sOFF_004c11a0);
        }
        else {
          puVar4 = (undefined *)FUN_00421360(s__SCREENTEXT_232__f4_sON_004c11bc);
        }
        break;
      case 1:
        if (*(char *)(param_1 + 0x91) == '\x01') {
          uVar3 = FUN_00421360(s__SCREENTEXT_223__f4_sFair_004c1184);
        }
        else if (*(char *)(param_1 + 0x91) == '\x02') {
          uVar3 = FUN_00421360(s__SCREENTEXT_224__f4_sSkilled_004c1164);
        }
        else {
          uVar3 = FUN_00421360(s__SCREENTEXT_225__f4_sWinner_Take_004c113c);
        }
        FUN_0049eb80(local_40,uVar3);
        uVar3 = FUN_00421360(s__SCREENTEXT_222__f4_sWinnings__004c111c);
        FUN_0043fce0(param_1,0x1e,iVar2,10,DAT_0050c550,iVar6,uVar3);
        FUN_0043fce0(param_1,0x55,iVar2,10,DAT_0050c550,iVar6,local_40);
        local_50 = iVar2 + 10;
        uVar3 = FUN_00421360(s__SCREENTEXT_226__f4_s1st_004c1100);
        FUN_0043fce0(param_1,0x2d,local_50,10,DAT_0050c550,iVar6,uVar3);
        uVar3 = FUN_00421360(s__SCREENTEXT_227__f4_s2nd_004c10e4);
        FUN_0043fce0(param_1,0x2d,iVar2 + 0x14,10,DAT_0050c550,iVar6,uVar3);
        uVar3 = FUN_00421360(s__SCREENTEXT_228__f4_s3rd_004c10c8);
        FUN_0043fce0(param_1,0x2d,iVar2 + 0x1e,10,DAT_0050c550,iVar6,uVar3);
        if (cVar1 == '\x04') {
          uVar3 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
          FUN_0043fce0(param_1,0x2d,iVar2 + 0x28,10,DAT_0050c550,iVar6,uVar3);
        }
        iVar5 = 0;
        if (0 < cVar1) {
          do {
            uVar3 = __ftol();
            uVar3 = FUN_00421360(s__f0_r_s_d_004c10bc,uVar3);
            FUN_0049eb80(local_40,uVar3);
            FUN_0043fce0(param_1,0x69,local_50,10,DAT_0050c550,iVar6,local_40);
            iVar5 = iVar5 + 1;
            local_50 = local_50 + 10;
          } while (iVar5 < cVar1);
        }
        goto switchD_0043ba05_caseD_7;
      case 2:
        uVar3 = FUN_00421360(s__f0_s_d_004c10b4,(int)*(char *)(param_1 + 0x8f));
        FUN_0049eb80(local_40,uVar3);
        pcVar8 = s__SCREENTEXT_214__f4_sLaps__004c1098;
        goto LAB_0043bdfd;
      case 3:
        uVar3 = FUN_00421360(s__f0_s_d_004c10b4,DAT_0050c558 & 0xff);
        FUN_0049eb80(local_40,uVar3);
        if ('\x01' < *(char *)(param_1 + 0x70)) {
          uVar3 = FUN_00421360(s__f0_s_d_004c10b4,_DAT_0050c55c & 0xff);
          FUN_0049eb80(local_40,uVar3);
        }
        pcVar8 = s__SCREENTEXT_216__f4_sRacers__004c1078;
        goto LAB_0043bd30;
      case 4:
        if (*(char *)(param_1 + 0x90) == '\x01') {
          uVar3 = FUN_00421360(s__SCREENTEXT_219__f4_sSlow_004c105c);
        }
        else if (*(char *)(param_1 + 0x90) == '\x02') {
          uVar3 = FUN_00421360(s__SCREENTEXT_220__f4_sAverage_004c103c);
        }
        else {
          uVar3 = FUN_00421360(s__SCREENTEXT_221__f4_sFast_004c1020);
        }
        FUN_0049eb80(local_40,uVar3);
        pcVar8 = s__SCREENTEXT_218__f4_sAI_Speed__004c1000;
LAB_0043bd30:
        uVar3 = FUN_00421360(pcVar8);
        FUN_0043fce0(param_1,0x1e,iVar2,10,DAT_0050c550,iVar6,uVar3);
        puVar4 = local_40;
        break;
      case 5:
        iVar2 = iVar2 + 10;
        uVar3 = FUN_00421360(s__SCREENTEXT_231__f4_sDemo_mode__004c0fe0);
        FUN_0043fce0(param_1,0x1e,iVar2,10,DAT_0050c550,iVar6,uVar3);
        if (*(int *)(param_1 + 100) == 0) {
          puVar4 = (undefined *)FUN_00421360(s__SCREENTEXT_233__f4_sOFF_004c11a0);
        }
        else {
          puVar4 = (undefined *)FUN_00421360(s__SCREENTEXT_232__f4_sON_004c11bc);
        }
        break;
      case 6:
        if (*(int *)(param_1 + 0x68) < 0) {
          uVar3 = FUN_00421360(s__SCREENTEXT_234__f4_sOFF_004c0fc4);
          FUN_0049eb80(local_40,uVar3);
        }
        else {
          uVar3 = FUN_00421360(&DAT_004b9584,*(int *)(param_1 + 0x68) + 1);
          FUN_0049eb80(local_40,uVar3);
        }
        pcVar8 = s__f4_sCutscene__004c0fb4;
LAB_0043bdfd:
        uVar3 = FUN_00421360(pcVar8);
        FUN_0043fce0(param_1,0x1e,iVar2,10,DAT_0050c550,iVar6,uVar3);
        puVar4 = local_40;
        break;
      default:
        goto switchD_0043ba05_caseD_7;
      }
      FUN_0043fce0(param_1,0x55,iVar2,10,DAT_0050c550,iVar6,puVar4);
switchD_0043ba05_caseD_7:
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_0050c560);
  }
  if (DAT_0050c554 == 0) {
    uVar3 = 0x40533333;
  }
  else {
    uVar3 = 0xc0533333;
  }
  FUN_00469b90(uVar3);
  if (_DAT_004ac778 < DAT_00e295a0) {
    FUN_00456800(param_1,(int)(char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc],
                 DAT_00e295a0 * (float)_DAT_004ac7c0);
  }
  if ((DAT_0050c554 == 0) &&
     (FUN_00456c70(param_1,(int)*(char *)(param_1 + 0x5d),0x3f000000), DAT_0050c554 == 0)) {
    iVar2 = *(char *)(param_1 + 0x5d) * 0xc;
    if ((*(int *)(&DAT_004bfee8 + iVar2) == -1) || (*(int *)(&DAT_004bfeec + iVar2) == -1)) {
      uVar3 = FUN_00421360(s__c_s___Planet_not_loaded_______004c0ee4);
      FUN_0049eb80(local_40,uVar3);
      FUN_004816b0(0xffffffff,local_40);
      uVar3 = __ftol();
      FUN_004816b0(uVar3);
      uVar3 = __ftol();
      FUN_004816b0(uVar3);
      uVar3 = __ftol();
      FUN_00450530(0xa0,0xcd,uVar3);
    }
    uVar3 = FUN_00440620((int)*(char *)(param_1 + 0x5d));
    uVar3 = FUN_00421360(s__c_s_s_004c0bc0,uVar3);
    FUN_0049eb80(local_40,uVar3);
    FUN_00450530(0xa0,0x25,0,0xffffffff,0,0xffffffff,local_40);
    uVar3 = FUN_0042de10(local_40,0);
    FUN_0042de10(local_40,0,0x26,uVar3);
    uVar3 = __ftol();
    FUN_00440150(uVar3);
    FUN_004403e0(param_1,100,0x37,0x437f0000,0);
    FUN_004403e0(param_1,0xdc,0x37,0x437f0000,3);
    iVar2 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2;
    if (*(float *)(&DAT_00e365f4 + iVar2 * 4) < _DAT_004ac900) {
      iVar2 = (int)(char)(&DAT_00e37404)[iVar2];
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[iVar2 * 0xd]);
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar2 * 0xd],uVar3);
      uVar3 = FUN_00421360(s__f4_c_s_s__s_004c0fa4,uVar3);
      FUN_0049eb80(local_40,uVar3);
      FUN_00450530(100,0x4e,0xffffffa3,0xffffffbe,0x11,0xffffffff,local_40);
      iVar2 = iVar2 + 0x17;
      FUN_004285d0(iVar2,1);
      FUN_00428660(iVar2,0x54,0x55);
      FUN_004286f0(iVar2,0x3f000000,0x3f000000);
      FUN_00428740(iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    }
    iVar2 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2;
    if (*(float *)(&DAT_00e366bc + iVar2 * 4) < _DAT_004ac900) {
      iVar2 = (int)(char)(&DAT_00e37436)[iVar2];
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[iVar2 * 0xd]);
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar2 * 0xd],uVar3);
      uVar3 = FUN_00421360(s__f4_c_s_s__s_004c0fa4,uVar3);
      FUN_0049eb80(local_40,uVar3);
      FUN_00450530(0xdc,0x4e,0xffffffa3,0xffffffbe,0x11,0xffffffff,local_40);
      iVar2 = iVar2 + 0x2e;
      FUN_004285d0(iVar2,1);
      FUN_00428660(iVar2,0xcc,0x55);
      FUN_004286f0(iVar2,0x3f000000,0x3f000000);
      FUN_00428740(iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    }
    iVar2 = (int)(char)(&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
    uVar3 = FUN_00421360(s__SCREENTEXT_529__f4_c_sTrack_Fav_004c0f7c);
    FUN_00450530(0xf0,0x82,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
    uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[iVar2 * 0xd]);
    uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar2 * 0xd],uVar3);
    uVar3 = FUN_00421360(s__f4_c_s_s__s_004c0fa4,uVar3);
    FUN_0049eb80(local_40,uVar3);
    FUN_00450530(0xf0,0x89,0xffffffa3,0xffffffbe,0x11,0xffffffff,local_40);
    FUN_004285d0(iVar2,1);
    FUN_00428660(iVar2,0xd0,0x91);
    FUN_004286f0(iVar2,0x3f800000,0x3f800000);
    FUN_00428740(iVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    if (*(char *)(param_1 + 0x6c) != '\0') {
      uVar3 = FUN_00440af0(param_1,DAT_00e295d0);
      iVar2 = FUN_00440a20(*(undefined *)(param_1 + 0x5e),uVar3);
      if (iVar2 != 0) {
        if (cVar1 == '\x03') {
          pcVar8 = s__SCREENTEXT_527__f4_c_sMust_plac_004c0f40;
        }
        else {
          pcVar8 = s__SCREENTEXT_528__f4_c_sMust_plac_004c0f04;
        }
        uVar3 = FUN_00421360(pcVar8);
        FUN_00450530(0xa0,0x73,0xffffffa3,0xffffffbe,0x11,0xffffffff,uVar3);
      }
    }
    if ((DAT_0050c554 == 0) && (_DAT_004ac764 <= DAT_00e295a0)) {
      puVar7 = &DAT_0050c918;
      do {
        if (DAT_004eb39c == 0) {
          if ((DAT_004d6b48 != 0) &&
             (((iVar2 = FUN_0041d6b0(), iVar2 == 0 || (iVar2 = FUN_0041d6c0(), iVar2 != 0)) &&
              (DAT_00e2a698 == 0)))) {
            FUN_00440550(0x54);
            if (*(char *)(param_1 + 0x6c) == '\0') {
              if (*(char *)(param_1 + 0x6d) == '\0') {
                if (*(char *)(param_1 + 0x70) < '\x02') {
                  if ((*(int *)(param_1 + 100) == 0) || ((byte)DAT_0050c558 != '\x02')) {
                    *(byte *)(param_1 + 0x72) = (byte)DAT_0050c558;
                  }
                  else {
                    *(undefined *)(param_1 + 0x72) = 1;
                  }
                }
                else {
                  *(char *)(param_1 + 0x72) = DAT_0050c55c;
                }
              }
              else {
                *(undefined *)(param_1 + 0x72) = 1;
              }
            }
            else {
              *(undefined *)(param_1 + 0x72) = 0xc;
            }
            FUN_004584a0(param_1,0);
            FUN_0045bee0(param_1,0x24,3,0);
            DAT_0050c554 = 1;
            return;
          }
          if ((DAT_004d6b44 != 0) && (DAT_00e2a698 == 0)) {
            FUN_00440550(0x4d);
            FUN_004584a0(param_1,0);
            FUN_00454d40(param_1,0xc);
            return;
          }
        }
        if ('\x01' < DAT_0050c560) {
          if ((*puVar7 & 0x4000) != 0) {
            DAT_0050c550 = DAT_0050c550 + -1;
            FUN_00440550(0x58);
          }
          if ((*puVar7 & 0x8000) != 0) {
            DAT_0050c550 = DAT_0050c550 + 1;
            FUN_00440550(0x58);
          }
          if (DAT_0050c550 < 0) {
            DAT_0050c550 = DAT_0050c560 + -1;
          }
          if (DAT_0050c560 + -1 < DAT_0050c550) {
            DAT_0050c550 = 0;
          }
        }
        if ('\0' < DAT_0050c560) {
          if ((*puVar7 & 0x20000) != 0) {
            switch((&DAT_0050c430)[DAT_0050c550]) {
            case 0:
              *(bool *)(param_1 + 0x6e) = *(char *)(param_1 + 0x6e) == '\0';
              break;
            case 1:
              *(char *)(param_1 + 0x91) = *(char *)(param_1 + 0x91) + '\x01';
              break;
            case 2:
              *(char *)(param_1 + 0x8f) = *(char *)(param_1 + 0x8f) + '\x01';
              break;
            case 3:
              if (*(char *)(param_1 + 0x70) < '\x02') {
                if ((byte)DAT_0050c558 == '\b') {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,0xc);
                }
                else if ((byte)DAT_0050c558 == '\f') {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,1);
                }
                else {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,(byte)DAT_0050c558 << 1);
                }
              }
              else {
                cVar1 = DAT_0050c55c + '\x02';
                _DAT_0050c55c = CONCAT31(DAT_0050c55c_1,cVar1);
                if (cVar1 == '\b') {
                  _DAT_0050c55c = CONCAT31(DAT_0050c55c_1,2);
                }
              }
              break;
            case 4:
              *(char *)(param_1 + 0x90) = *(char *)(param_1 + 0x90) + '\x01';
              break;
            case 5:
              *(uint *)(param_1 + 100) = (uint)(*(int *)(param_1 + 100) == 0);
              break;
            case 6:
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            }
            FUN_00440550(0x58);
          }
          if ((*puVar7 & 0x10000) != 0) {
            switch((&DAT_0050c430)[DAT_0050c550]) {
            case 0:
              *(bool *)(param_1 + 0x6e) = *(char *)(param_1 + 0x6e) == '\0';
              break;
            case 1:
              *(char *)(param_1 + 0x91) = *(char *)(param_1 + 0x91) + -1;
              break;
            case 2:
              *(char *)(param_1 + 0x8f) = *(char *)(param_1 + 0x8f) + -1;
              break;
            case 3:
              if (*(char *)(param_1 + 0x70) < '\x02') {
                if ((byte)DAT_0050c558 == 0xc) {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,8);
                }
                else if ((byte)DAT_0050c558 == 1) {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,0xc);
                }
                else {
                  DAT_0050c558 = CONCAT31(DAT_0050c558._1_3_,(byte)DAT_0050c558 >> 1);
                }
              }
              else {
                cVar1 = DAT_0050c55c + -2;
                _DAT_0050c55c = CONCAT31(DAT_0050c55c_1,cVar1);
                if (cVar1 == '\0') {
                  _DAT_0050c55c = CONCAT31(DAT_0050c55c_1,6);
                }
              }
              break;
            case 4:
              *(char *)(param_1 + 0x90) = *(char *)(param_1 + 0x90) + -1;
              break;
            case 5:
              *(uint *)(param_1 + 100) = (uint)(*(int *)(param_1 + 100) == 0);
              break;
            case 6:
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
            }
            FUN_00440550(0x58);
          }
        }
        if (*(char *)(param_1 + 0x8f) < '\x01') {
          *(undefined *)(param_1 + 0x8f) = 5;
        }
        if ('\x05' < *(char *)(param_1 + 0x8f)) {
          *(undefined *)(param_1 + 0x8f) = 1;
        }
        if (*(char *)(param_1 + 0x90) < '\x01') {
          *(undefined *)(param_1 + 0x90) = 3;
        }
        if ('\x03' < *(char *)(param_1 + 0x90)) {
          *(undefined *)(param_1 + 0x90) = 1;
        }
        if (*(char *)(param_1 + 0x91) < '\x01') {
          *(undefined *)(param_1 + 0x91) = 3;
        }
        if ('\x03' < *(char *)(param_1 + 0x91)) {
          *(undefined *)(param_1 + 0x91) = 1;
        }
        if (*(int *)(param_1 + 0x68) < -1) {
          *(undefined4 *)(param_1 + 0x68) = 0x14;
        }
        if (0x14 < *(int *)(param_1 + 0x68)) {
          *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
        }
        puVar7 = puVar7 + 1;
      } while ((int)puVar7 < 0x50c91c);
      iVar2 = FUN_0041d6b0();
      if ((iVar2 == 0) || (iVar2 = FUN_0041d6c0(), iVar2 != 0)) {
        DAT_00ea05ac = *(undefined4 *)(&DAT_004bfee8 + *(char *)(param_1 + 0x5d) * 0xc);
        FUN_0041e5a0();
      }
    }
  }
  return;
}

