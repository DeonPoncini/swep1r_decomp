#include "prototype.h"


void FUN_00430f10(float *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0042f380(param_2,&local_8,&local_4);
  FUN_0042f380(param_3,&param_2,&local_14);
  FUN_0042f380(param_4,&local_10,&local_c);
  *param_1 = local_c * local_4 - local_10 * local_8 * param_2;
  param_1[1] = local_10 * local_4 * param_2 + local_c * local_8;
  param_1[2] = -(local_10 * local_14);
  param_1[3] = -(local_14 * local_8);
  param_1[4] = local_14 * local_4;
  param_1[5] = param_2;
  param_1[6] = local_c * local_8 * param_2 + local_10 * local_4;
  param_1[7] = local_10 * local_8 - local_c * local_4 * param_2;
  param_1[8] = local_c * local_14;
  return;
}

