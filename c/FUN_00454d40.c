#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined local_100 [256];
  
  DAT_0050c530 = 1;
  if (param_1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    DAT_0050c468 = 0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    DAT_004bfedc = 0xffffffff;
    DAT_004c4000 = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x5c) = 1;
    if (((DAT_0050c944 != 0) || (*(int *)(param_1 + 0x38) == 3)) ||
       ((*(int *)(param_1 + 0xc) != 3 && (*(int *)(param_1 + 8) != 3)))) {
      if (*(int *)(param_1 + 8) != 0) {
        FUN_004586e0(param_1);
        FUN_00459150(param_1);
      }
      _DAT_00e295d8 = 0;
      DAT_00e295dc = 0;
      DAT_00e295e0 = 0;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
    }
  }
  if (DAT_0050c968 != 0) {
    FUN_00414e60(DAT_0050c968,0);
  }
  DAT_0050c968 = 0;
  if (DAT_004d5e00 != 0) goto LAB_00454e83;
  switch(param_2) {
  case 3:
    uVar2 = 0x84;
    break;
  case 4:
    uVar2 = 0x87;
    break;
  default:
    goto switchD_00454e2b_caseD_5;
  case 7:
    uVar2 = 0x85;
    break;
  case 8:
    uVar2 = 0x88;
    break;
  case 9:
    DAT_004d6b6c = 1;
    uVar2 = 0x81;
    break;
  case 0xc:
    uVar2 = 0x82;
    break;
  case 0xd:
    uVar2 = 0x83;
  }
  DAT_0050c968 = FUN_00414d90(0,uVar2);
switchD_00454e2b_caseD_5:
  if (DAT_0050c968 != 0) {
    FUN_00414e60(DAT_0050c968,1);
  }
LAB_00454e83:
  DAT_004d6b48 = 0;
  DAT_004d6b40 = 0;
  DAT_00ec8748 = 0;
  DAT_00ec8744 = 0;
  FUN_004336f0(param_1);
  iVar1 = FUN_0041d6b0();
  if ((iVar1 != 0) && (iVar1 = FUN_0041d6c0(), iVar1 != 0)) {
    if (param_2 == 3) {
      DAT_00ea05a0 = 3;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c4680;
    }
    else if (param_2 == 0xc) {
      DAT_00ea05a0 = 0xc;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c46b0;
    }
    else if (param_2 == 0xd) {
      DAT_00ea05a0 = 0xd;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c46e4;
    }
    else {
      DAT_00ea05a0 = 0x13;
      pcVar3 = s_Setting_hanger_state_to_HANGAR_S_004c4718;
    }
    FUN_00426910(pcVar3);
    FUN_0041e5a0();
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    pcVar3 = s_LEGAL_004c4678;
    break;
  case 1:
    pcVar3 = s_SPLASH_004c4670;
    break;
  case 2:
    pcVar3 = s_ENTER_NAME_004c4664;
    break;
  case 3:
    pcVar3 = s_MAIN_MENU_004c4650;
    break;
  case 4:
    pcVar3 = s_JUNKYARD_004c4644;
    break;
  case 5:
    pcVar3 = s_POST_RACE_INFO_004c4634;
    break;
  default:
    pcVar3 = s__Unknown_state__004c45dc;
    break;
  case 7:
    pcVar3 = s_WATTO_004c465c;
    break;
  case 8:
    pcVar3 = s_LOOK_AT_VEHICLE_004c4620;
    break;
  case 9:
    pcVar3 = s_SELECT_VEHICLE_004c4610;
    break;
  case 0xc:
    pcVar3 = s_SELECT_PLANET_004c4600;
    break;
  case 0xd:
    pcVar3 = s_SELECT_TRACK_004c45f0;
  }
  FUN_0049eb80(local_100,pcVar3);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xd:
    FUN_00427690(0,0x80000000);
    break;
  default:
    FUN_004276a0(0,0x80000000);
  }
  if (*(int *)(param_1 + 8) == 4) {
    if (*(int *)(param_1 + 0x3c) != 1) {
      FUN_00427690(0,0x20);
      FUN_004276a0(0,1);
    }
  }
  else if ((*(int *)(param_1 + 8) == 7) &&
          ((*(int *)(param_1 + 0x3c) != 0 || (*(int *)(param_1 + 0xc) == 3)))) {
    FUN_00427690(0,0x20);
    FUN_00427690(0,1);
  }
  DAT_00e2a67c = *(undefined4 *)(param_1 + 8);
  if (DAT_004bfecc != -1) {
    *(int *)(param_1 + 0x10) = DAT_004bfecc;
  }
  return;
}

