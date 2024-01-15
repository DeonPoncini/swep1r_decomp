#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444200(float *param_1,float param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  
  _DAT_00e98e6c = param_2 * param_2;
  _DAT_00e985b0 = param_2;
  _DAT_00e98e30 = *param_1;
  _DAT_00e98e34 = param_1[1];
  _DAT_00e98e38 = param_1[2];
  _DAT_00e985a0 = *param_3;
  _DAT_00e985a4 = param_3[1];
  _DAT_00e985a8 = param_3[2];
  DAT_00e98258 = _DAT_00e98e6c * _DAT_004aca7c;
  _DAT_00e98e10 = *param_3;
  _DAT_00e98e14 = param_3[1];
  _DAT_00e98e18 = param_3[2];
  DAT_00e98e1c = 3;
  fVar1 = *param_1 * *param_3 + param_3[2] * param_1[2] + param_3[1] * param_1[1];
  DAT_00e98254 = 0;
  DAT_00e98e70 = 0;
  DAT_00e98250 = 0;
  DAT_00e98e20 = &LAB_004437c0;
  DAT_00e9826c = fVar1 + param_4;
  DAT_00e98280 = fVar1 + param_5;
  DAT_00e985ac = &LAB_00443560;
  DAT_00e9827c = DAT_00e9826c;
  DAT_00e98e00 = DAT_00e98280;
  FUN_00445150();
  return;
}

