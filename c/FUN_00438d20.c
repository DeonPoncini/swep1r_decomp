#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438d20(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  char *pcVar11;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [16];
  undefined local_30 [48];
  
  iVar5 = (int)param_1;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (DAT_004c021c == 0) {
    if (DAT_004c4000 != 0) goto LAB_00438d57;
    if (DAT_0050c930 == 4) goto LAB_00438d53;
  }
  else {
LAB_00438d53:
    if (DAT_004c4000 != 0) {
LAB_00438d57:
      FUN_0049eb80(&DAT_0050c328,&DAT_004d55cc);
      if (DAT_004c4000 != 0) {
        FUN_0042f7b0(&DAT_00e2af90,0,0,0);
      }
    }
    *(undefined4 *)((int)param_1 + 0x34) = 0x14;
    FUN_0043f8e0(param_1,0x14,0);
    FUN_0042f860(&local_4c,&DAT_00e298f0,&DAT_00e2af90);
    fVar10 = (float10)FUN_0042f8c0(&local_4c);
    DAT_0050c210 = (float)fVar10;
    FUN_0042f9b0(&local_4c);
    fVar10 = (float10)FUN_0042f560(-local_4c,local_48);
    DAT_0050c1fc = (float)fVar10;
    fVar10 = (float10)FUN_0042f3e0(local_44);
    DAT_0050c2f0 = (float)fVar10;
    if (DAT_0050c1fc < _DAT_004ac778) {
      DAT_0050c1fc = DAT_0050c1fc - _DAT_004ac7f8;
    }
    if (_DAT_004ac7b0 < DAT_0050c1fc) {
      DAT_0050c1fc = DAT_0050c1fc - _DAT_004ac7b0;
    }
    if (DAT_0050c2f0 < _DAT_004ac7d0) {
      DAT_0050c2f0 = DAT_0050c2f0 - _DAT_004ac7fc;
    }
    if (_DAT_004ac800 < DAT_0050c2f0) {
      DAT_0050c2f0 = DAT_0050c2f0 - _DAT_004ac7ec;
    }
    DAT_004c0220 = 1;
    _DAT_0050c95c = 0.0;
    DAT_004c021c = 0;
    DAT_004c4000 = 0;
    DAT_0050c930 = 0;
  }
  if ((DAT_004c0220 != 0) &&
     (_DAT_0050c95c = _DAT_0050c95c + _DAT_00e22a50, _DAT_004ac760 <= _DAT_0050c95c)) {
    _DAT_0050c95c = 5.0;
  }
  switch(*(undefined4 *)((int)param_1 + 0x34)) {
  case 0x14:
    puVar7 = &DAT_004d55cc;
    goto LAB_00438fa9;
  case 0x15:
    pcVar11 = s__SCREENTEXT_152__c_sCockpit_004c0cb8;
    break;
  case 0x16:
    pcVar11 = s__SCREENTEXT_153__c_sEngine_1_004c0c98;
    break;
  case 0x17:
    pcVar11 = s__SCREENTEXT_154__c_sEngine_2_004c0c78;
    break;
  case 0x18:
    pcVar11 = s__SCREENTEXT_155__c_sEngine_3_004c0c58;
    break;
  case 0x19:
    pcVar11 = s__SCREENTEXT_156__c_sEngine_4_004c0c38;
    break;
  case 0x1a:
    pcVar11 = s__SCREENTEXT_158__c_sPT01_004c0c1c;
    break;
  case 0x1b:
    pcVar11 = s__SCREENTEXT_159__c_sPT02_004c0c00;
    break;
  case 0x1c:
    pcVar11 = s__SCREENTEXT_160__c_sPT03_004c0be4;
    break;
  case 0x1d:
    pcVar11 = s__SCREENTEXT_161__c_sPT04_004c0bc8;
    break;
  case 0x1e:
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                         [*(char *)((int)param_1 + 0x73) * 0xd]);
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                         [*(char *)((int)param_1 + 0x73) * 0xd],uVar6);
    uVar6 = FUN_00421360(s__c_s_s__s_004c08d8,uVar6);
    FUN_0049eb80(&DAT_0050c328,uVar6);
  default:
    goto switchD_00438ef9_caseD_b;
  }
  puVar7 = (undefined1 *)FUN_00421360(pcVar11);
