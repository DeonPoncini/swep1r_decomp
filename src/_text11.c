#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"
#if 0

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043abc0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  char local_109;
  int local_108;
  undefined local_100 [256];

  bVar1 = false;
  local_109 = '\0';
  iVar2 = FUN_0043da90(param_1,DAT_004c4000,0x14);
  if (iVar2 == 0) {
    if (DAT_004c4000 != 0) {
      DAT_004c4000 = 0;
      DAT_0050c544 = 0;
      DAT_0050c548 = 0;
      _DAT_00e99358 = 0xc3960000;
      DAT_0050c470 = 0;
      DAT_0050c954 = 0;
      DAT_0050c934 = 0;
      FUN_0045a840(param_1);
      DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      FUN_0043eb50();
      iVar2 = FUN_00440b50(param_1);
      if (iVar2 == 0) {
        DAT_0050c930 = 5;
      }
      else {
        FUN_0045bee0(param_1,*(undefined4 *)(param_1 + 0x34),0xffffffff,0);
      }
    }
    iVar2 = FUN_00427670(0,0x10);
    if ((iVar2 != 0) && (iVar2 = FUN_00427670(0,0x20), iVar2 != 0)) {
      FUN_004276a0(0,0x20);
      iVar2 = FUN_00427670(0,4);
      if (iVar2 == 0) {
        FUN_00427690(0,4);
        FUN_00427410(2,0,0x35,0);
      }
      else {
        FUN_00427590(2,0,0x1f,0x25,0x2f,0x33,0x37,0);
      }
    }
    FUN_0043ec10(param_1);
    if (*(int *)(param_1 + 0x34) != 3) {
      FUN_004550d0(param_1,0x41a00000,0x43070000);
    }
    if (((DAT_0050c934 == 0) || (DAT_0050c940 != 0)) && (*(int *)(param_1 + 0x34) != 3)) {
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                           [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
      uVar3 = FUN_00421360(s__c_s_s_004c0bc0,uVar3);
      FUN_0049eb80(local_100,uVar3);
      FUN_00450530(0xa0,0x19,0x32,0xffffffff,0xffffffff,0xffffffff,local_100);
      DAT_00e295bc = 1;
      DAT_00e295b8 = 1;
      uVar3 = FUN_0042de10(local_100,0);
      FUN_0042de10(local_100,0,0x1a,uVar3);
      uVar3 = __ftol();
      FUN_00440150(uVar3);
    }
    FUN_0043dba0(param_1);
    FUN_00455dc0(param_1);
    if (((DAT_0050c934 != 0) && (DAT_0050c940 == 0)) && ((DAT_0050c470 == 0 && (DAT_0050c548 == 0)))
       ) {
      DAT_0050c544 = 1;
    }
    if (DAT_0050c544 != 0) {
      DAT_0050c474 = 1;
      DAT_0050c470 = 1;
      DAT_00e99400 = 0;
      DAT_0050c544 = 0;
    }
    if (((DAT_0050c934 != 0) && (DAT_0050c46c == 0)) && (DAT_0050c548 != 0)) {
      DAT_0050c548 = 0;
      FUN_0045c9d0(param_1,0);
    }
    local_108 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      puVar4 = &DAT_0050c908;
      do {
        if (DAT_0050c940 != 0) {
          return;
        }
        if (DAT_0050c468 != 0) {
          return;
        }
        if (DAT_004d6b48 != 0) {
          FUN_00440550(0x54);
          if (DAT_0050c934 == 0) {
            FUN_0045c9d0(param_1,1);
            if (*(int *)(param_1 + 0x34) == 3) {
              DAT_004bfedc = 7;
              DAT_0050c944 = 0xffffffff;
              return;
            }
          }
          else {
            if (DAT_00e99400 == 0) {
              FUN_00440800(param_1);
            }
            DAT_0050c474 = 1;
            DAT_00e99400 = 0;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_0050c468 = -1;
            DAT_0050c548 = 1;
          }
        }
        if ((DAT_004eb39c == 0) && (DAT_004d6b44 != 0)) {
          FUN_00440550(0x4d);
          if (DAT_0050c470 == 0) {
            FUN_00454d40(param_1,3);
          }
          else {
            DAT_0050c474 = 1;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_00e99400 = 0;
            DAT_0050c468 = -1;
            DAT_0050c548 = 1;
          }
        }
        DAT_00e295b4 = 0;
        DAT_00e295b0 = 0;
        if ((DAT_0050c934 == 0) && (DAT_0050c470 == 0)) {
          if ((*puVar4 & 0x10000) != 0) {
            if ((DAT_0050c930 == 5) || (DAT_0050c930 == 0)) {
              local_109 = -1;
            }
            DAT_00e295b0 = 1;
          }
          if ((*puVar4 & 0x20000) != 0) {
            if ((DAT_0050c930 == 5) || (DAT_0050c930 == 0)) {
              local_109 = '\x01';
            }
            DAT_00e295b4 = 1;
          }
        }
        if (local_109 != '\0') {
          FUN_0045bde0(param_1,(short)local_109,1);
          if (*(int *)(param_1 + 0x34) != 3) {
            bVar1 = true;
          }
          FUN_00440550(0x58);
        }
        if (bVar1) {
          DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
          FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                       (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10]
                       ,(int)(char)(&DAT_004c1cb9)
                                   [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                       (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
          FUN_0043eb50();
        }
        puVar4 = puVar4 + 1;
        local_108 = local_108 + 1;
      } while (local_108 < *(char *)(param_1 + 0x70));
      return;
    }
  }
  return;
}



void FUN_0043b0b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  DAT_00e295c8 = 3;
  DAT_00e295cc = 0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (DAT_00e364af == '\0') {
      DAT_00e295c8 = 2;
    }
    iVar1 = (int)*(char *)(param_1 + 0x5e);
    iVar3 = 0;
    if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
      do {
        if (((&DAT_00e364ac)[iVar1] & (byte)(1 << ((byte)iVar3 & 0x1f))) != 0) {
          iVar2 = iVar2 + 1;
          DAT_00e295cc = iVar2;
        }
        iVar1 = (int)*(char *)(param_1 + 0x5e);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
    }
  }
  else {
    if (DAT_00e35a88 == '\0') {
      DAT_00e295c8 = 2;
    }
    iVar1 = (int)*(char *)(param_1 + 0x5e);
    iVar3 = 0;
    if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
      do {
        if (((&DAT_00e35a85)[iVar1] & (byte)(1 << ((byte)iVar3 & 0x1f))) != 0) {
          iVar2 = iVar2 + 1;
          DAT_00e295cc = iVar2;
        }
        iVar1 = (int)*(char *)(param_1 + 0x5e);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
    }
  }
  if ((DAT_004d5e00 != 0) && (*(char *)(param_1 + 0x5e) < '\x03')) {
    iVar2 = (int)(char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)];
    DAT_00e295cc = iVar2;
  }
  if (iVar2 + -1 < DAT_00e295d0) {
    DAT_00e295d0 = iVar2 + -1;
  }
  DAT_00e295c0 = (uint)('\0' < *(char *)(param_1 + 0x5e));
  DAT_00e295c4 = (uint)(*(char *)(param_1 + 0x5e) < DAT_00e295c8);
  return;
}



void FUN_0043b1d0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;

  DAT_00e295d0 = 0;
  iVar3 = 0;
  cVar2 = *(char *)(param_1 + 0x5e);
  iVar1 = (int)cVar2;
  if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
    do {
      if (*(int *)(&DAT_004c0018 + (iVar1 * 7 + iVar3) * 4) == (int)*(char *)(param_1 + 0x5d)) {
        return;
      }
      iVar1 = FUN_00440aa0(param_1,cVar2,iVar3);
      if (iVar1 != 0) {
        DAT_00e295d0 = DAT_00e295d0 + 1;
      }
      cVar2 = *(char *)(param_1 + 0x5e);
      iVar3 = iVar3 + 1;
      iVar1 = (int)cVar2;
    } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
  }
  return;
}



void FUN_0043b240(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined local_100 [256];

  iVar2 = DAT_0050c454;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_0045bee0(DAT_0050c454,0x25,0xffffffff,0);
    DAT_0050c54c = 0;
    if (*(int *)(iVar2 + 0xc) == 0xc) {
      DAT_00e295a0 = 1.0;
    }
    if ((*(int *)(iVar2 + 0xc) == 9) || (*(int *)(iVar2 + 0xc) == 1)) {
      *(undefined *)(iVar2 + 0x5e) = 0;
    }
    FUN_0043b0b0(iVar2);
    iVar3 = *(int *)(iVar2 + 0xc);
    if ((iVar3 == 9) || (iVar3 == 1)) {
      DAT_00e295d0 = 0;
      if (*(char *)(iVar2 + 0x6c) != '\0') {
        iVar3 = FUN_00440a20(*(undefined *)(iVar2 + 0x5e),
                             CONCAT31((int3)((uint)iVar3 >> 8),(char)DAT_00e295cc + -1));
        if (iVar3 != 0) {
          DAT_00e295d0 = DAT_00e295cc + -1;
        }
      }
    }
    else {
      FUN_0043b1d0(iVar2);
    }
    FUN_004584a0(iVar2,1);
    DAT_0050c134 = (&DAT_004bfef1)[*(char *)(iVar2 + 0x5d) * 0xc];
    DAT_0050c17c = *(char *)(iVar2 + 0x5e);
  }
  if (DAT_0050c54c == 0) {
    if (DAT_00e295d4 == DAT_00e295d0) {
      uVar8 = 0x40533333;
      DAT_0050c134 = (&DAT_004bfef1)[*(char *)(iVar2 + 0x5d) * 0xc];
      DAT_0050c17c = *(char *)(iVar2 + 0x5e);
      goto LAB_0043b357;
    }
  }
  else {
    uVar8 = 0xc0533333;
LAB_0043b357:
    FUN_00469b90(uVar8);
  }
  iVar3 = FUN_00440af0(iVar2,DAT_00e295d0);
  *(undefined *)(iVar2 + 0x5d) = (&DAT_004c0018)[(iVar3 + *(char *)(iVar2 + 0x5e) * 7) * 4];
  if (0.0 < DAT_00e295a0) {
    FUN_00456800(iVar2,(int)DAT_0050c134,DAT_00e295a0 * 0.5);
  }
  if (DAT_0050c54c != 0) {
    return;
  }
  iVar3 = *(char *)(iVar2 + 0x5d) * 0xc;
  if ((*(int *)(&DAT_004bfee8 + iVar3) == -1) || (*(int *)(&DAT_004bfeec + iVar3) == -1)) {
    uVar8 = FUN_00421360(s__c_s___Planet_not_loaded_______004c0ee4);
    FUN_0049eb80(local_100,uVar8);
    FUN_004816b0(0xffffffff,local_100);
    uVar8 = __ftol();
    FUN_004816b0(uVar8);
    uVar8 = __ftol();
    FUN_004816b0(uVar8);
    uVar8 = __ftol();
    FUN_00450530(0xa0,0xcd,uVar8);
  }
  uVar8 = FUN_00440620((int)*(char *)(iVar2 + 0x5d));
  uVar8 = FUN_00421360(s__c_s_s_004c0bc0,uVar8);
  FUN_0049eb80(local_100,uVar8);
  FUN_00450530(0xa0,0x36,0,0xffffffff,0,0xffffffff,local_100);
  uVar8 = FUN_0042de10(local_100,0);
  FUN_0042de10(local_100,0,0x37,uVar8);
  uVar8 = __ftol();
  FUN_00440150(uVar8);
  switch(*(undefined *)(iVar2 + 0x5e)) {
  case 0:
    uVar8 = FUN_00421360(s__SCREENTEXT_530__f0_c_sAmateur_P_004c0eb0);
    uVar7 = 0xffffffff;
    uVar6 = 0xffffffff;
    uVar5 = 0x32;
    break;
  case 1:
    uVar8 = FUN_00421360(s__SCREENTEXT_531__f0_c_sSemi_Pro_P_004c0e7c);
    uVar7 = 0x3e;
    uVar6 = 0xffffffff;
    uVar5 = 0x44;
    break;
  case 2:
    uVar8 = FUN_00421360(s__SCREENTEXT_532__f0_c_sGalactic_P_004c0e48);
    uVar7 = 0x11;
    uVar6 = 0xffffffbe;
    uVar5 = 0xffffffa3;
    break;
  case 3:
    uVar8 = FUN_00421360(s__SCREENTEXT_533__f0_c_sInvitatio_004c0e10);
    uVar7 = 0x20;
    uVar6 = 0x59;
    uVar5 = 0xffffff9d;
    break;
  default:
    goto switchD_0043b503_caseD_4;
  }
  FUN_00450530(0xa0,0x22,uVar5,uVar6,uVar7,0xffffffff,uVar8);
