#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00444d10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 == 0) {
    DAT_00e98258 = -1.0;
  }
  else {
    DAT_00e98258 = (float)param_2[6] - _DAT_004aca84;
    DAT_00e98254 = 0;
    DAT_00e98e58 = param_2[6];
    _DAT_00e98e4c = param_2[3];
    _DAT_00e98e50 = param_2[4];
    _DAT_00e98e54 = param_2[5];
    DAT_00e98e40 = *param_2;
    DAT_00e98e44 = param_2[1];
    DAT_00e98e48 = param_2[2];
    DAT_00e98e1c = 1;
    DAT_00e98e20 = &LAB_00442c30;
    DAT_00e985ac = &LAB_00442720;
    DAT_00e98e70 = 0;
    DAT_00e98250 = 0;
    FUN_00445150();
    FUN_00444bf0(param_1,param_2,0);
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

