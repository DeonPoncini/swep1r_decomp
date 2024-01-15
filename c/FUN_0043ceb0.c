#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ceb0(int **param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_68;
  int local_64;
  float local_60;
  undefined local_5c [4];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];
  
  iVar5 = (int)param_1;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c0d8 = 33.0;
    DAT_0050c178 = '\0';
    pcVar8 = (char *)((int)param_1 + 0x73);
    iVar6 = 3;
    iVar4 = 0;
    do {
      *(undefined4 *)((int)&DAT_0050c200 + iVar4) = *(undefined4 *)(&DAT_004c2720 + *pcVar8 * 0x34);
      iVar3 = FUN_004816b0();
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
      *(float *)((int)&DAT_0050c1e8 + iVar4) = (float)iVar3 * _DAT_004ac86c * _DAT_004ac7b0;
      iVar4 = iVar4 + 4;
    } while (iVar6 != 0);
    FUN_0042f7b0(&DAT_00e2af90,0,0,0xc2c80000);
    FUN_0042f7b0(&DAT_00e298f0,0x43960000,0,0xc2c80000);
    FUN_0042f7d0(&DAT_00e2b470,&DAT_00e2af90);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_00e298f0);
    FUN_004276a0(0,0x1000000);
    FUN_004277b0(3,0,*(undefined4 *)(&DAT_004c0298 + *(char *)((int)param_1 + 0x5e) * 4),5,0,
                 (int)*(short *)(&DAT_004c4a68 + *(char *)((int)param_1 + 0xcc) * 2));
  }
  iVar4 = FUN_00427360(3,0);
  if ((iVar4 == 0) && (iVar4 = FUN_00427360(5,0), iVar4 == 0)) {
    param_1 = (int **)0x3f800000;
    iVar4 = FUN_00427670(0,0x1000000);
    if (iVar4 == 0) {
      FUN_00427410(1,(int)*(char *)(iVar5 + 0xcc),0xf,0);
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
    if (_DAT_004ac8a8 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    _DAT_00e2b478 = _DAT_00e2b478 - _DAT_004ac97c;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    _DAT_00e29b98 = _DAT_00e29b98 - _DAT_004ac980;
    goto LAB_0043d231;
  case '\x01':
    if (_DAT_004ac794 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0,0x41c80000);
    uVar11 = 0x43160000;
    uVar10 = 0x437a0000;
    uVar9 = 0xc3fa0000;
    break;
  case '\x02':
    if (_DAT_004ac984 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    uVar11 = 0x42480000;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    uVar10 = 0xc3480000;
    uVar9 = 0xc3fa0000;
    break;
  case '\x03':
    if (_DAT_004ac8b0 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0xc3160000,0xc1c80000);
    uVar11 = 0;
    uVar10 = 0xc3c80000;
    uVar9 = 0x44480000;
    break;
  case '\x04':
    if (_DAT_004ac988 <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0x43160000,0xc2480000);
    uVar11 = 0xc1c80000;
    uVar10 = 0x43960000;
    uVar9 = 0x42c80000;
    break;
  case '\x05':
    if (_DAT_004ac98c <= _DAT_0050c0d8) goto switchD_0043d06b_caseD_6;
    DAT_0050c178 = DAT_0050c178 + '\x01';
    FUN_0042f7b0(&DAT_00e2b470,0,0,0x41c80000);
    uVar11 = 0x447a0000;
    uVar10 = 0xc4fa0000;
    uVar9 = 0xc59c4000;
    break;
  default:
    goto switchD_0043d06b_caseD_6;
  }
  FUN_0042f7b0(&DAT_00e29b90,uVar9,uVar10,uVar11);
LAB_0043d231:
  FUN_0045c010(&DAT_00e29b90,&DAT_00e2b470,1,0,1);
switchD_0043d06b_caseD_6:
  if (((_DAT_004ac778 <= _DAT_0050c0d8) &&
      (_DAT_0050c0d8 = _DAT_0050c0d8 - _DAT_00e22a50, _DAT_0050c0d8 <= _DAT_004ac778)) &&
     (DAT_0050c944 = 0xffffffff, DAT_0050ca3c == 0)) {
    DAT_004bfedc = 0xc;
  }
  iVar5 = *DAT_00e29a30;
  if (iVar5 != 0) {
    FUN_00431a50(iVar5,2,0xfffffffc,0x10,3);
    FUN_00431060(local_40,local_58);
    FUN_00431450(local_40,0x3ecccccd,0x3ecccccd,0x3ecccccd,local_40);
    FUN_00431640(iVar5,local_40);
    FUN_00431a50(iVar5,2,3,0x10,2);
  }
  FUN_0042f7b0(local_4c,0xc2960000,0,0);
  local_68 = 0;
  param_1 = (int **)&DAT_00e29a34;
  local_64 = 3;
  do {
    iVar5 = local_68;
    fVar2 = _DAT_004ac7b0;
    fVar1 = (float)(&DAT_0050c1e8)[local_68] -
            (float)(&DAT_0050c200)[local_68] * _DAT_00e22a50 * _DAT_004ac990;
    (&DAT_0050c1e8)[local_68] = fVar1;
    if (fVar2 < fVar1) {
      (&DAT_0050c1e8)[local_68] = fVar1 - _DAT_004ac7b0;
    }
    FUN_0042f380((&DAT_0050c1e8)[local_68],&local_60,local_5c);
    iVar4 = FUN_00450b30(0x456c6d6f,local_68 + 0x1c);
    *(float *)(iVar4 + 0x4c) = (float)local_68 * _DAT_004ac868 - local_60 * _DAT_004ac994;
    FUN_0044b270(*(undefined4 *)(iVar4 + 0x30),iVar4 + 0x44);
    local_68 = 2;
    ppiVar7 = param_1;
    do {
      iVar6 = **ppiVar7;
      if (iVar6 != 0) {
        FUN_00431a50(iVar6,2,0xfffffffc,0x10,3);
        FUN_00431060(local_40,local_58);
        FUN_00431450(local_40,0x3dcccccd,0x3dcccccd,0x3dcccccd,local_40);
        FUN_0042f7d0(local_10,iVar4 + 0x44);
        FUN_00431640(iVar6,local_40);
        FUN_00431a50(iVar6,2,3,0x10,2);
      }
      ppiVar7 = ppiVar7 + 3;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_68 = iVar5 + 1;
    param_1 = param_1 + 1;
    local_64 = local_64 + -1;
  } while (local_64 != 0);
  if (((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) &&
     ((0 < DAT_0050c040 &&
      (iVar5 = FUN_00440990(&DAT_00e35a60,&PTR_LAB_00474242_2_004c11f4), iVar5 != 0)))) {
    _DAT_0050c0d8 = 0.0;
  }
  return;
}

