#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  if (_DAT_004ac778 < DAT_00e295a0) {
    FUN_00456800(iVar2,(int)DAT_0050c134,DAT_00e295a0 * (float)_DAT_004ac7c0);
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