switchD_0043b503_caseD_4:
  if (*(char *)(iVar2 + 0x6c) == '\0') {
    if (*(char *)(iVar2 + 0x6d) != '\0') {
      uVar8 = FUN_00421360(s__SCREENTEXT_543__c_sTime_Attack_004c0dd0);
      goto LAB_0043b5c4;
    }
    if (*(char *)(iVar2 + 0x70) == '\x02') {
      uVar8 = FUN_00421360(s__SCREENTEXT_544__c_s2_Player_004c0db0);
      goto LAB_0043b5c4;
    }
    pcVar9 = s__SCREENTEXT_542__c_sFree_Play_004c0d90;
  }
  else {
    pcVar9 = s__SCREENTEXT_541__c_sTournament_004c0df0;
  }
  uVar8 = FUN_00421360(pcVar9);
LAB_0043b5c4:
  FUN_0049eb80(local_100,uVar8);
  FUN_00450530(0xa0,0x18,0x32,0xffffffff,0xffffffff,0xffffffff,local_100);
  FUN_004360e0(iVar2,DAT_0050c17c);
  iVar3 = CONCAT22((short)((uint)unaff_EDI >> 0x10),
                   (short)(char)(&DAT_004bfef1)[*(char *)(iVar2 + 0x5d) * 0xc]) + 0x45;
  FUN_004285d0(iVar3,1);
  FUN_00428660(iVar3,0xa0,0x91);
  FUN_004286f0(iVar3,0x3f800000,0x3f800000);
  FUN_00428740(iVar3,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  FUN_00450530(0xe0,0x8a,0,0xffffffff,0,0xffffffff,
               &DAT_00e98f5c + (char)(&DAT_004bfef1)[*(char *)(iVar2 + 0x5d) * 0xc] * 0x5c);
  FUN_0043fe90(0x2d,0x54,0x1e);
  if (DAT_0050c54c == 0) {
    FUN_00469c30(0,0x3f800000,1);
    puVar4 = &DAT_0050c918;
    do {
      if (DAT_004eb39c == 0) {
        if ((DAT_004d6b48 != 0) &&
           ((iVar3 = FUN_0041d6b0(), iVar3 == 0 || (iVar3 = FUN_0041d6c0(), iVar3 != 0)))) {
          if (DAT_004d5e00 != 0) {
            FUN_004118b0(0);
            return;
          }
          if (DAT_00e2a698 != 0) {
            return;
          }
          FUN_00440550(0x54);
          FUN_004584a0(iVar2,0);
          FUN_00454d40(iVar2,0xd);
          DAT_0050c54c = 1;
          return;
        }
        if ((DAT_004d6b44 != 0) && (DAT_00e2a698 == 0)) {
          if (DAT_004d5e00 != 0) {
            FUN_004118b0(0);
            return;
          }
          FUN_00440550(0x4d);
          iVar3 = FUN_0041d6b0();
          if ((iVar3 != 0) && (iVar3 = FUN_0041d6c0(), iVar3 != 0)) {
            return;
          }
          FUN_004584a0(iVar2,0);
          FUN_00454d40(iVar2,9);
          return;
        }
      }
      cVar1 = *(char *)(iVar2 + 0x5e);
      if (DAT_0050c17c == cVar1) {
        if ((*puVar4 & 0x8000) != 0) {
          if (cVar1 < DAT_00e295c8) {
            *(char *)(iVar2 + 0x5e) = cVar1 + '\x01';
            DAT_00e295d4 = -1;
            FUN_00440550(0x58);
            FUN_0043b0b0(iVar2);
          }
          else {
            FUN_00440550(0x4b);
          }
        }
        if ((*puVar4 & 0x4000) != 0) {
          if (*(char *)(iVar2 + 0x5e) < '\x01') {
            FUN_00440550(0x4b);
          }
          else {
            *(char *)(iVar2 + 0x5e) = *(char *)(iVar2 + 0x5e) + -1;
            DAT_00e295d4 = -1;
            FUN_00440550(0x58);
            FUN_0043b0b0(iVar2);
          }
        }
      }
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x50c91c);
    DAT_00ea02b0 = (int)*(char *)(iVar2 + 0x5d);
    iVar3 = FUN_0041d6b0();
    if ((iVar3 == 0) || (iVar3 = FUN_0041d6c0(), iVar3 != 0)) {
      DAT_00ea05ac = *(undefined4 *)(&DAT_004bfee8 + *(char *)(iVar2 + 0x5d) * 0xc);
      FUN_0041e5a0();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  if (0.0 < DAT_00e295a0) {
    FUN_00456800(param_1,(int)(char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc],
                 DAT_00e295a0 * 0.5);
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
    if (*(float *)(&DAT_00e365f4 + iVar2 * 4) < 3599.99) {
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
    if (*(float *)(&DAT_00e366bc + iVar2 * 4) < 3599.99) {
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
    if ((DAT_0050c554 == 0) && (1.0 <= DAT_00e295a0)) {
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043c6f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined local_c [8];
  float local_4;

  iVar3 = 0;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_00449e50();
    DAT_0050c140 = 0;
    _DAT_0050c564 = 3.0;
    FUN_0045c010(&DAT_004c44dc,&DAT_004c44fc,1,0,0);
    FUN_004816b0();
    DAT_0050c428 = __ftol();
  }
  FUN_00440d50(0,0);
  iVar2 = FUN_00450b30(0x456c6d6f,*(undefined4 *)(param_1 + 0x40));
  fVar1 = *(float *)(iVar2 + 0xbc) * 0.8;
  if (1 < DAT_0050c140) {
    FUN_00469b90(0xc0533333);
  }
  if ((DAT_0050c140 == 3) && (0.0 < _DAT_0050c564)) {
    *(float *)(param_1 + 0x4c) = fVar1 - 60.0;
    FUN_0042f7d0(&DAT_00e2af90,param_1 + 0x44);
    _DAT_0050c564 = _DAT_0050c564 - _DAT_00e22a50;
  }
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      if ((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) {
        FUN_0044b270((&DAT_00e29900)[*(int *)(param_1 + 0x40)],&DAT_004c457c);
        FUN_00466ec0(iVar2,0);
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
        DAT_00e295a0 = 0.0;
        DAT_004bfedc = 9;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(char *)(param_1 + 0x70));
  }
  if (0.0 < DAT_00e295a0) {
    FUN_00456800(param_1,(int)DAT_0050c428,DAT_00e295a0 * 0.4);
  }
  if (DAT_004bfedc != 9) {
    if (((DAT_0050c140 == 0) && (0.0 < _DAT_0050c564)) &&
       (_DAT_0050c564 = _DAT_0050c564 - _DAT_00e22a50, _DAT_0050c564 <= 0.0)) {
      FUN_0045c010(&DAT_004c44dc,&DAT_004c449c,1,0,0);
      DAT_0050c140 = 1;
    }
    if (DAT_0050c930 == 0) {
      if (DAT_0050c140 == 1) {
        FUN_0044afb0((&DAT_00e29900)[*(int *)(param_1 + 0x40)],local_c);
        local_4 = fVar1 - 60.0;
        FUN_0045c010(&DAT_00e298f0,local_c,1,0,0);
        FUN_0042f7d0(iVar2 + 0x50,&DAT_004c451c);
        *(undefined4 *)(iVar2 + 0x54) = 0xc3a00000;
        if (*(int *)(iVar2 + 8) == 1) {
          uVar4 = 6;
        }
        else {
          uVar4 = 0x14;
        }
        FUN_00466ec0(iVar2,uVar4);
        DAT_0050c140 = 2;
      }
      if ((DAT_0050c930 == 0) && (DAT_0050c140 == 2)) {
        _DAT_0050c564 = 5.0;
        DAT_0050c140 = 3;
      }
    }
    if ((_DAT_0050c564 <= 0.0) && (DAT_0050c140 == 3)) {
      FUN_0045c010(&DAT_00e298f0,&DAT_004c449c,1,0,0);
      DAT_0050c140 = 4;
    }
    if (DAT_0050c930 != 0) {
      return;
    }
    if (DAT_0050c140 == 4) {
      FUN_0045c010(&DAT_004c4490,&DAT_00e2af90,1,0,0);
      DAT_0050c140 = 5;
    }
    if (DAT_0050c930 != 0) {
      return;
    }
    if (DAT_0050c140 != 5) {
      return;
    }
  }
  FUN_00454d40(param_1,9);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043ca30(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  undefined local_40 [48];
  undefined local_10 [16];

  iVar1 = param_1;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c110 = 5.0;
    DAT_0050c20c = 0;
    DAT_0050c120 = 0;
    FUN_0044afb0(DAT_00e29970,&DAT_0050c2f8);
    FUN_0042f7d0(&DAT_0050c440,&DAT_0050c2f8);
    _DAT_0050c300 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * 0.6667 - 157.0;
    _DAT_0050c448 = _DAT_004c2788 * 0.6667 - 157.0;
    _DAT_0050c440 = _DAT_0050c440 - -60.0;
    _DAT_0050c444 = _DAT_0050c444 - -70.0;
    FUN_0044afb0(DAT_00e29974,&DAT_0050c128);
    FUN_0042f7d0(&DAT_0050c318,&DAT_0050c128);
    _DAT_0050c130 = _DAT_004c2788 * 0.6667 - 157.0;
    _DAT_0050c320 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * 0.6667 - 157.0;
    _DAT_0050c318 = _DAT_0050c318 - -60.0;
    _DAT_0050c31c = _DAT_0050c31c - 70.0;
    FUN_0042f7b0(&DAT_0050c440,0x43940000,0xc34e0000,0xc2880000);
    FUN_0042f7b0(&DAT_0050c2f8,0xc39d8000,0x43b68000,0xc2a40000);
    FUN_0042f7b0(&DAT_0050c318,0x439d8000,0xc40d8000,0xc28c0000);
    FUN_0042f7b0(&DAT_0050c128,0,0xc42a0000,0xc2880000);
    FUN_0042f7d0(&DAT_00e298f0,&DAT_0050c440);
    FUN_0042f7d0(&DAT_00e2af90,&DAT_0050c128);
  }
  FUN_00426c80(0x1b,7,0x3d4ccccd,0x3f4ccccd,1);
  if (0.0 <= _DAT_0050c110) {
    _DAT_0050c110 = _DAT_0050c110 - _DAT_00e22a50 * 0.5;
    if (_DAT_0050c110 <= 0.0) {
      DAT_0050c944 = 0xffffffff;
    }
  }
  param_1 = 0;
  piVar3 = &DAT_00e2993c;
  pfVar2 = (float *)&DAT_00e99364;
  do {
    if (*piVar3 != 0) {
      pfVar2[-1] = 0.0;
      *pfVar2 = (float)param_1 * -2500.0;
      pfVar2[1] = 50.0;
      if (*(char *)(iVar1 + 0x73) == '\a') {
        DAT_00e99364 = 0x43480000;
      }
      if (*(char *)(iVar1 + 0x73) == '\x11') {
        DAT_00e99364 = 0x43c80000;
      }
      FUN_00431020(local_40,0,0,0);
      FUN_0042f7b0(local_10,pfVar2[-1],*pfVar2,pfVar2[1]);
      FUN_004337e0(*piVar3,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,0x3f800000,
                   0x3f800000);
    }
    pfVar2 = pfVar2 + 10;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)pfVar2 < 0xe993b4);
  if ((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) {
    _DAT_0050c110 = 0.0;
    DAT_0050c944 = 0xffffffff;
  }
  if ((_DAT_0050c110 < 4.5) && (2.75 < _DAT_0050c110)) {
    if (DAT_0050c20c == 0) {
      DAT_0050c20c = 1;
      FUN_00468fe0(0x1d,0x18);
      FUN_00426c80((char)(&DAT_004bfef2)[*(char *)(iVar1 + 0x5d) * 0xc] + 0xb7,7,0x3e800000,
                   0x3f800000,0);
    }
    FUN_00450530(0xa0,200,0x78,0xffffffaa,0xffffffaa,0xffffffff,
                 (&PTR_s__f4_o_cI_could_run_faster_than_y_004c0238)
                 [(char)(&DAT_004bfef2)[*(char *)(iVar1 + 0x5d) * 0xc]]);
  }
  if ((_DAT_0050c110 < 2.5) && (0.25 < _DAT_0050c110)) {
    if (DAT_0050c120 == 0) {
      DAT_0050c120 = 1;
      FUN_00468fe0(0x1c,0x18);
      FUN_0042f7d0(&DAT_00e298f0,&DAT_0050c318);
      FUN_0042f7d0(&DAT_00e2af90,&DAT_0050c2f8);
      FUN_00426c80(DAT_00e35a84 + 0xb7,7,0x3e800000,0x3f800000,0);
    }
    FUN_00450530(0xa0,200,0xffffffaa,0xffffffaa,0,0xffffffff,
                 (&PTR_s__f4_o_cI_could_run_faster_than_y_004c0238)[DAT_00e35a84]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043ceb0(int **param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_68;
  int local_64;
  float local_60;
  undefined local_5c [4];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];

  iVar4 = (int)param_1;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c0d8 = 33.0;
    DAT_0050c178 = '\0';
    pcVar7 = (char *)((int)param_1 + 0x73);
    iVar5 = 3;
    iVar3 = 0;
    do {
      *(undefined4 *)((int)&DAT_0050c200 + iVar3) = *(undefined4 *)(&DAT_004c2720 + *pcVar7 * 0x34);
      iVar2 = FUN_004816b0();
      pcVar7 = pcVar7 + 1;
      iVar5 = iVar5 + -1;
      *(float *)((int)&DAT_0050c1e8 + iVar3) = (float)iVar2 * 4.656613e-10 * 360.0;
      iVar3 = iVar3 + 4;
    } while (iVar5 != 0);
    FUN_0042f7b0(&DAT_00e2af90,0,0,0xc2c80000);
    FUN_0042f7b0(&DAT_00e298f0,0x43960000,0,0xc2c80000);
    FUN_0042f7d0(&DAT_00e2b470,&DAT_00e2af90);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_00e298f0);
    FUN_004276a0(0,0x1000000);
    FUN_004277b0(3,0,*(undefined4 *)(&DAT_004c0298 + *(char *)((int)param_1 + 0x5e) * 4),5,0,
                 (int)*(short *)(&DAT_004c4a68 + *(char *)((int)param_1 + 0xcc) * 2));
  }
  iVar3 = FUN_00427360(3,0);
  if ((iVar3 == 0) && (iVar3 = FUN_00427360(5,0), iVar3 == 0)) {
    param_1 = (int **)0x3f800000;
    iVar3 = FUN_00427670(0,0x1000000);
    if (iVar3 == 0) {
      FUN_00427410(1,(int)*(char *)(iVar4 + 0xcc),0xf,0);
      FUN_00427690(0,0x1000000);
    }
  }
  else {
    param_1 = (int **)0x3f400000;
  }
  FUN_00426c80(5,6,0x3e800000,param_1,1);
  FUN_0042f7b0(local_58,0,0,0);
  FUN_0042f7b0(local_4c,0,0,0);
  switch(DAT_0050c178) {
  case '\0':
    if (32.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    _DAT_00e2b478 = _DAT_00e2b478 - -125.0;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    _DAT_00e29b98 = _DAT_00e29b98 - -150.0;
    goto LAB_0043d231;
  case '\x01':
    if (30.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0,0x41c80000);
    uVar10 = 0x43160000;
    uVar9 = 0x437a0000;
    uVar8 = 0xc3fa0000;
    break;
  case '\x02':
    if (23.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    uVar10 = 0x42480000;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    uVar9 = 0xc3480000;
    uVar8 = 0xc3fa0000;
    break;
  case '\x03':
    if (20.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0xc3160000,0xc1c80000);
    uVar10 = 0;
    uVar9 = 0xc3c80000;
    uVar8 = 0x44480000;
    break;
  case '\x04':
    if (14.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0x43160000,0xc2480000);
    uVar10 = 0xc1c80000;
    uVar9 = 0x43960000;
    uVar8 = 0x42c80000;
    break;
  case '\x05':
    if (9.0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0,0x41c80000);
    uVar10 = 0x447a0000;
    uVar9 = 0xc4fa0000;
    uVar8 = 0xc59c4000;
    break;
  default:
    goto switchD_0043d06b_caseD_6;
  }
  FUN_0042f7b0(&DAT_00e29b90,uVar8,uVar9,uVar10);
LAB_0043d231:
  FUN_0045c010(&DAT_00e29b90,&DAT_00e2b470,1,0,1);
switchD_0043d06b_caseD_6:
  if (((0.0 <= _DAT_0050c0d8) &&
      (_DAT_0050c0d8 = _DAT_0050c0d8 - _DAT_00e22a50, _DAT_0050c0d8 <= 0.0)) &&
     (DAT_0050c944 = 0xffffffff, DAT_0050ca3c == 0)) {
    DAT_004bfedc = 0xc;
  }
  iVar4 = *DAT_00e29a30;
  if (iVar4 != 0) {
    FUN_00431a50(iVar4,2,0xfffffffc,0x10,3);
    FUN_00431060(local_40,local_58);
    FUN_00431450(local_40,0x3ecccccd,0x3ecccccd,0x3ecccccd,local_40);
    FUN_00431640(iVar4,local_40);
    FUN_00431a50(iVar4,2,3,0x10,2);
  }
  FUN_0042f7b0(local_4c,0xc2960000,0,0);
  local_68 = 0;
  param_1 = (int **)&DAT_00e29a34;
  local_64 = 3;
  do {
    iVar4 = local_68;
    fVar1 = (float)(&DAT_0050c1e8)[local_68] -
            (float)(&DAT_0050c200)[local_68] * _DAT_00e22a50 * -0.5;
    (&DAT_0050c1e8)[local_68] = fVar1;
    if (360.0 < fVar1) {
      (&DAT_0050c1e8)[local_68] = fVar1 - 360.0;
    }
    FUN_0042f380((&DAT_0050c1e8)[local_68],&local_60,local_5c);
    iVar3 = FUN_00450b30(0x456c6d6f,local_68 + 0x1c);
    *(float *)(iVar3 + 0x4c) = (float)local_68 * -50.0 - local_60 * -15.0;
    FUN_0044b270(*(undefined4 *)(iVar3 + 0x30),iVar3 + 0x44);
    local_68 = 2;
    ppiVar6 = param_1;
    do {
      iVar5 = **ppiVar6;
      if (iVar5 != 0) {
        FUN_00431a50(iVar5,2,0xfffffffc,0x10,3);
        FUN_00431060(local_40,local_58);
        FUN_00431450(local_40,0x3dcccccd,0x3dcccccd,0x3dcccccd,local_40);
        FUN_0042f7d0(local_10,iVar3 + 0x44);
        FUN_00431640(iVar5,local_40);
        FUN_00431a50(iVar5,2,3,0x10,2);
      }
      ppiVar6 = ppiVar6 + 3;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_68 = iVar4 + 1;
    param_1 = param_1 + 1;
    local_64 = local_64 + -1;
  } while (local_64 != 0);
  if (((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) &&
     ((0 < DAT_0050c040 &&
      (iVar4 = FUN_00440990(&DAT_00e35a60,&PTR_LAB_00474242_2_004c11f4), iVar4 != 0)))) {
    _DAT_0050c0d8 = 0.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043d4e0(void)

{
  undefined local_40 [64];

  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c214 = 12.0;
    DAT_0050c1d0 = 0;
    FUN_0042f7b0(&DAT_0050c2d0,0,0x44960000,0x42480000);
    FUN_0042f7b0(&DAT_0050c2dc,0,0,0);
    FUN_0044afb0(DAT_00e299d0,&DAT_00e2af90);
    _DAT_00e2af98 = 0xc2c20000;
    FUN_0042f7d0(&DAT_00e298f0,&DAT_00e2af90);
    _DAT_00e298f4 = _DAT_00e298f4 - -500.0;
    FUN_00426c80(0xa1,7,0x3e800000,0x3f4ccccd,0);
  }
  if ((_DAT_0050c214 <= 10.0) && (DAT_0050c1d0 == 0)) {
    DAT_0050c1d0 = 1;
    FUN_0042f7d0(&DAT_00e2b410,&DAT_00e2af90);
    FUN_0042f7b0(&DAT_00e2b470,0,0,0);
    FUN_0042f7d0(&DAT_00e2aeb0,&DAT_00e298f0);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_00e298f0);
    _DAT_00e29b90 = _DAT_00e29b90 - -500.0;
    DAT_0050c930 = 1;
  }
  _DAT_0050c2d4 = _DAT_0050c2d4 - _DAT_00e22a50 * 100.0;
  if (DAT_00e2993c != 0) {
    FUN_00431060(local_40,&DAT_0050c2d0);
    FUN_004337e0(DAT_00e2993c,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,0,0);
    if (*(int *)(DAT_00e2993c + 0xec) != 0) {
      FUN_00431a50(*(int *)(DAT_00e2993c + 0xec),2,3,0x10,2);
    }
  }
  if (DAT_0050c944 != -1) {
    if ((_DAT_0050c214 < 0.0) ||
       (_DAT_0050c214 = _DAT_0050c214 - _DAT_00e22a50, 0.0 < _DAT_0050c214)) {
      if ((DAT_004d6b48 == 0) && (DAT_004d6b44 == 0)) {
        return;
      }
      _DAT_0050c214 = 0.0;
    }
    DAT_0050c944 = 0xffffffff;
    DAT_004bfedc = 5;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043d720(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint local_8;

  iVar6 = 0;
  iVar3 = __ftol();
  if (0x5fa < iVar3) {
    iVar3 = 0x5fa;
  }
  iVar4 = 0;
  do {
    if (*(char *)((int)&DAT_00e35aa0 + iVar4 + 1) != '\0') {
      iVar6 = iVar6 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  if (iVar6 != 0) {
    FUN_004816b0();
    cVar2 = __ftol();
    bVar5 = 0x19 - cVar2;
    uVar7 = (uint)bVar5;
    if ((int)uVar7 <= iVar3) {
      do {
        FUN_004816b0();
        iVar6 = __ftol();
        if (*(char *)((int)&DAT_00e35aa0 + iVar6 + 1) != '\0') {
          if (bVar5 < (byte)(&DAT_00e35aa8)[iVar6]) {
            (&DAT_00e35aa8)[iVar6] = (&DAT_00e35aa8)[iVar6] - bVar5;
          }
          else {
            (&DAT_00e35aa8)[iVar6] = 0;
          }
        }
        iVar3 = iVar3 - uVar7;
        FUN_004816b0();
        cVar2 = __ftol();
        bVar5 = 0x19 - cVar2;
        uVar7 = (uint)bVar5;
      } while ((int)uVar7 <= iVar3);
    }
    iVar3 = 0;
    do {
      if (*(char *)((int)&DAT_00e35aa0 + iVar3 + 1) == '\0') {
        (&DAT_00e35aa8)[iVar3] = 0xff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    iVar6 = 0;
    iVar3 = 0;
    do {
      iVar6 = iVar6 + (0xff - (uint)(byte)(&DAT_00e35aa8)[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    local_c = (DAT_00e35aa0 & 0xff) * 0xff;
    if (iVar6 <= (int)local_c) {
      _DAT_00e35aa8 = 0xffffffff;
      _DAT_00e35aac = 0xffff;
      DAT_00e35aae = 0xff;
      FUN_0044e560();
      return;
    }
    FUN_004816b0();
    cVar2 = __ftol();
    bVar5 = 0x19 - cVar2;
    uVar7 = (uint)bVar5;
    local_8 = local_c;
    if (uVar7 <= local_c) {
      do {
        FUN_004816b0();
        iVar3 = __ftol();
        bVar1 = (&DAT_00e35aa8)[iVar3];
        if (bVar1 != 0xff) {
          if ((int)(0xff - (uint)bVar1) < (int)uVar7) {
            (&DAT_00e35aa8)[iVar3] = 0xff;
            bVar5 = bVar5 + bVar1 + 1;
          }
          else {
            (&DAT_00e35aa8)[iVar3] = bVar5 + bVar1;
          }
          local_c = (uint)bVar5;
          local_c = local_8 - local_c;
          local_8 = local_c;
        }
        FUN_004816b0();
        cVar2 = __ftol();
        bVar5 = 0x19 - cVar2;
        uVar7 = (uint)bVar5;
      } while ((int)uVar7 <= (int)local_c);
    }
    FUN_0044e560();
  }
  return;
}



void FUN_0043d970(void)

{
  int iVar1;

  iVar1 = 0;
  do {
    FUN_0043ea00(0,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  iVar1 = 0;
  do {
    FUN_0043ea00(1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043d9a0(void)

{
  if (DAT_0050c568 == 0) {
    FUN_0044fce0(s_All_Pods__tracks_unlocked____004c11f8,0x40400000);
    if (DAT_0050c568 == 0) {
      DAT_0050c568 = 1;
      _DAT_00e364a8 = _DAT_00e364a8 | 0x20;
      DAT_00e364af = 0xf;
      DAT_00e364b0 = 0xfffffff;
      DAT_00e35a94 = 0xfffffff;
      _DAT_00e364e8 = 0xfffffff;
      DAT_00e364ac = 0xff;
      DAT_00e364ad = 0xff;
      DAT_00e364ae = 0xff;
      FUN_0044e560();
      return;
    }
  }
  return;
}



void FUN_0043da10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar2 = DAT_004d5e00;
  DAT_00e295cc = 0;
  puVar3 = &DAT_00e99244;
  uVar1 = (&DAT_00e35a94)[*(char *)(param_1 + 0x6f) * 0x14];
  iVar4 = 0;
  do {
    if ((((uVar1 | 0x22e01) & 1 << ((byte)iVar4 & 0x1f)) != 0) || (iVar2 != 0)) {
      *(int *)(puVar3 + -4) = iVar4;
      *puVar3 = 0xff;
      puVar3[1] = 0;
      DAT_00e295cc = DAT_00e295cc + 1;
      puVar3 = puVar3 + 8;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x17);
  if (DAT_00e295cc < 0x17) {
    puVar3 = &DAT_00e99244 + DAT_00e295cc * 8;
    do {
      *(undefined4 *)(puVar3 + -4) = 0xffffffff;
      *puVar3 = 0xff;
      puVar3[1] = 0;
      puVar3 = puVar3 + 8;
    } while ((int)puVar3 < 0xe992fc);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0043da90(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;

  bVar2 = true;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 8) == 7) {
      return 0;
    }
    if (*(int *)(param_1 + 8) == 4) {
      return 0;
    }
    _DAT_00e99358 = -300.0;
    DAT_0050c468 = 1;
    DAT_004bfedc = -1;
    bVar2 = false;
  }
  if ((DAT_0050c468 != 0) && (bVar2)) {
    _DAT_00e99358 = _DAT_00e99358 - (float)(int)DAT_0050c468 * _DAT_00e22a50 * -300.0 * 4.0;
    bVar2 = _DAT_00e99358 <= -300.0;
    if (bVar2) {
      _DAT_00e99358 = -300.0;
    }
    bVar1 = (float)param_3 <= _DAT_00e99358;
    if (bVar1) {
      _DAT_00e99358 = (float)param_3;
    }
    if ((((bVar1 || bVar2) && (DAT_0050c468 = 0, DAT_004bfedc != -1)) && (DAT_0050c944 == 0)) &&
       (DAT_0050c930 == 0)) {
      FUN_00454d40(param_1,DAT_004bfedc);
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043dba0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  undefined *puVar10;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  undefined local_c [12];

  local_18 = 0.2;
  if ((_DAT_0050c93c < 0.0) && (_DAT_0050c93c = _DAT_0050c93c + _DAT_00e22a50, 0.0 < _DAT_0050c93c))
  {
    _DAT_0050c93c = 0.0;
  }
  if ((0.0 < _DAT_0050c93c) && (_DAT_0050c93c = _DAT_0050c93c - _DAT_00e22a50, _DAT_0050c93c < 0.0))
  {
    _DAT_0050c93c = 0.0;
  }
  if ((0.0 < _DAT_0050c938) && (_DAT_0050c938 = _DAT_0050c938 - _DAT_00e22a50, _DAT_0050c938 < 0.0))
  {
    _DAT_0050c938 = 0.0;
  }
  iVar4 = 0;
  iVar2 = DAT_00e295d0;
  iVar7 = DAT_00e295cc;
  if (0 < DAT_00e295cc) {
    pfVar5 = (float *)&DAT_00e2a6c4;
    do {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (iVar4 != iVar2) {
          fVar9 = (float10)FUN_0042f560(*pfVar5 - 12.0,-116.0 - pfVar5[1]);
          iVar2 = DAT_00e295d0;
          iVar7 = DAT_00e295cc;
          pfVar5[9] = (float)(fVar9 - (float10)90.0);
        }
        if (pfVar5[2] == 106.0) {
          FUN_0042f380((1.5 - _DAT_0050c938) * 360.0,&local_14,&local_1c);
          iVar2 = DAT_00e295d0;
          iVar7 = DAT_00e295cc;
          pfVar5[10] = local_1c * _DAT_0050c93c * 45.0;
        }
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 0xe;
    } while (iVar4 < iVar7);
  }
  if (DAT_0050c474 == 0) goto LAB_0043e101;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if (0 < iVar7) {
      puVar6 = &DAT_00e2a6e4;
      do {
        local_10 = ((iVar2 - iVar4) + 9) * 10;
        FUN_0042f380((float)local_10,&local_14,&local_1c);
        pfVar5 = (float *)(puVar6 + -2);
        bVar8 = iVar4 != DAT_00e295d0;
        *pfVar5 = 12.0 - local_1c * -256.0;
        puVar6[-1] = -116.0 - local_14 * -256.0;
        *puVar6 = 0x42d40000;
        if (bVar8) {
          fVar9 = (float10)FUN_0042f560((float)puVar6[-8] - 12.0,-116.0 - (float)puVar6[-7]);
          puVar6[1] = (float)(fVar9 - (float10)90.0);
        }
        FUN_0042f380((1.5 - _DAT_0050c938) * 360.0,&local_14,&local_1c);
        bVar8 = iVar4 == DAT_00e295d0;
        puVar6[2] = local_1c * _DAT_0050c93c * 45.0;
        if (bVar8) {
          if (DAT_0050c470 == 0) {
            FUN_0042f7d0(pfVar5,&DAT_004c4558);
            fVar1 = -116.0 - _DAT_004c455c;
            puVar6[2] = 0;
            fVar9 = (float10)FUN_0042f560(_DAT_004c4558 - 12.0,fVar1);
            bVar8 = DAT_0050c954 == 0;
            puVar6[1] = (float)(fVar9 - (float10)90.0);
            if (bVar8) goto LAB_0043df33;
          }
          else {
            FUN_0043e210();
            FUN_0042f7d0(local_c,&DAT_00e298f0);
            FUN_0042fa80(local_c,local_c,DAT_004c4564,&DAT_00e298c0);
            FUN_0042fa80(local_c,local_c,DAT_004c4568,&DAT_00e298d0);
            FUN_0042fa80(local_c,local_c,DAT_004c456c,&DAT_00e298e0);
            FUN_0042f7d0(pfVar5,local_c);
            pfVar5 = (float *)(puVar6 + -8);
          }
          FUN_0042fac0(pfVar5,0x3e4ccccd,pfVar5,0x3f4ccccd,&DAT_00e298f0);
        }
LAB_0043df33:
        FUN_0042f7d0(puVar6 + -5,puVar6 + -8);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 0xe;
        iVar2 = DAT_00e295d0;
        iVar7 = DAT_00e295cc;
      } while (iVar4 < DAT_00e295cc);
    }
  }
  else if (*(int *)(param_1 + 0x38) == 1) {
    DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
    if ((DAT_00e295d0 < 0) || (*(int *)(param_1 + 0x34) + -4 < 0)) {
      DAT_0050c474 = 0;
      return;
    }
    if (DAT_0050c470 == 0) {
      FUN_0042f7d0(&DAT_00e2a6dc + DAT_00e295d0 * 0xe,
                   &DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
      if (DAT_0050c954 != 0) {
        puVar6 = &DAT_00e2a6dc + DAT_00e295d0 * 0xe;
        goto LAB_0043e09d;
      }
    }
    else {
      FUN_0043e210();
      FUN_0042f7d0(local_c,&DAT_00e298f0);
      FUN_0042fa80(local_c,local_c,DAT_004c4564,&DAT_00e298c0);
      FUN_0042fa80(local_c,local_c,DAT_004c4568,&DAT_00e298d0);
      FUN_0042fa80(local_c,local_c,DAT_004c456c,&DAT_00e298e0);
      FUN_0042f7d0(&DAT_00e2a6dc + DAT_00e295d0 * 0xe,local_c);
      puVar6 = &DAT_00e2a6c4 + DAT_00e295d0 * 0xe;
LAB_0043e09d:
      FUN_0042fac0(puVar6,0x3e4ccccd,puVar6,0x3f4ccccd,&DAT_00e298f0);
    }
    FUN_0042f7d0(&DAT_00e2a6d0 + DAT_00e295d0 * 0xe,&DAT_00e2a6c4 + DAT_00e295d0 * 0xe);
    iVar2 = DAT_00e295d0;
    iVar7 = DAT_00e295cc;
  }
  DAT_0050c474 = 0;
  DAT_0050c46c = 1;
  _DAT_0050c56c = 0.0;
LAB_0043e101:
  if (DAT_0050c940 != 0) {
    local_18 = 0.5;
  }
  if ((DAT_0050c46c != 0) && (_DAT_0050c56c < local_18)) {
    _DAT_0050c56c = _DAT_0050c56c + _DAT_00e22a50;
    if (local_18 <= _DAT_0050c56c) {
      _DAT_0050c56c = local_18;
      DAT_0050c46c = 0;
    }
    iVar4 = DAT_0050c46c;
    iVar3 = 0;
    if (0 < iVar7) {
      pfVar5 = (float *)&DAT_00e2a6d0;
      do {
        if ((*(int *)(param_1 + 0x38) != 1) || (iVar2 == iVar3)) {
          fVar1 = _DAT_0050c56c / local_18;
          pfVar5[-3] = (pfVar5[3] - *pfVar5) * fVar1 + *pfVar5;
          pfVar5[-2] = (pfVar5[4] - pfVar5[1]) * fVar1 + pfVar5[1];
          pfVar5[-1] = (pfVar5[5] - pfVar5[2]) * fVar1 + pfVar5[2];
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 0xe;
      } while (iVar3 < iVar7);
    }
    if ((iVar4 == 0) && (DAT_0050c954 != 0)) {
      DAT_0050c954 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar10 = &DAT_004c4558;
      }
      else {
        puVar10 = &DAT_00e2af90;
      }
      FUN_0042f7d0(&DAT_00e2a6c4 + iVar2 * 0xe,puVar10);
      (&DAT_00e2a6ec)[DAT_00e295d0 * 0xe] = 0;
    }
  }
  return;
}



void FUN_0043e210(void)

{
  float10 fVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c [12];

  FUN_0042f7d0(local_c,&DAT_00e298f0);
  FUN_0042f860(&local_18,&DAT_00e2af90,&DAT_00e298f0);
  FUN_0042f9b0(&local_18);
  fVar1 = (float10)FUN_0042f560(-local_18,local_14);
  local_1c = (float)fVar1;
  fVar1 = (float10)FUN_0042f3e0(local_10);
  local_20 = (float)fVar1;
  if (local_1c < 0.0) {
    local_1c = local_1c - -360.0;
  }
  if (360.0 < local_1c) {
    local_1c = local_1c - 360.0;
  }
  if (local_20 < -90.0) {
    local_20 = local_20 - -180.0;
  }
  if (90.0 < local_20) {
    local_20 = local_20 - 180.0;
  }
  FUN_00431020(&DAT_00e298c0,local_1c,local_20,0);
  FUN_0042f7d0(&DAT_00e298f0,local_c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0043e330(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;

  bVar1 = false;
  DAT_004c4008 = 0;
  if (_DAT_0050c570 < 255.0) {
    _DAT_0050c570 = _DAT_0050c570 - _DAT_00e22a50 * -849.9999;
  }
  else {
    DAT_004c02a8 = DAT_004c02a8 + -1;
    bVar1 = DAT_004c02a8 < 1;
    _DAT_0050c570 = 255.0;
  }
  if (255.0 < _DAT_0050c570) {
    DAT_004c02a8 = 3;
    _DAT_0050c570 = 255.0;
  }
  uVar2 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar2);
  if (bVar1) {
    _DAT_0050c570 = 0.0;
    if (DAT_004bfedc != -1) {
      if (((DAT_004bfedc == 1) && (*(int *)(param_1 + 8) == 0x12)) &&
         (iVar3 = FUN_00450b30(0x456c6d6f,*(undefined4 *)(param_1 + 0x40)), iVar3 != 0)) {
        FUN_00466ec0(iVar3,0);
      }
      DAT_0050c944 = 1;
      DAT_0050c940 = 0;
      FUN_00426910(1);
      thunk_FUN_00449e30();
      FUN_0044e560();
      FUN_00454d40(param_1,DAT_004bfedc);
      return 0;
    }
    FUN_004285d0(0xffffff99,0);
    DAT_004c4008 = 1;
    DAT_0050c944 = 0;
    FUN_00426910(1);
    thunk_FUN_00449e30();
    FUN_0044e560();
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0043e490(void)

{
  bool bVar1;
  undefined4 uVar2;

  bVar1 = false;
  if ((_DAT_004c02ac == 255.0) || (0 < DAT_004c02b4)) {
    FUN_00428740(0xffffff99,0,0,0,0xffffffff);
    DAT_004c02b4 = DAT_004c02b4 + -1;
    if (0 < DAT_004c02b4) {
      return 0;
    }
  }
  if (0.0 < _DAT_004c02ac) {
    _DAT_004c02ac = _DAT_004c02ac - _DAT_00e22a50 * 849.9999;
  }
  else {
    DAT_004c02b0 = DAT_004c02b0 + -1;
    bVar1 = DAT_004c02b0 < 1;
    _DAT_004c02ac = 0.0;
  }
  if (_DAT_004c02ac < 0.0) {
    DAT_004c02b0 = 3;
    _DAT_004c02ac = 0.0;
  }
  uVar2 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar2);
  if (!bVar1) {
    return 0;
  }
  FUN_004285d0(0xffffff99,0);
  _DAT_004c02ac = 255.0;
  DAT_004c02b4 = 3;
  DAT_004c4008 = 1;
  DAT_0050c944 = 0;
  return 1;
}



void FUN_0043e5b0(float param_1)

{
  float fVar1;
  float *pfVar2;

  pfVar2 = (float *)&DAT_004c4018;
  do {
    switch(*(undefined2 *)(pfVar2 + 4)) {
    case 0:
      fVar1 = param_1 - 60.0;
      break;
    case 1:
      *pfVar2 = param_1 - 157.0;
      pfVar2[3] = param_1 - 157.0;
      goto switchD_0043e5bf_caseD_3;
    case 2:
      fVar1 = param_1 - 157.0;
      break;
    default:
      goto switchD_0043e5bf_caseD_3;
    case 0xffff:
    case 4:
      fVar1 = param_1 - 145.0;
    }
    *pfVar2 = fVar1;
switchD_0043e5bf_caseD_3:
    pfVar2 = pfVar2 + 8;
    if (0x4c4517 < (int)pfVar2) {
      return;
    }
  } while( true );
}



void FUN_0043e620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined local_c [12];

  FUN_0042f7b0(local_c,0,0,0);
  FUN_00468800(0x1c,0x1b,local_c,local_c,0,0);
  FUN_00468fe0(4,0x43);
  FUN_00468fe0(0x16,0x2a);
  FUN_00468fe0(0x17,0x2e);
  iVar3 = 0x38;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0x38;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x39;
  }
  piVar4 = &DAT_00e299e0;
  iVar2 = 3;
  do {
    iVar1 = FUN_00450b30(0x456c6d6f,iVar3);
    if (iVar1 != 0) {
      if ((iVar3 == *(int *)(param_1 + 0x40)) || (*(int *)(iVar1 + 8) == 1)) {
        if (*piVar4 != 0) {
          uVar5 = 0;
          goto LAB_0043e6cb;
        }
      }
      else if (*piVar4 != 0) {
        uVar5 = 0x11;
LAB_0043e6cb:
        FUN_00468fe0(iVar3,uVar5);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043e6f0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;

  iVar2 = DAT_00e2993c;
  iVar1 = FUN_00482000(*(undefined4 *)(DAT_00e2993c + 0x100),&DAT_00e99340,0);
  if (iVar1 == 0) {
    FUN_0042f7b0(&DAT_00e99340,0,0,0);
    uVar6 = 0xc1200000;
    fVar5 = -10.0;
    fVar4 = -10.0;
    puVar3 = &DAT_00e9934c;
  }
  else {
    fVar5 = (_DAT_00e99344 + _DAT_00e99350) * 0.5;
    fVar4 = _DAT_00e9934c - -100.0;
    uVar6 = 0xc31d0000;
    puVar3 = &DAT_004c43dc;
  }
  FUN_0042f7b0(puVar3,fVar4,fVar5,uVar6);
  iVar1 = FUN_00482000(*(undefined4 *)(iVar2 + 0xf8),&DAT_00e99320,0);
  if (iVar1 == 0) {
    FUN_0042f7d0(&DAT_00e99320,&DAT_00e99340);
    FUN_0042f7d0(&DAT_00e9932c,&DAT_00e9934c);
  }
  iVar2 = FUN_00482000(*(undefined4 *)(iVar2 + 0xfc),&DAT_00e99300,0);
  if (iVar2 == 0) {
    FUN_0042f7d0(&DAT_00e99300,&DAT_00e99340);
    FUN_0042f7d0(&DAT_00e9930c,&DAT_00e9934c);
    _DAT_00e99310 = (_DAT_00e99344 + _DAT_00e99350) * 0.5;
    _DAT_00e99344 = (_DAT_00e99344 - _DAT_00e99350 * -5.0) * 0.1666667;
    _DAT_00e99330 = _DAT_00e99310;
  }
  return;
}



void FUN_0043e840(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_4;

  cVar3 = '\0';
  iVar9 = 0;
  DAT_00e295cc = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    if (0 < (char)(&DAT_004bfee0)[iVar4]) {
      do {
        if (((uint)(byte)(&DAT_00e35a85)[iVar4] & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          cVar3 = cVar3 + '\x01';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (char)(&DAT_004bfee0)[iVar4]);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  puVar8 = &DAT_00e2b221;
  do {
    puVar6 = puVar8 + 0x38;
    puVar8[-1] = (char)iVar4 * '\x06' + *(char *)((int)&DAT_00e35aa0 + iVar4 + 1);
    *puVar8 = (&DAT_00e35aa8)[iVar4];
    iVar4 = iVar4 + 1;
    puVar8 = puVar6;
  } while ((int)puVar6 < 0xe2b3a9);
  if (*(int *)(param_1 + 8) == 7) {
    pcVar7 = &DAT_004c1cba;
    cVar1 = '\0';
    local_4 = 0;
    pcVar5 = &DAT_00e2b220;
    do {
      iVar4 = 0;
      do {
        if (((int)*pcVar5 != iVar4 + local_4) && ((int)*pcVar7 <= cVar3 + -3)) {
          iVar2 = iVar9 * 0x38;
          iVar9 = iVar9 + 1;
          (&DAT_00e2a6c0)[iVar2] = cVar1 * '\x06' + (char)iVar4;
          (&DAT_00e2a6c1)[iVar2] = 0xff;
        }
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar7 + 0x10;
      } while (iVar4 < 6);
      pcVar5 = pcVar5 + 0x38;
      cVar1 = cVar1 + '\x01';
      local_4 = local_4 + 6;
      DAT_00e295cc = iVar9;
    } while ((int)pcVar5 < 0xe2b3a8);
  }
  else if (*(int *)(param_1 + 8) == 4) {
    cVar3 = '\0';
    puVar8 = &DAT_00e29862;
    do {
      iVar4 = iVar9 * 0x38;
      iVar9 = iVar9 + 1;
      puVar6 = puVar8 + 3;
      (&DAT_00e2a6c0)[iVar4] = cVar3 * '\x06' + puVar8[-1];
      cVar3 = cVar3 + '\x01';
      (&DAT_00e2a6c1)[iVar4] = *puVar8;
      puVar8 = puVar6;
      DAT_00e295cc = iVar9;
    } while ((int)puVar6 < 0xe29877);
  }
  iVar4 = 0;
  if (0 < iVar9) {
    pcVar5 = &DAT_00e2a6c0;
    do {
      FUN_00454bc0(*(undefined4 *)(&DAT_004c1cc0 + *pcVar5 * 0x10),0xffffffff,iVar4 + 0x62,0);
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x38;
    } while (iVar4 < DAT_00e295cc);
  }
  iVar4 = 0;
  pcVar5 = &DAT_00e2b220;
  do {
    FUN_00454bc0(*(undefined4 *)(&DAT_004c1cc0 + *pcVar5 * 0x10),0xffffffff,iVar4 + 0x8e,0);
    pcVar5 = pcVar5 + 0x38;
    iVar4 = iVar4 + 1;
  } while ((int)pcVar5 < 0xe2b3a8);
  return;
}



void FUN_0043ea00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_1 == 0) {
    iVar1 = param_2 * 0x50;
    (&DAT_00e35a80)[iVar1] = 0;
    (&DAT_00e35a98)[param_2 * 0x14] = 400;
    *(undefined *)(&DAT_00e35aa0 + param_2 * 0x14) = 1;
    (&DAT_00e35a83)[iVar1] = 0;
    (&DAT_00e35a94)[param_2 * 0x14] = 0x22e01;
    (&DAT_00e35a9c)[param_2 * 0x14] = 0;
    (&DAT_00e35a81)[iVar1] = 1;
    (&DAT_00e35a84)[iVar1] = 0;
    (&DAT_00e35a82)[iVar1] = (char)param_2;
    *(undefined4 *)(&DAT_00e35a8a + param_2 * 0x28) = 0;
    *(undefined4 *)(&DAT_00e35a8e + param_2 * 0x28) = 0;
    (&DAT_00e35a85)[iVar1] = 1;
    (&DAT_00e35a86)[iVar1] = 1;
    (&DAT_00e35a87)[iVar1] = 1;
    (&DAT_00e35a88)[iVar1] = 0;
    iVar2 = 0;
    do {
      *(undefined *)(iVar2 + 0xe35aa1 + iVar1) = 0;
      (&DAT_00e35aa8)[iVar1 + iVar2] = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    puVar3 = (undefined4 *)(&DAT_00e35a60 + iVar1);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  else if (param_1 == 1) {
    iVar2 = param_2 * 0x50;
    (&DAT_00e364d4)[iVar2] = 0;
    (&DAT_00e364d6)[iVar2] = (char)param_2;
    *(undefined4 *)(&DAT_00e364ec + iVar2) = 400;
    (&DAT_00e364f4)[iVar2] = 1;
    (&DAT_00e364d7)[iVar2] = 0;
    *(undefined4 *)(&DAT_00e364e8 + iVar2) = 0x22e01;
    (&DAT_00e364f0)[param_2 * 0x14] = 0;
    (&DAT_00e364d5)[iVar2] = 1;
    iVar1 = 0;
    (&DAT_00e364d8)[iVar2] = 0;
    *(undefined4 *)(&DAT_00e364de + iVar2) = 0;
    *(undefined4 *)(&DAT_00e364e2 + iVar2) = 0;
    (&DAT_00e364d9)[iVar2] = 1;
    (&DAT_00e364da)[iVar2] = 1;
    (&DAT_00e364db)[iVar2] = 1;
    (&DAT_00e364dc)[iVar2] = 0;
    do {
      (&DAT_00e364f5)[iVar2 + iVar1] = 0;
      (&DAT_00e364fc)[iVar2 + iVar1] = 0xff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
    puVar3 = &DAT_00e364b4 + param_2 * 0x14;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    (&DAT_00e36503)[iVar2] = 0;
    return;
  }
  return;
}



void FUN_0043eb50(void)

{
  int iVar1;
  int iVar2;

  iVar1 = __ftol();
  DAT_00e9935c = 1 - iVar1;
  iVar2 = __ftol();
  DAT_00e99220 = 1 - iVar2;
  DAT_00e99400 = (ushort)((1 - iVar1) + DAT_00e35a98 < 1 - iVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043ec10(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined local_40 [32];
  undefined local_20 [32];

  if (((DAT_0050c470 != 0) || (DAT_0050c954 != 0)) && (DAT_0050c934 != 0)) {
    iVar3 = __ftol();
    FUN_00428740(0x7b,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
    FUN_004285d0(0x7b,1);
    FUN_00428660(0x7b,0x1e,iVar3);
    FUN_00428740(0x78,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x78,1);
    FUN_00428660(0x78,0x22,iVar3 + 4);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
    uVar4 = FUN_00421360(s__f4_c_s_s_004c0d24,uVar4);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x56,iVar3 + 6,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x80,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x80,1);
    FUN_00428660(0x80,0x21,iVar3 + 0x13);
    FUN_004557e0(param_1,0x88,(short)iVar3 + 0x11,
                 (float)(uint)(byte)(&DAT_00e2a6c1)[DAT_00e295d0 * 0x38] * 0.003921568,0xc0000000,
                 0x41200000,0x42240000);
    FUN_00428740(0x79,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x79,1);
    FUN_00428660(0x79,0x2a,iVar3 + 0x10);
    uVar4 = FUN_00421360(s__SCREENTEXT_246__sPrice_004c12c8);
    FUN_00450530(0x2c,iVar3 + 0x12,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar4);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e99220);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x87,iVar3 + 0x12,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x7a,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7a,1);
    FUN_00428660(0x7a,0x29,iVar3 + 0x1b);
    iVar3 = __ftol();
    FUN_00428740(0x7f,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
    FUN_004285d0(0x7f,1);
    FUN_00428660(0x7f,0xae,iVar3);
    FUN_00428740(0x7d,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7d,1);
    FUN_00428660(0x7d,0xb3,iVar3 + 5);
    uVar4 = FUN_00421360(s__SCREENTEXT_248__sReplace_004c12a4);
    FUN_00450530(0xb6,iVar3 + 6,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar4);
    FUN_00428740(0x81,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x81,1);
    FUN_00428660(0x81,0xb2,iVar3 + 0x14);
    FUN_00428740(0x7c,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7c,1);
    FUN_00428660(0x7c,0xbe,iVar3 + 0x17);
    cVar2 = (&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10];
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2b220)[cVar2 * 0x38] * 4]);
    uVar4 = FUN_00421360(s__f4_c_s_s_004c0d24,uVar4);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0xee,iVar3 + 0x1a,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    FUN_00428740(0x7e,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(0x7e,1);
    FUN_00428660(0x7e,0xd6,iVar3 + 0x28);
    FUN_004557e0(param_1,0xff,(short)iVar3 + 0x30,
                 (float)(uint)(byte)(&DAT_00e35aa8)[cVar2] * 0.003921568,0xc0000000,0x40e00000,
                 0x41d00000);
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 0x76;
      FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004285d0(iVar1,1);
      FUN_00428660(iVar1,0xc2,iVar3 + iVar5 * 0xb + 0x5d);
      iVar1 = iVar5 + 0x74;
      FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004285d0(iVar1,1);
      FUN_00428660(iVar1,0xdb,iVar3 + iVar5 * 0xd + 0x7c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar4 = FUN_00421360(s__SCREENTEXT_250__sTrade_004c128c);
    FUN_0049eb80(local_40,s__f4_s_004b9484,uVar4);
    FUN_00450530(0xc4,iVar3 + 0x60,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    uVar4 = FUN_00421360(s__SCREENTEXT_251__sCost_004c1274);
    FUN_0049eb80(local_40,s__f4_s_004b9484,uVar4);
    FUN_00450530(0xc4,iVar3 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e9935c);
    FUN_0049eb80(local_40,uVar4);
    FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
    FUN_00450530(0x114,iVar3 + 0x60,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
    uVar4 = FUN_00421360(s__r_s_d_004c12c0,DAT_00e99220 - DAT_00e9935c);
    FUN_0049eb80(local_40,uVar4);
    FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
    FUN_00450530(0x114,iVar3 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
    if (DAT_00e35a98 < DAT_00e99220 - DAT_00e9935c) {
      DAT_00e99400 = 1;
    }
    iVar5 = (short)iVar3 + 0x7e;
    uVar4 = FUN_00421360(s__SCREENTEXT_254__c_sBUY_004c125c);
    FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,0,uVar4);
    uVar4 = FUN_00421360(s__SCREENTEXT_257__c_sCANCEL_004c1240);
    FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,1,uVar4);
    uVar4 = FUN_00421360(s__SCREENTEXT_599__c_sTruguts_004c1224);
    FUN_00450530(0xfe,iVar3 + 0xa5,0xffffffa3,0xffffffbe,0x11,0xfffffffe,uVar4);
    FUN_00457140(0,0x40a00000,(_DAT_00e99358 - 6.0) - 20.5,0x3f800000);
    uVar4 = FUN_00421360(s__r_sX__d_004c1218,DAT_00e35a98);
    FUN_0049eb80(local_40,uVar4);
    FUN_00450530(0x122,iVar3 + 0xb4,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
    if (DAT_00e35a98 < DAT_00e99220 - DAT_00e9935c) {
      FUN_00450530(0x122,iVar3 + 0xb4,0xffffffff,0,0,0xfffffffe,local_40);
    }
    puVar6 = &DAT_0050c918;
    iVar3 = DAT_00e99220;
    do {
      if ((DAT_0050c470 != 0) && ((*puVar6 & 0xc000) != 0)) {
        if (DAT_00e35a98 < iVar3 - DAT_00e9935c) {
          uVar4 = 0x4b;
        }
        else {
          uVar4 = 0x58;
          DAT_00e99400 = (ushort)(DAT_00e99400 == 0);
        }
        FUN_00440550(uVar4);
        iVar3 = DAT_00e99220;
      }
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < 0x50c91c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043f380(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined local_40 [32];
  undefined local_20 [32];

  iVar2 = __ftol();
  FUN_00428740(0x7f,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0x7f,1);
  FUN_00428660(0x7f,0xae,iVar2);
  FUN_00428740(0x81,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x81,1);
  FUN_00428660(0x81,0xb2,iVar2 + 0x14);
  FUN_00428740(0x7c,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x7c,1);
  FUN_00428660(0x7c,0xbe,iVar2 + 0x17);
  uVar3 = FUN_00421360(s__SCREENTEXT_589__f4_sBuy_Pit_Dro_004c1374);
  FUN_00450530(0xc1,iVar2 + 0x1a,0x32,0xffffffff,0xffffffff,0xfffffffe,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_590__f4_c_sBuy_more_p_004c1344);
  FUN_00450530(99,iVar2 + 0x1e,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_591__f4_c_smake_fast_004c1314);
  FUN_00450530(99,iVar2 + 0x26,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_592__f4_c_syour_dama_004c12e0);
  FUN_00450530(99,iVar2 + 0x2e,0x32,0xffffffff,0xffffffff,0xffffffff,uVar3);
  FUN_00428740(0x76,0x32,0xffffffff,0xffffffff,0xfffffffe);
  FUN_004285d0(0x76,1);
  FUN_00428660(0x76,0xc2,iVar2 + 0x68);
  uVar3 = FUN_00421360(s__r_s_d_004c12c0,1000);
  FUN_0049eb80(local_40,uVar3);
  FUN_0049eb80(local_20,s__f4_s_004b9484,local_40);
  FUN_00450530(0x114,iVar2 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_20);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0x74;
    FUN_00428740(iVar1,0x32,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004285d0(iVar1,1);
    FUN_00428660(iVar1,0xdb,iVar2 + iVar5 * 0xd + 0x7c);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar3 = FUN_00421360(s__SCREENTEXT_251__sCost_004c1274);
  FUN_0049eb80(local_40,s__f4_s_004b9484,uVar3);
  FUN_00450530(0xc4,iVar2 + 0x6b,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
  iVar5 = (short)iVar2 + 0x7e;
  uVar3 = FUN_00421360(s__SCREENTEXT_254__c_sBUY_004c125c);
  FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,0,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_257__c_sCANCEL_004c1240);
  FUN_0043fce0(param_1,0xfc,iVar5,0xd,(int)(short)DAT_00e99400,1,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_599__c_sTruguts_004c1224);
  FUN_00450530(0xfe,iVar2 + 0xa5,0xffffffa3,0xffffffbe,0x11,0xfffffffe,uVar3);
  if ((_DAT_00e99358 == 20.0) && (DAT_0050c930 != 1)) {
    FUN_00457140(0,0x40a00000,(_DAT_00e99358 - 6.0) - 20.5,0x3f800000);
  }
  uVar3 = FUN_00421360(s__r_sX__d_004c1218,DAT_00e35a98);
  FUN_0049eb80(local_40,uVar3);
  FUN_00450530(0x122,iVar2 + 0xb4,0x32,0xffffffff,0xffffffff,0xfffffffe,local_40);
  if (DAT_00e35a98 < 1000) {
    FUN_00450530(0x122,iVar2 + 0xb4,0xffffffff,0,0,0xfffffffe,local_40);
  }
  iVar2 = 0;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    puVar4 = &DAT_0050c918;
    do {
      if ((*puVar4 & 0xc000) != 0) {
        if (DAT_00e35a98 < 1000) {
          uVar3 = 0x4b;
        }
        else {
          uVar3 = 0x58;
          DAT_00e99400 = (ushort)(DAT_00e99400 == 0);
        }
        FUN_00440550(uVar3);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(char *)(param_1 + 0x70));
  }
  if (DAT_00e35a98 < 1000) {
    DAT_00e99400 = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043f770(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x34);
  if (_DAT_004c02b8 == -1.0) {
    iVar1 = FUN_004816b0();
    _DAT_004c02b8 = (float)iVar1 * 4.656613e-10 * 4.0 - -3.0;
  }
  FUN_0043fbc0(param_1,iVar2);
  if ((DAT_0050c930 != 1) &&
     (_DAT_0050c574 = _DAT_0050c574 + _DAT_00e22a50, _DAT_004c02b8 <= _DAT_0050c574)) {
    _DAT_0050c574 = 0.0;
    iVar2 = FUN_004816b0();
    _DAT_004c02b8 = (float)iVar2 * 4.656613e-10 * 4.0 - -3.0;
    do {
      FUN_004816b0();
      iVar2 = __ftol();
      iVar2 = 0x15 - iVar2;
      if (((0x15 < iVar2) && (iVar2 < 0x1a)) &&
         (*(int *)(&DAT_004c2704 + *(char *)(param_1 + 0x73) * 0x34) == 0x1e)) {
        iVar2 = *(int *)(param_1 + 0x34);
      }
      if (((0x17 < iVar2) && (iVar2 < 0x1a)) &&
         (*(int *)(&DAT_004c2704 + *(char *)(param_1 + 0x73) * 0x34) != 0x28)) {
        iVar2 = *(int *)(param_1 + 0x34);
      }
      if ((iVar2 < 0x1e) && ((int)(DAT_00e35aa0 & 0xff) < iVar2 + -0x19)) {
        iVar2 = *(int *)(param_1 + 0x34);
      }
    } while (iVar2 == *(int *)(param_1 + 0x34));
    DAT_0050c930 = 1;
  }
  if (iVar2 != *(int *)(param_1 + 0x34)) {
    FUN_0043f8e0(param_1,iVar2,0);
    *(int *)(param_1 + 0x34) = iVar2;
  }
  return;
}



void FUN_0043f8e0(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_58;
  float local_54;
  float local_50;
  undefined local_4c [8];
  float local_44;
  undefined local_40 [48];
  undefined local_10 [16];

  switch(param_2) {
  case 0x14:
    FUN_0042f7b0(&local_58,0,0,0);
    break;
  case 0x15:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0x14);
    goto LAB_0043f96e;
  case 0x16:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 4);
    goto LAB_0043f99c;
  case 0x17:
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 8),local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x18:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0xc);
LAB_0043f96e:
    FUN_004316a0(uVar2,local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x19:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0x10);
LAB_0043f99c:
    FUN_004316a0(uVar2,local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    FUN_0044afb0(*(undefined4 *)(&DAT_00e29968 + param_2 * 4),&local_58);
    if (local_50 == -157.0) {
      local_50 = local_50 - -60.0;
    }
    else {
      local_50 = local_50 - -30.0;
    }
    break;
  case 0x1e:
    FUN_0044afb0(DAT_00e29970,&local_58);
    local_50 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * 0.6667 - 157.0;
  }
  if (param_3 != 0) {
    FUN_0045c010(&DAT_00e298f0,&local_58,3,1,0);
    return;
  }
  iVar3 = FUN_004816b0(local_50 - -400.0);
  iVar3 = FUN_004816b0(((float)iVar3 * 4.656613e-10 * 500.0 - 250.0) + local_54);
  FUN_0042f7b0(local_4c,((float)iVar3 * 4.656613e-10 * 500.0 - 250.0) + local_58);
  if ((0x19 < param_2) && (param_2 < 0x1f)) {
    fVar4 = (float10)FUN_0045cf00(local_50);
    iVar3 = FUN_004816b0();
    fVar4 = (float10)FUN_0045cf00(((float)iVar3 * 4.656613e-10 * 150.0 - -200.0) * (float)fVar4 +
                                  local_54);
    iVar3 = FUN_004816b0();
    FUN_0042f7b0(local_4c,((float)iVar3 * 4.656613e-10 * 150.0 - -200.0) * (float)fVar4 + local_58);
    if (local_50 == -97.0) {
      fVar1 = 30.0;
    }
    else {
      fVar1 = -400.0;
    }
    local_44 = local_44 - fVar1;
  }
  FUN_0045c010(local_4c,&local_58,1,0,0);
  return;
}



void FUN_0043fbc0(int param_1,int param_2)

{
  undefined local_18 [8];
  float local_10;
  undefined local_c [12];

  if (0x19 < param_2) {
    if (param_2 < 0x1e) {
      FUN_0044afb0(*(undefined4 *)(&DAT_00e29968 + param_2 * 4),local_18);
      if (local_10 == -157.0) {
        local_10 = local_10 - -60.0;
      }
      else {
        local_10 = local_10 - -30.0;
      }
    }
    else {
      if (param_2 != 0x1e) {
        return;
      }
      FUN_0044afb0(DAT_00e29970,local_18);
      local_10 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * 0.6667 - 157.0;
    }
    if (DAT_0050c930 == 1) {
      FUN_0045c010(&DAT_00e29b90,local_18,1,0,1);
      return;
    }
    if (DAT_0050c930 == 3) {
      FUN_0045c010(&DAT_00e298f0,local_18,3,1,1);
      return;
    }
    FUN_0042f860(local_c,&DAT_00e298f0,&DAT_00e2af90);
    FUN_0042f7d0(&DAT_00e2af90,local_18);
    FUN_0042f830(&DAT_00e298f0,&DAT_00e2af90,local_c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043fce0(int param_1,undefined4 param_2,int param_3,int param_4,float param_5,float param_6
                 ,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  fVar2 = param_6;
  fVar1 = param_5;
  local_24 = 0x43230000;
  local_20 = 0x433e0000;
  local_1c = 0x41880000;
  local_c = 0x43230000;
  local_8 = 0x433e0000;
  local_4 = 0x41880000;
  local_18 = 0;
  local_14 = 0x437f0000;
  local_10 = 0;
  if (param_5 == param_6) {
    FUN_0042f380(_DAT_0050c8f4 * 360.0,&param_5,&param_6);
    param_5 = (param_5 - -1.0) * 0.5;
    FUN_0042fac0(&local_24,param_5,&local_c,1.0 - param_5,&local_18);
  }
  if ((*(int *)(param_1 + 8) == 3) && (*(int *)(param_1 + 0x10) == 1)) {
    if ((fVar1 == 0.0) && (fVar2 == 0.0)) {
      uVar3 = __ftol(0xffffffff);
      uVar3 = __ftol(uVar3);
      uVar3 = __ftol(uVar3);
      FUN_00428740(0x82,uVar3);
    }
    if ((fVar1 == 1.401298e-45) && (fVar2 == 1.401298e-45)) {
      uVar3 = __ftol(0xffffffff);
      uVar3 = __ftol(uVar3);
      uVar3 = __ftol(uVar3);
      FUN_00428740(0x83,uVar3);
    }
  }
  if (fVar1 == fVar2) {
    uVar3 = __ftol(0xffffffff,param_7);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00450530(param_2,(int)fVar2 * param_4 + param_3,uVar3);
    return;
  }
  FUN_00450530(param_2,(int)fVar2 * param_4 + param_3,0x32,0xffffffff,0xffffffff,0xffffffff,param_7)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0043fe90(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;

  fVar1 = 838.2;
  if (DAT_00e295c0 == 0) {
    fVar1 = -838.2;
  }
  _DAT_0050c57c = fVar1 * _DAT_00e22a50 + _DAT_0050c57c;
  if (254.0 < _DAT_0050c57c) {
    _DAT_0050c57c = 254.0;
  }
  if (_DAT_0050c57c < 0.0) {
    _DAT_0050c57c = 0.0;
  }
  fVar1 = 838.2;
  if (DAT_00e295c4 == 0) {
    fVar1 = -838.2;
  }
  _DAT_0050c580 = fVar1 * _DAT_00e22a50 + _DAT_0050c580;
  if (254.0 < _DAT_0050c580) {
    _DAT_0050c580 = 254.0;
  }
  if (_DAT_0050c580 < 0.0) {
    _DAT_0050c580 = 0.0;
  }
  FUN_004285d0(0xb2,1);
  FUN_00428660(0xb2,param_1 + -0x1b,param_2 + -0xb);
  FUN_00428740(0xb2,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xb1,1);
  FUN_00428660(0xb1,param_1 + -0x14,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xb1,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb5,1);
  FUN_00428660(0xb5,param_1 + -0x1b,param_3 + 0xf + param_2);
  FUN_00428740(0xb5,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xb4,1);
  FUN_00428660(0xb4,param_1 + -0x14,param_3 + 0x17 + param_2);
  uVar2 = __ftol();
  FUN_00428740(0xb4,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb7,1);
  FUN_00428660(0xb7,param_1 + -0x11,param_2 + 0x12);
  FUN_00428740(0xb7,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004286f0(0xb7,0x3f800000,(float)param_3 * 0.3333);
  if ((DAT_00e295c4 != 0) && ((DAT_0050c908 & 0x8000) != 0)) {
    FUN_004285d0(0xb6,1);
    FUN_00428660(0xb6,param_1 + -0x20,param_3 + -0x13 + param_2);
    FUN_00428740(0xb6,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  if ((DAT_00e295c0 != 0) && ((DAT_0050c908 & 0x4000) != 0)) {
    FUN_004285d0(0xb3,1);
    FUN_00428660(0xb3,param_1 + -0x20,param_2 + -0x11);
    FUN_00428740(0xb3,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00440150(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;

  fVar1 = 838.2;
  if (DAT_00e295b8 == 0) {
    fVar1 = -838.2;
  }
  _DAT_0050c584 = fVar1 * _DAT_00e22a50 + _DAT_0050c584;
  if (254.0 < _DAT_0050c584) {
    _DAT_0050c584 = 254.0;
  }
  if (_DAT_0050c584 < 0.0) {
    _DAT_0050c584 = 0.0;
  }
  fVar1 = 838.2;
  if (DAT_00e295bc == 0) {
    fVar1 = -838.2;
  }
  _DAT_0050c588 = fVar1 * _DAT_00e22a50 + _DAT_0050c588;
  if (254.0 < _DAT_0050c588) {
    _DAT_0050c588 = 254.0;
  }
  if (_DAT_0050c588 < 0.0) {
    _DAT_0050c588 = 0.0;
  }
  FUN_004285d0(0xae,1);
  FUN_00428660(0xae,0x13,param_2 + -0xe);
  FUN_00428740(0xae,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xad,1);
  FUN_00428660(0xad,0x16,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xad,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xab,1);
  FUN_00428660(0xab,0x10b,param_2 + -0xe);
  FUN_00428740(0xab,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004285d0(0xaa,1);
  FUN_00428660(0xaa,0x112,param_2 + -7);
  uVar2 = __ftol();
  FUN_00428740(0xaa,0x32,0xffffffff,0xffffffff,uVar2);
  FUN_004285d0(0xb0,1);
  FUN_00428660(0xb0,0x30,param_2 + -4);
  FUN_00428740(0xb0,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
  FUN_004286f0(0xb0,0x42920000,0x3f800000);
  if (DAT_00e295b4 != 0) {
    FUN_004285d0(0xac,1);
    FUN_00428660(0xac,0xe8,param_2 + -0x13);
    FUN_00428740(0xac,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  if (DAT_00e295b0 != 0) {
    FUN_004285d0(0xaf,1);
    FUN_00428660(0xaf,0xc,param_2 + -0x13);
    FUN_00428740(0xaf,0x32,0xffffffff,0xffffffff,0xfffffffe);
  }
  return;
}



void FUN_004403e0(int param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;

  if (param_5 == '\0') {
    pcVar5 = s__SCREENTEXT_545__f4_c_s3_Lap_Rec_004c13ac;
LAB_00440404:
    uVar2 = FUN_00421360(pcVar5);
    uVar2 = __ftol(uVar2);
    FUN_00450530(param_2,param_3,0x32,0xffffffff,0xffffffff,uVar2);
  }
  else if (param_5 == '\x03') {
    pcVar5 = s__SCREENTEXT_546__f4_c_sBest_Lap_004c13d0;
    goto LAB_00440404;
  }
  iVar4 = param_3 + 7;
  if (param_5 == '\x03') {
    fVar1 = *(float *)(&DAT_00e366bc +
                      ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4);
    if (3599.99 <= fVar1) goto LAB_00440528;
    uVar2 = __ftol(1);
    FUN_004505f0(param_2 + 0x1e,iVar4,fVar1,0x32,0xffffffff,0xffffffff,uVar2);
    puVar3 = &DAT_00e36dc4 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20
    ;
  }
  else {
    fVar1 = *(float *)(&DAT_00e365f4 +
                      ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4);
    if (3599.99 <= fVar1) {
LAB_00440528:
      uVar2 = __ftol(s__c_s______________004c1398);
      FUN_00450530(param_2,iVar4,0x32,0xffffffff,0xffffffff,uVar2);
      return;
    }
    uVar2 = __ftol(1);
    FUN_004505f0(param_2 + 0x1e,iVar4,fVar1,0x32,0xffffffff,0xffffffff,uVar2);
    puVar3 = &DAT_00e36784 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20
    ;
  }
  FUN_00439c70((float)param_2,(float)(param_3 + 0xf),param_4,puVar3);
  return;
}



void FUN_00440550(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  float local_4;

  uVar1 = 0;
  local_8 = 0x3e000000;
  local_4 = (float)(uint)DAT_00e364a5 * 0.003921569;
  switch(param_1) {
  case 0x4b:
    uVar1 = 1;
    local_8 = 0x3f000000;
    break;
  default:
    local_8 = 0x3e800000;
    uVar1 = 0;
    break;
  case 0x4d:
    local_8 = 0x3e800000;
    break;
  case 0x4f:
    uVar1 = 1;
    break;
  case 0x54:
    break;
  case 0x58:
    local_4 = local_4 * 0.75;
    local_8 = 0x3e800000;
  }
  FUN_00426c80(param_1,6,local_8,local_4,uVar1);
  return;
}



undefined4 FUN_00440620(undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1) {
  case 0:
    uVar1 = FUN_00421360(s__SCREENTEXT_497___The_Boonta_Tra_004c1728);
    return uVar1;
  case 1:
    uVar1 = FUN_00421360(s__SCREENTEXT_498___The_Boonta_Cla_004c1700);
    return uVar1;
  case 2:
    uVar1 = FUN_00421360(s__SCREENTEXT_499___Beedo_s_Wild_R_004c16dc);
    return uVar1;
  case 3:
    uVar1 = FUN_00421360(s__SCREENTEXT_500___Howler_Gorge_004c16bc);
    return uVar1;
  case 4:
    uVar1 = FUN_00421360(s__SCREENTEXT_501___Andobi_Mountai_004c1694);
    return uVar1;
  case 5:
    uVar1 = FUN_00421360(s__SCREENTEXT_539___Ando_Prime_Cen_004c166c);
    return uVar1;
  case 6:
    uVar1 = FUN_00421360(s__SCREENTEXT_503___Aquilaris_Clas_004c1648);
    return uVar1;
  case 7:
    uVar1 = FUN_00421360(s__SCREENTEXT_504___Sunken_City_004c1628);
    return uVar1;
  case 8:
    uVar1 = FUN_00421360(s__SCREENTEXT_505___Bumpy_s_Breake_004c1604);
    return uVar1;
  case 9:
    uVar1 = FUN_00421360(s__SCREENTEXT_506___Scrapper_s_Run_004c15e0);
    return uVar1;
  case 10:
    uVar1 = FUN_00421360(s__SCREENTEXT_507___Dethro_s_Reven_004c15bc);
    return uVar1;
  case 0xb:
    uVar1 = FUN_00421360(s__SCREENTEXT_508___Abyss_004c15a4);
    return uVar1;
  case 0xc:
    uVar1 = FUN_00421360(s__SCREENTEXT_509___Baroo_Coast_004c1584);
    return uVar1;
  case 0xd:
    uVar1 = FUN_00421360(s__SCREENTEXT_510___Grabvine_Gatew_004c1560);
    return uVar1;
  case 0xe:
    uVar1 = FUN_00421360(s__SCREENTEXT_511___Fire_Mountain_R_004c1538);
    return uVar1;
  case 0xf:
    uVar1 = FUN_00421360(s__SCREENTEXT_540___Inferno_004c151c);
    return uVar1;
  case 0x10:
    uVar1 = FUN_00421360(s__SCREENTEXT_513___Mon_Gazza_Spee_004c14f4);
    return uVar1;
  case 0x11:
    uVar1 = FUN_00421360(s__SCREENTEXT_514___Spice_Mine_Run_004c14d0);
    return uVar1;
  case 0x12:
    uVar1 = FUN_00421360(s__SCREENTEXT_515___Zugga_Challeng_004c14ac);
    return uVar1;
  case 0x13:
    uVar1 = FUN_00421360(s__SCREENTEXT_516___Vengeance_004c1490);
    return uVar1;
  case 0x14:
    uVar1 = FUN_00421360(s__SCREENTEXT_517___Executioner_004c1470);
    return uVar1;
  case 0x15:
    uVar1 = FUN_00421360(s__SCREENTEXT_518___The_Gauntlet_004c1450);
    return uVar1;
  case 0x16:
    uVar1 = FUN_00421360(s__SCREENTEXT_519___Malastare_100_004c1430);
    return uVar1;
  case 0x17:
    uVar1 = FUN_00421360(s__SCREENTEXT_520___Dug_Derby_004c1414);
    return uVar1;
  case 0x18:
    uVar1 = FUN_00421360(s__SCREENTEXT_521___Sebulba_s_Lega_004c13f0);
  }
  return uVar1;
}
#endif