LAB_00438fa9:
  FUN_0049eb80(&DAT_0050c328,puVar7);
switchD_00438ef9_caseD_b:
  FUN_00450530(0xa0,0xc3,0,0xffffffff,0,0xffffffff,&DAT_0050c328);
  iVar9 = 0;
  if ('\0' < *(char *)((int)param_1 + 0x70)) {
    param_1 = &DAT_0050c908;
    do {
      fVar4 = DAT_0050c210;
      if (DAT_004eb39c == 0) {
        if (DAT_004d6b48 != 0) {
          FUN_00440550(0x54);
          DAT_004c021c = 1;
          return;
        }
        if (DAT_004d6b44 != 0) {
          FUN_00440550(0x4d);
          DAT_004c021c = 1;
          _DAT_0050c958 = 0;
          FUN_00454d40(iVar5,3);
          return;
        }
      }
      if (((float)_DAT_004ac880 < (float)(&DAT_00e98ea0)[iVar9]) ||
         ((float)(&DAT_00e98ea0)[iVar9] < (float)_DAT_004ac748)) {
        if (DAT_004c0220 == 0) {
          bVar2 = true;
          DAT_0050c1fc = DAT_0050c1fc -
                         (float)(&DAT_00e98ea0)[iVar9] * _DAT_00e22a50 * _DAT_004ac8d0 *
                         (float)_DAT_004ac888;
        }
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if (((float)_DAT_004ac880 < (float)(&DAT_00e98e80)[iVar9]) ||
         ((float)(&DAT_00e98e80)[iVar9] < (float)_DAT_004ac748)) {
        if (DAT_004c0220 == 0) {
          DAT_0050c2f0 = DAT_0050c2f0 -
                         (float)(&DAT_00e98e80)[iVar9] * _DAT_00e22a50 * _DAT_004ac814 *
                         (float)_DAT_004ac888;
          if (_DAT_004ac8d4 < DAT_0050c2f0) {
            DAT_0050c2f0 = 89.0;
          }
          if (DAT_0050c2f0 < _DAT_004ac8d8) {
            DAT_0050c2f0 = -89.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((*param_1 & 4) != 0) {
        if (DAT_004c0220 == 0) {
          DAT_0050c210 = DAT_0050c210 - _DAT_00e22a50 * _DAT_004ac8dc;
          if (DAT_0050c210 < _DAT_004ac79c) {
            DAT_0050c210 = 100.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((*param_1 & 8) != 0) {
        if (DAT_004c0220 == 0) {
          DAT_0050c210 = DAT_0050c210 - _DAT_00e22a50 * _DAT_004ac8e0;
          if (_DAT_004ac8e4 < DAT_0050c210) {
            DAT_0050c210 = 1336.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((((byte)DAT_0050c908 & 0x10) != 0) && (DAT_0050c930 != 3)) {
        iVar8 = *(int *)(iVar5 + 0x34) + 1;
        *(int *)(iVar5 + 0x34) = iVar8;
        if ((iVar8 == 0x16) &&
           (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) == 0x1e)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1a;
        }
        if ((*(int *)(iVar5 + 0x34) == 0x18) &&
           (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) != 0x28)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1a;
        }
        if ((*(int *)(iVar5 + 0x34) < 0x1e) &&
           ((int)(DAT_00e35aa0 & 0xff) < *(int *)(iVar5 + 0x34) + -0x19)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1e;
        }
        if (0x1e < *(int *)(iVar5 + 0x34)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x14;
        }
        bVar1 = true;
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
        _DAT_0050c95c = 0.0;
      }
      if ((((byte)DAT_0050c908 & 0x20) != 0) && (DAT_0050c930 != 3)) {
        iVar8 = *(int *)(iVar5 + 0x34) + -1;
        *(int *)(iVar5 + 0x34) = iVar8;
        if (iVar8 == 0x19) {
          if (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) == 0x1e) {
            *(undefined4 *)(iVar5 + 0x34) = 0x15;
          }
          if ((*(int *)(iVar5 + 0x34) == 0x19) &&
             (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) != 0x28)) {
            *(undefined4 *)(iVar5 + 0x34) = 0x17;
          }
        }
        if ((int)(DAT_00e35aa0 & 0xff) < *(int *)(iVar5 + 0x34) + -0x19) {
          *(uint *)(iVar5 + 0x34) = (DAT_00e35aa0 & 0xff) + 0x19;
        }
        if (*(int *)(iVar5 + 0x34) < 0x14) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1e;
        }
        bVar1 = true;
        if (_DAT_0050c95c == _DAT_004ac760) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
        _DAT_0050c95c = 0.0;
      }
      if ((!bVar1) || (bVar3)) {
        FUN_0043fbc0(iVar5,*(undefined4 *)(iVar5 + 0x34));
      }
      else {
        FUN_0043f8e0(iVar5,*(undefined4 *)(iVar5 + 0x34),1);
        bVar1 = false;
      }
      if ((bVar2) || (DAT_0050c930 == 3)) {
        FUN_00431020(local_40,DAT_0050c1fc,DAT_0050c2f0,0);
        FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,DAT_0050c210,local_30);
        if (_DAT_00e298f8 < _DAT_004ac8e8) {
          FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,
                       ((_DAT_00e2af98 - _DAT_004ac8e8) / (_DAT_00e2af98 - _DAT_00e298f8)) *
                       DAT_0050c210,local_30);
        }
        if (_DAT_004ac8ec < _DAT_00e298f8) {
          FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,
                       ((_DAT_00e2af98 - _DAT_004ac8ec) / (_DAT_00e2af98 - _DAT_00e298f8)) *
                       DAT_0050c210,local_30);
        }
        if (DAT_0050c210 != fVar4) {
          fVar10 = (float10)FUN_0042f950(&DAT_00e298f0,&DAT_00e2af90);
          DAT_0050c210 = (float)fVar10;
        }
        if (bVar2) {
          FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
        }
        bVar2 = false;
      }
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 1;
    } while (iVar9 < *(char *)(iVar5 + 0x70));
  }
  if (bVar3) {
    DAT_004c0220 = 0;
    _DAT_0050c95c = 0.0;
    FUN_0043f8e0(iVar5,*(undefined4 *)(iVar5 + 0x34),1);
    FUN_0042f860(&local_4c,&DAT_00e298f0,&DAT_00e2af90);
    fVar10 = (float10)FUN_0042f8c0(&local_4c);
    DAT_0050c210 = (float)fVar10;
    FUN_0042f9b0(&local_4c);
    fVar10 = (float10)FUN_0042f560(-local_4c,local_48);
    DAT_0050c1fc = (float)fVar10;
    fVar10 = (float10)FUN_0042f3e0(local_44);
    DAT_0050c2f0 = (float)fVar10;
    if (DAT_0050c1fc < _DAT_004ac778) {
      DAT_0050c1fc = DAT_0050c1fc - _DAT_004ac7f8;
    }
    if (_DAT_004ac7b0 < DAT_0050c1fc) {
      DAT_0050c1fc = DAT_0050c1fc - _DAT_004ac7b0;
    }
    if (DAT_0050c2f0 < _DAT_004ac7d0) {
      DAT_0050c2f0 = DAT_0050c2f0 - _DAT_004ac7fc;
    }
    if (_DAT_004ac800 < DAT_0050c2f0) {
      DAT_0050c2f0 = DAT_0050c2f0 - _DAT_004ac7ec;
    }
  }
  return;
}

