#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481620(float *param_1,float *param_2)

{
  float *pfVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = param_2;
  FUN_0042f380(param_2[3] * _DAT_004ae004,&param_2,&local_10);
  local_c = *pfVar1;
  local_8 = pfVar1[1];
  local_4 = pfVar1[2];
  FUN_0042f9b0(&local_c);
  param_1[3] = local_10;
  *param_1 = local_c * (float)param_2;
  param_1[1] = local_8 * (float)param_2;
  param_1[2] = local_4 * (float)param_2;
  return;
}

