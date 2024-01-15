#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427b20(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  
  bVar3 = false;
  if ((param_1 == 4) && (param_2 < 3)) {
    bVar3 = true;
  }
  if ((bVar3) &&
     (_DAT_004b8798 = _DAT_004b8798 - (float)_DAT_00e22a40, _DAT_004b8798 <= _DAT_004ac47c)) {
    iVar5 = FUN_004816b0();
    _DAT_004b8798 = (float)iVar5 * _DAT_004ac4a8 * _DAT_004ac4c4 - _DAT_004ac4c8;
    FUN_00426c80(0x24,6,0x3e800000,0x3f800000,0);
  }
  if (param_2 == 3) {
    if (param_1 == 1) {
      pfVar6 = (float *)&DAT_004b8928;
    }
    else {
      pfVar6 = param_3;
      if (param_1 == 4) {
        pfVar6 = (float *)&DAT_004b8cc8;
      }
    }
  }
  else {
    pfVar6 = (float *)(&PTR_DAT_004b8fa8)[param_1 * 3 + param_2];
  }
  if ((pfVar6 != (float *)0x0) && (bVar3 = false, _DAT_004ac47c <= *pfVar6)) {
    do {
      if (bVar3) {
        return;
      }
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      pfVar4 = param_3;
      if ((fVar2 < fVar1) && (fVar2 = fVar2 - _DAT_004ac470, (float)param_3 < fVar1)) {
        pfVar4 = (float *)((float)param_3 - _DAT_004ac470);
      }
      if (((fVar1 < fVar2) &&
          (fVar1 = ((float)pfVar4 - fVar1) / (fVar2 - fVar1), _DAT_004ac47c < fVar1)) &&
         (fVar1 < _DAT_004ac478)) {
        bVar3 = true;
        if ((*(byte *)((int)pfVar6 + 10) & 1) == 0) {
          if (fVar1 < _DAT_004ac4d4) {
LAB_00427d07:
            fVar2 = fVar1 * _DAT_004ac4d8;
          }
          else {
            fVar2 = _DAT_004ac478;
            if (_DAT_004ac4dc < fVar1) {
              fVar1 = _DAT_004ac478 - fVar1;
              goto LAB_00427d07;
            }
          }
          if (*(short *)(pfVar6 + 2) == 5) {
            fVar2 = fVar2 * _DAT_004ac4e0;
          }
          if (_DAT_004ac47c < fVar2) {
            FUN_00426c80((int)*(short *)(pfVar6 + 2),6,0x3e800000,fVar2,1);
          }
        }
        else {
          _DAT_004b879c = _DAT_004b879c - (float)_DAT_00e22a40;
          if (_DAT_004b879c <= _DAT_004ac47c) {
            iVar5 = FUN_004816b0();
            _DAT_004b879c = (float)iVar5 * _DAT_004ac4a8 * _DAT_004ac4cc - _DAT_004ac4d0;
            FUN_00426c80((int)*(short *)(pfVar6 + 2),6,0x3e800000,0x3f800000,0);
          }
        }
      }
      pfVar4 = pfVar6 + 3;
      pfVar6 = pfVar6 + 3;
    } while (_DAT_004ac47c <= *pfVar4);
  }
  return;
}

