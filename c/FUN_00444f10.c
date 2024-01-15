#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00444f10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    DAT_00e98258 = -1.0;
  }
  else {
    DAT_00e98258 = (float)param_2[6] - _DAT_004aca84;
    DAT_00e98e58 = param_2[6];
    _DAT_00e98e4c = (float)param_2[3];
    _DAT_00e98e50 = (float)param_2[4];
    _DAT_00e98e54 = (float)param_2[5];
    DAT_00e98e40 = *param_2;
    DAT_00e98e44 = param_2[1];
    DAT_00e98e48 = param_2[2];
    DAT_00e98e1c = 1;
    DAT_00e98e20 = &LAB_00442c30;
    DAT_00e985ac = &LAB_00442720;
    FUN_0042fa80(&local_c,&DAT_00e98e40,DAT_00e98e58,&DAT_00e98e4c);
    if (_DAT_004aca50 <= _DAT_00e98e4c) {
      _DAT_00e98270 = DAT_00e98e40;
      _DAT_00e98260 = local_c;
    }
    else {
      _DAT_00e98260 = DAT_00e98e40;
      _DAT_00e98270 = local_c;
    }
    if (_DAT_004aca50 <= _DAT_00e98e50) {
      _DAT_00e98274 = DAT_00e98e44;
      _DAT_00e98264 = local_8;
    }
    else {
      _DAT_00e98264 = DAT_00e98e44;
      _DAT_00e98274 = local_8;
    }
    if (_DAT_004aca50 <= _DAT_00e98e54) {
      _DAT_00e98278 = DAT_00e98e48;
      _DAT_00e98268 = local_4;
    }
    else {
      _DAT_00e98268 = DAT_00e98e48;
      _DAT_00e98278 = local_4;
    }
    if (DAT_0050c5c8 == 0) {
      uVar1 = FUN_00431770(param_1,1);
      iVar2 = FUN_00431880(uVar1);
      if ((iVar2 == 1) || (DAT_0050c5cc = 1, iVar2 == 3)) {
        DAT_0050c5cc = 0;
      }
      if ((iVar2 == 2) || (DAT_004c1774 = 1, iVar2 == 3)) {
        DAT_004c1774 = 0;
      }
    }
    else {
      DAT_0050c5cc = 1;
      DAT_004c1774 = 1;
    }
    FUN_004439f0(param_1);
    if (DAT_00e98258 <= (float)param_2[6]) {
      *param_3 = _DAT_00e98e60;
      param_3[1] = DAT_00e98e64;
      param_3[2] = DAT_00e98e68;
      *param_4 = _DAT_00e98290;
      param_4[1] = DAT_00e98294;
      param_4[2] = DAT_00e98298;
    }
    else {
      DAT_00e98258 = -1.0;
    }
  }
  if (DAT_00e98254 != 0) {
    DAT_0050c5d0 = DAT_00e98254;
  }
  return (float10)DAT_00e98258;
}

