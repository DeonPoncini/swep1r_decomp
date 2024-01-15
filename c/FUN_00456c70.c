#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456c70(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];
  
  param_3 = param_3 * _DAT_004ad060;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  iVar1 = *(int *)(&DAT_00e29a88)[param_2];
  if (iVar1 == 0) {
    return;
  }
  FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
  FUN_004313d0(local_40);
  FUN_0042fac0(local_4c,0x3f2aacda,&DAT_00e298f0,0x3eaaa64c,&DAT_00e2af90);
  FUN_00431410(local_40,local_40,0x42b40000,DAT_00e298c0,DAT_00e298c4,DAT_00e298c8);
  FUN_00431410(local_40,local_40,0x43200000,DAT_00e298d0,DAT_00e298d4,DAT_00e298d8);
  switch(param_2) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
    param_3 = param_3 * _DAT_004ad064;
    break;
  case 2:
  case 5:
  case 0x11:
  case 0x12:
    param_3 = param_3 * _DAT_004ad068;
    break;
  case 4:
    param_3 = param_3 * _DAT_004ad06c;
    break;
  case 8:
  case 0x13:
    param_3 = param_3 * _DAT_004ad070;
    break;
  case 0xb:
    param_3 = param_3 * _DAT_004ad074;
    break;
  case 0xd:
    param_3 = param_3 * _DAT_004ad078;
    break;
  case 0xe:
    param_3 = param_3 * _DAT_004ad07c;
    break;
  case 0xf:
  case 0x16:
    param_3 = param_3 * _DAT_004ad080;
    break;
  case 0x10:
    param_3 = param_3 * _DAT_004acfcc;
    break;
  case 0x17:
  case 0x18:
    param_3 = param_3 * _DAT_004acf58;
  }
  FUN_004816b0();
  uVar2 = __ftol();
  FUN_0042b640(iVar1,0,0,0,0xff,0,uVar2);
  FUN_00431450(local_40,param_3,param_3,param_3,local_40);
  FUN_0042f7d0(local_10,local_4c);
  FUN_00431640(iVar1,local_40);
  if ((DAT_004c45d4 != param_2) || (DAT_0050c930 != 0)) {
    DAT_004c45d4 = param_2;
    iVar3 = FUN_00482000(iVar1,&DAT_0050c8c8,0);
    if (iVar3 == 0) {
      FUN_0042f7b0(&DAT_0050c8c8,0,0,0);
      FUN_0042f7b0(&DAT_0050c8d4,0xc1200000,0xc1200000,0xc1200000);
    }
  }
  switch(param_2) {
  case 0:
  case 3:
  case 0xc:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 1:
  case 0xd:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 2:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 4:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 5:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 6:
    uVar4 = 0xc0000000;
    uVar2 = 0xc0800000;
    break;
  case 7:
    uVar4 = 0;
    uVar2 = 0xc0800000;
    break;
  case 8:
    uVar4 = 0xbf800000;
    uVar2 = 0;
    break;
  case 9:
    uVar4 = 0;
    uVar2 = 0xc0800000;
    break;
  case 10:
    uVar4 = 0x40000000;
    uVar2 = 0xc0000000;
    break;
  case 0xb:
    uVar4 = 0x40800000;
    uVar2 = 0xc0000000;
    break;
  case 0xe:
    uVar4 = 0x3f800000;
    uVar2 = 0xbf800000;
    break;
  case 0xf:
    uVar4 = 0xc1400000;
    uVar2 = 0;
    break;
  case 0x10:
    uVar4 = 0x3f800000;
    uVar2 = 0xc0800000;
    break;
  case 0x11:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 0x12:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 0x13:
    uVar4 = 0xc0000000;
    uVar2 = 0xc0800000;
    break;
  case 0x14:
    uVar4 = 0xc0a00000;
    uVar2 = 0;
    break;
  case 0x15:
    uVar4 = 0xc0c00000;
    uVar2 = 0;
    break;
  case 0x16:
    uVar4 = 0xc0c00000;
    uVar2 = 0xc0800000;
    break;
  case 0x17:
    uVar4 = 0x40000000;
    uVar2 = 0x41800000;
    break;
  case 0x18:
    uVar4 = 0x41400000;
    uVar2 = 0xc0c00000;
    break;
  default:
    goto switchD_00456ea8_caseD_19;
  }
  FUN_0042f7b0(&local_58,uVar2,0,uVar4);
switchD_00456ea8_caseD_19:
  FUN_0042f830(local_10,local_10,&local_58);
  FUN_00431640(iVar1,local_40);
  FUN_00431a50(iVar1,2,3,0x10,2);
  return;
}

