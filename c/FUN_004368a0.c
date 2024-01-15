#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004368a0(int param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  char *pcVar10;
  char local_71;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [48];
  
  iVar8 = -1;
  _DAT_0050c480 = 0;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    if (*(int *)(param_1 + 0xc) == 0xd) {
      *(undefined *)(param_1 + 0x5f) = 0;
    }
    FUN_0042f860(&local_6c,&DAT_00e298f0,&DAT_00e2af90);
    fVar9 = (float10)FUN_0042f8c0(&local_6c);
    DAT_0050c11c = (float)fVar9;
    FUN_0042f9b0(&local_6c);
    fVar9 = (float10)FUN_0042f560(-local_6c,local_68);
    DAT_0050c2ec = (float)fVar9;
    fVar9 = (float10)FUN_0042f3e0(local_64);
    DAT_0050c2e8 = (float)fVar9;
    if (DAT_0050c2ec < _DAT_004ac778) {
      DAT_0050c2ec = DAT_0050c2ec - _DAT_004ac7f8;
    }
    if (_DAT_004ac7b0 < DAT_0050c2ec) {
      DAT_0050c2ec = DAT_0050c2ec - _DAT_004ac7b0;
    }
    if (DAT_0050c2e8 < _DAT_004ac7d0) {
      DAT_0050c2e8 = DAT_0050c2e8 - _DAT_004ac7fc;
    }
    if (_DAT_004ac800 < DAT_0050c2e8) {
      DAT_0050c2e8 = DAT_0050c2e8 - _DAT_004ac7ec;
    }
    cVar7 = '\x01';
    _DAT_0050c308 = 0xffffff00;
    _DAT_0050c30c = 0xffffffff;
    _DAT_0050c310 = 0xffffffff;
    if (*(char *)(param_1 + 0x70) == '\x01') {
      _DAT_0050c308 = 0xffff0100;
      cVar7 = '\x02';
    }
    cVar3 = cVar7;
    if (*(char *)(param_1 + 0x6c) != '\0') {
      (&DAT_0050c308)[cVar7] = 2;
      (&DAT_0050c308)[(char)(cVar7 + '\x01')] = 3;
      cVar3 = cVar7 + '\x03';
      (&DAT_0050c308)[(char)(cVar7 + '\x02')] = 4;
      if ((byte)DAT_00e35aa0 < 4) {
        iVar6 = (int)cVar3;
        cVar3 = cVar7 + '\x04';
        (&DAT_0050c308)[iVar6] = 5;
      }
    }
    DAT_0050c524 = cVar3 + '\x01';
    (&DAT_0050c308)[cVar3] = 6;
  }
  uVar4 = FUN_00421360(s__SCREENTEXT_474__c_sMain_Menu_004c0a60);
  FUN_00450560(0xa0,0x19,uVar4);
  cVar7 = '\0';
  if ('\0' < DAT_0050c524) {
    do {
      switch((&DAT_0050c308)[cVar7]) {
      case 0:
        pcVar10 = s__SCREENTEXT_69__f4_sStart_Race_004c0a40;
        break;
      case 1:
        pcVar10 = s__SCREENTEXT_523__f4_sInspect_Veh_004c0a18;
        goto LAB_00436af1;
      case 2:
        pcVar10 = s__SCREENTEXT_524__f4_sVehicle_Upg_004c09f0;
        goto LAB_00436ac7;
      case 3:
        pcVar10 = s__SCREENTEXT_102__f4_sBuy_Parts_004c09d0;
        break;
      case 4:
        pcVar10 = s__SCREENTEXT_103__f4_sJunkyard_004c09b0;
        goto LAB_00436af1;
      case 5:
        pcVar10 = s__SCREENTEXT_587__f4_sBuy_Pit_Dro_004c098c;
LAB_00436ac7:
        uVar4 = FUN_00421360(pcVar10);
        goto LAB_00436aff;
      case 6:
        pcVar10 = s__SCREENTEXT_473__f4_sChange_Vehi_004c0968;
        break;
      case 7:
        pcVar10 = s__SCREENTEXT_73__f4_sOptions_004c094c;
LAB_00436af1:
        uVar4 = FUN_00421360(pcVar10);
        goto LAB_00436aff;
      default:
        goto switchD_00436a98_caseD_8;
      }
      uVar4 = FUN_00421360(pcVar10);
LAB_00436aff:
      FUN_0049eb80(local_60,uVar4);
switchD_00436a98_caseD_8:
      FUN_0043fce0(param_1,0x3c,0x50,10,(int)*(char *)(param_1 + 0x5f),(int)cVar7,local_60);
      cVar7 = cVar7 + '\x01';
    } while (cVar7 < DAT_0050c524);
  }
  local_71 = '\0';
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      iVar6 = (int)local_71;
      if (((&DAT_0050c918)[iVar6] & 0x8000) != 0) {
        cVar7 = *(char *)(param_1 + 0x5f) + '\x01';
        *(char *)(param_1 + 0x5f) = cVar7;
        if (DAT_0050c524 + -1 < (int)cVar7) {
          *(undefined *)(param_1 + 0x5f) = 0;
        }
        FUN_00440550(0x58);
      }
      if (((&DAT_0050c918)[iVar6] & 0x4000) != 0) {
        cVar7 = *(char *)(param_1 + 0x5f) + -1;
        *(char *)(param_1 + 0x5f) = cVar7;
        if (cVar7 < '\0') {
          *(char *)(param_1 + 0x5f) = DAT_0050c524 + -1;
        }
        FUN_00440550(0x58);
      }
      iVar5 = FUN_00485880(0x38,0);
      if ((((iVar5 != 0) || (iVar5 = FUN_00485880(0xb8,0), iVar5 != 0)) ||
          (iVar5 = FUN_00485880(0x2a,0), iVar5 != 0)) || (iVar5 = FUN_00485880(0x36,0), iVar5 != 0))
      {
        fVar2 = DAT_0050c11c;
        bVar1 = false;
        DAT_0050c930 = 0;
        if ((_DAT_004ac770 < (float)(&DAT_00e98ea0)[iVar6]) ||
           ((float)(&DAT_00e98ea0)[iVar6] < _DAT_004ac804)) {
          bVar1 = true;
          DAT_0050c2ec = DAT_0050c2ec -
                         (float)(&DAT_00e98ea0)[iVar6] * _DAT_00e22a50 * _DAT_004ac808;
        }
        if ((_DAT_004ac770 < (float)(&DAT_00e98e80)[iVar6]) ||
           ((float)(&DAT_00e98e80)[iVar6] < _DAT_004ac804)) {
          DAT_0050c2e8 = DAT_0050c2e8 -
                         (float)(&DAT_00e98e80)[iVar6] * _DAT_00e22a50 * _DAT_004ac80c;
          if (_DAT_004ac810 < DAT_0050c2e8) {
            DAT_0050c2e8 = 45.0;
          }
          if (DAT_0050c2e8 < _DAT_004ac814) {
            DAT_0050c2e8 = -45.0;
          }
          bVar1 = true;
        }
        if (bVar1) {
          FUN_00431020(local_40,DAT_0050c2ec,DAT_0050c2e8,0);
          FUN_0042fa80(&DAT_00e2af90,&DAT_00e298f0,-DAT_0050c11c,local_30);
          if (DAT_0050c11c != fVar2) {
            fVar9 = (float10)FUN_0042f950(&DAT_00e298f0,&DAT_00e2af90);
            DAT_0050c11c = (float)fVar9;
          }
          FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
        }
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        iVar8 = 3;
        DAT_004bfedc = 0xd;
      }
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x54);
        if (*(char *)(param_1 + 0x5f) == '\0') {
          iVar8 = -1;
          FUN_0040a120(0);
          FUN_00409d70(0xffffffff);
          FUN_00409d70(0);
          iVar6 = *(char *)(param_1 + 0x5d) * 0xc;
          FUN_00427d90((int)(char)(&DAT_004bfef1)[iVar6],(int)(char)(&DAT_004bfef0)[iVar6]);
          iVar6 = FUN_0041d6b0();
          if ((iVar6 == 0) || (iVar6 = FUN_0041d6c0(), iVar6 != 0)) {
            if ((*(char *)(param_1 + 0x6c) != '\0') &&
               (((DAT_00e35a84 != (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc] &&
                 (_DAT_00ec8854 != _DAT_004ac778)) && (DAT_0050c458 == 0)))) {
              DAT_004bfedc = 0xf;
            }
            DAT_0050c944 = 0xffffffff;
            iVar8 = FUN_004409d0(&DAT_00e35a60,&DAT_004c0948);
            if ((iVar8 != 0) && (((byte)DAT_0050c908 & 4) != 0)) {
              FUN_00440c10(param_1);
            }
            FUN_0041e660();
            return;
          }
        }
        else {
          switch((&DAT_0050c308)[*(char *)(param_1 + 0x5f)]) {
          case 1:
            DAT_004bfedc = 8;
            iVar8 = 2;
            *(undefined4 *)(param_1 + 0x10) = 0;
            FUN_0045a3e0();
            break;
          case 2:
            DAT_004bfedc = 8;
            iVar8 = 2;
            *(undefined4 *)(param_1 + 0x10) = 1;
            FUN_0045a3e0();
            break;
          case 3:
            DAT_004bfedc = 7;
            iVar8 = 0;
            *(undefined4 *)(param_1 + 0x10) = 0;
            break;
          case 4:
            iVar8 = 1;
            DAT_004bfedc = 4;
            break;
          case 5:
            DAT_004bfedc = 7;
            iVar8 = 0;
            *(undefined4 *)(param_1 + 0x10) = 1;
            break;
          case 6:
            DAT_004bfedc = 9;
            *(char *)(param_1 + 0x6f) = local_71;
            iVar8 = 3;
            _DAT_0050c480 = 1;
            break;
          case 7:
            *(undefined4 *)(param_1 + 0x10) = 1;
            return;
          }
        }
      }
      local_71 = local_71 + '\x01';
    } while (local_71 < *(char *)(param_1 + 0x70));
  }
  if (iVar8 != -1) {
    if (*(int *)(param_1 + 0x38) == iVar8) {
      FUN_00454d40(param_1,DAT_004bfedc);
      return;
    }
    DAT_0050c944 = 0xffffffff;
  }
  return;
}

