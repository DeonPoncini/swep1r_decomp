#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d990(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_18;
  float local_14;
  float local_10;
  
  sVar1 = DAT_0050c0a8;
  local_14 = (float)DAT_00ec86c4 * (float)_DAT_004ac628;
  local_18 = (float)DAT_00ec85e8 * (float)_DAT_004ac630;
  if (local_14 < (float)_DAT_004ac638) {
    local_14 = 1.0;
  }
  if (local_18 < (float)_DAT_004ac638) {
    local_18 = 1.0;
  }
  if (DAT_0050c0a8 < DAT_0050c0a0) {
    DAT_0050c0a0 = __ftol();
    DAT_0050c09c = __ftol();
    DAT_0050c0a8 = __ftol();
  }
  else {
    if (local_14 * (float)(int)(short)(param_1 - param_3) < (float)(int)DAT_0050c0a0) {
      DAT_0050c0a0 = __ftol();
    }
    if (local_18 * (float)(int)(short)(param_2 - param_4) < (float)(int)DAT_0050c09c) {
      DAT_0050c09c = __ftol();
    }
    if ((float)(int)sVar1 < local_14 * (float)(int)(short)(param_5 + (param_1 - param_3))) {
      DAT_0050c0a8 = __ftol();
    }
    if (local_18 * (float)(int)(short)(param_6 + (param_2 - param_4)) <= (float)(int)DAT_0050c0a4)
    goto LAB_0042dbb4;
  }
  DAT_0050c0a4 = __ftol();
LAB_0042dbb4:
  iVar6 = (int)param_6;
  local_10 = (float)(int)param_7 * _DAT_004ac644;
  _param_5 = (float)((int)param_5 + (int)param_7) * _DAT_004ac644;
  _param_6 = (float)(int)param_8 * _DAT_004ac648;
  _param_8 = (float)(iVar6 + param_8) * _DAT_004ac648;
  if (DAT_0050c0ac == '\0') {
    local_14 = (float)__ftol();
    _param_3 = __ftol();
    _param_1 = __ftol();
    iVar6 = __ftol();
  }
  else {
    local_14 = (float)__ftol();
    _param_3 = __ftol();
    _param_1 = __ftol();
    iVar6 = __ftol();
  }
  if (DAT_0050c0b0 != '\0') {
    iVar5 = (int)local_14._0_2_;
    if (DAT_00e99758 < iVar5) {
      return;
    }
    iVar4 = (int)param_3;
    if (DAT_00e9975c < iVar4) {
      return;
    }
    iVar7 = (int)param_1;
    if (iVar7 < DAT_00e99750) {
      return;
    }
    iVar8 = (int)(short)iVar6;
    if (iVar8 < DAT_00e99754) {
      return;
    }
    if (iVar5 < DAT_00e99750) {
      local_14 = (float)((int)local_14 + (DAT_00e99750 - iVar5));
      local_10 = (float)(DAT_00e99750 - iVar5) + local_10;
    }
    if (iVar4 < DAT_00e99754) {
      _param_3 = _param_3 + (DAT_00e99754 - iVar4);
      _param_6 = (float)(DAT_00e99754 - iVar4) + _param_6;
    }
    if (DAT_00e99758 < iVar7) {
      _param_1 = _param_1 - (iVar7 - DAT_00e99758);
      _param_5 = _param_5 - (float)(iVar7 - DAT_00e99758);
    }
    if (DAT_00e9975c < iVar8) {
      iVar6 = iVar6 - (iVar8 - DAT_00e9975c);
      _param_8 = _param_8 - (float)(iVar8 - DAT_00e9975c);
    }
  }
  fVar3 = _param_6;
  fVar2 = _param_5;
  if (DAT_0050c0c8 == 0xbf) {
    _param_5 = local_10;
    local_10 = fVar2;
    _param_6 = _param_8;
    _param_8 = fVar3;
  }
  FUN_004329c0(local_14,_param_3,_param_1,iVar6,local_10,_param_6,_param_5,_param_8);
  return;
}

