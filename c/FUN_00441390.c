#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441390(float param_1,float *param_2,float *param_3,float *param_4)

{
  if (param_1 <= DAT_00e98258 - _DAT_004aca64) {
    DAT_00e98258 = param_1;
    _DAT_00e98e60 = *param_3;
    DAT_00e98e64 = param_3[1];
    DAT_00e98e68 = param_3[2];
    _DAT_00e98290 = *param_4;
    DAT_00e98294 = param_4[1];
    DAT_00e98298 = param_4[2];
    DAT_00e98254 = DAT_00e98284;
    DAT_00e98250 = 1;
  }
  else if ((param_2[2] - param_3[2]) * DAT_00e98298 +
           (param_2[1] - param_3[1]) * DAT_00e98294 + (*param_2 - *param_3) * _DAT_00e98290 <
           *param_4 * (*param_2 - *param_3) +
           (param_2[1] - param_3[1]) * param_4[1] + (param_2[2] - param_3[2]) * param_4[2]) {
    DAT_00e98258 = param_1;
    _DAT_00e98e60 = *param_3;
    DAT_00e98e64 = param_3[1];
    DAT_00e98e68 = param_3[2];
    _DAT_00e98290 = *param_4;
    DAT_00e98294 = param_4[1];
    DAT_00e98254 = DAT_00e98284;
    DAT_00e98298 = param_4[2];
    DAT_00e98250 = 1;
    return;
  }
  return;
}

