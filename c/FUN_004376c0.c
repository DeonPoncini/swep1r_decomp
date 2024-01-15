#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004376c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  int local_124;
  uint *local_120;
  float local_118;
  float local_114;
  undefined local_10c [8];
  undefined4 local_104;
  undefined local_100 [256];
  
  FUN_0043da90(param_1,DAT_004c4000,0x14);
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_00e99358 = -300.0;
    DAT_0050c468 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_0045a840(param_1);
    }
    DAT_0050c46c = 0;
    DAT_0050c1f8 = 4 - (DAT_00e35aa0 & 0xff);
    DAT_0050c52c = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_0045bee0(param_1,1,0xffffffff,0);
      DAT_0050c934 = 0;
      FUN_0045c9d0(param_1,1);
      DAT_0050c474 = 1;
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      DAT_004c020c = DAT_00e295d0;
    }
    else {
      DAT_00e99400 = (ushort)(DAT_00e35a98 < 1000);
      DAT_0050c52c = (uint)(DAT_0050c1f8 != 0);
      iVar1 = FUN_00440b50(param_1);
      if (iVar1 != 0) {
        FUN_0045bee0(param_1,2,0xffffffff,0);
      }
    }
  }
  FUN_00437ea0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (DAT_004c020c != DAT_00e295d0) {
      DAT_004c020c = DAT_00e295d0;
      DAT_0050c474 = 1;
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      FUN_0043eb50();
    }
  }
  else if (((0 < DAT_0050c1f8) && (DAT_0050c930 != 1)) && (_DAT_00e99358 == _DAT_004ac848)) {
    DAT_0050c468 = 1;
    DAT_0050c930 = 5;
    FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    FUN_0043ec10();
    FUN_004550d0(param_1,0x41a00000,0x43070000);
  }
  else {
    FUN_0043f380(param_1);
  }
  if (((DAT_0050c470 == 0) && (DAT_0050c468 == 0)) &&
     ((*(int *)(param_1 + 0x34) == 1 && ((DAT_0050c930 == 0 || (DAT_0050c930 == 5)))))) {
    uVar2 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
    uVar2 = FUN_00421360(s__c_s_s_004c0bc0,uVar2);
    FUN_0049eb80(local_100,uVar2);
    FUN_00450530(0xa0,0x19,0x32,0xffffffff,0xffffffff,0xffffffff,local_100);
    uVar2 = FUN_0042de10(local_100,0);
    FUN_0042de10(local_100,0,0x1a,uVar2);
    uVar2 = __ftol();
    FUN_00440150(uVar2);
  }
  FUN_0043dba0(param_1);
  FUN_00455dc0(param_1);
  DAT_0050c474 = 0;
  if ((*(int *)(param_1 + 8) == 3) || (local_124 = 0, *(char *)(param_1 + 0x70) < '\x01')) {
    return;
  }
  local_120 = &DAT_0050c908;
  do {
    if ((DAT_0050c468 == 0) && (DAT_004eb39c == 0)) {
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x54);
        if (*(int *)(param_1 + 0x10) == 0) {
          if (DAT_00e295d0 != -1) {
            if (DAT_0050c470 == 0) {
              if ((DAT_0050c930 == 0) || (DAT_0050c930 == 5)) {
                DAT_0050c474 = 1;
                DAT_0050c470 = 1;
                DAT_00e99400 = 0;
                DAT_0050c468 = 1;
                FUN_0043eb50();
              }
            }
            else {
              if (DAT_00e99400 == 0) {
                FUN_00468fe0(0x1c,0x19);
                FUN_00440800(param_1);
              }
              else {
                FUN_00468fe0(0x1c,0x1a);
              }
              DAT_0050c474 = 1;
              DAT_00e99400 = 0;
              DAT_0050c470 = 0;
              DAT_0050c954 = 1;
              DAT_0050c468 = -1;
            }
          }
        }
        else if (*(int *)(param_1 + 0x10) == 1) {
          if (DAT_0050c52c == 0) {
            if (0 < DAT_0050c1f8) {
              DAT_0050c52c = 1;
              DAT_0050c468 = 1;
              DAT_00e99400 = 0;
              FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
            }
          }
          else if (DAT_00e99400 == 1) {
            DAT_00e99400 = 0;
            DAT_0050c52c = 0;
            DAT_0050c468 = -1;
            FUN_00468fe0(DAT_0050c1f8 + 0x33,4);
            if (DAT_0050c47c != 2) goto LAB_00437e79;
            DAT_0050c47c = 0;
            DAT_004bfedc = 8;
            DAT_0050c944 = 0xffffffff;
          }
          else if (999 < DAT_00e35a98) {
            FUN_0044afb0(*(undefined4 *)(&DAT_00e299cc + DAT_0050c1f8 * 4),&local_118);
            FUN_0042f7d0(local_10c,&DAT_004c401c);
            local_104 = 0xc2700000;
            fVar3 = (float10)FUN_0042f560(local_118 - _DAT_004ac7ac,_DAT_004ac850 - local_114);
            FUN_00468800(DAT_0050c1f8 + 0x33,10,&local_118,local_10c,(float)fVar3,(float)fVar3);
            DAT_00e35a98 = DAT_00e35a98 + -1000;
            DAT_0050c1f8 = DAT_0050c1f8 + -1;
            DAT_00e35aa0 = CONCAT31(DAT_00e35aa0._1_3_,(char)DAT_00e35aa0 + '\x01');
            FUN_0044e560();
            if (DAT_0050c1f8 < 1) {
              DAT_0050c52c = 0;
              DAT_0050c468 = 0xffff;
              if (DAT_0050c47c == 2) {
                DAT_004bfedc = 8;
                DAT_0050c468 = 0xffff;
                DAT_0050c47c = 0;
                DAT_0050c52c = 0;
                DAT_0050c944 = 0xffffffff;
                return;
              }
              *(undefined *)(param_1 + 0x5f) = 1;
              FUN_00454d40(param_1,3);
              return;
            }
            FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
          }
        }
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        if (DAT_0050c52c == 0) {
          if (DAT_0050c470 == 0) {
            DAT_0050c474 = 1;
            if (DAT_0050c47c == 1) {
              DAT_004bfedc = 8;
              DAT_0050c474 = 1;
              DAT_0050c944 = 0xffffffff;
              return;
            }
            FUN_00454d40(param_1,3);
          }
          else {
            FUN_00468fe0(0x1c,0x1a);
            DAT_0050c474 = 1;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_00e99400 = 0;
            DAT_0050c468 = -1;
          }
        }
        else {
          DAT_00e99400 = 0;
          DAT_0050c468 = -1;
          if (DAT_0050c47c != 2) {
LAB_00437e79:
            DAT_0050c52c = 0;
            FUN_00454d40(param_1,3);
            return;
          }
          DAT_0050c47c = 0;
          DAT_004bfedc = 8;
          DAT_0050c944 = 0xffffffff;
        }
      }
    }
    if ((*(int *)(param_1 + 0x10) == 0) && (FUN_00469c30(0,0x3f800000,0), DAT_0050c470 == 0)) {
      if (((*local_120 & 0x20000) != 0) && (DAT_00e295d0 < DAT_00e295cc + -1)) {
        _DAT_0050c938 = _DAT_00e22a50 * _DAT_004ac854 + _DAT_0050c938;
        if (_DAT_004ac76c < _DAT_0050c938) {
          _DAT_0050c938 = 1.5;
        }
        _DAT_0050c93c = _DAT_0050c93c - _DAT_00e22a50 * _DAT_004ac858;
        if (_DAT_0050c93c < _DAT_004ac85c) {
          _DAT_0050c93c = -1.0;
        }
      }
      if (((*local_120 & 0x10000) != 0) && (0 < DAT_00e295d0)) {
        _DAT_0050c938 = _DAT_00e22a50 * _DAT_004ac854 + _DAT_0050c938;
        if (_DAT_004ac76c < _DAT_0050c938) {
          _DAT_0050c938 = 1.5;
        }
        _DAT_0050c93c = _DAT_00e22a50 * _DAT_004ac858 + _DAT_0050c93c;
        if (_DAT_004ac764 < _DAT_0050c93c) {
          _DAT_0050c93c = 1.0;
        }
      }
    }
    local_120 = local_120 + 1;
    local_124 = local_124 + 1;
    if (*(char *)(param_1 + 0x70) <= local_124) {
      return;
    }
  } while( true );
}

